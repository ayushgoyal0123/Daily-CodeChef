#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T, N;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    int even =0,odd=0;
	    
	    cin>>N;
	    for(int j=1;j<=N;j++)
	    {
	        if(N%j==0)
	        {
	            if(j%2==0)
	                even++;
	            else
	                odd++;
	        }
	    }
	    
	   if(even>odd)
	        cout<<1<<"\n";
	        
	   else if(even<odd)
	        cout<<-1<<"\n";
	        
	   else
	        cout<<0<<"\n";
	}
return 0;
}
