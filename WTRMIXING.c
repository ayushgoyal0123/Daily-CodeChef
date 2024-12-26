#include <stdio.h>

int main() {
	// your code goes here
	int t,a,b,x,y;
	scanf("%d",&t);
    while(t--){
        scanf("%d%d%d%d",&a,&b,&x,&y);
        if(b>a){
            if(x==0)
                printf("NO\n");
            
            else
            {
                int i,flag=0;
                for(i=1;i<=x;i++){
                    if(a+i==b){
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                printf("YES\n");
                
                else
                printf("NO\n");
                
            }
        }
        
        else if(a>b){
            if(y==0)
                printf("NO\n");
            
            else
            {
                int i,flag=0;
                for(i=1;i<=y;i++){
                    if(a-i==b){
                        flag=1;
                        break;
                    }
                }
                if(flag==1)
                printf("YES\n");
                
                else
                printf("NO\n");
                
            }
            
        }
        
        else
            printf("Yes\n");
    }
return 0;
}

