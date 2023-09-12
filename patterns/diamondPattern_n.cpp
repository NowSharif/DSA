#include <iostream>
using namespace std;

int main(){
    int ROWS;
    cout << "Enter the no.of rows(even): " <<endl;
    cin >> ROWS;
    cout << "The pattern is:" << endl <<endl;
    ROWS = ROWS/2;
    for(int row=0; row<ROWS; row++){
      for(int col=0; col<ROWS-row-1; col++){
        cout << "  ";
      }
      for(int col=0; col<2*row+1; col++){
        cout << "* ";
      }
      cout << endl;
    }

    for(int row=0; row<ROWS; row++){
      for(int col=0; col<row; col++){
        cout << "  ";
      }
      for(int col=0; col<2*(ROWS-row)-1; col++){
        cout << "* ";
      }
      cout << endl;
    }



    return 0;
}



/*
Sample Test Case:

Enter the no.of rows(even): 
8
The pattern is:

      *
    * * *
  * * * * *
* * * * * * *
* * * * * * *
  * * * * *
    * * *
      *


*/