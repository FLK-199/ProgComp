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

    ll cnt = 0;

    for(ll i = 1; i <= n; i++){
        ll num = i;

        while(num > 0){
            if(num%2 == 1)
                cnt++;

            num /= 2;
        } 
    }

    cout << cnt << endl;

    return 0;
}