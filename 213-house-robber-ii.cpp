// 
// 将首位相连的问题，转化为两个问题。
// 去头和去尾的两个问题。
// 有点巧。
// 
// 
class Solution {
public:
    int rob(vector<int>& nums) {
        if(nums.size()==0)   return 0;
        else if(nums.size()==1)  return nums[0];
        else if(nums.size()==2)  return nums[0]>nums[1]?nums[0]:nums[1];
        else{
            int l = robber(nums,0,nums.size()-2);            
            int r = robber(nums,1,nums.size()-1);
            return l>r?l:r;
        }
    }

    int robber(vector<int>& nums, int b, int e){
        if(b == e)  return nums[b];
        else if(e-b==1){return nums[b]>nums[e]?nums[b]:nums[e];}
        else{
            vector<int> re;
            re.push_back(nums[b]);
            re.push_back(nums[b]>nums[b+1]?nums[b]:nums[b+1]);
            // cout<<re.size()<<endl;
            for(int i=2; i<=e-b; i++) {
                // cout<<1;
                re.push_back(
                    (re[i-2]+nums[b+i])>re[i-1]?(re[i-2]+nums[b+i]):re[i-1]
                );
                cout<<re[i]<<endl;
            }
            return re[e-b];
        }
    }
};