#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define srt(x) sort(all(x))
#define f0r(x, i) for(int i = 0; i < x; i++)
#define f1r(x) for(int i = 1; i < x; i++)
#define vi vector<int>
#define vll vector<ll>

typedef long long ll;

queue<pair<int,int>> fila;
vi dx = {-2, -2, -1, -1, 2, 2, 1, 1}, 
    dy = {1, -1, 2, -2, 1, -1, 2, -2}; 

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int n; cin >> n;
    int mat[n][n];

    f0r(n, i){
        f0r(n, j){
            mat[i][j] = INT_MAX;
        }
    }

    mat[0][0] = 0;

    pair<int,int> p; 
    p.first = 0, p.second = 0;
    fila.push(p);

    while(!fila.empty()){
        p = fila.front();
        fila.pop();

        f0r(dx.size(), i){
            int nx = p.first + dx[i], ny = p.second + dy[i]; 
            
            if(nx >= 0 && nx <= n-1 && ny >= 0 && ny <= n-1 && mat[p.first][p.second] + 1 < mat[nx][ny]){
                mat[nx][ny] = mat[p.first][p.second] + 1;
                fila.push({nx,ny});
            }            
        }
    }

    f0r(n, i){
        f0r(n, j){
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}