class Solution {
public:
    int maxArea(vector<int>& height) {
      int maxiarea=0;
      int left=0;
      int right=height.size()-1;
      while(left<right){
        int w=right-left;
        int h=min(height[left],height[right]);
        int area=w*h;
        maxiarea=max(area,maxiarea);
        if(height[left]<height[right]){
            left++;
        }
        else {
            right--;
        }
    } 
      return maxiarea;
    }
};
