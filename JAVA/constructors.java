package toys;
public class toys {
  int code;
  String toy;
  void display() {
      System.out.println(code+" "+toy);
  }
  toys(){}
  toys(int c,String t){
      code = c;
      toy = t;
  }
  
  public static void main(String args[]) {
      toys t1 = new toys();
      toys t2 = new toys(101,"Plastic Gun");
      toys t3 = new toys(102,"Teddy");
      t1.display();
      t2.display();
      t3.display();
  }
}