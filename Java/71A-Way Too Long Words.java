import java.util.*;
 
public class WayTooLongWords{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        String words = null;
        int n = sc.nextInt();
        
        for(int i = 0; i <= n; i++){
            words = sc.nextLine();
            if(words.length()>10){
                System.out.print(words.charAt(0));
                System.out.print(words.length()-2);
                System.out.println(words.charAt(words.length()-1));
            }else {
                System.out.println(words);  
            }
        } 
    }
}
