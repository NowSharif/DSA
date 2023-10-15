
// Modular Exponentiation for large numbers

// https://practice.geeksforgeeks.org/problems/modular-exponentiation-for-large-numbers5537/1


#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;



// TC = O(logN) ; SC= O(1)
long long int PowMod(long long int x,long long int n,long long int M)
{
    // Code here
  long long int ans = 1;

    while(n>0){
        if(n&1){
            ans= (ans*x)%M;
        }

        x= (x*x)%M;
        n>>=1;
    }

    return ans%M;
}



int main() {

int x = 2, n = 6, m = 10;
// int x = 5, n = 4, m = 100;
  // int x = 3, n = 2, m = 4;

int ans;
ans = PowMod(x, n, m);
cout << x << " power " << n <<" mod " << m << " is:\n" << ans << endl;
}




/*
Sample Testcase Output:

2 power 6 mod 10 is: 
4

*/
