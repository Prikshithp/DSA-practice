class Solution {
public:


    int findmax(vector<int>& piles){
        int maxi=0;
        for(int i=0;i<piles.size();i++){
            maxi=max(maxi,piles[i]);
        }
        return maxi;
    }
    long long calculateHour(vector<int>& piles, int h){
        long long totalH=0;
        for(int i=0;i<piles.size();i++){
            totalH += (piles[i] + h - 1) / h;
            // totalH += ceil((double)piles[i]/(double)h);
        }
        return totalH;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1, high = findmax(piles);

    //apply binary search:
    while (low <= high) {
        int mid = low +( high - low) / 2;
        long long totalH = calculateHour(piles, mid);
        if (totalH <= h) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }
    return low;
    }
};
