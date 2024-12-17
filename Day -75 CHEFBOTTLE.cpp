#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,x,k;
	cin>>t;
	while(t--)
	{
	    int count=0;
	    cin>>n>>x>>k;
	    if(x>k)
	    cout<<"0\n";
	    
	    else
	    {for(int i=x;i<=k;i=i+x)
	    {
	        n=--n;
	        count++;
	        
	        if(n==0)
	        break;
	    }
	     cout<<count<<"\n";
	    }
	   
	    
	}
return 0;
}
