import java.util.*;
public class Prime_Factor {
    public static boolean isPrime(int n){
        for(int i=2;i<=Math.sqrt(n);i++){
            if(n%i==0) return false;
        }
        return true;
    }
    public static void main(String[] args) {
    // write your code here  
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int temp = n;
        int i=2;
        if(n==1) System.out.println(1);
        else{
            while(temp>1&&i*i<=n){
                if(isPrime(i)&&temp%i==0){ 
                    System.out.print(i+" ");
                    temp/=i;
                }
                else i++;
            }
            if(temp!=1) System.out.print(temp);
        }
        
    }
}
