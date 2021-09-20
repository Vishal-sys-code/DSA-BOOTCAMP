import java.util.Scanner;
public class averageofNnum{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number: ");
        int number = sc.nextInt();
        int sum=0;
        float avg;
        if(number == 0 || number == 1){
            System.out.println("Average is not necessary to print");
        }
        else{
            for(int i=0;i<number;i++){
                sum+=i;
            }
            avg = sum/number;
            System.out.println("Average is: " + avg);
        }
        sc.close();
    }
}