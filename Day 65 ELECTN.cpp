#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,x,A[100];
	cin>>t;
	while(t)
	{
	    cin>> n>>x;
	    for(int i=0;i<=n-1;i++)
	        cin>>A[i];
	    
	    int count=0;
	    for(int i=0;i<n;i++)
	    {
	        if(A[i]>=x)
	        count++;
	    }
	    
	    cout<<count<<"\n";
	    t--;
	}
return 0;
}
