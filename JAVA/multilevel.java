package Inheritance;
import java.util.Scanner;
class value{
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
class calculate extends value{
	public int add() {
		return x+y;
	}
}
public class multin extends calculate {
	public static void main(String args[]) {
        multin ob = new multin();
        ob.input();
        int result;
        result = ob.add();
        System.out.println("Addition:" + result);
	}
} 