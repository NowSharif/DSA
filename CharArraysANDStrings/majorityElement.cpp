

// 169. Majority Element

// https://leetcode.com/problems/majority-element/description/

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;






// TC = O(N*N) ; SC = O(1)
int bruteForce(vector<int> &nums) {

for (int i = 0; i < nums.size(); ++i) {
  int currCount = 0;
  int currEle = nums[i];
  for (int j = 0; j < nums.size(); ++j) {
    if (nums[j] == currEle)
      currCount++;
  }

  if (currCount > nums.size() / 2) {
    return nums[i];
  }
}

return -1;
}






// TC = O(N*logN) + O(N)*log(N) = O(N*logN) ; SC = O(N)
int sortedBounds(vector<int> &nums) {

sort(nums.begin(), nums.end());

for (int i = 0; i < nums.size(); ++i) {

  auto it1 = lower_bound(nums.begin(), nums.end(), nums[i]);
  auto it2 = upper_bound(nums.begin(), nums.end(), nums[i]);

  int firstOccurance = it1 - nums.begin();
  int lastOccurance = it2 - nums.begin();

  // cout << "it1 address element: " << *itl << " , it2 address element: " <<
  // *it2 << endl;
  int occuranceCount = lastOccurance - firstOccurance;

  if (occuranceCount > nums.size() / 2) {
    return nums[i];
  }
}

return -1;
}





// TC = O(N*logN) ; SC = O(N)
int sortedMiddle(vector<int> &nums) {

sort(nums.begin(), nums.end());

int middleElement = nums[(0 + nums.size() - 1) / 2];

return middleElement;
}





int majorityElement(vector<int> &nums) {

int ans;
// ans = bruteForce(nums);

// ans = sortedBounds(nums);

ans = sortedMiddle(nums);

return ans;
}



int main() {

vector<int> nums = {2, 2, 1, 1, 1, 2, 2};
int ans;
ans = majorityElement(nums);
cout << "The Majority Element is:\n" << ans << endl;
}

/*
Sample Testcase Output:

The Majority Element is: 
2

*/
