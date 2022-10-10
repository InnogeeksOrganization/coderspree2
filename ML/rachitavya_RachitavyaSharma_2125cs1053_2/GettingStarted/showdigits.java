import java.util.*;
  
  class showdigits{
  
  public static void main(String[] args) 
  {
    try (Scanner sc = new Scanner(System.in)) 
    {
        int c,dig,num,numcp;
        num=sc.nextInt();
        numcp=num;
        for(c=0;num>0;num/=10)
        c++;
        while((c--)!=0)
        {
            dig=(int)(numcp/(Math.pow(10,c)));
            numcp=(int)(numcp%(Math.pow(10,c)));
            System.out.println(dig);
        }
        sc.close();
    }
   }
  }