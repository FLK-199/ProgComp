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
    ll x, n; cin >> x >> n;

    set<ll> s;

    s.insert(0);
    s.insert(x);

    int iterva = 1;

    pair<ll, ll> mint = {0, x};

    while(n--){
        ll trafico; cin >> trafico;

        s.insert(trafico);
        
        if(trafico == mint.first + 1 && iterva == 1){
            mint.first++;
            cout << mint.second - mint.first << " ";
        }
        else if(trafico > mint.first && trafico < mint.second){
            ll aux = 0, ans = 0;
            for(auto &i: s)
                if(!(i == 0)){
                    if(i-aux > ans){
                        ans = i-aux;
                        mint = {aux, i};
                    }

                    aux = i;
                    iterva++;
                }
            cout << ans << " ";
        }
        else    
            cout << mint.second - mint.first << " ";
    }

    cout << endl;

    return 0;
}