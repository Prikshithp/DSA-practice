class Solution {
public:
int maxi(vector<int>& nums){
    int maxi=0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>maxi){
            maxi=nums[i];
        }

    }
    return maxi;
}
   long long sumByD(vector<int>& nums,int mid){
       long long sum=0;
       for(int i=0;i<nums.size();i++){
           sum+=ceil((double)nums[i]/(double)mid);
       }
       return sum;
   }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low=1;
        int high=maxi(nums);
        while(low<=high){
            int mid=low+(high-low)/2;
            if(sumByD(nums,mid)<=threshold){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
