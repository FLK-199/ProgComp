#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define srt(x) sort(all(x))
#define f1r(i, x) for(int i = 1; i < x; i++)
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>

typedef long long ll;

int main() {
    int n, m; cin >> n >> m;
    vector<vi> cidade(n+1, vi(n+1, 0));

    int aux = m;
    while(aux--){
        int ini, fim; cin >> ini >> fim;
        cidade[ini][fim]++; cidade[fim][ini]++;
    }

    for(int i = 1, j = 1; i < n; j++)
        if(i != j){
            if(cidade[i][j] == 0){
                cout << i << " " << j << endl; 
                i = j;
            }   
            else    
                i++;   
        }
    
    return 0;
}