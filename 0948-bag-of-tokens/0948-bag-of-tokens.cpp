class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        sort(tokens.begin(),tokens.end());
        int len = tokens.size();
        int socre = 0 ;
        int i=0;
        if(len==0) return 0;
        if(tokens[i]>power) return 0;
        if(len==1) return 1;
        else{
            while(power>=tokens[i]){
                socre++;
                power-=tokens[i];
                i++;
            }
        }
        int j =len-1 ;
        while(j-i+1>0){
            if(tokens[i]<=power){
                power-=tokens[i];
                i++;
                socre++;
            }else{
                if(j-i+1>1){
                    socre--;
                    power+=tokens[j];
                    j--;
                }else{
                    break;
                }
            }
        }
        return socre;
    }
};