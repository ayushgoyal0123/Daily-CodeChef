#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,N,A,B;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>N>>A>>B;
	    int count1=0,count2=0;
	    for(int j=1;j<=N;j++)
	    {
	        if(j%2==0)
	            count1++;
	            
	        else
	            count2++;
	    }
	    cout<<count1*A + count2*B<<"\n";
	}
return 0;
}
