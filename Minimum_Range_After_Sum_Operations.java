class Solution {
    public int minRange(int a, int b, int c) {
        int ans=0;
        // int max=Math.max(a,Math.max(b,c));
        // for(int i=0;i<3;i++)
        // {
        //     if(arr[i]==max)
        //     {
        //         arr[i]=b+c
        //     }
        // }
        int [] arr=new int [3];
        // arr={a,b,c};
        arr[0]=a;
        arr[1]=b;
        arr[2]=c;
        Arrays.sort(arr);
        // arr[2]=arr[0]+arr[1];
        // ans=Math.max(a,Math.max(b,c))-Math.min(a,Math.min(b,c));
        // a=arr[0];
        // b=arr[1];
        // c=arr[2];
        // ans=Math.max(a,Math.max(b,c))-Math.min(a,Math.min(b,c));
        return Math.min(arr[2]-arr[0],arr[1]);
    }
}
