class Solution {
public:
    int firstUniqChar(string s) {
        vector<int> arr(26,0);
        int a = -1;
        for(int i=0; i<s.length(); i++){
            int b = s[i];
            b -= 97;
            arr[b]++;
            
        }
        for(int i=0; i<s.length(); i++){
            if(arr[s[i]-'a'] == 1){
                a = i;
                break;
            }
        }
        return a;
    }
};