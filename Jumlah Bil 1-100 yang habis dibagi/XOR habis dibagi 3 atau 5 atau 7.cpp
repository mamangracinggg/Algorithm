#include <iostream>

using namespace std;

int main()
{
    int hitung = 0;
    for(int i = 1; i <= 100; i++){
        if(i % 3 == 0 ^ i % 5 == 0 ^ i % 7 == 0){
            cout<<i<<endl;
            hitung++;
        }
    }
    cout<<hitung<<endl;

    return 0;
}
