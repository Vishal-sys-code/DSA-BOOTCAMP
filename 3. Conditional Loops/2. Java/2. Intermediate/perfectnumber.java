import java.util.Scanner;
public class perfectnumber {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the number: ");
        int num = sc.nextInt();
        int i,rem,sum=0;
        for(i=1;i<num;i++){
            rem = num%i;
            if(rem == 0){
                sum+=i;
            }
        }
        if(sum == num){
            System.out.println(num + " is a perfect number");
        }
        else{
            System.out.println(num + " is not a perfect number");
        }
        sc.close();
    }
}
