
// 2391. Minimum Amount of Time to Collect Garbage
// https://leetcode.com/problems/minimum-amount-of-time-to-collect-garbage/description/

#include <iostream>
#include <vector>
using namespace std;

int garbageCollection(vector<string> &garbage, vector<int> &travel) {

  int pickP = 0;
  int pickG = 0;
  int pickM = 0;

  int travelP = 0;
  int travelG = 0;
  int travelM = 0;

  int lastP = 0;
  int lastG = 0;
  int lastM = 0;

  // calculating time to pick to the garbage
  for (int i = 0; i < garbage.size(); ++i) {

    string curr = garbage[i];

    for (int j = 0; j < curr.size(); ++j) {

      if (curr[j] == 'P') {
        lastP = i;
        pickP++;
      } else if (curr[j] == 'G') {
        lastG = i;
        pickG++;
      } else if (curr[j] == 'M') {
        lastM = i;
        pickM++;
      }
    }
  }

  // calculating the time to travel to houses

  for (int i = 0; i < lastP; ++i) {
    travelP += travel[i];
  }

  for (int i = 0; i < lastG; ++i) {
    travelG += travel[i];
  }

  for (int i = 0; i < lastM; ++i) {
    travelM += travel[i];
  }

  int ans = (pickP + travelP) + (pickG + travelG) + (pickM + travelM);

  return ans;
}

int main() {

  vector<string> garbage = {"G", "P", "GP", "GG"};
  vector<int> travel = {2, 4, 3};
  int ans = garbageCollection(garbage, travel);

  cout << "The minimum time to collect all the garbage is:\n" << ans << " minutes " << endl;
}




/*
sample test case output:

The minimum time to collect all the garbage is: 
21 minutes
*/