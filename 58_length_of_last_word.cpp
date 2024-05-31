class Solution {
public:
    int lengthOfLastWord(string s) {
        int len=0, lastlen=0;
        for(char c : s){
            if(c==' '){
                if(len){
                    lastlen=len;
                }
                len=0;
                continue;
            }
            len++;
        }
        if(s[s.size()-1] == ' '){
            return lastlen;
        }
        else {
            return len;
        }
    }
}; 
