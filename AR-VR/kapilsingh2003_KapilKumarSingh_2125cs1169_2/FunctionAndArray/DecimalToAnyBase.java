import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
      int n = scn.nextInt();
      int b = scn.nextInt();
      int dn = getValueInBase(n, b);
      System.out.println(dn);
   }
  
   public static int getValueInBase(int n, int b){
      int p=0, pow = 1;
        while(n!=0){
          int x = n%b;
          p += x*pow;
          pow = pow*10;
          n = n/b;
          }
        
        return p;
     }
   
  }