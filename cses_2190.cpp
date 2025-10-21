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
        pair<ll,ll> p1, p2, p3, p4;
        cin >> p1.first >> p1.second
            >> p2.first >> p2.second
            >> p3.first >> p3.second
            >> p4.first >> p4.second;

        pair<ll,ll> r1 = {p2.first - p1.first, p2.second - p1.second}, 
                    r2 = {p4.first - p3.first, p4.second - p3.second},
                    pt1 = {p1.first - p3.first, p1.second - p3.second},
                    pt2 = {p2.first - p3.first, p2.second - p3.second},
                    pt3 = {p3.first - p1.first, p3.second - p1.second},
                    pt4 = {p4.first - p1.first, p4.second - p1.second};

        ll ans1 = r2.first*pt1.second - r2.second*pt1.first,
            ans2 = r2.first*pt2.second - r2.second*pt2.first, 
            ans3 = r1.first*pt3.second - r1.second*pt3.first,
            ans4 = r1.first*pt4.second - r1.second*pt4.first;

        bool f1 = false, f2 = false;

        if((ans1 >= 0 && ans2 <= 0) || (ans1 <= 0 && ans2 >= 0))
            f1 = true;
        if((ans3 >= 0 && ans4 <= 0) || (ans3 <= 0 && ans4 >= 0))
            f2 = true;

        //cerr << ans1 << ", " << ans2 << ", " << ans3 << ", " << ans4 << ", " << endl;

        if((p1.first == p3.first && p1.second == p3.second) || 
            (p1.first == p4.first && p1.second == p4.second) || 
            (p2.first == p3.first && p2.second == p3.second) || 
            (p2.first == p4.first && p2.second == p4.second)){
                f1 = true; f2 = true;
        }

        if(f1 && f2)
            cout << "YES" << endl;
        else 
            cout << "NO" << endl;
    }

    return 0;
}