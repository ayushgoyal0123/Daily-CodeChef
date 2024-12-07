#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
	while(t--)
	{
	    cin>>n;
	    
	    if(n%4==0)          //}
	    cout <<n/4<<"\n";   //}
	                        //} OR cout<<ceil(n/4.0)<<"\n";
	    else                //}
	    cout <<n/4+1<<"\n"; //}
	}
return 0;
}
