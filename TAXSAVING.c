#include <stdio.h>

int main() {
	// your code goes here
    short int t,x,y;
    scanf("%hd",&t);
    while(t--){
        scanf("%hd%hd",&x,&y);
        printf("%hd\n",x-y);
    }
return 0;
}

