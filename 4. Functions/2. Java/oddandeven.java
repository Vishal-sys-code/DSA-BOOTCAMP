import java.util.Scanner;
public class oddandeven {

    static void oddeven_basic(int n){
        if(n%2 == 0){
            System.out.println("Entered number is EVEN");
        }
        else{
            System.out.println("Entered number is ODD");
        }
    }

    static void oddeven_bitwiseOR(int n){
        if((n | 1) > n){
            System.out.println("Entered number is EVEN");
        }
        else{
            System.out.println("Entered number is ODD");
        }
    }

    static void oddeven_bitwiseAND(int n){
        if((n & 1) == 1){
            System.out.println("Entered number is ODD");
        }
        else{
            System.out.println("Entered number is EVEN");
        }
    }

    static void oddeven_bitwiseXOR(int n){
        if((n ^ 1) == n + 1){
            System.out.println("Entered number is EVEN");
        }
        else{
            System.out.println("Entered number is ODD");
        }
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Number : ");
        int n = sc.nextInt();
        System.out.print("From Basic Method : ");
        oddeven_basic(n);
        System.out.print("From BitWise OR Method : ");
        oddeven_bitwiseOR(n);
        System.out.print("From BitWise AND Method : ");
        oddeven_bitwiseAND(n);
        System.out.print("From BitWise XOR Method : ");
        oddeven_bitwiseXOR(n);
        sc.close();
    }
}
