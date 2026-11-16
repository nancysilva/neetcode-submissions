class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>numbers;
        int longest = 0;

        for (int num: nums){
            numbers.insert(num);
        }

        for (int num: numbers){
            if(numbers.find(num-1) == numbers.end()){
                int currentNum = num;
                int lenght = 1;
                
                 while (numbers.find(currentNum + 1) != numbers.end()){
                    currentNum++;
                    lenght++;
                }
            longest = max(longest,lenght);
            }
        }
        return longest; 
    }
};
