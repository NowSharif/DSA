

// Wave print a matrix - column wise and row wise

#include <iostream>
#include <vector>
using namespace std;

// TC = O(N*N) ; SC = O(1)
void printWaveColumnWise(vector <vector<int>> arr){

  int rows = arr.size();
  int cols = arr[0].size();


  for(int startCol = 0; startCol<cols; ++startCol){

    //If column index is even
    if((startCol&1) == 0){
      //Print column top to bottom
        for(int i=0; i<rows; ++i){
          cout << arr[i][startCol] <<" ";
        }
    }

  //If column index is odd
    else{
      //print column bottom to top

      for(int i=rows-1; i>=0; --i){
        cout << arr[i][startCol] << " ";
      }
    }
  }
  
}


// TC = O(N*N) ; SC = O(1)
void printWaveRowWise(vector <vector<int>> arr){
  int rows = arr.size();
  int cols = arr[0].size();
  
  for(int startRow=0; startRow<rows; startRow++){

    //If row index is even
    if((startRow&1)==0){
      //Print row wise left to right
      for(int j=0; j<cols; ++j){
        cout << arr[startRow][j] << " ";
      }
    }

      //If row index is odd
    else{

      for(int j=cols-1; j>=0; --j){
        cout << arr[startRow][j] << " ";
      }
      
    }
  }

  
}


int main() {


  vector <vector<int>> arr = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};

  cout << "Printing wave column wise: " << endl;
  printWaveColumnWise(arr);

  cout << endl << endl;

  cout << "Printing wave row wise: " << endl;
  printWaveRowWise(arr);

  
}



/*
Sample test case:

Input:

 arr = {

    {1, 2, 3, 4}, 
    {5, 6, 7, 8}, 
    {9,10,11,12}
    
    }




Output:

Printing wave column wise: 
1 5 9 10 6 2 3 7 11 12 8 4

Printing wave row wise:
1 2 3 4 8 7 6 5 9 10 11 12

*/