import java.util.*;
    
    public class Main{
    
    public static void main(String[] args) {
      // write your code here 
      Scanner sc=new Scanner(System.in);
      int n1=sc.nextInt();
      String str1 = Integer.toString(n1);
      for(int i=(str1.length())-1;i>=0;i--)
      {
      char ch=str1.charAt(i);
      System.out.println(ch);
          
      }

      
     }
    }