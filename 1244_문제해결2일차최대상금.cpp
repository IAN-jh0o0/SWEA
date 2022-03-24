#include<iostream>
using namespace std;

int swaps,ans,sz;
string s;
void bruteForce(int c){
    int i,j;
    if(c==swaps){
     	ans=max(ans,stoi(s));
        return;
    }
 	for(i=0;i<sz-1;i++){
     	for(j=i+1;j<sz;j++){
         	swap(s[i],s[j]);
            bruteForce(c+1);
            swap(s[i],s[j]);
        }
    }
}

int main(void){
	int T,t=1;
	scanf("%d",&T);
	while(t<=T){
        cin>>s>>swaps;
        ans=0;sz=s.size();
        if(swaps>sz)swaps=sz;
        bruteForce(0);
        printf("#%d %d\n",t++,ans);
	}
	return 0;
}
