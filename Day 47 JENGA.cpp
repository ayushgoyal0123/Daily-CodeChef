#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,N,X;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    cin>>N>>X;
	    if(X%N==0)
	        cout<<"YES\n";
	        
	    else
	        cout<<"NO\n";
	}
return 0;
}
