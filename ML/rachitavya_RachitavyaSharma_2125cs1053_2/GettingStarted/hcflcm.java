import java.util.Scanner;

class hcflcm 
{
    public static void main(String args[])
    {
        Scanner sc=new Scanner(System.in);
        int num1,num2,min,max,hcf=0;
        num1=sc.nextInt();
        num2=sc.nextInt();
        min=Math.min(num1,num2);
        max=Math.max(num1,num2);
        for(int i=1;i<=min;i++)
            if(max%i==0 && min%i==0)
            hcf=i;
        System.out.print(hcf+"\n"+((num1*num2)/hcf));
        sc.close();
    }
}
