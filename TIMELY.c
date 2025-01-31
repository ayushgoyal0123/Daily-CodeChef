#include <stdio.h>

int main() {
	// your code goes here
	short int t,x;
	scanf("%hd",&t);
	while(t--){
	    scanf("%hd",&x);
	    printf(x>29?"YES\n":"NO\n");
	}
return 0;
}
