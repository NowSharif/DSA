#include <iostream>
using namespace std;

int main(){

    int ROWS;
  cout << "Enter the number of rows: " << endl;
  cin >> ROWS;

  cout << "\nThe pattern is: \n" << endl;
  
  for(int row=0; row<ROWS; row++){
    int temp;
    
    for(int col=0; col<(ROWS-row-1); col++){
      cout << "  ";
    }
    for(int col=0; col<(row+1); col++){
      temp = (col+1);
      cout << temp << " ";
    }

    for(int col=0; col<row; col++){
      cout << (--temp) << " ";
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

          1
        1 2 1
      1 2 3 2 1
    1 2 3 4 3 2 1
  1 2 3 4 5 4 3 2 1
1 2 3 4 5 6 5 4 3 2 1
 
*/