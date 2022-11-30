class Solution {
public:
    int reverse(int x) {
        int digit, result = 0;
        while (x != 0) {
            digit = x % 10;
            
            result = result * 10 + digit;

            /*if ((result > INT_MAX / 10) || (result < INT_MIN / 10)){
                return 0;
            }*/
            x /= 10;
        }
        return result;
            
    }
};