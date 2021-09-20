import java.util.Scanner;
public class sumofalldigits {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number: ");
        int num = sc.nextInt();
        int rem;
        int sum = 0;
        while(num>0){
            rem = num%10;
            sum += rem;
            num/=10;
        }
        System.out.println("The sum of all digits: " + sum);
        sc.close();
    }
}
