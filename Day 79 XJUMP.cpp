#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	// I used hints to solve this.
	int t,x,y;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y;
	    if(x<y)
	    cout<<x<<"\n";
	    
	    else
	    cout<<x/y +x%y<<"\n";
	}
return 0;
}