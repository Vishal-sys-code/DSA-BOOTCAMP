import java.util.Scanner;
public class palindrome {

    static int palindrome_recursive(int num, int temp){
        if(num == 0){
            return temp;
        }
        temp = (temp*10)+(num%10);
        return palindrome_recursive(num/10,temp);
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Number : ");
        int num = sc.nextInt();
        int temp = palindrome_recursive(num,0);
        if(temp == num){
            System.out.println(num + " is a plaindrome number ");
        }
        else{
            System.out.println(num + " is not a plaindrome number ");
        }
        sc.close();
    }
}
