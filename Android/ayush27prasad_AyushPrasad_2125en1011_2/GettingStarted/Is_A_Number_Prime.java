import java.util.*;
  
  public class Main{
    public static boolean PrimeCheck(int x){
        for(int i=2;i*i<=x;i++){
            if(x%i ==0)
                return false;
        }
        return true;
        
    }
  
  public static void main(String[] args) {
      Scanner scn = new Scanner(System.in);
    int t= scn.nextInt();
    while(t-->0){
        if(PrimeCheck(scn.nextInt()))
            System.out.println("prime");
        else
        System.out.println("not prime");
        
    }
  
   }
  }
