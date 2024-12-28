#include <stdio.h>
#include<math.h>

int main() {
	// your code goes here
	int t,x,n;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&x,&n);
	    int plane; 
	    plane = ceil(n/100.0);
	    if(x>plane)
	    printf("0\n");
	    
	    else
	    printf("%d\n",plane-x);
	}
return 0;
}

