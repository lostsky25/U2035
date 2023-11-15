class Solution {
public:
    bool isPerfectSquare(int num) {
        long l = 1;
        long r = num;
        long m = 0;

        if (num == 1) {
            return true;
        }

        while (r - l > 1) {
            m = l + (r - l) / 2;

            if (m * m == num) {
                return true;
            }
            else if (m * m < num) {
                l = m;
            }
            else {
                r = m;
            }
        }
        return false;
    }
};