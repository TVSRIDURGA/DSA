class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        // brute force 
        int n = nums.size();
        for(int i =0; i<n ;i++){
            //[1,2(i-1),3(i),4(i-1),1]
            bool left = (i== 0 || nums[i-1]< nums[i]);
            bool right =( i== n-1 || nums[i]> nums[i+1]);
            if(left && right ){
                return i;

            }
        }
        return -1;

        
    }
};