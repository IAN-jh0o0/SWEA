#include<iostream>
using namespace std;

int main(void){
	int T,t=1,p;float fl;string s;
	scanf("%d",&T);
	while(t<=T){
        cin>>s;
        p=s.size()-1;int a=s[0]-'0',b=s[1]-'0',c=s[2]-'0';
		if(c>=5)b++;
        if(b==10){b=0;a++;}
        if(a==10){a=1;p++;}
        printf("#%d %d.%d*10^%d\n",t++,a,b,p);
	}
	return 0;
}
