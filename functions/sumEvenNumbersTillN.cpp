
// ------------Method1 Program to print the sum of all even numbers from 1 to N----------

#include <iostream>
using namespace std;

int main(){
    int num;
    cout <<"Enter a number" << endl;
    cin >> num;

    int temp = 1, sum=0;

    while(temp<=num){
        if(temp%2 == 0){
              sum += temp;
        }
      
        temp++;
    }

    cout << "The sum of even numbers till " << num <<" is: " << sum << endl;

}