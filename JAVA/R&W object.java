import java.io.*;
public class Main
{
    String Name;
    int Age;
    Main(String n,int a){
        Name = n;
        Age = a;
    }
    public void write(){
        try{
            FileOutputStream fout = new FileOutputStream("Record.txt",true);
            String line = new String();
            line = Name + "    " + Age + "\n";
            byte b[] = line.getBytes();
            fout.write(b);
            fout.close();
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
    public void read(){
        try{
            FileInputStream fin = new FileInputStream("Record.txt");
            int i;
            while((i = fin.read()) != -1){
                System.out.print((char) i);
            }
            System.out.println();
            fin.close();
        }
        catch(Exception e){
            System.out.println(e);
        }
    }
	public static void main(String[] args) {
	   Main person1 = new Main("Rachel",33);
	   Main person2 = new Main("Robert",51); 
	   //Writing Individual contents to the file
	   person1.write();
	   person2.write();
           //Reading the whole File	   
	   person1.read();
	}
}