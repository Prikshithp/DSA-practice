#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    int maxi=arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    return maxi;
}
