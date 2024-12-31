#include <stdio.h>

int main() {
	// your code goes here
	int t,x,y,xfloor,yfloor;
	scanf("%d",&t);
	while(t--){
	    scanf("%d%d",&x,&y);
	    xfloor=x>=1 && x<=10?1:x>=11 && x<=20?2:x>=21 && x<=30?3:x>=31 && x<=40?4:x>=41 && x<=50?5:x>=51 && x<=60?6:x>=61 && x<=70?7:x>=71 && x<=80?8:x>=81 && x<=90?9:10;
	    
	    yfloor=y>=1 && y<=10?1:y>=11 && y<=20?2:y>=21 && y<=30?3:y>=31 && y<=40?4:y>=41 && y<=50?5:y>=51 && y<=60?6:y>=61 && y<=70?7:y>=71 && y<=80?8:y>=81 && y<=90?9:10;
	    
	    printf("%d\n",abs(xfloor-yfloor));
	}

}

