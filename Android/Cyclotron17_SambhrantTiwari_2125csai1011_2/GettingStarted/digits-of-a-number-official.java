import java.util.*;
    
    public class Main{
    
    public static void main(String[] args) {
      // write your code here 
      Scanner sc=new Scanner(System.in);
      int n1=sc.nextInt();
      String str1 = Integer.toString(n1);
      for(int i=0;i<str1.length();i++)
      {
      char ch=str1.charAt(i);
      System.out.println(ch);
          
      }

      
     }
    }