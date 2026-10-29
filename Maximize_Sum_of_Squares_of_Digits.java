// class Solution {
//     double digitsum(double i, int sum)
//     {
//         double sq=0,add=0,x=i;
//         while(i!=0)
//         {
//             double rem=i%10;
//             add+=rem;
//             i/=10;
//         }
//         if(add==sum)
//         {
//             while(x!=0)
//             {
//                 double rem=x%10;
//                 sq+=Math.pow(rem,2);
//                 x/=10;
//             }
//             return sq;
//         }
//         return -1;
//     }
//     public String maxSumOfSquares(int num, int sum) {
//         double x=Math.pow(10,num);
//         double y=Math.pow(10,num-1);
//         double maxs=-1;
//         for(double i=y;i<x;i++)
//         {
//             // if(digitsum(i,sum))
//             // {
//             //     maxs=max()
//             // }
//             maxs=Math.max(digitsum(i,sum),maxs);
//         }
//         // StringBuilder sb = new StringBuilder(maxs);
//         // return sb;
//         return maxs == -1 ? "" : String.valueOf((long) maxs);

//     }
// }
class Solution {
    public String maxSumOfSquares(int num, int sum) {
        if (sum > num * 9) {
            return "";
        }

        StringBuilder sb = new StringBuilder();

        while (sum > 0 && sb.length() < num) {
            int digit = Math.min(9, sum);
            sb.append(digit);
            sum -= digit;
        }

        while (sb.length() < num) {
            sb.append('0');
        }

        return sb.toString();
    }
}
