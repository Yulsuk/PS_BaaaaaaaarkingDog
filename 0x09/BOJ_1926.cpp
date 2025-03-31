#include <iostream>
#include <queue>

using namespace std;

#define X first
#define Y second

int board[502][502];
bool vis[502][502];
int n,m;

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    cin >> n >> m;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> board[i][j];
        }
    }

    int num_of_paint = 0, max_size = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(vis[i][j] == 1 || board[i][j] == 0){
                continue;
            }
            num_of_paint++;

            vis[i][j] = 1;
            queue<pair<int,int>> Q;
            Q.push({i,j});

            int size = 0;
            while(!Q.empty()){
                size++;
                
                pair<int,int> cur = Q.front();
                Q.pop();

                for(int dir = 0; dir < 4; dir++){
                    int nx = cur.X + dir[dx];
                    int ny = cur.Y + dir[dy];
                    if(nx < 0 || nx >= n || ny < 0 || ny >= m){
                        continue;
                    }
                    if(vis[nx][ny] == 1 || board[nx][ny] == 0){
                        continue;
                    }
                    vis[nx][ny] = 1;
                    Q.push({nx,ny});
                }
            }
            max_size = max(max_size, size);
        }
    }

    cout << num_of_paint << '\n' << max_size;
}