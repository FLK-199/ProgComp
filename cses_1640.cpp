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
    int n, x; cin >> n >> x;
    vi vec(n); f0r(n) cin >> vec[i];

    int r = n, l = 0;

    while(r >= l){
        int tam = vec[l] + vec[r];

        if(tam > x)
            r--;
        else if (tam < x) 
            l++;
        else{    
            break;
        }
    }
    
    if(r >= l)
        cout << l+1 << " " << r+1;
    else
        cout << "IMPOSSIBLE" << endl;

    return 0;
}