#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,d[1250];
	cin>>t;
	for(int i=1;i<=t;i++)
	    {
	      cin>>n;
	      int j;
	    for(j=0;j<=n-1;j++)
	        cin>>d[j];
	    int count=0;
	    for(j=0;j<=n-1;j++)
	    {
	        if (d[j]>=1000)
	        count++;
	    }
	    cout<<count<<"\n";
	}
return 0;
}
