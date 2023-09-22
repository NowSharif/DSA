//Divide 2 numbers using binary search

#include <iostream>
#include <vector>

using namespace std;


int getQuotient(int dividend, int divisor){

    int ans = -1;

    int start = 0, end = dividend;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(mid*divisor==dividend){
            return mid;
        }
        else if(mid*divisor < dividend){
            ans = mid;
            start = mid+1;
        }
        else{
            end = mid-1;
        }

        mid = start + (end-start)/2;


    }


    return ans;



    return ans;
}

int main(){

    int dividend = -79;
    int divisor = -8;

    int quotient = getQuotient(abs(dividend), abs(divisor));

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
