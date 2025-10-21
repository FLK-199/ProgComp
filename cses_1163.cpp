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
    int n, x; cin >> x >> n;

    vi dist(n, 0), postes(x);

    dist[n-1] = n;

    f0r(x){
        int p; cin >> p;

        postes.push_back(p);
    }

    return 0;
}