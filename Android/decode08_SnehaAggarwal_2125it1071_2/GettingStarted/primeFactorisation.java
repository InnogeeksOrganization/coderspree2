import java.util.*;

public class Main{

public static void main(String[] args) {
 Scanner scn = new Scanner(System.in);
 int n=scn.nextInt();
 int i=2;
while(n!=1){
    if(n%i==0){
    System.out.print(i+" ");
    n/=i;
    }
    else 
    i++;
}
 
 }
}