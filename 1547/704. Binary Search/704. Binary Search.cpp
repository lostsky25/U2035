int search(vector<int>& nums, int target) {
    int l = 0;
    int r = nums.size();
    int m = 0;

    while (r - l > 1) {
        m = l + (r - l) / 2;

        if (nums[m] <= target) {
            l = m;
        }
        else {
            r = m;
        }
    }

    if (nums[l] != target) {
        return -1;
    }

    return l;
}