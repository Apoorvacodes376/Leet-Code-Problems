class Solution {
    public int calPoints(String[] operations) {
        int score=0;
        int l=operations.length;
        Stack<Integer> stack=new Stack<>();
        for(int i=0;i<l;i++)
        {
            // char c=operations.charAt(i);
            // if(Character.isDigit(c))
            if(operations[i].equals("+"))
            {
                // int top=Integer.parseInt(stack.peek()+operations[i]);
                int top=stack.pop();
                int second=stack.peek();
                stack.push(top);
                stack.push(top+second);
            }
            else if(operations[i].equals("D"))
            {
                int top=stack.peek();
                stack.push(top*2);
            }
            else if(operations[i].equals("C"))
            {
                stack.pop();
            }
            else
            {
                stack.push(Integer.parseInt(operations[i]));
            }
        }
        while(!stack.isEmpty())
        {
            score+=stack.pop();
        }
        return score;
    }
}
