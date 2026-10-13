class Solution 
{
    public boolean sumGame(String num) 
    {
        int l=num.length();
        int suma=0,sumb=0;
        int counta=0,countb=0;
        StringBuilder currentNumber = new StringBuilder();
        for(int i=0;i<l/2;i++)
        {
            char c=num.charAt(i);
            if(c!='?')
            {
                // if (Character.isDigit(c)) {
                //     currentNumber.append(c); 
                // } 
                // else 
                // {           
                //     suma += Integer.parseInt(currentNumber.toString());
                //     currentNumber.setLength(0);
                // }
                suma+=c-'0';
            }
            else 
            {
                counta++;
            }
        }
        // if (currentNumber.length() > 0) {
        //     suma += Integer.parseInt(currentNumber.toString());
        // }
        for(int i=l/2;i<l;i++)
        {
            char c=num.charAt(i);
            if(c=='?')
            {
                countb++;
            }
            else
            {
                // if (Character.isDigit(c)) {
                //     currentNumber.append(c); 
                // } 
                // else 
                // {           
                //     sumb += Integer.parseInt(currentNumber.toString());
                //     currentNumber.setLength(0);
                // }
                sumb+=c-'0';
            } 
        }
        // if (currentNumber.length() > 0) {
        //     sumb += Integer.parseInt(currentNumber.toString());
        // }
        // int diff=(suma>sumb)?suma-sumb:sumb-suma;
        int diff=suma-sumb;
        if((counta+countb)%2!=0)
        {
            return true;
        }
        int target=(countb-counta)/2*9;
        if(diff==target)
        return false;
        return true;
    }
}
