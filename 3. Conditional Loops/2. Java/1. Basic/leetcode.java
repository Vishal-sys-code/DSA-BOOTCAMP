import java.util.Scanner;
public class leetcode {

    static int subtractProductAndSum(int num){
        int rem;
        int product=1,sum=0;
        if(num==0 || num==1){
            return -1;
        }
        while(num!=0){
            rem = num%10;
            product*=rem;
            sum+=rem;
            num/=10;
        }
        return (product-sum);
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number: ");
        int num;
        num = sc.nextInt();
        System.out.println("Result is: ");
        System.out.println(subtractProductAndSum(num));
        sc.close();
    }
}
