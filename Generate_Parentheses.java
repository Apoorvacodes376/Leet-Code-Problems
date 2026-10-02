class Solution {
    void backtrack(List <String> arr, String str,int open, int close, int max){
        if (str.length()==max*2){
            arr.add(str);
            return;
        }
        if(open<max)backtrack(arr,str+"(",open+1,close,max);
        if(close<open)backtrack(arr,str+")",open,close+1,max);
    }
    public List<String> generateParenthesis(int n) {                                      
        List <String> arr=new ArrayList<>();
        backtrack(arr, "",0,0,n);
        return arr;
    }
}
