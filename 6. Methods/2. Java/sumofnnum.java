import java.util.Scanner;
public class sumofnnum {

    public void sum(int n){
        int res = n*(n+1)/2;
        System.out.println("Sum of " + n + " natural numbers is: " + res);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number: ");
        int n = sc.nextInt();
        // System.out.println("Sum of " + n + " natural numbers is: " + sum(n));
        sumofnnum obj = new sumofnnum();
        obj.sum(n);
        sc.close();
    }
}
//--------------------------------------------------------------------------------------
// 2nd method

/*public static void main(String[] args) {
    System.out.println("Enter the number: ");
    int n = sc.nextInt();
    int res = (n*(n+1))/2;
    System.out.println(res);
}*/