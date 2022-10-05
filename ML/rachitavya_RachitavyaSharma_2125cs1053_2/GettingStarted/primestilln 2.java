import java.util.*;
  
  public class primestilln{
  
  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    int min,max;
    min=scn.nextInt();
    max=scn.nextInt();
    for(int i=min;i<=max;i++)
    {
        int c=2;
        while(c*c<=i)
        {
            if(i%c==0)
            break;
            c++;
        }
        if(c*c>i)
        System.out.println(i);
    }


    scn.close();
    
  
   }
  }