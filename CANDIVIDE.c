#include <stdio.h>

int main() {
	// your code goes here
	int t,n;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    printf(n%3==0?"YES\n":"NO\n");
	}
return 0;
}

