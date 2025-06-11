#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define srt(x) sort(all(x))
#define f0r(x) for(int i = 0; i < x; i++)
#define f1r(x) for(int i = 1; i < x; i++)
#define vi vector<int>
#define vll vector<ll>

typedef long long ll;

int n, cont = 0;
string permutation;
vector<bool> chosen;
set<string> ans;
string str; 

void search(){
    if(permutation.size() == n){
        ans.insert(permutation);
    }
    else{
        f0r(n){
            if(chosen[i]) continue;
            chosen[i] = true;
            permutation.push_back(str[i]);
            search();
            chosen[i] = false;
            permutation.pop_back();
        }
    }
}

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    cin >> str;
    n = str.size();
    chosen.resize(n);

    search();

    cout << ans.size() << endl;

    for(auto p : ans) cout << p << endl;

    return 0;
}