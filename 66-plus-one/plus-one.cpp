class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    int n = digits.size();

    // Start from the last digit and work backwards
    for (int i = n - 1; i >= 0; --i) {
        // If current digit is less than 9, just increment and return
        if (digits[i] < 9) {
            digits[i]++;
            return digits;
        }
        // Set current digit to 0 and carry the 1 to the next left digit
        digits[i] = 0;
    }

    // If all digits were 9, we need an extra digit at the beginning
    digits.insert(digits.begin(), 1);
    return digits;
    }
};