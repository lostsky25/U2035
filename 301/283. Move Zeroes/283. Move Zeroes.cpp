void moveZeroes(vector<int>& nums) {
    int r = 0;

    for (int l = 0; l < nums.size(); ++l) {
        while (r < nums.size() && nums[r] == 0) ++r;

        if (r < nums.size() && nums[l] == 0 && nums[r] != 0)
            swap(nums[l], nums[r]);

        ++r;
    }
}