// class Solution {
// public:
//     int n;
//     int arr[10000];
//     int count=0;
//     bool isPrime(int num) 
//     { 
//         if (num <= 1) return false; 
//         if (num == 2) return true; 
//         if (num % 2 == 0) return false; 
//         for (int i = 3; i * i <= num; i += 2) 
//         { 
//             if (num % i == 0) return false; 
//         } 
//         return true; 
//     } 
//     int countPrimes(int n)
//     {
//         for (int i = 2; i < n; i++)
//         {
//             if (isPrime(i))
//                 count++;
//         }
//         return count;
//     }
// };
class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        vector<bool> prime(n, true);
        prime[0] = prime[1] = false;

        for (int i = 2; i * i < n; i++) {
            if (prime[i]) {
                for (int j = i * i; j < n; j += i)
                    prime[j] = false;
            }
        }

        int count = 0;
        for (int i = 2; i < n; i++)
            if (prime[i]) count++;

        return count;
    }
};
