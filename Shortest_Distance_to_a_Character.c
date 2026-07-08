/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int find(char c,int n,char *s)
{
    for(int i=0;i<n;i++)
    {
        if(c==s[i]) return i;
    }
    return 0;
}

int* shortestToChar(char* s, char c, int* returnSize) {
    int count1=0,count2=0,l=strlen(s),arr1[l],arr2[l],x=0;
    int* arr = (int*)malloc(l * sizeof(int));
    *returnSize=l;
    for(int i=0;i<l;i++)
    {
        x=find(c,l,s);
        if(s[i]!=c) 
        {
            count1++;
        }
        else
        {
            count1=0;
        }
        arr1[i]=fmax(x,count1);
    }
    for(int i=l-1;i>=0;i--)
    {
        x=find(c,l,s);
        if(s[i]!=c) 
        {
            count2++;
        }
        else
        {
            count2=0;
        }
        arr2[i]=fmax(x,count2);
    }
    for(int i=0;i<l;i++)
    {
        arr[i]=fmin(arr1[i],arr2[i]);
    }
    return arr;
}
