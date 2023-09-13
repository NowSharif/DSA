#include <iostream>
using namespace std;

int main(){
    
    int ROWS;
  cout << "Enter the number of rows: " << endl;
  cin >> ROWS;

  cout << "\nThe pattern is: \n" << endl;
  int count = 1;
  for(int row=0; row<(ROWS); row++){
    for(int col=0; col<(row+1); col++){
      if(col==row){
        cout << count++;
      }
      else{
        cout << count++ << "*";
      }
    }

    cout << endl;
    
  }
  int start = count - ROWS; 

   for(int row=0; row<(ROWS); row++){
     int k = start;
    for(int col=0; col<(ROWS-row); col++){
      if(col==(ROWS-row-1)){  
        cout <<k++;
      }
      else{
        cout << k++ << "*";
      }
      
      
    }
  start = start -(ROWS-row-1);
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
2*3
4*5*6
7*8*9*10
11*12*13*14*15
16*17*18*19*20*21
16*17*18*19*20*21
11*12*13*14*15
7*8*9*10
4*5*6
2*3
1


*/