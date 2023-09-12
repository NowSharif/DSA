#include <iostream>
using namespace std;

int main(){

  int ROWS, COLS;

  cout << "Enter the no.of rows: " << endl;
  cin >> ROWS;

  cout << "Enter the no.of columns: " << endl;
  cin >> COLS;

  cout << "The pattern is: " <<endl <<endl;
  for(int row=0; row<ROWS; row++){

    for(int col=0; col<COLS; col++){

      if((col==0||col==COLS-1) || (row==0||row==ROWS-1))
      cout << "* ";
      else
      cout << "  ";
    }
    cout << endl;
  }

    return 0;
}


/*
Test Output:
Enter the no.of rows: 
5
Enter the no.of columns:
10
The pattern is:

* * * * * * * * * *
*                 *
*                 *
*                 *
* * * * * * * * * *

*/