/* Brute Force aproach
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        for(int i =0;i<n;i++){
            int sum =0 ;
            for(int j=i;j<n;j++){
                sum =sum +nums[j];
                if(sum == k)
                count ++;
            }
        }
        return count;
        
    }
};
*/

// optimal 
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int>mpp;
        mpp[0] =1;
        int presum =0;
        int count =0;
        int n = nums.size();
        for(int i =0 ;i<n ;i++){
            presum = presum+nums[i];
            int remove = presum -k;
            count = count + mpp[remove];
            mpp[presum] = mpp[presum]+1;
        }
        return count;




    }
};