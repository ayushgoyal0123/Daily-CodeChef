#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    int test_case,number;
    cin>>test_case;
    while(test_case--)
    {
        cin>>number;
        int reverse =0;
        while(number)
        { 
            reverse = reverse*10 + number%10;
            number=number/10;
        }
        
        cout<<reverse<<"\n";
        }
return 0;
}
