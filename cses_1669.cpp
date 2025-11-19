#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define srt(x) sort(all(x))
#define f0r(x) for(int i = 0; i < x; i++)
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>

typedef long long ll;
vector<vi> grafo;
vi anterior, visitado;
int inicio, fim;

bool dfs(int u, int p){
    visitado[u] = 1;
    anterior[u] = p;

    for(auto v: grafo[u]){
        if(v == p) continue;

        if(!visitado[v]){
            if(dfs(v, u))
                return true;
        }
        else{
            inicio = v;
            fim = u;
            return true;
        }
    }

    return false;
}

int main() {
    int n, m; cin >> n >> m;

    grafo.resize(n+1);
    visitado.resize(n+1);
    anterior.resize(n+1);

    while(m--){
        int a, b; cin >> a >> b;
        grafo[a].push_back(b); 
        grafo[b].push_back(a);
    }

    bool ans = false;
    for(int i = 1; i < n+1; i++){
        if(!visitado[i])
            ans = dfs(i, -1);

        if(ans)
            break;
    }

    if(ans){
        queue<int> q;
        q.push(inicio);

        int aux = fim;
        while(aux != inicio){
            q.push(aux);
            aux = anterior[aux];
        }
        q.push(inicio);

        cout << q.size() << endl;

        while(!q.empty()){
            cout << q.front() << " ";
            q.pop();
        }
        cout << endl;
    }
    else    
        cout << "IMPOSSIBLE" << endl;

    return 0;
}