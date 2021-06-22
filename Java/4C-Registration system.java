import java.util.HashMap;
import java.util.HashSet;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
 
public class Main {
    public static void main(String[] args) {
        HashMap<String, Integer> numbers = new HashMap<>();
        HashSet<String> names = new HashSet<>();
        String buffer;
 
        try{
            BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
            BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));
            int n = Integer.parseInt(br.readLine());
 
            for(int i = 0; i < n; i++){
                buffer = br.readLine();
                if(!names.contains(buffer)){
                    numbers.put(buffer, 1);
                    names.add(buffer);
                    bw.write("OK\n");
                }
                else{
                    bw.write(buffer+ numbers.get(buffer) +"\n");
                    numbers.put(buffer, numbers.get(buffer) + 1);
                }
            }
        
        	bw.flush();
        	bw.close();
        }
        catch (Exception e) {
        }
    }
}
