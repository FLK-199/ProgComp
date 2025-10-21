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
    int t; cin >> t;

    while(t--){
        pair<ll,ll> p1, p2, p3;
        cin >> p1.first >> p1.second
            >> p2.first >> p2.second
            >> p3.first >> p3.second;

        pair<ll,ll> v = {p2.first-p1.first, p2.second-p1.second},
            u = {p3.first-p1.first, p3.second-p1.second};

        ll ans = v.first*u.second - v.second*u.first;

        if(ans < 0)
            cout << "RIGHT" << endl;
        else if(ans > 0)
            cout << "LEFT" << endl;
        else
            cout << "TOUCH" << endl;        
    }

    return 0;
}

