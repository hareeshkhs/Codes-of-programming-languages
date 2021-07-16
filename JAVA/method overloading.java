package add;
class add {
  public void add(int a,int b,int c){
    int r = a+b+c;
    System.out.println(a + "+" + b + "+" + c + "=" + r);
  } 
  public void add(int a,int b){
    int r = a+b;
    System.out.println(a + "+" + b + "=" + r);
  } 
  public static void main(String[] args) {
    add ob = new add();
    ob.add(2,3);
    ob.add(4,6,7);
  }
}