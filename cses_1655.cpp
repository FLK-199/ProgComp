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
    int n; cin >> n;
    vi vec(n); f0r(n) cin >> vec[i];
    srt(vec);

    int ans = 9 ^ 5;
    //int r = n, l = 0, ans = 0;
    // while(l < r){
    //     int sum = vec[r] ^ vec[l];

    //     if(sum > ans){
    //         ans = sum;
    //         l++;
    //     }
    //     else if(sum < ans)
    //         r--;
    // }

    cout << ans << endl;

    return 0;
}