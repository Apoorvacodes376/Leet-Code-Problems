/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* scoreValidator(char** events, int eventsSize, int* returnSize) {
    int s=0;
    int count=0;
    for(int i=0;i<eventsSize;i++)
    {
        char ch=events[i][0];
        if (count==10) break;
        switch(ch)
        {
            case 0:
                s+=0;
                break;
            case '1':
                s++;
                // count++;
                break;
            case '2':
                s+=2;
                // count++;
                break;
            case '3':
                s+=3;
                // count++;
                break;
            case '4':
                s+=4;
                // count++;
                break;
            case '5':
                s+=5;
                // count++;
                break;
            case '6':
                s+=6;
                // count++;
                break;
            // case 'WD':
            //     // count++;
            //     s++;
            //     break;
            case 'W':
                // s++;
                // count++;
                // break;
                if(events[i][1] == 'D')
                    s += 1;
                else
                    count++;
                break;
            
            case 'N':
                s++;
                // count++;
                break;
        }
    }
    int* ans = (int*)malloc(2 * sizeof(int));

    ans[0] = s;
    ans[1] = count;

    *returnSize = 2;

    return ans;

}
