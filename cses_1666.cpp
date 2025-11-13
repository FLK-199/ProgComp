#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define srt(x) sort(all(x))
#define f1r(x) for(int i = 1; i <= x; i++)
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>

typedef long long ll;

vector<vi> grafo;
vi conexoes, visitados;

void bfs(int n){
    if(!visitados[n]){
        queue<int> q;
        q.push(n);
        visitados[n] = 1;
        conexoes.push_back(n);

        while(!q.empty()){
            int atual = q.front(); q.pop();

            for(auto v: grafo[atual]){
                if(!visitados[v]){
                visitados[v] = 1;
                q.push(v);
                }
            }
        }
    }
}   

int main() {
    int n, m; cin >> n >> m;

    grafo.resize(n+1);
    visitados.resize(n+1);

    while(m--){
        int a, b; cin >> a >> b;
        grafo[a].push_back(b);
        grafo[b].push_back(a);
    }
    
    f1r(n)
        bfs(i);

    cout << conexoes.size() - 1 << endl;
    for (int i = 0; i < conexoes.size() - 1; i++) {
      cout << conexoes[i] << " " << conexoes[i + 1] << endl;
    }
    cout << endl;
    return 0;
}