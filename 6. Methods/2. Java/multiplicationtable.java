import java.util.Scanner;
public class multiplicationtable{

    static void table(int n){
        for(int i=1;i<11;i++){
            System.out.println(n + " X " + i + " = " + n*i);
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        table(99);
        sc.close();
    }
}