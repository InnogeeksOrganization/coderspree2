import java.util.*;

public class Main{

public static void main(String[] args) {
  // write your code here  
  long n,n1;
  long d=0,f,p;
  double k;
  Scanner sc=new Scanner(System.in);
  n=sc.nextLong();
  n1=n;
  while(n1!=0)
  {
      d++;
      n1=n1/10;
  }
  for(p=1;p<=d;p++)
  {
      f=n%10;
      k=p*Math.pow(10,f);
      n1=n1+Math.round(k);
      n=n/10;
  }
  n1=n1/10;
  
  System.out.println(n1);
 }
}