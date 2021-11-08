package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

public class Q11365 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        while (true) {
            String s = br.readLine();
            if (s.equals("END")) {
                return;
            }
            StringBuilder sb = new StringBuilder(s);
            System.out.println(sb.reverse());
        }
    }
}
