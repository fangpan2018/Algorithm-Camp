// 因为要找最大，所以所有的情况要遍历到，
// 但是耗时的是求面积的乘法计算，是计算时间复杂度的unit_time，
// 所以怎么样遍历可以尽量多的不用计算直接排除情况是关键。
// 从两边往中间遍历，每次矮的一边往中间移，直到高于自己为止，计算面积，“更新”，直到前后相遇，
// 当两边相等时，默认一边移动。




class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = 0;
        for(int i=0; i<height.size(); i++){
            if((max/((i>height.size()-1-i)?i:(height.size()-1-i))>height[i])) continue;
            int m_area = 0;
            for(int i_=i+1; i_<height.size(); i_++){
                int area = ((height[i]<height[i_])?height[i]:height[i_])*(i_-i);
                m_area = (m_area>area)?m_area:area;
            }
            if(m_area>max) max = m_area;
        }
        return max; 
    }
        
};



int maxArea(vector<int>& height) {
    int water = 0;
    int i = 0, j = height.size() - 1;
    while (i < j) {
        int h = min(height[i], height[j]);
        water = max(water, (j - i) * h);
        if(height[i]==height[j]){
            while (height[i] <= h && i < j) i++;
            continue;
        }
        while (height[i] <= h && i < j) i++;
        while (height[j] <= h && i < j) j--;
    }
    return water;
}