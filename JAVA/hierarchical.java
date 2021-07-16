package Inheritance;
import java.util.Scanner;
class val{
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
class calc extends val{
	public int subtract() {
		return x-y;
	}
}
public class hierin extends val {
	public static void main(String args[]) {
		hierin ob = new hierin();
		calc c = new calc();
		ob.input();
		int result;
		result = c.subtract();
		System.out.println("Subtraction:" + result);
	}
}