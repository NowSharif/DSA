#include <iostream>
using namespace std;

int main(){

    int ROWS;
  cout << "Enter the no.of rows: " << endl;
  cin >> ROWS;
  //top hollow pyramid
  for(int row=0; row<ROWS; row++){
    for(int col=0; col< ROWS-row-1 ; col++){
      cout << "  ";
    }
    for(int col=0; col<2*row+1; col++){
      if(col==0 || col==2*row)
        cout << "* ";
      else
        cout << "  ";
    }
    cout << endl;
  }
  //bottom hollow pyramid
  for(int row=0; row<ROWS; row++){
    for(int col=0; col< row ; col++){
      cout << "  ";
    }
    for(int col=0; col<2*(ROWS-row)-1; col++){
      if(col==0 || col==2*(ROWS-row)-2)
        cout << "* ";
      else
        cout << "  ";
    }
    cout << endl;
  }


    return 0;
}




/*
sample test case:

Enter the no.of rows: 
6
          *
        *   *
      *       *
    *           *
  *               *
*                   *
*                   *
  *               *
    *           *
      *       *
        *   *
          *


*/