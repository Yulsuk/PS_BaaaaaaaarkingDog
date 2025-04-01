#include <iostream>
#include <queue>

#define X first
#define Y second

using namespace std;

string board[102];
int dist[102][102];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
    int n,m;
    cin >> n >> m;

    //문자열배열을 판처럼 이용가능함.
    for(int i = 0; i < n; i++){
        cin >> board[i];
    }

    //-1 로 초기화 하는 이유 : vis 배열 없이 방문 여부 확인가능 하기 때문...
    for(int i = 0; i < n; i++){
        fill(dist[i], dist[i]+m, -1);
    }

    queue<pair<int,int>> Q;
    dist[0][0] = 0;
    Q.push({0,0});

    while(!Q.empty()){
        pair<int,int> cur = Q.front();
        Q.pop();
        for(int dir = 0; dir < 4; dir++){
            int nx = cur.X + dx[dir];
            int ny = cur.Y + dy[dir];
            if(nx < 0 || nx >= n || ny < 0 || ny >= m){
                continue;
            }
            //현재 방문하는 곳이 이미 거리를 구한 곳이나, 갈 수 없는 길일 때 컨티뉴
            if(dist[nx][ny] >= 0 || board[nx][ny] != '1'){
                continue;
            }
            //현재 탐색하고있는 곳의 상하좌우에 1 을 더한 값을 넣어줌.
            dist[nx][ny] = dist[cur.X][cur.Y] + 1;
            Q.push({nx,ny});
        }
    }
    cout << dist[n-1][m-1] + 1;
}