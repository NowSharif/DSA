#include <iostream>
using namespace std;

int main(){

    int ROWS;
    cout << "Enter the no.of rows: " << endl;
    cin >> ROWS;

    //top hollow pyramid
    for(int row=0; row<ROWS; row++){
      for(int col=0; col<(ROWS-row); col++){
        cout << "* ";
      }
      for(int col=0; col<(2*row+1); col++){
        cout << "  ";
      }
      for(int col=0; col<ROWS-row; col++){
        cout << "* ";
      }
    cout << endl;
    }


    //bottom hollow pyramid
    for(int row=0; row<ROWS; row++){
      for(int col=0; col<row+1; col++){
        cout << "* ";
      }
      for(int col=0; col<2*(ROWS-row)-1; col++){
        cout << "  ";
      }
      for(int col=0; col<row+1; col++){
        cout << "* ";
      }
    cout << endl;
    }


return 0;
}



/*

Sample Test Case:

Enter the no.of rows: 
7
* * * * * * *   * * * * * * *
* * * * * *       * * * * * *
* * * * *           * * * * *
* * * *               * * * *
* * *                   * * *
* *                       * *
*                           *
*                           *
* *                       * * 
* * *                   * * *
* * * *               * * * *
* * * * *           * * * * *
* * * * * *       * * * * * *
* * * * * * *   * * * * * * *




*/