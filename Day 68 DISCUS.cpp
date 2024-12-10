#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	    if(a>b&&a>c)
	    cout<<a<<"\n";
	    
	    else if(b>c)
	    cout<<b<<"\n";
	    
	    else
	    cout<<c<<"\n";
	}
return 0;
}
