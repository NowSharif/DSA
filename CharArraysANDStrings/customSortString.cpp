


// 791. Custom Sort String

// https://leetcode.com/problems/custom-sort-string/description/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

static string str;


static bool customCompare(char ch1, char ch2){
    return str.find(ch1)<str.find(ch2);
}


string customSortString(string order, string s) {
    str = order;

    sort(s.begin(), s.end(), customCompare);

    return s;
}

int main() {

  string order = "cba";
  string s = "abcd";

  string ans = customSortString(order, s);
  cout << "Custom sorted string is:\n" << ans << endl;
}


/*
Custom sorted string is: 
cbad

*/