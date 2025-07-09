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

    int n, x; cin >> n >> x;
    vi vec(n); f0r(n, i) cin >> vec[i]; srt(vec);
    
    int cont = 0;
    int l = 0, r = n-1;

    while(l <= r){
        if(vec[r] + vec[l] <= x){
            l++;
        }
        r--;
        cont++;
    }
    
    cout << cont << endl;

    return 0;
}