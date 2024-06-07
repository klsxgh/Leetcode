//9. Palindrome Number - EASY
//https://leetcode.com/problems/palindrome-number/description/

class Solution {
public:
    bool isPalindrome(int x) {
         
        int digit; //digit is used in the while loop to find reverse 

        //NOTE: WE USE LONG LONG TO NOT GET OVERFLOW ERROR
        long long reverse=0; //reverse is initialized as zero because the value will change during loop 
        int copy = x; //we need a copy of x as it will change value [line 20]

        //if value is negative, no way it can be a pallindrome
        if(x<0)
        {
            return false;
        }

        //using while to find the reverse of 'x'
        while(x!=0)
        {
            digit = x%10; //diving by 10 to get the last value of the integer
            reverse = (reverse*10) + digit; //adding the last integer in 'reverse'
            x = x/10; //eleminating last digit from 'x' so we can find the next last value of integer
            //continuing till all values are added to 'reverse'
        }

        //checking if the copy (original value) is same as the reverse value
        if(copy == reverse)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

