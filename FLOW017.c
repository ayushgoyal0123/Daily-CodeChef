#include <stdio.h>

int main() {
	// your code goes here
	int t,a,b,c;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&a,&b,&c);
	    if(a>b && a>c){
	        if(b>c)
	        printf("%d\n",b);
	        
	        else
	        printf("%d\n",c);
	    }
	    
	    else if(b>c)
	    {
	        if(a>c)
	        printf("%d\n",a);
	        
	        else
	        printf("%d\n",c);
	    }
	    else{
	        if(a>b)
	        printf("%d\n",a);
	        
	        else
	        printf("%d\n",b);
	        
	    }
	}
// we can either use array and then sort it and then find a[1] value.
return 0;
}

