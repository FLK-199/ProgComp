#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define srt(x) sort(all(x))
#define f0r(i, x) for(int i = 0; i < x; i++)
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>

typedef long long ll;

void busca(int, int);

vector<vector<char>> mc;
int n, m, ans = 0;

int main() {
    cin >> n >> m;
    
    mc.resize(n, vector<char>(m));

    f0r(i, n){
        f0r(j, m){
            cin >> mc[i][j];
        }
    }

    f0r(i, n){
        f0r(j, m){
            if(mc[i][j] == '.'){
                busca(i, j);
            }
        }
    }

    cout << ans << endl;

    return 0;
}

void busca(int i, int j){
    int x[] = {0, 0, 1, -1},
        y[] = {1, -1, 0, 0};

    ans++;

    queue<pii> fila; fila.push({i, j});
    mc[i][j] = '#'; 

    while(!fila.empty()){
        pii p = fila.front(); fila.pop();

        f0r(k, 4){

            int dx = p.first + x[k], dy = p.second + y[k];

            if(dx >= 0 && dx < n && dy >= 0 && dy < m)
                if(mc[dx][dy] == '.'){
                    mc[dx][dy] = '#';    
                    fila.push({dx, dy});
                }
        }
    }
}