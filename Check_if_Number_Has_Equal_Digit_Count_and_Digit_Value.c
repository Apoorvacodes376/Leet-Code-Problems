bool digitCount(char* nums) {
    for (int i = 0; i < strlen(nums); i++) {
        int count = 0;

        for (int j = 0; j < strlen(nums); j++) {
            if (i == nums[j] - '0') {
                count++;
            }
        }
        if (count != nums[i] - '0')
            return false;
    }
    return true;
}
