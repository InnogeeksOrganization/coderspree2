import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
   Scanner sc =new Scanner(System.in);
   int n = sc.nextInt();
   int c=0;
   while(n>0){
       n/=10;
       c++;
   }
   System.out.println(c);
   }
  }
