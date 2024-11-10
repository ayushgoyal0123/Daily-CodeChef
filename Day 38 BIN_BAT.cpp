#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,N,A,B;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>N>>A>>B;
	    int sum=0,store;
	    store = log(N)/log(2);
	    sum = A*store + B*(store-1);
	    cout<<sum<<"\n";
	}
return 0;
}
