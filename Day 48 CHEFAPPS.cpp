#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,S,X,Y,Z;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    cin>>S>>X>>Y>>Z;
	    if( X+Y+Z <=S)
	        cout<<"0\n";
	        
	    else 
	    {
	        if((X+Z<=S) || Y+Z<=S)
	        cout<<"1\n";
	        
	        else 
	            cout<<"2\n";
	    } 
	   
	}
return 0;
}
