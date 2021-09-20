import java.util.Scanner;
public class sumofNnum {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.print("N: ");
        n = sc.nextInt();
        int sum=0;
        if(n<=0){
            System.out.print("Sum cannot be evaluated ");
        }
        else{
            for(int i=0;i<=n;i++){
                sum+=i;
            }
            System.out.print("The sum is: " + sum);
        }
        sc.close();
    }
}
