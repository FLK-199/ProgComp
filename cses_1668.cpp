#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define srt(x) sort(all(x))
#define f1r(x) for(int i = 1; i < x; i++)
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>

typedef long long ll;
vector<vi> grafo;
vi visitado, t;

bool bfs(int n){
    if(!visitado[n]){
        queue<int> q; q.push(n);
        visitado[n] = 1;
        t[n] = 1;

        while(!q.empty()){
            int atual = q.front(); q.pop();

            for(auto v: grafo[atual]){
                if(!visitado[v]){
                    visitado[v] = 1;
                    q.push(v);

                    if(t[atual] == 1)
                        t[v] = 2;
                    else    
                        t[v] = 1;

                }
                
                if(t[atual] == t[v])
                    return false;
            }
        }
    }

    return true;
}

int main() {
    int n, m; cin >> n >> m;

    grafo.resize(n+1);
    t.resize(n+1);
    visitado.resize(n+1);

    while(m--){
        int a, b; cin >> a >> b;
        grafo[a].push_back(b); 
        grafo[b].push_back(a);
    }

    bool flag = true;

    f1r(n)
        if(!bfs(i))
            flag = false;

    if(flag){
        for(int i = 1; i < n+1; i++)
            cout << t[i] << " ";
        cout << endl;
    }
    else    
        cout << "IMPOSSIBLE" << endl;

    return 0;
}