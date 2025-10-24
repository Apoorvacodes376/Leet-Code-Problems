int numWaterBottles(int n, int e) {
    int cb=0;
    
    while(n>=e)
    {
        cb+=e;
        n-=e;
        n++;
    }
    return cb+n;

//     int q,r,c=n+n-1;
//     r=n%e;
//     for(int i=0;r<e;i++)
    
//     // while(r>0)
//     {
        
//         // c=n+r+q+e;
//         r=0;
//         q=0;
//         while(q>=0)
//         {
//             q=n/e;
//             c=c+q+r;
            
//         }
        
        
//         // if(r!=0)
//         // {
//         //     r=n%e;
//         //     c=c+r;
//         //     break;
//         // }
//         // c=c+q+r;
//     }
//     return c;
//     // // int y=numBottles;
//     // // int x=numBottles%numExchange;
    
//     // // while(numExchange)
//     // // {
//     // //     x=numBottles%numExchange;
//     // //     y+=x;
//     // //     x=x+1;
//     // // }
//     // // return y;

//     // int count=0;
//     // int qu;
//     // int rem;
//     // rem=n%e;
//     // while(qu>e)
//     // {
//     //     qu=n/e;
//     //     if(e>qu) count++;
//     //     rem=n%e;
//     //     count=count+n+qu+rem+1;
//     // }
//     // return count;
}
