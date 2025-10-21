#include <bits/stdc++.h>

using namespace std;

#define all(x) x.begin(), x.end()
#define srt(x) sort(all(x))
#define f0r(x) for(int i = 0; i < x; i++)
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int,int>
#define tiii tuple<int,int,int>

typedef long long ll;

int main() {
    int x, n; cin >> x >> n;

    set<int> s;

    s.insert(0);
    s.insert(x);

    tiii tup = {-2, -2, -2};

    while(n--){
        int trafico; cin >> trafico;
        s.insert(trafico);

        int td = abs(trafico - *s.upper_bound(trafico)),
            te = abs(*s.lower_bound(trafico) - trafico);
        
        int tam = max(td, te);

        if(!(get<0>(tup) == -2)){
            if(trafico > get<1>(tup))
                tam = max(tam, get<0>(tup));
            else    
                tam = max(tam, get<2>(tup));
        }
        
        tup = {te, trafico, td};

        cout << tam << endl;
    }

    return 0;
}