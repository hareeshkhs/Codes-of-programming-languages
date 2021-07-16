import java.util.Scanner;
interface operations{
  void add(int a,int b);
  void sub(int a,int b);
  void mul(int a,int b);
  void div(int a,int b);
}
class Arithmetic implements operations {
  static Scanner sc = new Scanner(System.in);
  public void add(int a,int b){
    System.out.println(a + "+" + b + "=" + (a+b));
  }
  public void sub(int a,int b){
    System.out.println(a + "-" + b + "=" + (a-b));
  }
  public void mul(int a,int b){
    System.out.println(a + "*" + b + "=" + (a*b));
  }
  public void div(int a,int b){
    System.out.println(a + "/" + b + "=" + (a/b));
  }
  public static void main(String[] args) {
    Arithmetic ob = new Arithmetic();
    int a,b;
    System.out.print("Enter values of a and b:");
    a = sc.nextInt();
    b = sc.nextInt();
    ob.add(a,b);
    ob.sub(a,b);
    ob.mul(a,b);
    ob.div(a,b);
  }
}