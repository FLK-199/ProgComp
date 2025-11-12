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
vi ant, visitado;

void bfs(){
    queue<int> q;
    q.push(1);
    ant[1] = 1;
    visitado[1] = 1;

    while(!q.empty()){
        int atual = q.front(); q.pop();

        for(auto v: grafo[atual]){
            if(!visitado[v]){
                visitado[v] = 1;
                q.push(v);
                ant[v] = atual;
            }
        }
    }
}

int main() {
    int n, m; cin >> n >> m;

    grafo.resize(n+1);
    ant.resize(n+1);
    visitado.resize(n+1, 0);

    while(m--){
        int a, b; cin >> a >> b;
        grafo[a].push_back(b); grafo[b].push_back(a);
    }

    bfs();

    if(!visitado[n])
        cout << "IMPOSSIBLE" << endl;
    else{
        stack<int> p; p.push(n);
        int aux = ant[n];

        while(aux != ant[aux]){
            p.push(aux);
            aux = ant[aux];
        }
        p.push(1);
        
        cout << p.size() << endl;
    
        while (!p.empty()){
            cout << p.top() << " ";
            p.pop();
        }  
        cout << endl;
    }   

    return 0;
}