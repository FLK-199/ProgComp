#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define srt(x) sort(all(x))
#define f0r(x) for(int i = 0; i < x; i++)
#define f1r(x) for(int i = 1; i < x; i++)
#define vi vector<int>
#define vll vector<ll>

typedef long long ll;

vi subs;
int n, tot = 0, sum = 0;
bool flag  = false;

void search(int k, int sum){
    if(k == n+1 || sum == tot/2){
        cout << "YES" << endl;
        
        

    }
    else{
        subs.push_back(k);
        search(k+1, sum += k);
        subs.pop_back();
        search(k+1, sum -= k);
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> n;

    f1r(n+1) tot += i;

    search(1, sum);

    if(flag)
        cout << "YES" << endl;
    else 
        cout << "NO" << endl;

    return 0;
}