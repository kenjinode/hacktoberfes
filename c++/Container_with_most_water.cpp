//https://leetcode.com/problems/container-with-most-water/

class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int area=0;
        int l=0;
        int r=height.size()-1;
    while (l<r)
    {
            area = max(area, min(height[l], height[r]) * (r - l));
            if(height[l]<height[r])
              l++;
            else
              r--;
    }
    return area;
    }
};
