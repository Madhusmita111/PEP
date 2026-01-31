class Solution {
public:
    string reverseWords(string s) {
        int i = 0;
        string st;
        while(i<s.length()){
            if(i<s.length() && s[i] == ' '){
                while(i<s.length() && s[i] == ' '){
                    i++;
                }
            }else{
                string b = "";
                while(i<s.length() && s[i] != ' '){
                    b += s[i];
                    i++;
                }
                st.insert(0,' '+b);
            }
        }
        st.erase(0,1);

        return st;
    }
};