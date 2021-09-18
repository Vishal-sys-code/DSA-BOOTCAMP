import java.util.Scanner;
public class maxandmintillzero {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n;
        int max = Integer.MIN_VALUE;
        int min = Integer.MAX_VALUE;
        System.out.println("ENTER THE NUMBERS YOU WANT TO ENTER: ");
        n = sc.nextInt();
        for(int i=1;i<=n;i++){
            System.out.println("Enter number -  " + i + ": ");
            int num = sc.nextInt();
            if(num > max) max = num;
            if(num < min) min = num;
        }
        System.out.println("Maximum number is: " + max);
        System.out.println("Minimum number is: " + min);
        sc.close();
    }    
}
