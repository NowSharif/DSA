
#include <iostream>
using namespace std;

int main(){

  int n;
  cout << "Enter N" << endl;
  cin >> n;
  cout << "The pattern is: " <<endl <<endl;
  
  for(int row=0; row<n; row++){
    for(int col=0; col<n; col++){
        cout << "*";
    }
    cout << endl;
  }


    return 0;
}


//Output:
/*
Enter N
6
The pattern is:

******
******
******
******
******
******

*/
