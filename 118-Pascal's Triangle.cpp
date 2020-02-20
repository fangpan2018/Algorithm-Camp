// faster than 61.18% 
// less than 88.89% 

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> re;
        if(numRows==1)  { re.push_back(*new vector<int> (1,1)); return re;}
        else if(numRows == 2){ re.push_back(*new vector<int> (1,1)); re.push_back(*new vector<int>(2,1)); return re;}
        
        else if(numRows >2){
            re.push_back(*new vector<int> (1,1));
            re.push_back(*new vector<int> (2,1));
            for(int i = 3; i<=numRows; i++){
                vector<int> v(i);
                v[0] = 1; v[i-1] = 1;
                for(int ii =1; ii<i-1; ii++){
                    v[ii] = re[i-2][ii-1]+re[i-2][ii];
                }
                re.push_back(v);
            }
        }
        return re;
    }
};