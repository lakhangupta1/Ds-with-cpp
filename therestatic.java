class forstatic{
    static int a=10;
    static void method(){
        System.out.println(a);
    }
    static void show2(){
        this.method();
        System.out.println("not possible !");
    }
}
public class therestatic {
    public static void main(String[] args) {
        forstatic fs=new forstatic();
        fs.show2();
    }
}
