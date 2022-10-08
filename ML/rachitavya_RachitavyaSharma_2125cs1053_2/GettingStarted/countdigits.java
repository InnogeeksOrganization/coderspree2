import java.util.*;
  
  public class countdigits{
  
  public static void main(String[] args) {
    // write your code here 
    Scanner sc=new Scanner(System.in);
    int num=sc.nextInt();
    int c;
    for(c=0;num>0;num/=10)
    c++;
    System.out.print(c);
    sc.close();
   }
  }