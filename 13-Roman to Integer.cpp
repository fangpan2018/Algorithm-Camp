// faster than 91.69%  
// less than 85.29%

class Solution {
public:
    int romanToInt(string s) {
        int i = 0 , re = 0;
        while(i<s.size()){
            if(s[i]=='M'){
                re += 1000;
                i++;
                continue;
            }
            if(s[i]=='D'){
                re += 500;
                i++;
                continue;
            }
            if(s[i]=='C'){
                if(s[i+1] == 'D' || s[i+1] == 'M') {
                    re -= 100;
                    i++;
                    continue;
                }
                re += 100;
                i++;
                continue;
            }
            if(s[i]=='L'){
                re += 50;
                i++;
                continue;
            }
            if(s[i]=='X'){
                if(s[i+1] == 'L' || s[i+1] == 'C') {
                    re -= 10;
                    i++;
                    continue;
                }
                re += 10;
                i++;
                continue;
            }
            if(s[i]=='V'){
                re += 5;
                i++;
                continue;
            }
            if(s[i]=='I'){
                if(i<s.size()-1 && s[i+1]!='I'){
                    if(s[i+1] == 'V' || s[i+1] == 'X') {
                        re -= 1;
                        i++;
                        continue;
                    }
                }
                re += 1;
                i++;
                continue;
            }
        }
        return re;
    }
};