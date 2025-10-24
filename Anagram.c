bool isAnagram(char* s, char* t) 
{
    int n=strlen(s);
    int m=strlen(t);
    if(n!=m) return 0;
    else
    {
        int counts[26] = {0};
        for(int i=0;i<n;i++)
        {
            counts[s[i] - 'a']++;
            counts[t[i] - 'a']--;
            // int j=0;
            // while(m!=0)
            // //for(int j=0;j<m;j++)
            // {
            //     if(t[j]==s[i]) 
            //     {
            //         return 1;
            //         // break;
            //     }   
            //     else {
            //         return 0;
            //         break;
            //     }
            //     m--;
            //     j++;
            //     // else if(t[j]!=s[i]||t[j]!=s[j]) return 0;
            //     // else 
            //     // {
            //     //     // return 0;
            //     //     // break;
            //     //     for(int k=0;k<n;k++)
            //     //     {
            //     //         if(t[j]==s[k])return 1;
            //     //         else return 0;
            //     //     }
            //     // }
            // }
        
        }
        for (int i = 0; i < 26; i++) 
        {
            if (counts[i] != 0) return false;
        }
    }
    return 1;
}
