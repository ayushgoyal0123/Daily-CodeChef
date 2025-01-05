#include <stdio.h>

int main() {
	// your code goes here
	signed int t,n;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    int coins = ceil(n*4.0/5);
	    printf("%d\n",coins);
	}
return 0;
}

