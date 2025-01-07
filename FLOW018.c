#include <stdio.h>

int main() {
	// your code goes here
    int t,n,i;
    scanf("%d",&t);
    while(t--){
        long int fact=1;
        scanf("%d",&n);
        for(n;n>0;n--)
            fact =fact*n;
        
        printf("%ld\n",fact);
    }
return 0;
}

