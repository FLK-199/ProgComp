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

    int a, b, t; cin >> t;

    while(t--){
        cin >> a >> b;

        if((min(a,b)*2 >= max(a,b)) && ((a+b)%3 == 0))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}