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
    map<char,int> pam;

    f0r(str.size())
        pam[str[i]]++; 

    int itn = 0;
    
    for(auto p : pam)
        if(p.second%2 != 0) itn++;
    
    if(itn > 1){
        cout << "NO SOLUTION" << endl;
        return 0;
    } 

    string ansp = "", ansi = "", anspr = "";

    for(auto p : pam){
        if(p.second%2 == 0)
            f0r(p.second/2) ansp += p.first;
    }

    for(auto p : pam){
        if(p.second%2 != 0)
            f0r(p.second) ansi += p.first;
    }

    anspr = ansp;

    reverse(all(anspr));

    cout << ansp << ansi << anspr << endl;

    return 0;
}