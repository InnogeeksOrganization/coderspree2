import java.util.*;
  
  public class isprime{
  
  public static void main(String[] args) {
    Scanner scn = new Scanner(System.in);
    int t,num;
    t=scn.nextInt();
    for(int i=0;i<t;i++)
    {
        num=scn.nextInt();
        int c=0,j=num;
        for(j=2;j<num;j++)
        if(num%j==0)
        {
        c=1;
        break;
        }
        System.out.println(c==0?"prime":"not prime");
    }


    scn.close();
    
  
   }
  }