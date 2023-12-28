class Solution
{   
    public:
    //Function to return sum of upper and lower triangles of a matrix.
    vector<int> sumTriangles(const vector<vector<int> >& matrix, int n)
    {
        // code here
       vector<int> ans;
       int lsum=0;
       for(int i=0;i<n;i++){
           for(int j=0;j<=i;j++){
               lsum+=matrix[i][j];
           }
       }
       int usum=0;
       for(int i=0;i<n;i++){
           for(int j=n-1;j>=i;j--){
               usum+=matrix[i][j];
           }
       }
       ans.push_back(usum);
       ans.push_back(lsum);
       return ans;
    }
};
