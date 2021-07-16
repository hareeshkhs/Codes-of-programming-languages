package add;
class add {
  public void addno(int a,int b) {
     int result = a+b;
     System.out.println(a +"+"+ b + "=" + result);
  }
}
class adder extends add {
  public void addno(int a,int b,int c) {
     int result = a+b+c;
     System.out.println(a +"+"+ b +"+"+ c + "=" + result);
  }
  public static void main(String[] args) {
     add ob1 = new add();
     adder ob2 = new adder();
     ob1.addno(2,6);
     ob2.addno(2,5,7); 
  }
}