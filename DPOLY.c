#include <stdio.h>

int main() {
	// your code goes here
	int t,n,i,a[1000];
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	        scanf("%d",&a[i]);
	        
	    int answer =n-1;
	    for(i=1;i<=n-1;i++)
	    {
	        if(a[n-i]==0)
	            answer--;
	        
	        else
	            break;
	    }
	        
        printf("%d\n",answer);
	}
return 0;
}

