package hareesh;
import java.io.*;
import java.io.Serializable;  
class Student implements Serializable{  
	private static final long serialVersionUID = 1L;
    int id;  
    String name;  
    public Student(int id, String name) {  
       this.id = id;  
       this.name = name;  
    }  
}  
public class khs {
	  public static void main(String args[])throws Exception{    
		  try{  
			  //Creating the object  
			  Student s1 =new Student(211,"ravi");  
			  //Creating stream and writing the object  
			  FileOutputStream fout=new FileOutputStream("f.txt");  
			  ObjectOutputStream out=new ObjectOutputStream(fout);  
			  out.writeObject(s1);  
			  out.flush();  
			  //closing the stream  
			  out.close();  
			  System.out.println("success");  
			  }catch(Exception e){System.out.println(e);}  
	  }    
}
   