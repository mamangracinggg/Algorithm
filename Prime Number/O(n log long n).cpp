#include <bits/stdc++.h>
using namespace std;
// jika i itu prima maka kelipatannya yaitu 2i, 3i, 4i bukan prima
int main(){
    int n;
    cin >> n;
    bool notPrime[n] = {false};
    for(int i = 2; i <= n - 1; i++){
        if(notPrime[i] == false){
            for(int j = i; j <= n - 1 ; j+=i ){
                notPrime[j] = true;
            }
        }
    }
    
    if(notPrime[n] == false){
        cout<<"prima"<<endl;
    }else{
        cout<<"bukan prima"<<endl;
    }
    return 0;
}
