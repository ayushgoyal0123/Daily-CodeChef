#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int T,N,X,P;
	cin>>T;
	for(int i=0;i<T;i++)
	{
	    cin>>N>>X>>P;
	    if((X*3)-(N-X) >= P)
	        cout<<"PASS"<<"\n";
	    else
	        cout<<"FAIL"<<"\n";
	}
return 0;
}
