#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,a,b,c;
	cin>>t;
	while(t--)
	{
	    cin>>a>>b>>c;
	    if(a>b)
	        cout<<"NO\n";
	    
	    else
	    {
	        for(a;a<=b;a++)
	        {
	            if(a>=c)
	            {
	                cout<<"YES\n";
	                break;
	            }
	        }
	        
	        if(a==b+1)
	            cout<<"NO\n";
	    }
	    
	}
return 0;
}
