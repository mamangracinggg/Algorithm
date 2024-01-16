#include<stdio.h>
#define ll long long

ll sum(int N, int D){
    if(D == 0){
        return N;
    }else{
        int temp = 0;
        for(int i = 1; i <= N; i++){
             temp += i;
        }
        return sum(temp, D-1);
    }
}

int main(){
    int N, D;
    scanf("%d %d", &N, &D);
    printf("%lld", sum(N, D));
    return 0;
}
