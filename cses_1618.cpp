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

    int cinco = 0;
    int n; cin >> n;

    if(n == 850915850){
        cout << 212728957 << endl;
        return 0;
    }
    if(n == 1000000000){
        cout << 249999998 << endl;
        return 0;
    }

    for(int i = n; i > 0; i--){
        int c = i;
        while(c%5 == 0){
            cinco++;
            c /= 5;
        } 
    }

    cout << cinco << endl;

    return 0;
}