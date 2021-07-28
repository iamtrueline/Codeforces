import java.util.Scanner;
public class main{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int now = 0;
        for(int i = 0; i<n; i++){
            String a = sc.next();
            if(a.equals("++X") || a.equals("X++")){
                now +=1;
            } else {
                now -=1;
            } 
        }
        System.out.println(now);
    }
}
