#include <stdio.h>

int main() {
	// your code goes here
	int t,x;
	scanf("%d",&t);
	while(t--){
	    int count =0;
	    scanf("%d",&x);
	    if(x%5==0){
	    for(int i=5;i<=x;i=i+10)
	        count++;

	    printf("%d\n",count);
	    }
	    
	    else
	    printf("-1\n");
	}
	
return 0;
}

