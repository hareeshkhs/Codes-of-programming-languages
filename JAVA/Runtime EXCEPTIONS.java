//ArithmeticException

public class JavaExceptionExample{  
  public static void main(String args[]){  
   try{  
      //code that may raise exception  
      int data=100/0;  
   }catch(ArithmeticException e){System.out.println(e);}  
   //rest code of the program   
   System.out.println("rest of the code...");  
  }  
}  

//NUMBERFORMATEXCEPTION

package hareesh;

public class khs {

	public static void main(String[] args) {
		try{  
			 String s="abc";  
			 int i=Integer.parseInt(s);//NumberFormatException 
		      
		   }catch(NumberFormatException e)
		      {
			     System.out.println(e);
		      }    
		   System.out.println("rest of the code...");  
	}

}

//NULLPOINTEREXCEPTION

package hareesh;

public class khs {

	public static void main(String[] args) {
		try{  
			String s=null;  
			System.out.println(s.length());//NullPointerException   
		      
		   }catch(NullPointerException e)
		      {
			     System.out.println(e);
		      }    
		   System.out.println("rest of the code...");  
	}

}

//ArrayIndexOutOfBoundsException

package hareesh;

public class khs {

	public static void main(String[] args) {
		try{  
			int a[]=new int[5];  
			a[10]=50; //ArrayIndexOutOfBoundsException     
		      
		   }catch(ArrayIndexOutOfBoundsException e)
		      {
			     System.out.println(e);
		      }    
		   System.out.println("rest of the code...");  
	}

}
