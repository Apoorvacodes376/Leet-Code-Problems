// class Solution {
//     public void rotate(int[] nums, int k) {
//         int n = nums.length;
//         k = k % n;

//         reverse(nums, 0, n - 1);
//         reverse(nums, 0, k - 1);
//         reverse(nums, k, n - 1);
//     }

//     void reverse(int[] nums, int start, int end) {
//         while (start < end) {
//             int temp = nums[start];
//             nums[start] = nums[end];
//             nums[end] = temp;

//             start++;
//             end--;
//         }
//     }
//     boolean even(int[] arr)
//     {
//         for(int i=0;i<arr.length;i++)
//         {
//             if(arr[i]%2==0)return true;
//         }
//         return false;
//     }
//     public int totalNumbers(int[] digits) {
//         if(!even(digits))return 0;
//         // if()
//         int count=0,l=digits.length;
//         for(int i=0;i<l;i++)
//         {
//             if(rotate(digits,1)%2==0)count++;
//         }
//         return count;
//     }
// }
class Solution {
    public int totalNumbers(int[] digits) {
        HashSet<Integer> set = new HashSet<>();

        for (int i = 0; i < digits.length; i++) {
            for (int j = 0; j < digits.length; j++) {
                for (int k = 0; k < digits.length; k++) {

                    if (i != j && j != k && i != k) {
                        int num = digits[i] * 100 + digits[j] * 10 + digits[k];

                        if (digits[i] != 0 && digits[k] % 2 == 0) {
                            set.add(num);
                        }
                    }
                }
            }
        }

        return set.size();
    }
}
