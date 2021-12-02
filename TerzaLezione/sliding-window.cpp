#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <algorithm>

using namespace std;

/*
  Given a string s, find the length of the longest substring without repeating characters.

  Example
  Input: "abcabcbb"
  Output: 3

  Input: "pwwkew"
  Output: 3
*/

int lengthOfLongestSubstring(string s) {
  int maxLen = 0;
  int start = 0, end = 0;
  unordered_set<char> occ;
  while(end < s.size()){
    while(occ.find(s[end]) != occ.end()){
      occ.erase(s[start]);
      start++;
    }
    occ.insert(s[end]);
    end++;
    maxLen = max(maxLen, end - start);
  }
  return maxLen;
}

int main(){
  cout << lengthOfLongestSubstring("abcabcbb") << '\n';
  cout << lengthOfLongestSubstring("pwwkew") << '\n';
}