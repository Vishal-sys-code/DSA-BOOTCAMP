import java.util.Scanner;
public class pattern2 {
    
    static void pattern(int n){
        for(int i=n-1;i>=0;i--){
            for(int j=0;j<=i;j++){
                System.out.print("*");
            }
            System.out.println(" ");
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number of lines");
        int n = sc.nextInt();
        pattern(n);
        sc.close();
    }
}
