#include <iostream>
using namespace std;

int main(){

    //-------------Method 1----------------
    /*
    
    int ROWS;
  cout << "Enter the number of rows: " << endl;
  cin >> ROWS;

  cout << "\nThe pattern is: \n\n" << endl;
  for(int row=0; row<ROWS-1; row++){
    cout << "1 ";
  for(int col=0; col<(row); col++){
      cout << "- ";  
  }
    if(row!=0){
      cout << (row+1) << " ";
    }


    cout << endl;
    
  }

  for(int col=0; col<ROWS; col++){
    cout << (col+1) << " ";
  }
  cout << endl;


    */


   //--------Method 2-------------

  int ROWS;
  cout << "Enter the number of rows: " << endl;
  cin >> ROWS;

  cout << "\nThe pattern is: \n" << endl;
  for(int row=0; row<ROWS; row++){
    for(int col=0; col<(row+1); col++){
      if(row==(ROWS-1) || col==0 || col==(row)){
        cout << (col+1) << " " ;
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
Sample TestCase:

Enter the number of rows: 
6

The pattern is:

1
1 2
1   3
1     4
1       5
1 2 3 4 5 6



*/