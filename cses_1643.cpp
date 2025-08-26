#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define srt(x) sort(all(x))
#define f0r(x, i) for(int i = 0; i < x; i++)
#define f1r(x, i) for(int i = 1; i < x; i++)
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>

typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int n; cin >> n;
    vi vec(n); f0r(n, i) cin >> vec[i];
    //srt(vec);

    int r = 0, l = 0, sum = 0, ans = INT_MIN;
    for(l = 0;l<n;l++){
        while(r < n){
            sum += vec[r];
            r++;
            ans = max(ans, sum);
        }
        sum -= vec[l];
    }

    cout << ans << endl;

    return 0;
}