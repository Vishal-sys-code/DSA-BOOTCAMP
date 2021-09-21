import java.util.Scanner;
public class voting {

    static void voting_age(int age){
        if(age >= 18){
            System.out.print(" YOU CAN VOTE NOW ");
        }
        else{
            System.out.print(" YOU CANNOT VOTE NOW ");
        }
    }

    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the Age : ");
        int age = sc.nextInt();
        voting_age(age);
        sc.close();
    }
}
