// faster than 100.00% 
// less than 100.00%

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector <int> re {1};
        
        for(int to =1; to <= rowIndex; to++){
            for(int i = to-1; i>=1; i--){
                re[i] = re[i] + re[i-1];
            }
            re.push_back(1);
        }
        return re;
    }
};  