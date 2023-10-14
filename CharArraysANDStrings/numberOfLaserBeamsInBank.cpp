
// 2125. Number of Laser Beams in a Bank

// https://leetcode.com/problems/number-of-laser-beams-in-a-bank/description/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



int numberOfBeams(vector<string>& bank) {

    int prevRowDevices = 0;
    int ans = 0;

    for(int i=0; i<bank.size(); ++i){

        int CurrRowDevices = 0;

        for(int j=0; j<bank[i].size(); ++j){
            if(bank[i][j]=='1'){
                CurrRowDevices++;
            }
        }

        if(CurrRowDevices!=0){
            ans += CurrRowDevices*prevRowDevices;
            prevRowDevices = CurrRowDevices;
        }

    }


    return ans;
}




int main() {

  vector <string> bank = {"011001","000000","010100","001000"};


  // vector <string> bank = {"000","111","000"};
  


  int ans;
  ans = numberOfBeams(bank);
  cout << "No.of beams in the bank are:\n" << ans << endl;


  
}


/*
No.of beams in the bank are: 
8

*/


