import java.util.Scanner;
class Products{
    String Name,Email,Address,Phone;
    static Scanner sc = new Scanner(System.in);
    public void displaymenu(){
        System.out.println("Pendrive Menu");
        System.out.println("1.SanDisk - Rs.780");
        System.out.println("2.MoserBaer - Rs.840");
        System.out.println("3.Sony - Rs.900");
        int ch;
        System.out.print("Enter your choice:");
        ch = sc.nextInt();
        switch(ch){
            case 1: System.out.println("SanDisk Pendrive Added to the cart.");
                    break;
            case 2: System.out.println("MoserBaer Pendrive Added to the cart.");
                    break;
            case 3: System.out.println("Sony Pendrive Added to the cart.");
                    break;
        }
    }
    public void orderdetails(){
        System.out.println("Customer Details");
        System.out.print("Name:");
        Name = sc.next();
        System.out.print("Phone No.:");
        Phone = sc.next();
        System.out.print("Email:");
        Email = sc.next();
        System.out.print("Address:");
        Address = sc.next();
        System.out.println(Name + " " + Phone + " " + Email + " " + Address);
    } 
    public void payments(){
        System.out.println("Payment Options");
        System.out.println("1.COD");
        System.out.println("2.Net Banking");
        System.out.println("3.Credit/Debit Card");
        int choice;
        System.out.println("Enter your choice:");
        choice = sc.nextInt();
        if(choice == 1)
          throw new ArithmeticException("Sorry, COD Option is currently not available. Try other Options");
        else if(choice == 2 || choice == 3){
            System.out.println("Hurray, Order Placed!!!");
            System.out.println("Thank You for Shopping!!");
            System.out.println("Eagerly Waiting for your next Order.");
        }else{
            System.out.println("Wrong Option Chosen!");
        }
    }
}
public class Main
{
	public static void main(String[] args) {
		Products p = new Products();
		p.displaymenu();
		p.orderdetails();
		p.payments();
	}
}