#include<iostream>
using namespace std;
 
int main(){
    int T,t=1,n,ans,i,j,tmp;scanf("%d",&T);
    while(t<=T){
        scanf("%d",&n);int count=0,ind[7];
        for(i=1;i<=7;i++){scanf("%d",&tmp);if(tmp){ind[count]=i;count++;}}
        tmp=ind[0]-1;for(i=0;i<count;i++)ind[i]-=tmp;
        int d=n%count;d?ans=n/count*7+ind[d-1]:ans=(n/count-1)*7+ind[count-1];
        for(i=1;i<count;i++){
            tmp=ind[1]-1;for(j=0;j<count-1;j++)ind[j]=ind[j+1]-tmp;
            ind[count-1]=8-tmp;
            d=n%count;d?tmp=n/count*7+ind[d-1]:tmp=(n/count-1)*7+ind[count-1];
            ans=min(ans,tmp);
        }
        printf("#%d %d\n",t++,ans);
    }
    return 0;
}
