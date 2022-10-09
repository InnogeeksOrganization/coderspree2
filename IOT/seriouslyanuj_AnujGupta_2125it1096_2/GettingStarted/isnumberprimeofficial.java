import java.util.Scanner;
  
  public class Main{
  
  public static void main(String[] args) 
  {
      Scanner sc = new Scanner(System.in);
      int t = sc.nextInt();
      
      for(int i = 0; i < t; i++)
      {
          int n = sc.nextInt();
          
          int k = 2;
          while(k * k <= n)
          {
              if(n % k == 0)
              {
                  break;
              }
              k++;
          }
          
          if(k * k > n)
          {
              System.out.println("prime");
          } 
          else 
          {
              System.out.println("not prime");
          }
      }
  
   }
  }