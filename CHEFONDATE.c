#include <stdio.h>

int main() {
	// your code goes here
	int t,x,y;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&x,&y);
	    printf(x>=y?"YES\n":"NO\n");
	}
return 0;
}
