import java.util.*;

public class Main{
    public static void main(String[] args) {
        // write your code here

      int k,c=0;
      long high,i,low,j;
      Scanner scn = new Scanner(System.in);
      low=scn.nextLong();
      high=scn.nextLong();
      
  
       // write ur code here
       for(i=low;i<=high;i++)
       {
             c=0;
            
             for(j=1;j<=i;j++)
             {
                 if(i%j==0)
                 {
                    c++; 
                 }
               
             }
             if(c==2)
             {
                System.out.println(i);
             }


             

       }
  
   }
}
  
    
