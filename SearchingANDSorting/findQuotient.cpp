//Divide 2 numbers using binary search
// 29. Divide Two Integers
//https://leetcode.com/problems/divide-two-integers/

//TC = O(log(Dividend)) ; SC=O(1)

#include <iostream>
#include <vector>
#include <limits.h>

using namespace std;


int getQuotient(int dividend, int divisor){

    long long int ans = -1;

    long long int dividend2 = (long long int)(dividend);
    long long int divisor2 = (long long int)(divisor);

    long long int start = 0, end = dividend2;
    long long int mid = start + (end-start)/2;

    while(start<=end){
       
        if(mid*divisor2==dividend2){
            return mid;
        }
        else if(mid*divisor2 < dividend2){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }

        mid = start + (end-start)/2;


    }

    return ans;
}

int main(){

    // long int dividend = -2147483648;
    // long int divisor = -1;

    
    long int dividend = 2147483647;
    int divisor = 2;

    long int quotient = -1;
    
    if(dividend<=INT_MIN && divisor==-1){
        quotient =  INT_MAX;
    }

     if(dividend<=INT_MIN && divisor==1){
        quotient =  INT_MIN;
    }

   
    if(quotient ==-1)
    quotient = getQuotient(abs(dividend), abs(divisor));

     

    if(quotient!=-1){
        if((divisor>0 && dividend<0) || (divisor<0 && dividend>0)){
            quotient = 0 - quotient;
        }
        cout << "The Quotient on dividing " << dividend << " by " << divisor << " is: " << quotient << endl;
    }
    else{
        cout << "The division wasn't possible" << endl;
    }
    return 0;
}



/*
sample test case output:

The Quotient on dividing -79 by -8 is: 9

*/
