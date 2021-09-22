import java.util.Scanner;
public class sumofn {

    static int sumNnum(int num){
        int sum=0;
        for(int i=1;i<=num;i++){
            sum+=i;
        }
        return sum;
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Number : ");
        int num = sc.nextInt();
        System.out.print(sumNnum(num));
        sc.close();
    }
}
