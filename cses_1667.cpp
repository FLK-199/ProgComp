#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define srt(x) sort(all(x))
#define f0r(x) for(int i = 0; i < x; i++)
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>

typedef long long ll;
vector<vi> vec;
vi dist;
queue q;


int bfs(){

}

int main() {
    int n, m; cin >> n >> m;

    vec.resize(n+1);
    dist.resize(n+1, -1);

    while(m--){
        int a, b; cin >> a >> b;
        vec[a].push_back(b); vec[b].push_back(a);
    }

    cout << bfs() << endl;

    return 0;
}