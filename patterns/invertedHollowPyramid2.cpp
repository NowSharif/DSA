#include <iostream>
using namespace std;

int main(){

  int ROWS;
  cout << "Enter the number of rows: " << endl;
  cin >> ROWS;

  cout << "\nThe pattern is: \n\n" << endl;
  for(int row=0; row<ROWS; row++){
    for(int col=0; col<(ROWS-row); col++){
      if(col==0 || col==(ROWS-row-1)|| row==0){
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

Enter the number of rows: 
5

The pattern is:


* * * * *
*     *
*   *
* *
*

*/