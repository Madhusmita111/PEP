// solution uses the concept of bit masking, we have taken one integer which stores 
// 32 bits, they we are checking if any bit of that int is set or not, if it's set, means it's visited
// Tine Complexity: O(n), Space Complexity : O(1)

class Solution {
  public:
    string firstRepChar(string s) {
        // code here.
        int mask = 0;
        int index = -1;
        for(int i=0 ; i<s.length(); i++){
            int ascii = s[i];
            ascii -= 97;
            if(mask&(1<<ascii)){
                index = i;
                break;
            }
            mask = mask|(1<<ascii);
        }
        if(index == -1)return "-1";
        return string(1,s[index]);
    }
};


// we are using a boolean vector of size 26 and checking if at any index is it returning true, if true means 
// already visited.
// Time Complexity : O(n), Space Complexity : O(1)

class Solution{
    public:
    string FirstRepeatedCharacter(string s){
        string ans = "";
        vector<bool> visited(26,false);
        for(char i:s){
            if(visited[i]){
                ans += i;
                return ans;
            }
            visited[i] = true;
        }
        return "-1";
    }
};