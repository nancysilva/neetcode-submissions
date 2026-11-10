class Solution {
public:
    int search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int middle = left + (right - left) / 2;

            if (nums[middle] == target) {
                return middle;
            }

            // Comprobar si la mitad izquierda está ordenada
            if (nums[left] <= nums[middle]) {

                // Comprobar si target está en la mitad izquierda
                if (target >= nums[left] && target <= nums[middle]) {
                    right = middle - 1;
                }
                else {
                    left = middle + 1;
                }
            }

            // La mitad derecha está ordenada
            else {

                // Comprobar si target está en la mitad derecha
                if (target >= nums[middle] && target <= nums[right]) {
                    left = middle + 1;
                }
                else {
                    right = middle - 1;
                }
            }
        }

        return -1;
    }
};