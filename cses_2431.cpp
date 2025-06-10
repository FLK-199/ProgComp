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
    ll n, t; cin >> t;
    string q = "", tam;
    vll sub_pre(18);

    sub_pre[0] = 9;
    //cerr << sub_pre[0] << " ";

    f1r(18){
        sub_pre[i] = 8*(ll)pow(10, i);

        for(int j = 0; j < i; j++)
            sub_pre[i] += 9*(ll)pow(10, j);

        //cerr << sub_pre[i] << " ";
    }
    //cerr << endl;
    
    while(t--){
        cin >> n;

        int j = 0;

        ll aux = n;

        while(n >= 0){
            n -= sub_pre[j];
            if(n >= 0) aux = n;    
            j++;
        }
        
        // cerr << pow(10,j) << endl;
        // cerr << pow(10,j-1) << endl;

        ll min = 1, max = 1;

        f0r(j-1) min *= 10;
        f0r(j) max *= 10;

        for(ll i = min, j = 0; i <= min+aux; i++, j++){ // 
            q.append(to_string(i));
            cerr << q[j] << " ";
        }
        cerr << endl;

        cout << q[abs(aux-1)] << endl;
        q.erase();
    }

    return 0;
}