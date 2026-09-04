class Solution {
public:
    bool checkPerfectNumber(int num) {
        // 1 has no proper positive divisors besides itself, so it cannot be perfect
        if (num <= 1) return false; 
        
        int sum = 1;
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                sum += i;
                // Add the paired divisor (e.g., if num=28 and i=2, add 14)
                // The condition ensures we don't add the square root twice (e.g., for 36, 6*6)
                if (i * i != num) {
                    sum += num / i;
                }
            }
        }
        
        return sum == num;
    }
};