#include <iostream>
using namespace std;

int main(){
    //----------Method-1---------------------
    /*

    int ROWS;
   cout << "Enter the no.of rows: " << endl;
   cin >> ROWS;

   cout << "The pattern is: " << endl;

   for(int row=0; row<ROWS; row++){
     for(int col=0; col<2*row+1; col++){
       if(col%2==0){
          cout << row+1 << " ";
       }
       else{
         cout << "* ";
       }

     }
     cout << endl;
   }

    
    */


   //--------------Method-2-------------------

   int ROWS;
  cout << "Enter the no.of rows: " << endl;
  cin >> ROWS;

  cout << "The pattern is: " << endl;

  for(int row=0; row<ROWS; row++){
    for(int col=0; col<row+1; col++){
      if(col==row){
        cout << row+1;
      }
      else{
        cout << row+1 << "*";
      }

    }
    cout << endl;
  }
   

    return 0;
}




/*
sample test case:
Enter the no.of rows: 
6
The pattern is:
1
2*2
3*3*3
4*4*4*4
5*5*5*5*5
6*6*6*6*6*6


*/
