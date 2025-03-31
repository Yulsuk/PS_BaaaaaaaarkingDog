#include <iostream>
#include <queue>

using namespace std;

#define X first
#define Y second

int board[102][102];
bool vis[102][102];
int n,m;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    string s;
    cin >> s;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            board[i][j] = s[i][j];
        }
    }
    cout << "??";

    vis[0][0] = 1;
    int dist = 1;
    queue<pair<int,int>> Q;
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
            if(vis[nx][ny] == 1 || board[nx][ny] == 0){
                continue;
            }
            vis[nx][ny] = 1;
            Q.push({nx,ny});
        }
        dist++;
    }
    cout << dist;
}