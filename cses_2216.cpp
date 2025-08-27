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
    vector<pii> vec(n); 
    
    f0r(n, i){
        cin >> vec[i].first;
        vec[i].second = i;
    }

    srt(vec);

    int ans = 1;

    f0r(n-1, i){
        if(vec[i+1].second < vec[i].second)
            ans++;
    }

    cout << ans << endl;

    return 0;
}