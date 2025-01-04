#include <stdio.h>

int main() {
	// your code goes here
	int t,a,b,x,y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d%d",&a,&b,&x,&y);
	    if(a*1.0/x < b*1.0/y)
	    printf("Chef\n");
	    
	    else if(b*1.0/y < a*1.0/x)
	    printf("Chefina\n");
	    
	    else
	    printf("Both\n");
	}
return 0;
}

