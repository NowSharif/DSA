#include <iostream>
using namespace std;

int main(){
    // ------------Method-1-----------------
    /*
    
  int ROWS;
  cout << "Enter the number of rows: " << endl;
  cin >> ROWS;

  cout << "\nThe pattern is: \n" << endl;
  
  for(int row=0; row<ROWS; row++){
      for(int col=0; col<(row+1); col++){
        cout << "* ";
      }

    cout << endl;
  }

  for(int row=0; row<(ROWS-1); row++){
     for(int col=0; col<(ROWS-row-1); col++){
      cout << "* ";
    }

    cout << endl;
  }
*/


//Method-2
  
  int ROWS;
  cout << "Enter the number of rows: " << endl;
  cin >> ROWS;

  cout << "\nThe pattern is: \n" << endl;
  
  for(int row=0; row<(2*ROWS-1); row++){
    int j = (row<ROWS)? row : ROWS-(row%ROWS)-2;
                      //growing : shrinking
    for(int col=0; col<=j; col++){
      cout << "*";
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

*
* *
* * *
* * * *
* * * * *
* * * * * *
* * * * *
* * * *
* * *
* *
*



*/