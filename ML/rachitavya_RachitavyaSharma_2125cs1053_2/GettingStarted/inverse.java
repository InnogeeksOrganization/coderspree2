import java.util.*;
  
  class inverse{
  
  public static void main(String[] args) 
  {
    try (Scanner sc = new Scanner(System.in);) 
    {
        int c,count=0,num,numcp,dig;
        num=sc.nextInt();
        numcp=num;
        for(c=0;num>0;num/=10)
        count++;
        int inv[]=new int[count+1];
        for(c=1;numcp>0;numcp/=10,c++)
        {
            dig=numcp%10;
            inv[dig]=c;
        }
        for(int i=count;i>=1;i--)
        System.out.print(inv[i]);
        sc.close();
    }
}
}