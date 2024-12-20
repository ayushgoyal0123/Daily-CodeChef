#include <stdio.h>

int main() {
	// your code goes here
    int t,x,y,z;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&x,&y,&z);
        if(x<=3)
        printf("%d\n",x*y);
        
        else{
            int i,brk=0;
            for(i=4;i<=x;i+=3){
                brk+=z;
            }
            printf("%d\n",x*y+brk);
        }
    }
return 0;
}

