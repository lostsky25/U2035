class Solution {
public:
    int lenOfNumber(int num) {
        int count = 0;

        while (num != 0) {
            num /= 10;
            count++;
        }
        return count;
    }

    int reverse(int x) {
        int len = lenOfNumber(x);
        int answ = 0;

        while (len > 0) {
            if (answ > INT_MAX / 10 || answ < INT_MIN / 10) {
                return 0;
            }

            answ *= 10;
            answ += (x % 10);
            x /= 10;
            len--;
        }
        return answ;
    }
};