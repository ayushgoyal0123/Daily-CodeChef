#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,x,y,z;
	cin>>t;
	while(t--)
	{
	    cin>>x>>y>>z;
	    if(z-y/x<0)
	    cout<<"0\n";
	    
	    else
	    cout<<z-y/x<<"\n";
	}
return 0;
}
