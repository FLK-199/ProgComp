#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define srt(x) sort(all(x))
#define f0r(x) for(int i = 0; i < x; i++)
#define f1r(x) for(int i = 1; i < x; i++)
#define vi vector<int>
#define vll vector<ll>

typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int t; cin >> t;

    while(t--){
        ll y, x, ans; cin >> y >> x;
        
        if(y > x){
            ans = (y-1)*(y-1);

            if(y%2!=0)
                ans += x;
            else    
                ans += 2*y-x;
        }
        else{
            ans = (x-1)*(x-1);

            if(x%2==0)
                ans += y;
            else    
                ans += 2*x-y;

        }

        cout << ans << endl;
    }

    return 0;
}