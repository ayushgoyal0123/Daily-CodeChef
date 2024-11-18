#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,A,B,C,D,E;
	cin>>T;
	for(int j=1;j<=T;j++)
	{
	    cin>>A>>B>>C>>D>>E;
	    if(((A+B<=D) && (C<=E)) || ((B+C<=D) && (A<=E)) || ((A+C<=D) && (B<=E)))
	            cout<<"YES\n";

	    else
	        cout<<"NO\n";
	}
return 0;
}
