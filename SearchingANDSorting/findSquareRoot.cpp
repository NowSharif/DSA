
//Find Square root of a number
//


#include <iostream>
#include <vector>
using namespace std;

int findSquareRoot(int k){
    int start = 0, end = k;
    long long int mid = start + (end-start)/2;
    int ans = -1;

    while(start<=end){

        if(mid*mid == k){
            return mid;
        }

        else if(mid*mid<k){
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

    int x;
    cout << "Enter a number: ";
    cin >>x;

    int result = findSquareRoot(x);

    cout << "The square root of " << x << " is: " << result;

    return 0;
}



/*
sample test case output:
Enter a number: 123
The square root of 123 is: 11

*/