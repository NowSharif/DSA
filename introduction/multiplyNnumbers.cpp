
// Program to Muiltiply N numbers from the user input
#include <iostream>
using namespace std;

int main(){

  int num;

  cout << "Enter the value of N" << endl;
  cin>> num;
  int product = 1, temp=1;

  while(temp<=num){
    int newNum;
    cout << "Enter a number"<<endl;
    cin>>newNum;
    product = product*newNum;
    temp= temp+1;
  }

  cout<< "The product of " <<num << " numbers is: " << product <<endl;


return 0;
}





/*

Output:

Enter the value of N
4
Enter a number
22
Enter a number
10
Enter a number
3
Enter a number
4

*/