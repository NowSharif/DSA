
// Program to find whether a number is +ve or -ve or zero
#include <iostream>
using namespace std;

int main(){
  int num;

  cout << "Enter a number: " <<endl; cin >> num; 
  
  if(num>0){ 
    cout << "Entered number is +ve" <<endl;
  }
  else if(num<0){
    cout << "Entered number is -ve" <<endl;
  }
  else{
    cout << "Entered number is Zero" <<endl;
  }

    return 0;
}


/*
Ouput:

Enter a number
46
You've Entered an Even number

*/