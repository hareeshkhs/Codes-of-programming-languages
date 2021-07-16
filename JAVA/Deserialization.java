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
			  //Creating stream to read the object  
			  ObjectInputStream in=new ObjectInputStream(new FileInputStream("f.txt"));  
			  Student s=(Student)in.readObject();  
			  //printing the data of the serialized object  
			  System.out.println(s.id+" "+s.name);  
			  //closing the stream  
			  in.close();  
			  }catch(Exception e){System.out.println(e);}  
	  }    
}