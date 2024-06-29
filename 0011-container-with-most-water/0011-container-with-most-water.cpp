class Solution {
public:
    int maxArea(vector<int>& height) {
        int left=0;
        int rig=height.size()-1;
          
            int result=0;
        while(left<rig)
        {
            int area= min(height[left],height[rig])*(rig-left);
             result=max(area,result);
             if(height[left]>height[rig])
             {
                 rig--;
             }
             else 
             {
                 left++;
             }
        }
        return result;
        
    }
};