package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Stack;

public class Q10773 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());

        Stack<Integer> stack = new Stack<Integer>();
        for (int i=0; i<n; i++) {
            int val = Integer.parseInt(br.readLine());
            if (val != 0) {
                stack.push(val);
            } else {
                stack.pop();
            }
        }

        int sum = 0;
        while (!stack.isEmpty()) {
            sum += stack.pop();
        }

        System.out.println(sum);
    }
}
