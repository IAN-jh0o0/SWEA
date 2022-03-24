#include<iostream>
using namespace std;

int main(void)
{
	int T,t=1;
	scanf("%d",&T);
	while(t<=T){
        int sum=0,num;
        for(int i=0;i<10;i++){
			scanf("%d",&num);
	       	if(num%2==1)sum+=num;
        }
		printf("#%d %d\n", t++, sum);
	}
	return 0;
}
