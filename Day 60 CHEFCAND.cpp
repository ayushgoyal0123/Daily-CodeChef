#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,x,count;
	cin>>t;
	for(int i=1;i<=t;i++)
	{
	    cin>>n>>x;
	    if(n<=x)
	    cout<<0<<"\n";
	    else
	    {
	    count=0;
	    while(n>x)
	    {
	        x=x+4;
	        count++;
	    }
	    cout<<count<<"\n";
	    }
	}
return 0;
}
