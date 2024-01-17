class Solution{
public:	
	
	
	int isPalindrome(string S)
	{
	    // Your code goes here
	    string temp=S;
	    int low=0,high=S.length()-1;
	    while(low<=high){
	        swap(S[low],S[high]);
	        low++;
	        high--;
	    }
	    if(S==temp){
	        return 1;
	    }
	    else{
	        return 0;
	    }
	}

};
