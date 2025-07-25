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

    ll N; cin >> N;
    vll vec(N); f0r(N, i) cin >> vec[i];
    srt(vec);

    ll sum = 1;

    f0r(N, i){
        if(vec[i] > sum){
            break;
        }

        sum += vec[i];
    }

    cout << sum << endl;

    return 0;
}

