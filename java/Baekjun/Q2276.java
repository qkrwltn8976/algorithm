package Baekjun;
import java.io.BufferedReader;
import java.io.BufferedWriter;
import java.io.InputStreamReader;
import java.io.OutputStreamWriter;
import java.util.HashMap;
import java.io.IOException;
import java.util.StringTokenizer;

public class Q2276 {
    public static void main(String[] args) throws NumberFormatException, IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        BufferedWriter bw = new BufferedWriter(new OutputStreamWriter(System.out));

        int T = Integer.parseInt(br.readLine());
        
        while (T-- > 0) {
            HashMap<Integer, Integer> map =  new HashMap<Integer, Integer>();
            int n = Integer.parseInt(br.readLine());
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            while (n-- > 0) {
                int key = Integer.parseInt(st.nextToken());
                
                map.put(key, 1);
            }
            
            n = Integer.parseInt(br.readLine());
            st = new StringTokenizer(br.readLine(), " ");
            while (n-- > 0) {
                int key = Integer.parseInt(st.nextToken());
                bw.write((map.containsKey(key) ? 1 : 0) + "\n");
            }
        }

        bw.flush();
        bw.close();
    }
}
