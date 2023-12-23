class Solution {
public:
    int missingNumber(vector<int>& nums) {
       int n=nums.size();
       int sum=n*(n+1)/2;
       int summ2=0;
       for(int i=0;i<n;i++){
           summ2+=nums[i];
       }
       return sum-summ2;
        
    }
};
