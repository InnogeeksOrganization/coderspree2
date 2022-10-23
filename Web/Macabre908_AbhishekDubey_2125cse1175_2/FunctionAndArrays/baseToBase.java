import java.util.*;

public class baseToBase {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int sourceBase = scn.nextInt();
       int  destBase= scn.nextInt();
       int temp = getValueIndecimal(n, sourceBase);
       System.out.println(getValueInBase(temp, destBase));
       scn.close();
     }   
     public static int getValueInBase(int n, int b){
           int temp = 0;
      
          int multfact = 1;
          while(n > 0){
              int d = n % b;
              n = n / b;
              temp = temp + multfact * d;
              multfact = multfact * 10;
          }
      
           return temp;
       }
       
       public static int getValueIndecimal(int n, int b){
          int pow = 0;
          int sum = 0;
          
          while(n > 0){
              int d = n % 10;
              sum = sum + d * (int)Math.pow(b, pow);
              n = n / 10;
              pow++;
          }
          
          return sum;
       }
}
