package Inheritance;
import java.util.Scanner;
class values{
	static int x,y;
	public void input() {
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the value of x:");
		x = sc.nextInt();
		System.out.println("Enter the value of y:");
		y = sc.nextInt();
		sc.close();
	}
}
public class singlein extends values{
    public int multiply() {
    	return x*y;
    }
    public static void main(String args[]) {
    	singlein ob = new singlein();
    	int result;
    	ob.input();
    	result = ob.multiply();
    	System.out.println("The result is " + result);
    }
}