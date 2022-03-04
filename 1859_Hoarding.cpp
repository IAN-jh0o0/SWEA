#include<iostream>
using namespace std;

int costs[1000000];
int main(void){
	int T,t=1,N,i;
	scanf("%d",&T);
	while(t<=T){
        scanf("%d",&N);
        long b=0;
        for(i=0;i<N;i++)scanf("%d",&costs[i]);
        int max=N-1;
        for(i=N-2;i>=0;i--) {
         	if(costs[i]<costs[max])b+=costs[max]-costs[i];
			else max=i;
        }
        printf("#%d %ld\n", t++, b);
	}
	return 0;
}
