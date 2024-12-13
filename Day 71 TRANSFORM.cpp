#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t,n;
	cin>>t;
    while(t--)
    {
        cin>>n;
        int i=1;
        while(i<=100)
        {
            if(i==n)
            {   cout<<"HUGE\n";
                break;
            }
            i+=3;
        }
        
        
        i=2;
        while(i<=100)
        {
            if(i==n)
            {   cout<<"SMALL\n";
                break;
            }
            i+=3;
        }
        
        i=3;
        while(i<=100)
        {
            if(i==n)
            {   cout<<"NORMAL\n";
                break;
            }
            i+=3;
        }
    }
return 0;
}
