package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Stack;

public class Q1406 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str = br.readLine();
        int n = Integer.parseInt(br.readLine());

        Stack<Character> left = new Stack<Character>();
        Stack<Character> right = new Stack<Character>();
        for (int i=0; i<str.length(); i++) {
            left.push(str.charAt(i));
        }
        
        for (int i=0; i<n; i++) {
            String cmd = br.readLine();
            if (cmd.charAt(0) == 'L' && !left.empty()) {
                right.push(left.pop());
            } else if (cmd.charAt(0) == 'D' && !right.empty()) {
                left.push(right.pop());
            } else if (cmd.charAt(0) == 'B' && !left.empty()) {
                left.pop();
            } else if (cmd.charAt(0) == 'P') {
                left.push(cmd.charAt(2));
            }
        }

        StringBuilder sb = new StringBuilder();
        
        while (!left.isEmpty()) {
            right.push(left.pop());
        }

        while (!right.isEmpty()) {
            sb.append(right.pop());
        }

        System.out.println(sb);
    }
}
