import java.util.*;
    
    public class Main{
    
    public static void main(String[] args) {
     Scanner scn= new Scanner(System.in);
     int a=scn.nextInt();
     int b= scn.nextInt();
     int i;
      for(i=Math.min(a,b); i>=1; i--){
          if(a%i==0 && b%i==0){
              System.out.println(i);
              break;
          }
      }
      System.out.println((a*b)/i);
     }
    }