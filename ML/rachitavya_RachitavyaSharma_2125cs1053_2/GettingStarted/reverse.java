import java.util.*;
  
  public class reverse{
  
  public static void main(String[] args) {
    // write your code here 
    Scanner sc=new Scanner(System.in);
    int num=sc.nextInt();
    for(int d;num>0;num/=10)
    {
        d=num%10;
        System.out.println(d);
    }
    
    sc.close();
   }
  }