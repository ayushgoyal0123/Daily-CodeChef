#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,A,B,C,D;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>A>>B>>C>>D;
	    if(A+C==180 && B+D==180)
	        cout<<"YES\n";
	        
	    else
	        cout<<"NO\n";
	}
return 0;
}
