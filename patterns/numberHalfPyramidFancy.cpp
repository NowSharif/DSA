#include <iostream>
using namespace std;

int main(){

  int ROWS;
  cout << "Enter the number of rows: " << endl;
  cin >> ROWS;

  cout << "The Pattern is:\n" <<endl;
  for(int row=0; row<ROWS; row++){

    for(int col = 0; col<(row+1); col++){
      cout << (row+1) << " ";
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

1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
6 6 6 6 6 6

*/