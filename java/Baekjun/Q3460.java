package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Q3460 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int T =  Integer.parseInt(br.readLine());

        while (T-- > 0) {
            int num = Integer.parseInt(br.readLine());
            StringBuilder s = new StringBuilder();
            int cnt = 0;
            while (true) {
                if (num % 2 == 1) {
                    s.append(cnt);
                    if (num / 2 != 0) {
                        s.append(" ");
                    }
                }
                
                num /= 2;
                cnt++;
                
                if (num == 0) 
                    break;
            }
            System.out.println(s);
        }
    }
}
