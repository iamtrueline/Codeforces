import java.util.Scanner;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		String a = sc.nextLine();
		String b = sc.nextLine();
		a = a.toLowerCase();
		b = b.toLowerCase();
		int rlt = a.compareTo(b);
		if(rlt<0){
		    rlt = -1;
		}
		else if(rlt>0){
		    rlt = 1;
		}
		System.out.println(rlt);
	}
}
