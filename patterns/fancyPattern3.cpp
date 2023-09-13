#include <iostream>
using namespace std;

int main(){

    
  int ROWS;

  cout << "Enter the number of rows: " << endl;
  cin >> ROWS;
  
  cout << "The Pattern is: " << endl;
//Growing Pattern
  for(int row=0; row<ROWS; row++){
    int count = 0;
    for(int col=0; col< (row+1); col++){
      if(col==0){
        cout << "*";
      }
      else{
        count = col;
        cout << count ;
      }
    }
  count = count-1;
  for(int col=row+1; col<(2*row+1); col++){
    if(col==(2*row)){
       cout << "*";
    }
    else{
      cout << count--;
    }
  }
    cout << endl;
  }


  //Shrinking Pattern
  for(int row=0; row<ROWS; row++){
    int count = 0;
    for(int col=0; col< (ROWS-row-1); col++){
      if(col==0){
        cout << "*";
      }
      else{
        count = col;
        cout << count ;
      }
    }
  count = count-1;
  for(int col=(ROWS-row-1); col<(2*ROWS-2*row-3); col++){
    if(col==(2*ROWS-2*row-4)){
       cout << "*";
    }
    else{
      cout << count--;
    }
  }
    cout << endl;
  }

    return 0;
}




/*
sample test case:

Enter the number of rows: 
6
The Pattern is:
*
*1*
*121*
*12321*
*1234321*
*123454321*
*1234321*
*12321*
*121*
*1*
*

*/