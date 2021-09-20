import java.util.Scanner;
public class palidrome {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number: ");
        int num = sc.nextInt();
        int temp = num;
        int rev=0,rem;
        do{
            rem = num%10;
            rev = (rev*10)+rem;
            num/=10;
        }while(num != 0);
        if(temp == rev){
            System.out.print(temp + " is a Palindrome Number");
        }
        else{
            System.out.print(temp + " is not a Palindrome Number");
        }
        sc.close();
    }
}
