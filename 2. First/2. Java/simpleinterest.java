import java.util.Scanner;
public class simpleinterest {
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);

        System.out.print("PRICIPLE: ");
        int p = sc.nextInt();
        System.out.print("RATE: ");
        int r = sc.nextInt();
        System.out.print("TIME: ");
        int t = sc.nextInt();

        int amount = 0;

        if(((r==0) || (r<0)) || ((t==0) || (t<0))){
            System.out.print("AMOUNT: " + "0");
        }
        else{
            amount = (p * r * t)/100;
        }
        System.out.print("AMOUNT: " + amount);
        sc.close();
    }
}
