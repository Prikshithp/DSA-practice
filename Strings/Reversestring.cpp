class Solution
{
    public:
    string reverseWord(string str)
    {
        // Your code goes here
        int n=str.length();
        int low=0;
        int high=n-1;
        while(low<=high){
            swap(str[low],str[high]);
            low++;
            high--;
        }
        return str;
    }
};
