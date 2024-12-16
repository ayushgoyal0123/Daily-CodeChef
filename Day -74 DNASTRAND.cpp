#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	string s;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    cin>>s;
	    int i;
	    for(i=0;i<n;i++)
	    {
	        if (s[i]=='A')
	            s[i]='T';
	        else if (s[i]=='T')
	            s[i]='A';
	        else if (s[i]=='C')
	            s[i]='G';
	        else
	            s[i]='C';
	        
	    }
	    cout<<s<<"\n";
	}
return 0;
}
