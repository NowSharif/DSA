
// 890. Find and Replace Pattern

// https://leetcode.com/problems/find-and-replace-pattern/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;



void createUpdateMapping(string& str){

    char start = 'a';
    char mapping[270] = {0};

    // mapping
    for(int i=0; i<str.size(); ++i){
        char ch = str[i];
        if(mapping[ch]==0){
            mapping[ch] = start++;
        }
    }

    // update the string with mapped characters

    for(int i=0; i<str.size(); ++i){
        char ch = str[i];

        str[i] = mapping[ch];
    }


}



vector<string> findAndReplacePattern(vector<string>& words, string pattern) {


    vector <string> ans;
    //normalize the pattern
    createUpdateMapping(pattern);

    //normalize each word & check if it matches the pattern

    for(string str: words){
        string tempStr = str;

        //normalize tempStr
        createUpdateMapping(tempStr);

        if(tempStr == pattern){
            ans.push_back(str);
        }
    }

    return ans;


}

int main() {

  vector <string> words = {"abc","deq","mee","aqq","dkd","ccc"};
  
  string pattern = "abb";


  // vector <string> words = {"a","b","c"};
  // string pattern = "a";


  vector <string> ans;
  ans = findAndReplacePattern(words, pattern);
  cout << "Pattern matched words are:\n" << endl;

  for(string str: ans){
    cout << str << endl;
  }

  
}


/*
Pattern matched words are: 
mee 
aqq

*/


