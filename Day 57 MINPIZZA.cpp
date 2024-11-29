#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,N,X;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    cin>>N>>X;
	    cout<<ceil(N*X/4.0)<<"\n";
	}
return 0;
}
