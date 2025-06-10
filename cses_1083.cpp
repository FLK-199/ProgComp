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
    int n; cin >> n;
    vi vec(n);

    f0r(n) cin >> vec[i];
    srt(vec);

    int ans;

    for(int i = 1; i <= n; i++){
        if(vec[i] != i){
            ans = i;
            break;
        }
    }

    cout << ans << endl;

    return 0;
}