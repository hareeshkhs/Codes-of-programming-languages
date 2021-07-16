package hareesh;
import java.io.*;
public class khs {
	  public static void main(String args[])throws Exception{    
		   FileInputStream fin=new FileInputStream("testin.txt");      
		   FileOutputStream fout=new FileOutputStream("testout.txt");      
		   BufferedInputStream bin=new BufferedInputStream(fin);  
		   int i;    
		   while((i=bin.read())!=-1)    
		   {    
		     fout.write(i);        
		   } 
		   bin.close();
		   fout.close();      
		   fin.close();             
		   System.out.println("Success..");   
	  }    
}