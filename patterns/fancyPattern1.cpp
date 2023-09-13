#include <iostream>
using namespace std;

int main(){

  int ROWS;
  cout << "Enter the number of rows: " << endl;
  cin >> ROWS;

  cout << "\nThe pattern is: \n" << endl;
  
  for(int row=0; row<ROWS; row++){
    
    for(int col=0; col<(2*ROWS-row-2) ; col++){
        cout << "* ";
    }

    for(int col=0; col<(row+1); col++){
        if(col==row){
          cout << (row+1) << " ";
        }
      else{
        cout <<(row+1) << " " << "* ";
      }
    }

    for(int col=0; col<(2*ROWS-row-2) ; col++){
        cout << "* ";
    }

    cout << endl;
    
  }

    return 0;
}



/*
sample test case:

Enter the number of rows: 
5

The pattern is:

* * * * * * * * 1 * * * * * * * *
* * * * * * * 2 * 2 * * * * * * *
* * * * * * 3 * 3 * 3 * * * * * *
* * * * * 4 * 4 * 4 * 4 * * * * *
* * * * 5 * 5 * 5 * 5 * 5 * * * *


*/