package Calculator;
import java.util.Scanner;
public class calc {
    public void add(int a,int b) {
    	int result;
    	result = a+b;
    	System.out.println("Addition of " + a + " & " + b + " is " + result);
    }
    public void sub(int a,int b) {
    	int result;
    	result = a-b;
    	System.out.println("Subtraction of " + a + " & " + b + " is " + result);
    }
    public void mul(int a,int b) {
    	int result;
    	result = a*b;
    	System.out.println("Multiplication of " + a + " & " + b + " is " + result);
    }
    public void div(int a,int b) {
    	int result;
    	result = a/b;
    	System.out.println("Division of " + a + " & " + b + " is " + result);
    }
	public static void main(String args[]) {
		int a,b;
		calc ob = new calc();
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the value of a and b:");
		a = sc.nextInt();
		b = sc.nextInt();
		System.out.println("Press 1 for addition"); 
		System.out.println("Press 2 for subtraction");
		System.out.println("Press 3 for multiplication");
		System.out.println("Press 4 for division");
		int choice;
		choice = sc.nextInt();
		switch(choice) {
		   case 1:ob.add(a,b);   break;
		   case 2:ob.sub(a,b);   break;
		   case 3:ob.mul(a,b);   break;
		   case 4:if(b!=0)
			        ob.div(a,b);
		          else
                    System.out.println("Division by zero is not possible");
		}
	}
}