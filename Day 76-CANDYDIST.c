#include <stdio.h>

int main() {
	// your code goes here
    int t,n,m;
	scanf("%d",&t);
	while(t--)
	{
	    scanf("%d%d",&n,&m);
	    if(n%m==0 && (n/m)%2==0)
	        printf("Yes\n");
	        
	    else
	        printf("No\n");
	}
return 0;
}

