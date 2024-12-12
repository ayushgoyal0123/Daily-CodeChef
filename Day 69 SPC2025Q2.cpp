#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int t,n,k,p,A[100];
    cin>>t;
    while(t--)
    {
        k=0,p=0;
        int i,sum=0;
        cin>>n>>k>>p;
        for(i=0;i<n;i++)
        cin>>A[i];
        
        int max=A[0];
        for(i=1;i<n;i++)
        {
            if(A[i]>max)
            max = A[i];
        }
        
        for(i=0;i<n;i++)
        sum =sum+A[i];
        
        k=k+max;
        p=p+sum-max;
        
        k>p?cout<<"VED\n":k<p?cout<<"VARUN\n":cout<<"EQUAL\n";
    }
return 0;
}
