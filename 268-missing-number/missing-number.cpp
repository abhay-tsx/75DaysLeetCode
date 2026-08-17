class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int i,sum=0,ans=0;
        
        for(i=0;i<nums.size();i++){
            sum=sum+(i+1);
            ans=ans+nums[i];
        }
        ans=sum-ans;
        return ans;
    }
        
    
};