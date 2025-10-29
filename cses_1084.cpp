#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define srt(x) sort(all(x))
#define f0r(x) for(int i = 0; i < x; i++)
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>

typedef long long ll;

int main() {
    ll n, m, k; cin >> n >> m >> k;

    vector<pair<ll, ll>> tam_quer(n); 
    f0r(n){
        ll aux; cin >> aux;
        tam_quer[i] = {aux-k, aux+k};
    }
    
    vi tam_tem(m); f0r(m) cin >> tam_tem[i];

    srt(tam_quer); srt(tam_tem);

    ll i1 = 0, i2 = 0, ans = 0;
    while(1){
        if(tam_tem[i2] >= tam_quer[i1].first && tam_tem[i2] <= tam_quer[i1].second){
            ans++;
            i2++;
            i1++;
        }
        else if(tam_tem[i2] <= tam_quer[i1].first){
            i2++;
        }
        else if(tam_tem[i2] >= tam_quer[i1].second){
            i1++;
        }
        
        if(i1 >= n || i2 >= m)
            break;
    }   

    cout << ans << endl;

    return 0;
}