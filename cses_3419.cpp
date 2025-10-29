#include <bits/stdc++.h>

using namespace std;

#define vi vector<int>
#define matriz vector<vi>
#define vs vector<set<int>>

typedef long long ll;

int main() {
    int n; cin >> n;
    
    matriz mat(n, vi(n, 0));
    vs linha(n), coluna(n);

    for(int j = 0; j < n; j++){
        for(int i = 0; i < n; i++){
            int k = 0;
            while(1){
                if(!linha[i].count(k) && !coluna[j].count(k)){
                    linha[i].insert(k);
                    coluna[j].insert(k);
                    
                    mat[i][j] = k;
                    break;
                }
                k++;
            }
        }
    }

    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++)
            cout << mat[i][j] << " ";
        cout << endl;
    }

    return 0;
}