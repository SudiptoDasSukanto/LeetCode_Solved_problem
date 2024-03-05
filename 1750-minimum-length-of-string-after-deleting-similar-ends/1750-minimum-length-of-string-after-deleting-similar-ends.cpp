class Solution {
public:
    int minimumLength(string s) {
        int len = s.length();
        int i=0, j = s.length()-1;
        while(i<j){
            if(s[i]==s[j]){
                char ch = s[i];
                while(1){
                    if(s[i]==ch && i<=j){
                        i++;
                    }else {
                        break;
                    }
                }
                while(1){
                    if(s[j]==ch && i<=j){
                        j--;
                    }else{
                        break;
                    }
                }
            }else{
                break;
            }
        }
        return (j-i+1);
    }
};