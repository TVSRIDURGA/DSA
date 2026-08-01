class Solution {
public:
    int maxArea(vector<int>& height) {
        int n = height.size();
        int lp=0,rp=n-1, ans=0;
        while(lp<rp){
            int width = rp-lp;
            int hght = min(height[lp],height[rp]);
            int CurrentWaterVal = width * hght;
            ans = max(ans,CurrentWaterVal);
            height[lp]<height[rp] ? lp++:rp--;
        }
        return ans;

        
    }
};