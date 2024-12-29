#include <stdio.h>

int main() {
	// your code goes here
	int t,n,a[100],i;
	scanf("%d",&t);
	while(t--){
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	        scanf("%d",&a[i]);
	    int count=0;
	    for(i=0;i<n;i++){
	        if(a[i]>9 && a[i]<61)
	        count++;
	    }
	    printf("%d\n",count);
	}
return 0;
}

