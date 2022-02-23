#include<cstdio>
#include<vector>
#include<cstring>
#include<cmath>
using namespace std;
char str[1001];

bool ok(int h,int w,vector<int> v){
    int j=0;
    for(int i=0;i<h;i++){
        if(j==v.size())return true;
        int temp = v[j];
        if(temp>w)return false;
        while(++j<v.size() && temp + v[j] +1 <= w)temp+=v[j]+1;
    }
    return j==v.size()?true:false;
}

int main(void) {
    int T, t=1; scanf("%d ",&T);
    while(t<=T){
        int sum=0,maxSize=0,ans=0,H,W,N; scanf("%d %d %d ",&H,&W,&N);
        vector<int> v;
        for(int i=0; i<N; i++){
            scanf("%s",str);
            sum+=(int)strlen(str);
            v.push_back((int)strlen(str));
        }
        maxSize=(int)sqrt((double)((H*W)/sum));
        if(maxSize>H||maxSize>W)maxSize=min(H,W);
        for(ans=maxSize;ans>0;ans--)
            if(ok(H/ans,W/ans,v))break;
        printf("#%d %d\n",t++,ans);
    }
}
