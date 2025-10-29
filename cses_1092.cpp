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
    int n; cin >> n;

    vi v1, v2;
    v1.push_back(n);

    int cnt = 3, s1 = n, s2 = 0;

    for(int i = n-1; i > 0; i--){
        if(cnt == 1 || cnt == 2){
            v1.push_back(i);
            s1 += i;
        }
        else{
            v2.push_back(i);
            s2 += i;
        }    

        cnt++;
        if(cnt > 4)
            cnt = 1;
    }

    if(s1 == s2){
        cout << "YES" << endl;

        cout << v1.size() << endl;
        for(auto &i: v1)
            cout << i << " ";
        cout << endl;

        cout << v2.size() << endl;
        for(auto &i: v2)
            cout << i << " ";
        cout << endl;
    }
    else{
        cout << "NO" << endl;
    }

    return 0;
}