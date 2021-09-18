import java.util.Scanner;
public class sumtillzero {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int num;
        int sum = 0;
        System.out.println("ENTER THE NUMBER ");
        do{
            num = sc.nextInt();
            sum+=num;
        }while (num != 0);
        System.out.println("SUM is: " + sum);
        sc.close();
    }    
}
