#include <iostream>
using namespace std;

int main(){

    //----------Method 1 ------------------

/*

int ROWS;
  cout << "Enter the number of rows: " << endl;
  cin >> ROWS;

  cout << "\nThe pattern is: \n\n" << endl;
  
  for(int row=0; row<ROWS; row++){
    for(int col=0; col<(ROWS-row); col++){
      if(row==0){
        cout << (col+1) << " ";
      }
      else if(col==0){
        cout << (row+1) << " ";
      }
      else if(col==(ROWS-row-1)){
        cout << (ROWS) << " ";
      }
      else{
        cout << "  ";
      }
      
    }
    cout << endl;
    
  }

*/
  


  //---------------Method 2 ----------------------

  int ROWS;
  cout << "Enter the number of rows: " << endl;
  cin >> ROWS;

  cout << "\nThe pattern is: \n\n" << endl;
  
  for(int row=0; row<ROWS; row++){
    for(int col=(row+1); col<=ROWS; col++){
      if(col==(row+1) || col==ROWS || row==0)
      cout << col;
      else
        cout << " ";
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


1 2 3 4 5 6
2       6
3     6
4   6
5 6
6

*/