class Solution {
public:
    int addDigits(int num) {
        int sum;
        do {
            sum = 0; // Reset sum for the new iteration
            while (num != 0) {
                int rem = num % 10;
                sum += rem;
                num /= 10;
            }
            num = sum;
        } while (sum > 9);
        
        return sum; // Return the final single-digit result
    }
};