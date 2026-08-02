bool stoneGame(int* nums, int numsSize) {
    if(numsSize==1)return true;
    int c1=0,c2=0,cl1=0,cl2=0,cr1=0,cr2=0;
    if(numsSize%2!=0)
    {
        for(int i=0;i<numsSize;i++)
        {
            if(i%2==0)c1+=nums[i];
            else c2+=nums[i];
        }
        if(c2<c1)return true;
        else return false;
    }
    else
    {
        for(int i=0;i<numsSize;i++)
        {
            if(i%2==0) 
            {
                cl1+=nums[i];
                cr2+=nums[i];
            }
            else 
            {
                cl2+=nums[i];
                cr1+=nums[i];
            }
        }if(cl1>=cl2)return true;
        // else if(cl2>cl1)return false;
        if(cr1>=cr2)return true;
        // else if(cr1<cr2) return false;
        else return false;
    }
    return true;
}
