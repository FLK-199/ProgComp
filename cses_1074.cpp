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
    ll n; cin >> n;
    vll vec(n); f0r(n) cin >> vec[i];    
    
    srt(vec);
    ll mediana = vec[n/2];

    ll ans = 0;
    f0r(n)
        ans += abs(vec[i] - mediana);

    cout << ans << endl;

    return 0;
}