package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;

public class Q10798 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String[] arr = new String[5];
        for (int i=0; i<5; i++) {
            arr[i] = br.readLine();
        }

        StringBuilder sb = new StringBuilder();
        
        for (int i=0; i<15; i++) {
            for (int j=0; j<5; j++) {
                if (i < arr[j].length()) {
                    sb.append(arr[j].charAt(i));
                }
            } 
        }

        System.out.println(sb);
    }
}
