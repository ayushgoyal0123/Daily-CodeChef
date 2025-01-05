#include <stdio.h>

int main() {
	// your code goes here
	int t,x,y,a,b;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d%d",&x,&y,&a,&b);
	    if( (x==a || x==b ) && ( y==a || y==b ))
	    printf("0\n");
	    
	    else if( (x==a || x==b ) || ( y==a || y==b ))
	    printf("1\n");
	    
	    else
	    printf("2\n");
	}
return 0;
}

