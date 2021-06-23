import java.util.Scanner;

public class Main{

     public static void main(String []args){
        int n, sum = 0;
        boolean a, b, c;
        Scanner sc = new Scanner(System.in);
        n = sc.nextInt();
        
        for(int i = 0; i < n; i++){
            a = (sc.nextInt() != 0);
            b = (sc.nextInt() != 0);
            c = (sc.nextInt() != 0);
            if((a && b) || (b && c) || (c && a)){
                sum++;
            }
        }
        System.out.println(sum);
     }
}
