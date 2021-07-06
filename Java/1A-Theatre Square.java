import java.util.Scanner;
 
public class Main {
    public static void main(String[] args) {
        long n, m, a, x = 0, y = 0;
        Scanner sc = new Scanner(System.in);
        
        n = sc.nextLong();
        m = sc.nextLong();
        a = sc.nextLong();
        x = n / a;
        y = m / a;
        
        if(n % a != 0){
            x++;
        }
        if(m % a != 0){
            y++;
        }
        System.out.println(x*y);
    }
}
