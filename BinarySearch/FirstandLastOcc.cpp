class Solution {
public:
   int search_first(vector<int>& nums, int target,int n){
    int low = 0;
    int high = n-1;
    int ans  = -1;
    while(low <= high){
        int mid = (low+high)/2;
        if(nums[mid] == target) {
            ans = mid;
            high = mid-1;
        }
        else if(nums[mid] > target) high = mid-1;
        else low = mid+1;
    }
    return ans;
   }

   int search_last(vector<int>& nums, int target,int n){
        int low = 0;
        int high = n-1;
        int ans = -1;
        while(low <= high){
            int mid = (low+high)/2;
            if(nums[mid] == target){
                ans = mid;
                low = mid+1;
            }
            else if(nums[mid] < target) low = mid+1;
            else high = mid-1;
        }
    return ans;
   }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        int n = nums.size();
        int first = search_first(nums,target,n);
        int last = search_last(nums,target,n);
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};
