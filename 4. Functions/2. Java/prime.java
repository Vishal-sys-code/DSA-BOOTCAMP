import java.util.Scanner;
public class prime {
    static boolean isPrime(int n){
        if(n<=1){
            return false;
        }
        for(int i=2;i<n;i++){
            if(n%i == 0){
                return false;
            }
        }
        return true;
    }
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Number A : ");
        int a = sc.nextInt();
        if(isPrime(a)){
            System.out.print(" PRIME NUMBER ");
        }
        else{
            System.out.print(" NOT PRIME NUMBER ");
        }
        sc.close();
    }
}
