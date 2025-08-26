#include <bits/stdc++.h>
using namespace std;

#define all(x) x.begin(), x.end()
#define srt(x) sort(all(x))
#define f0r(x, i) for(int i = 0; i < x; i++)
#define f1r(x, i) for(int i = 1; i < x; i++)
#define vi vector<int>
#define vll vector<ll>
#define pii pair<int, int>

typedef long long ll;

int main() {
    ios::sync_with_stdio(0); cin.tie(0);

    int n, m; cin >> n >> m;
    char mat[n][m], ans[n][m];

    f0r(n, i)
        f0r(m, j){
            cin >> mat[i][j];    
            ans[i][j] = '0';
        }

    char let[] = {'A', 'B', 'C', 'D'};
    set<char> set;
    bool flag = false;
    int x[] = {1, 0, -1, 0}, y[] = {0, 1, 0, -1};

    f0r(n, i){
        f0r(m, j){
            set.insert(mat[i][j]);

            f0r(4, k){
                int dx = i + x[k], dy = j + y[k];
                
                if(dx >= 0 && dx < n && dy >= 0 && dy < m && ans[dx][dy] != '0'){

                    set.insert(ans[dx][dy]);
                }
            }

            if(set.size() >= 4){
                cout << "IMPOSSIBLE" << endl;
                flag = true;
                break;
            }

            f0r(4, k){
                if(!set.count(let[k])){
                    ans[i][j] = let[k];
                    break;
                }
            }

            set.clear();
        }

        if(flag){
            break;
        }
    }

    if(!flag){
        f0r(n, i){
            f0r(m, j)
                cout << ans[i][j];
            cout << endl;
        }
    }

    return 0;
}