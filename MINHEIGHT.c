#include <stdio.h>

int main() {
	// your code goes here
	int t,x,h;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&x,&h);
	    printf(x>=h?"YES\n":"NO\n");
	}
return 0;
}

