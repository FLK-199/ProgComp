#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define srt(x) sort(all(x))
#define f0r(i, x) for(int i = 0; i < x; i++)
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>

typedef long long ll;

int main() {
    int n, m; cin >> n >> m;
    vector<vector<int>> mat(n, vector<int>(m));

    pii entra, sai;

    f0r(i, n){
        f0r(j, m){
            char aux; cin >> aux;

            if(aux == '.'){
                mat[i][j] = 0;
            }
            else if(aux == '#'){
                mat[i][j] = -4;
            }
            else if(aux == 'A'){
                mat[i][j] = -2;
                entra = {i, j};
            }
            else if(aux == 'B'){
                mat[i][j] = -3;
                sai = {i, j};
            }
        }
    }

    int x[] = {1, -1, 0, 0}, 
        y[] = {0, 0, 1, -1}, tam = INT_MAX;

    queue<pii> fila;
    fila.push(entra);
    mat[entra.first][entra.second] = 0;

    while(!fila.empty()){
        pii aq = fila.front(); fila.pop();

        f0r(k, 4){
            int dx = aq.first + x[k], dy = aq.second + y[k];

            if(dx >= 0 && dy >= 0 && dx < n && dy < m){
                if(mat[dx][dy] == 0 || (mat[dx][dy] >= 0 && (mat[aq.first][aq.second] + 1) < mat[dx][dy])){
                    mat[dx][dy] = mat[aq.first][aq.second] + 1;
                    fila.push({dx, dy});
                }
                else if(mat[dx][dy] == -3)
                    tam = min(tam, (mat[aq.first][aq.second] + 1));
            }
        }   
    }

    if(tam == INT_MAX){
        cout << "NO" << endl;
        return 0;
    }    

    cout << "YES" << endl;
    cout << tam << endl;

    mat[entra.first][entra.second] = 0;
    mat[sai.first][sai.second] = tam;

    stack<char> pilha;

    fila.push(sai);

    while(!fila.empty()){
        pii aq = fila.front(); fila.pop();

        f0r(k, 4){
            int dx = aq.first + x[k], dy = aq.second + y[k];

            if(dx >= 0 && dy >= 0 && dx < n && dy < m){
                if((mat[aq.first][aq.second] - 1) == mat[dx][dy]){
                    fila.push({dx, dy});

                    if(k == 0)
                        pilha.push('U');
                    else if(k == 1)
                        pilha.push('D');
                    else if(k == 2)
                        pilha.push('L');
                    else if(k == 3)
                        pilha.push('R');
                    
                    break;
                }
            }
        }   
    }

    while(!pilha.empty()){
        cout << pilha.top();
        pilha.pop();
    }
    cout << endl;

    // f0r(i, n){
    //     f0r(j, m){
    //         printf("%3d", mat[i][j]);
    //     }
    //     cout << endl;
    // }

    return 0;
}