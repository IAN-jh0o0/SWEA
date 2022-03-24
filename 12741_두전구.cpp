#include<cstdio>
using namespace std;

int main(){
    int T,t=1;
    scanf("%d",&T);
    while(t<=T){
    	int a,b,c,d;scanf("%d%d%d%d",&a,&b,&c,&d);
        int ans=0;
        if(a<c&&c<b&&b<d)ans=b-c;
        else if(a<c&&c<d&&d<b)ans=d-c;
        else if(c<a&&a<d&&d<b)ans=d-a;
        else if(c<a&&a<b&&b<d)ans=b-a;
        else if((a==c&&a<b&&b<d)||(b==d&&c<a&&a<b))ans=b-a;
        else if((a==c&&a<d&&d<b)||(b==d&&a<c&&c<b))ans=d-c;
        else if(a==c&&b==d)ans=b-a;
        printf("#%d %d\n",t++,ans);
	}
}
