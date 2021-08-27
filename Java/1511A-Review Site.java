import java.util.Scanner;

public class Main
{
	public static void main(String[] args) {
		Scanner sc = new Scanner(System.in);
		int n = sc.nextInt();
		int sum = 0;
		
		for(int i = 0; i < n; i++){
		    int m = sc.nextInt();
		    for(int j = 0; j < m; j++){
		        int tmp = sc.nextInt();
		        if(tmp==1 || tmp ==3){
		            sum += 1;
		        }
		    }
		    System.out.println(sum);
		    sum = 0;
		}
	}
}
