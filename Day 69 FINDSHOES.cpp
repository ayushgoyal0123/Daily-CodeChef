#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n,m;
	cin>>t;
	while(t--)
	{
	    cin>>n>>m;
	    if(m>=n)
	    cout<<n<<"\n";
	    
	    else
	    cout<<n-m + n<<"\n";
	}
return 0;
}
