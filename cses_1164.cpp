#include<bits/stdc++.h>

typedef long long ll;
#define pii pair<int,int>
#define tiii tuple<int,int,int>

using namespace std;

int main(){
    int n; cin >> n;

    vector<tiii> pessoas;
    vector<int> ans(n, 0);

    for(int i = 0; i < n; i++){
        int entrada, saida; cin >> entrada >> saida;

        pessoas.push_back({entrada, saida, i});
    }

    sort(pessoas.begin(), pessoas.end());

    //(saida, quarto, indice)
    priority_queue<tiii, vector<tiii>, greater<tiii>> pq;

    int q = 0;

    for(auto i: pessoas){
        if(!pq.empty())
            if(get<0>(i) > get<0>(pq.top())){
                ans[get<2>(i)] = get<1>(pq.top());
                pq.pop();
                pq.push({get<1>(i), q, get<2>(i)});
            }
            else{
                ans[get<2>(i)] = get<1>(pq.top());
                q++;
                pq.push({get<1>(i), q, get<2>(i)});
            }
        else{
            q++;
            pq.push({get<1>(i), q, get<2>(i)});
        }
    }

    for(auto i: ans)
        cout << i << " ";
    cout << endl;

    return 0;
}