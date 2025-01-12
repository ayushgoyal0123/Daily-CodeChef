#include <stdio.h>

int main() {
	// your code goes here
	int i,n,s[10000],l[10000],w[10000],t[10000],max=0,winner=0,p1total=0,p2total=0;
	scanf("%d",&n);
	for(i=0;i<n;i++){
	    scanf("%d",&s[i]);
	    scanf("%d",&t[i]);
	    
	    p1total=p1total+s[i];
	    p2total=p2total+t[i];
	    
	    l[i]=p1total-p2total;
	    w[i]=l[i]>0?1:2;
	
	    if(abs(l[i])>max){
	        max=abs(l[i]);
	        winner =w[i];
	    }
	}
	    printf("%d %d",winner,max);
return 0;
}