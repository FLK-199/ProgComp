#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define srt(x) sort(all(x))
#define f0r(x) for(int i = 0; i < x; i++)
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>

typedef long long ll;
ll cont = (pow(10, 4) + 1);

int main() {
    vll crivo(cont, 0);
    
    crivo[0]++;
    crivo[1]++;

    f0r(cont){
        if(crivo[i] == 0){
            ll num = i;

            for(int j = 1;; j++){
                int y = num * j;

                if(y > cont)
                    break;

                crivo[y]++;
            }
        }   
        
    }

    int n; cin >> n;

    while(n--){
        int x; cin >> x;

        for(int i = x+1; i < cont; i++)
            if(crivo[i] == 0){
                cout << i << endl;
                break;
            }

    }

    return 0;
}