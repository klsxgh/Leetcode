//27. Remove Element - EASY
//https://leetcode.com/problems/remove-element/description/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count = 0; //count helps us keep track of number of values that are NOT equal to val

        //using for loop to traverse through our array
        for(int i=0; i < nums.size(); i++) //sizeof used to obtain size of our array 'nums'
            {
                if (nums[i] != val) //checking if the value is NOT equal to val
                {
                    //if it is not, then follow if condition
                    nums[count] = nums[i]; // new nums array with count value
                    count++; //increment count
                }
            }
        return count; //return count
    }
};