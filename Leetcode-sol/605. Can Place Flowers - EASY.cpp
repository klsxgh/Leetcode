//605. Can Place Flowers - EASY
//https://leetcode.com/problems/can-place-flowers/description/

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {

        // if there is no flowers to be placed, return true
        if (n == 0) {
            return true;        

        // looping through flowerbed array
        for (int i = 0; i < flowerbed.size(); i++) { 

            // conditions to be met:
            // 1. flowerbed[i] == 0 - checking if the current place is zero
            // 2. (i == 0 || flowerbed[i - 1] == 0) - checking if we are in the first element or if the previous element is 0
            // 3. (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0) - checking if i is the last element of the array or check if the next element is 0
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i - 1] == 0) &&
                (i == flowerbed.size() - 1 || flowerbed[i + 1] == 0)) {

                // changing the empty spots to 1 (indicating flower is being placed in that position)
                flowerbed[i] = 1;

                // reducing 'n' (n is the number of flowers to be placed)
                n--;

                // if there is no flowers to be placed, return true (this is post loop)
                if (n == 0) {
                    return true;
                }
            }
        }

        // else return false
        return false;
    }

}
};