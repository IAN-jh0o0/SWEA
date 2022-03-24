#include<iostream>
using namespace std;
 
int main(void){
    int T,t=1,i;string s,ans;
    scanf("%d",&T);
    while(t<=T){
        cin>>s;
        int count=0;
        for(i=0;i<s.size();i++)if(s[i]=='x')count++;
        count>7?ans="NO":ans="YES";
        printf("#%d %s\n",t++,ans.c_str());   
    }
}
