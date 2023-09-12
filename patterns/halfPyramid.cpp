#include <iostream>
using namespace std;

int main(){

  int ROWS, COLS;

  cout << "Enter the no.of rows: " << endl;
  cin >> ROWS;

  cout << "The pattern is: " <<endl <<endl;

  for(int row=0; row<ROWS; row++){
    for(int col=0; col<row+1; col++){
      cout << "* ";
    }

    cout << endl;
  }

    return 0;
}


/*
Sample test case:

Enter the no.of rows: 
6
The pattern is:

*
* *
* * *
* * * *
* * * * *
* * * * * *

*/