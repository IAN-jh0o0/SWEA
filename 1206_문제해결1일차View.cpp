#include<iostream>
using namespace std;

int b[1000],m;
void find(int i){
    m=b[i-2];
    for(int j=1;j<5;j++){
        if(j==2)continue;
        m=max(m,b[i-2+j]);
    }
}

int main(void){
    int T=1,i,N;
	while(T<=10){
        int sum=0;
        scanf("%d",&N);
        for(i=0;i<N;i++)cin>>b[i];
        for(i=2;i<N-2;i++){
            find(i);
            if(b[i]>m)sum+=b[i]-m;
        }
        printf("#%d %d\n",T++,sum);
    }
	return 0;
}
