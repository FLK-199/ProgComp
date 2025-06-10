#include <bits/stdc++.h>
 
using namespace std;
 
int main(){
    long long n, num = 1, mod = 1e9+7; 

    cin >> n;

    while(n--) num = (num*2)%mod;
    
    cout << num << endl;   

    return 0;
}