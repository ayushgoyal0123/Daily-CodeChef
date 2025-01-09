#include <stdio.h>

int main() {
	// your code goes here
    int t,a,b;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d",&a,&b);
        a>b?printf(">\n"):a<b?printf("<\n"):printf("=\n");
    }
return 0;
}

