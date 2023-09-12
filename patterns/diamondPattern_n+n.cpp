#include <iostream>
using namespace std;


int main(){
  int ROWS;
  ROWS = ROWS/2;
  cout << "Enter the no.of rows: " <<endl;
  cin >> ROWS;
  cout << "The pattern is:" <<endl;

  //top pattern
  for(int row=0; row<ROWS; row++){
    for(int col=0; col<ROWS-row-1; col++)
      cout << " "; //left space
    for(int col=0; col<row+1; col++)
      cout << "* "; //middle star+space

    cout << endl;
  }



  //bottom pattern
  for(int row=0; row<ROWS; row++){

    
    for(int col=0; col<row; col++){
       cout << " "; //left space
    }


    for(int col=0; col<ROWS-row; col++){
       cout << "* "; //middle star+space
    }

    cout << endl;
  }

    return 0;
}


/*
Sample Test Case:

Enter the no.of rows: 
7
The pattern is:
      *
     * *
    * * *
   * * * *
  * * * * *
 * * * * * *
* * * * * * *
* * * * * * *
 * * * * * *
  * * * * *
   * * * *
    * * *
     * *
      *


*/