#include <stdio.h>


int main() {
	// your code goes here
    int t,n,output;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&n);
        output=ceil(n/10.0); // OR output = (n+9)/10;
        printf("%d\n",output);
    }
return 0;
}