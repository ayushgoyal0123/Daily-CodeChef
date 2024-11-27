#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,X;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    cin>>X;
	    if(X<=100)
	        cout<<X<<"\n";
	    
    	        else if(X>100 && X<=1000)
	                cout<<X-25<<"\n";
	        
	                else if(X>1000 && X<=5000)
	                    cout<<X-100<<"\n";
	                    
	                    else
	                        cout<<X-500<<"\n";
	}
return 0;

}
