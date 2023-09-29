#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i = 2; i * i <= n - 1; i++){
        if(n % i == 0){
            cout<<"Bukan Prima"<<endl;
            return 0;
        }
    }
    cout<<"Prima"<<endl;
    return 0;
}
