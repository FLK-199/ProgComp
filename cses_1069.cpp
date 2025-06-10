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
    string str; cin >> str;

    int cont = 1, ans = 1;
    f0r(str.size()){
        if(str[i] == str[i+1]){
            cont++;
            continue;
        }

        ans = max(ans,cont);
        cont = 1;
    }

    cout << ans << endl;

    return 0;
}