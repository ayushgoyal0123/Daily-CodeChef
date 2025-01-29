#include <stdio.h>

int main() {
	// your code goes here
	short int t;
	int n,m;
	scanf("%hd",&t);
	while(t--){
	    scanf("%d%d",&n,&m);
	    printf("%d\n",n-m<0?0:n-m);
	}
return 0;
}

