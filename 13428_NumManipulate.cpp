#include<iostream>
using namespace std;
 
string num;int Max,Min;
void BF(){
    int i,j;
    for(i=0;i<num.size()-1;i++){
        for(j=i+1;j<num.size();j++){
            if(i==0&&num[j]=='0')continue;
            swap(num[i],num[j]);
            Max=max(Max,stoi(num));Min=min(Min,stoi(num));
            swap(num[i],num[j]);
        }
    }
}
 
int main(void){
    int T,t=1;
    scanf("%d",&T);
    while(t<=T){
        cin>>num;Max=stoi(num);Min=stoi(num);
        BF();
        printf("#%d %d %d\n",t++,Min,Max);
    }
    return 0;
}
