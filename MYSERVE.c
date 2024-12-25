#include <stdio.h>

int main() {
	// your code goes here
    int t,x,y;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d%d",&x,&y);
        if(x+y==0||x+y==1||x+y==4||x+y==5||x+y==8||x+y==9||x+y==12||x+y==13||x+y==16||x+y==17||x+y==20)
            printf("Alice\n");
            
        else
            printf("Bob\n");
    }
return 0;
}

