//Program to 

#include <iostream>
using namespace std;

int main(){

  int principal, time, rateOfInterest;
  cout << "Enter the principal value: " <<endl;
  cin >> principal ;

  cout << "Enter the time value in years: " <<endl;
  cin >> time ;

  cout << "Enter the rateOfInterest value: " <<endl;
  cin >> rateOfInterest ;

  float simpleInterest = float(principal* time*rateOfInterest)/100;

  cout << "The Simple Interest is: " << simpleInterest << endl;
  
    return 0;
}



/*

Enter the principal value: 
10
Enter the time value in years:
1
Enter the rateOfInterest value:
2
The Simple Interest is: 0.2


*/