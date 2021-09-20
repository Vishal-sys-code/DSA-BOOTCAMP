import java.util.Scanner;
public class depreciation {
    public static void main(String arg[])	
	{
        Scanner sc = new Scanner(System.in);
        long amount,depreciation,year,temp;
	    System.out.print("Enter the amount: ");
        amount = sc.nextLong();
        System.out.print("Enter the depreciation: ");
        depreciation = sc.nextLong();
	    System.out.print("Enter the year: ");
        year = sc.nextLong();
	    temp=amount;
	    for(int i=0;i<year;i++){
	        temp=((100-depreciation)*temp)/100;
        }
	    System.out.println("after depreciation = "+temp);
        sc.close();
	}
}
