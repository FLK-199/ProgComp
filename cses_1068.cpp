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
    ll n; cin >> n;

    while(n != 1){
        cout << n << " ";

        if(n%2 == 0){
            n /= 2;
        }
        else{
            n *= 3; 
            n++;
        }
    }

    cout << n << endl;

    return 0;
}