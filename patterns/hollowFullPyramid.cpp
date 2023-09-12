#include <iostream>
using namespace std;

int main(){
  int ROWS;
  cout << "Enter the no.of rows: " <<endl;
  cin >> ROWS;
  cout << "The pattern is:" << endl <<endl;

  for(int row=0; row<ROWS; row++){
    for(int col=0; col<ROWS-row-1; col++){
      cout << " ";
    }
    for(int col=0; col<row+1; col++){
      if(col==0 || col==row || row==ROWS-1){
        cout << "* ";
      }
      else{
         cout << "  ";
      }

    }
    cout << endl;
  }

    return 0;
}



/*
sample test case:

Enter the no.of rows: 
7
The pattern is:

      *
     * *
    *   *
   *     *
  *       *
 *         *
* * * * * * *

*/