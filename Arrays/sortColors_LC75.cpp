// Given an array nums with n objects colored red, white, or blue, sort them
// in-place so that objects of the same color are adjacent, with the colors in
// the order red, white, and blue.

// We will use the integers 0, 1, and 2 to represent the color red, white, and
// blue, respectively.

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> p) {

  for (int i = 0; i < p.size(); ++i) {
    cout << p[i] << " ";
  }
}

// Using temp vector ; TC=O(N) ; SC=O(N)
void sortColors1(vector<int> &v) {
  vector<int> temp;
  int k = 0;

  // find & place 0s
  for (int i = 0; i < v.size(); ++i) {
    if (v[i] == 0) {
      temp.push_back(v[i]);
    }
  }

  // find & place 1s
  for (int i = 0; i < v.size(); ++i) {
    if (v[i] == 1) {
      temp.push_back(v[i]);
    }
  }

  // find & place 2s
  for (int i = 0; i < v.size(); ++i) {
    if (v[i] == 2) {
      temp.push_back(v[i]);
    }
  }

  v = temp;
}

// Using count of each color; TC=O(N) ; SC=O(1)
void sortColors2(vector<int> &v) {

  int zeroes = 0;
  int ones = 0;
  int twos = 0;

  for (int i = 0; i < v.size(); ++i) {
    if (v[i] == 0) {
      zeroes++;
    } else if (v[i] == 1) {
      ones++;
    } else {
      twos++;
    }
  }

  for (int i = 0; i < zeroes; i++) {
    v.push_back(0);
  }

  for (int i = 0; i < ones; i++) {
    v.push_back(1);
  }

  for (int i = 0; i < twos; i++) {
    v.push_back(2);
  }
}

// Using 2 pointers approach; TC=O(N) ;SC=O(1)

void sortColors3(vector<int> &v) {
  int n = v.size();
  int i = 0, l = 0, r = n - 1;

  while (i <= r) {
    if (v[i] == 0) {
      swap(v[i], v[l]);
      i++;
      l++;
    }

    else if (v[i] == 2) {
      swap(v[i], v[r]);
      r--;
    } else { // v[i]==1
      i++;
    }
  }
}

int main() {

  vector<int> v = {2, 0, 2, 1, 1, 0};

  cout << "Printing Vector before sorting colors: " << endl;
  printVector(v);

  // sortColors1(v);
  // sortColors2(v);

  sortColors3(v);

  // Approach-4: Using sorting - TC=0(N*logN) ; SC=0(1)
  // sort(v.begin(), v.end());

  cout << "\nPrinting Vector after sorting colors: " << endl;
  printVector(v);

  return 0;
}


/*
sample test case:

Printing Vector before sorting colors: 
2 0 2 1 1 0 
Printing Vector after sorting colors: 
0 0 1 1 2 2


*/