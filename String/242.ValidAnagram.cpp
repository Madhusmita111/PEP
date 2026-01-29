// it is leetcode question, so I'm writting the solution with the approach.

// Given two strings s and t, return true if t is an anagram of s, and false otherwise.

// Example 1:
// Input: s = "anagram", t = "nagaram"
// Output: true

// Example 2:
// Input: s = "rat", t = "car"
// Output: false

// Constraints:
// 1 <= s.length, t.length <= 5 * 104
// s and t consist of lowercase English letters.


class Solution {
public:
    bool isAnagram(string s, string t) {
        int visited[26] = {0};
        if(s.length() != t.length())return false;
        for(char i:s){
            visited[i-'a']++;
        }
        for(char i:t){
            visited[i-'a']--;
            if(visited[i-'a']<0)return false;
        }
        return true;
    }
};
