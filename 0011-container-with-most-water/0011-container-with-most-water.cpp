class Solution {
public:
    int maxArea(vector<int>& height) {
        int s=0,e=height.size()-1,maxarea=0,area=0;
        while(s<e){
            area=min(height[s],height[e])*(e-s);
            maxarea=max(maxarea,area);
            if(height[s]<height[e]) s++;
            else e--;
            
        }
        return maxarea;
        
    }
};