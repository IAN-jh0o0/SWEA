#include<iostream>
using namespace std;
 
int main(void){
    int T,t=1;
    string day;
    scanf("%d",&T);
    while(t<=T){
        cin>>day;
        if(day=="SAT")printf("#%d 1\n",t++);
        else if(day=="FRI")printf("#%d 2\n",t++);
        else if(day=="THU")printf("#%d 3\n",t++);
        else if(day=="WED")printf("#%d 4\n",t++);
        else if(day=="TUE")printf("#%d 5\n",t++);
        else if(day=="MON")printf("#%d 6\n",t++);
        else printf("#%d 7\n",t++);
    }
    return 0;
}
