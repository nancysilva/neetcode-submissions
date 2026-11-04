//Time Complexity: O(n)

class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()- 1;
        int maxArea = 0;

        while (left<right){
            int currentWidth = right-left;
            int minHeight = min(heights[left],heights[right]);

            if (maxArea < currentWidth * minHeight){
                maxArea = currentWidth * minHeight;
            }

            if ( heights[left]< heights[right]){
                left++;
            }else{
                right--;
            }

        }
        return maxArea;
    }
};
