#include <iostream>
using namespace std;

int main(){

  int ROWS;
  cout << "Enter the number of rows: " << endl;
  cin >> ROWS;
  int count = 1;
  cout << "\nThe pattern is: \n" << endl;
  
  for(int row=0; row<ROWS; row++){
    for(int col=0; col<(row+1); col++){
      cout << count++ << " ";
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
2 3
4 5 6
7 8 9 10
11 12 13 14 15
16 17 18 19 20 21

*/