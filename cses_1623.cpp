#include <bits/stdc++.h>
using namespace std;
 
#define all(x) x.begin(), x.end()
#define srt(x) sort(all(x))
#define f0r(x) for(int i = 0; i < x; i++)
#define f1r(x) for(int i = 1; i < x; i++)
#define vi vector<int>
#define vll vector<ll>
 
typedef long long ll;
 
ll n, m = INT_MAX, total = 0;
vll subset, s;
 
void search(int k, ll sum) {
    if(k == n){
        ll g1 = sum, g2;
 
        /*
        f0r(subset.size())
            g1 += s[subset[i]];
        */
           
        g2 = total - g1;
 
        m = min(abs(g1-g2), m);
    }
    else{   
        subset.push_back(k);
        search(k+1, sum += s[k]);
 
        subset.pop_back();
        search(k+1, sum -= s[k]);
    }
}
 
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
 
    cin >> n;
    ll sum = 0;
    s.resize(n);
 
    f0r(n){
        cin >> s[i];
        total += s[i];
    } 
    
    search(0, sum);
 
    cout << m << endl;
 
    return 0;
}