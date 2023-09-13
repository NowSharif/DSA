#include <iostream>
using namespace std;

int main(){
    int ROWS;
  cout << "Enter the number of rows: " << endl;
  cin >> ROWS;

  cout << "\nThe pattern is: \n" << endl;

  //upper pattern
  for(int row=0; row<ROWS; row++){

    for(int col=0; col<(row+1); col++){
      cout << "* ";
    }

    for(int col=0; col< (2*(ROWS-row-1)) ; col++){
      cout << "  ";
    }

    for(int col=0; col<(row+1); col++){
      cout << "* ";
    }

    cout << endl;
  }
  
//lower pattern
  for(int row=0; row<ROWS; row++){

    for(int col=0; col<(ROWS-row); col++){
      cout << "* ";
    }

    for(int col=0; col< (2*row) ; col++){
      cout << "  ";
    }

    for(int col=0; col<(ROWS-row); col++){
      cout << "* ";
    }

    cout << endl;
  }

    return 0;
}



/*
sample test case:

Enter the number of rows: 
6

The pattern is:

*                     *
* *                 * *
* * *             * * *
* * * *         * * * *
* * * * *     * * * * *
* * * * * * * * * * * *
* * * * * * * * * * * * 
* * * * *     * * * * *
* * * *         * * * *
* * *             * * *
* *                 * *
*                     *

*/