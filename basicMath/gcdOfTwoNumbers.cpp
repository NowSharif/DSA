
// GCD of two numbers

// https://practice.geeksforgeeks.org/problems/gcd-of-two-numbers3459/1


#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;


// TC = : O(log(min(A, B))) ; SC = O(1)
int gcd(int A, int B) 
{ 
    // code here

    if(A == 0) return B;
    if(B == 0) return A;

    while(A>0 && B>0) {
        if(A>B) A = A-B;
        else B = B-A;
    }

    return A==0?B:A;

} 



int main() {

int A = 3, B = 6;
// int  A = 24, B = 72;
int ans;
ans = gcd(A, B);
cout << "GCD of " << A << " and " << B << " is:\n" << ans << endl;
}

/*
Sample Testcase Output:

GCD of 3 and 6 is: 
3

*/
