class Solution {
public:

    void swap(int s ,int e, vector<int>& nums){
     
        while(s<e){
            int temp =nums[s];
            nums[s]=nums[e];
            nums[e]=temp;
            s++;
            e--;

        }
    }
    void rotate(vector<int>& nums, int k) {
    
    int n=nums.size();
    swap(0,n-1,nums);
       k=k%nums.size();
    swap(0,k-1,nums);
    swap(k,n-1,nums); 
    

    }
};