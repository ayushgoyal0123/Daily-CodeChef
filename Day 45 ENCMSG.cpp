#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,N;
	string S;
	cin>>T;
	for(int i=1;i<=T;i++)
	{
	    cin>>N>>S;
	        
	    char temp;
	    
	    if(N%2==0)
	    {
	        for(int k=0;k<N;k+=2)
	        {
	            temp=S[k];
	            S[k]=S[k+1];
	            S[k+1]=temp;
	        }
	    }
	        
	    else
	        { 
	            for(int k=0;k<N-1;k+=2)
	            {
	                temp=S[k];
	                S[k]=S[k+1];
	                S[k+1]=temp;
	            }
	        }
	    
	    for(int l=0;l<N;l++)
	        S[l]= 'a' + ('z' -S[l]);
	    
	     cout<<S<<"\n";
	}
return 0;

}
