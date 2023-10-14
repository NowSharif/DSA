
// 2325. Decode the Message
// https://leetcode.com/problems/decode-the-message/description/

#include <iostream>
#include <vector>
using namespace std;



string decodeMessage(string key, string message) {



        char start = 'a';
        char mapping[270] = {0};

        //Mapping the characters using the key provided
        for(auto ch: key){
            if(ch!=' ' && mapping[ch]==0){
                mapping[ch] = start++;
            }
        }

        //Using the mapping and decoding the message
        string ans;
        for(auto ch:message){

            if(ch==' '){
                ans.push_back(' ');
            }
            else{
                char decodedMsg = mapping[ch];
                ans.push_back(decodedMsg);
            }
        }

        return ans;
}   


int main() {

  string key = "the quick brown fox jumps over the lazy dog";
  string message = "vkbs bs t suepuv";
  string ans;

  ans = decodeMessage(key, message);

  cout << "The decoded message is: \n" << ans << endl;

  
}





/*
Sample test case output:

The decoded message is: 
this is a secret

*/