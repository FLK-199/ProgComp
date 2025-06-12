#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define srt(x) sort(all(x))
#define f0r(x) for(int i = 0; i < x; i++)
#define f1r(x) for(int i = 1; i < x; i++)
#define vi vector<int>
#define vll vector<ll>

typedef long long ll;

vi subs, set1, set2;
int n, tot = 0, sum = 0;
bool flag  = false;

void search(int k, int sum){
    if(k == n+1 || sum == tot/2){
        
        if(sum == tot/2 && !flag){
            flag = true;
            f0r(subs.size()){
                set1.push_back(subs[i]);
            }
        }
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

    if(flag){
        cout << "YES" << endl;
        
        cout << set1.size() << endl;
        f0r(set1.size()) cout << set1[i] << " ";
        cout << endl;


        cout << set2.size() << endl;
        f0r(set2.size()) cout << set2[i] << " ";
        cout << endl;
    }
    else 
        cout << "NO" << endl;

    return 0;
}
