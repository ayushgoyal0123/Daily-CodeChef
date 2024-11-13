#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int T,N,A[1000000],K,store;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        cin>>N;
        for(int j=0;j<N;j++)
            cin>>A[j];
            
        cin>>K;
        
        store = A[K-1];
        
        for(int k=0;k<N-1;k++)
            {
                for(int l=0;l<N-k-1;l++)
                {
                    if(A[l]>A[l+1])
                        {
                            int temp;
                            temp=A[l+1];
                            A[l+1]=A[l];
                            A[l]=temp;
                        }
                }
            }
            
        for(int n=0;n<N;n++)
        {
            if(A[n]==store)
            {
                cout<<n+1<<"\n";
                break;
            }
        }
    }
return 0;
}
