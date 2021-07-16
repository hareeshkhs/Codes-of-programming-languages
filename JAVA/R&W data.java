import java.io.*;
import java.util.Scanner;
public class Main
{   static Scanner sc = new Scanner(System.in);
    void read(){
        try{
          FileInputStream fin = new FileInputStream("C:\\test.txt");
          int i;
          while((i = fin.read()) != -1){
              System.out.print((char) i);
          }
          System.out.println();
          fin.close();
        }catch(Exception e){
            System.out.println(e);
        }
    }
    void write(){
        try{
          FileOutputStream fout = new FileOutputStream("C:\\test.txt",true);
          String s = new String();
          String st = new String("\n");
          s = sc.next();
          s += st;
          byte b[] = s.getBytes();
          fout.write(b);
          fout.close();
        }catch(Exception e){
            System.out.println(e);
        }   
    }
	public static void main(String[] args) {
		Main ob = new Main();
		System.out.println("FILE NAME: test.txt");
		System.out.println("Press 1 to Write content to the file");
	    System.out.println("Press 2 to Read content of the file");
	    System.out.println("Press 3 to Exit");
	    char choice = 'y';
	    do{
		  int c;
		  c = sc.nextInt();
		  switch(c){
		      case 1: ob.write();  break;
		      case 2: ob.read();   break;
		      case 3: System.exit(0);
		      default: System.out.println("Wrong Option");
		  }
		  System.out.print("Do you want to continue?(y/n)  ->");
		  choice = sc.next().charAt(0);
	    }while(choice == 'y');
	}
}