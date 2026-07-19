class Solution {
public:
    string smallestSubsequence(string s) {
                // int n=strlen(s);
        // const char* n=s;
    //     size_t n = 0;
    // for (char ch : s) {
    //     n++;
    // }
    // // for(int i=0;i<n-1;i++)
    // // {
    // //     for(int j=1+i;j<n;j++)
    // //     {
    // //         if(s[i]==s[j])
    // //         {
    // //             for(int k=j;k<n;k++)
    // //             {
    // //                 s[k]=s[k+1];
    // //                 n--;
    // //                 j--;
    // //             }
    // //         }
    // //     }
    // // }
    // for(int i=n-1;i>0;i--)
    // {
    //     for(int j=n-1;j>i;j--)
    //     {
    //         if(s[i]==s[j])
    //         {
    //             for(int k=n;k>j;k--)
    //             {
    //                 s[k]=s[k+1];
    //                 n--;
    //                 j--;
    //             }
    //         }
    //     }
    // }
    // // for(int i=0;i<n-1;i++)
    // // {
    // //     for (int j=i+1;j<n;j++)
    // //     {
    // //         if(s[i]>s[j])
    // //         {
    // //             char temp=s[i];
    // //             s[i]=s[j];
    // //             s[j]=temp;
    // //         }
    // //     }
    // // }
    // // for(int i = 0; i < n; i++) {
    // //     s[i] = s[n - i - 1];
    // // }
    // // s[n] = '\0';
    // // s[n]='\0';
    // return s;
    // }

        int freq[26] = {0};
        bool used[26] = {false};

        for(char c : s)
            freq[c-'a']++;

        string ans = "";

        for(char c : s)
        {
            freq[c-'a']--;

            if(used[c-'a'])
                continue;

            while(ans.size() > 0 &&
                  ans.back() > c &&
                  freq[ans.back()-'a'] > 0)
            {
                used[ans.back()-'a'] = false;
                ans.pop_back();
            }

            ans += c;
            used[c-'a'] = true;
        }

        return ans;
    }
};
