import java.util.*;
  
  public class Main{
  
  public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n= scn.nextInt();
        System.out.println("0");
        System.out.println("1");
        int f1=0, f2=1, f3;
        for(int i=2; i<n; i++){
            f3=f1+f2;
             System.out.println(f3);
             f1=f2;
             f2=f3;
            
        }
   }
  }