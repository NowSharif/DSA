#include <iostream>
using namespace std;

int main(){

  int ROWS;
  cout << "Enter the number of rows: " << endl;
  cin >> ROWS;

  cout << "\nThe pattern is: \n\n" << endl;
  
  for(int row=0; row<ROWS; row++){
    char ch = 'A';
    for(int col=0; col<(row+1); col++){
      if(col!=0)
          ch++ ;
      cout << ch << " ";
    }
  ch--;
    for(int col = 0; col<row; col++){
      if(col!=0)
        ch--;
      cout << ch << " ";
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


A
A B A
A B C B A
A B C D C B A
A B C D E D C B A

*/