#include <stdio.h>
#include<math.h>

int main() {
	// your code goes here
	int t,x,y,d;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d%d",&x,&y,&d);
	    abs(x-y)<=d?printf("YES\n"):printf("NO\n");
	}
return 0;
}

