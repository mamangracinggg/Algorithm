#include<stdio.h>

#define ll long long

int main(){
	int T;
	scanf("%d", &T);
	for(int tc = 1; tc <= T; tc++){
		int N;
		ll M;
		scanf("%d %lld", &N, &M);
		int A[N+5];
		for(int i = 1; i <= N; i++){
			scanf("%d", &A[i]);
		}
		
		int maxLen = 0;
		ll sum = 0;
		int cursorStart = 1;
		int cursorEnd = 1;
		for(cursorEnd = 1; cursorEnd <= N; cursorEnd++){
			sum += A[cursorEnd];
			
			while(sum > M){
				sum -= A[cursorStart];
				cursorStart++;
			}
			
			int currLen = cursorEnd - cursorStart + 1;
			if(currLen > maxLen){
				maxLen = currLen;
			}
		}
		
		if(maxLen > 0){
			printf("Case #%d: %d\n", tc, maxLen);
		}else{
			//4 1 3 8   M = 0  maka maxlen = 0
			printf("Case #%d: -1\n", tc);
		}
		
	}
	return 0;
}
