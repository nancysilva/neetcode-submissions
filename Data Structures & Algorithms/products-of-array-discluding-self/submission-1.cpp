
/*
// APPROACH 1: BRUTE FORCE
        // Time Complexity: O(n^2)
        // Two nested loops. For each position, multiply
        // every element except the current one.

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> output(nums.size());

        for (int i = 0; i < nums.size(); i++ ){
            int product = 1; 

            for (int j = 0; j < nums.size(); j++){
                if (i != j ){
                    product *= nums[j];
                }
            }
            output[i] = product;
        }
        return output;
    }
};
*/

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> left(nums.size());
        vector <int> right (nums.size());
        vector <int> output (nums.size());
        int product  = 1;
        
        // 1. Products to the left
        for (int i = 0; i<nums.size(); i++){
            left[i] = product; 
            product *= nums[i]; 
        }
        
        // 2. Products to the right
        product  = 1;
        for (int i = nums.size()-1; i>= 0; i--){
            right[i] = product;
            product *= nums[i];
        }

        // 3. Multiply left and right
        for (int i = 0; i<nums.size(); i++){
            output[i] =  left[i]*right[i];
        }
        return output;
        
    }
};


