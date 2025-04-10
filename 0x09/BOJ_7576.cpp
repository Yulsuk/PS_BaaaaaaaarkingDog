#include <iostream>
#include <queue>

#define X first
#define Y second

using namespace std;

int board[1002][1002];
int dist[1002][1002];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    //-1, 0, 1 => 없음, 덜익음, 익음
    queue<pair<int,int>> Q;

    int n,m;
    cin >> m >> n;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> board[i][j];
            //익은 토마토 있음 : 바로 탐색큐에 넣어줌
            if(board[i][j] == 1){
                Q.push({i,j});
            }
            //안익은 토마토 있음 : -1 넣어줌.
            if(board[i][j] == 0){
                dist[i][j] = -1;
            }
        }
    }

    while(!Q.empty()){
        auto cur = Q.front(); Q.pop();
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m){
                continue;
            }
            if(dist[nx][ny] >= 0){
                continue;
            }
            dist[nx][ny] = dist[cur.X][cur.Y]+1;
            Q.push({nx,ny});
        }
    }

    int answer = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(dist[i][j] == -1){
                cout << -1;
                return 0;
            }
            answer = max(answer, dist[i][j]);
        }
    }
    cout << answer; 

}