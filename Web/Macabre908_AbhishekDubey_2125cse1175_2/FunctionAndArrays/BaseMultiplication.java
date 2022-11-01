import java.util.*;

public class BaseMultiplication {
    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int b = scn.nextInt();
        int n1 = scn.nextInt();
        int n2 = scn.nextInt();
    
        int d = getProduct(b, n1, n2);
        System.out.println(d);
        scn.close();
    }
    
    public static int getProduct(int b, int n1, int n2){
        int prod = getValueIndecimal(n1, b) * getValueIndecimal(n2, b);
        return getValueInBase(prod, b);
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
