#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    int n; cin >> n;
    vector<int> pares, impares;
 
    if(n == 2 || n == 3){
        cout << "NO SOLUTION" << endl;
        return 0;
    }
 
    for(int i = 1; i <= n; i++){
        if(i%2 == 0)
            pares.push_back(i);
        else impares.push_back(i);
    }
 
    for(int i = 0; i < pares.size(); i++)
        cout << pares[i] << " ";
 
    for(int i = 0; i < impares.size(); i++)
        cout << impares[i] << " ";
    cout << endl;
 
    return 0;
}