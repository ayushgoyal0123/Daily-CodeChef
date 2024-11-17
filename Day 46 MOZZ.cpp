#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	float T,X,Y,R;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    cin>>X>>Y>>R;
	    cout<<ceil((X+(R/30))/Y)<<"\n";
	}
return 0;
}
