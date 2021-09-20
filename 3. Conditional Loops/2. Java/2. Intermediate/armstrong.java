import java.util.Scanner;
public class armstrong {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int num, temp, rem, result=0;
        System.out.print("Enter the number ");
        num = sc.nextInt();
        temp = num;
        while(temp!=0){
            rem = temp%10;
            result += rem*rem*rem;
            temp /= 10;
        }
        if(result == num) System.out.print(num + "is a palindrome");
        else System.out.print(num + " is not a palindrome");
        sc.close();
    }
}
