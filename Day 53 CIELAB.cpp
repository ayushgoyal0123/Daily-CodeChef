#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	// I used Hints to solve this.
	int A,B;
	cin>>A>>B;
	if((A-B)%10 == 9)
	    cout<<A-B-1;
	    
	   else
	    cout<<A-B+1;
return 0;
}
