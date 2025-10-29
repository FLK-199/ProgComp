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

    string str, ans = ""; cin >> str;
    srt(str);
    stack<char> pilha;

    f0r(str.size()){
        if(ans[ans.size()-1] != str[i])
            ans += str[i];  
        else    
            pilha.push(str[i]);        
    }

    cout << ans << endl;

    

    return 0;
}