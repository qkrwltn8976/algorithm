package Baekjun;

import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
import java.util.Stack;

public class Q1935 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        String str = br.readLine();
        Stack<Double> st = new Stack<>();
        int[] arr = new int[n];
        for (int i=0; i<n; i++) {
            arr[i] = Integer.parseInt(br.readLine());
        }
        
        for (int i=0; i<str.length(); i++) {
            char c = str.charAt(i);
            if (Character.isAlphabetic(c)) {
                st.push((double) arr[c-'A']);
            } else {
                double a = st.pop();
                double b = st.pop();
                double result = 0.0;
                switch (c) {
                    case '+':
                        result=a+b;
                        break;
                    case '-':
                        result=b-a;
                        break;
                    case '*':
                        result=a*b;
                        break;
                    case '/':
                        result=b/a;
                        break;
                }
                st.push(result);
            }      
        }
        System.out.printf("%.2f", st.pop());
    }
}
