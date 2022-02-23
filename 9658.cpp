#include<iostream>
using namespace std;

int main(void){
	int T,t=1,p;float fl;string s;
	scanf("%d",&T);
	while(t<=T){
        cin>>s;
        int a=s[0]-'0',b=s[1]-'0',c=s[2]-'0';
        if(c==5)c=6;
        if(a==9&&b==9&&c>5){p=s.size();fl=((float)(a*10+b))/100;}
        else{p=s.size()-1;fl=((float)(a*100+b*10+c))/100;}
        printf("#%d %.1f*10^%d\n",t++,fl,p);
	}
	return 0;
}
