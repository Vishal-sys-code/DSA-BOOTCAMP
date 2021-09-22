import java.util.Scanner;
public class primeinterval {

    static boolean isPrime(int n, int i){
        if (n <= 2)
            return (n == 2) ? true : false;
        if (n % i == 0)
            return false;
        if (i * i > n)
            return true;
      
        return isPrime(n, i + 1);
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Number : ");
        int num = sc.nextInt();
        if (isPrime(num, 2))
            System.out.println("Yes");
        else
            System.out.println("No");
        sc.close();
    }
}
