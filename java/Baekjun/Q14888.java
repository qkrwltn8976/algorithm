package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;
import java.util.ArrayList;
// 연산자 우선순위 무시
// 나눗셈은 정수 나눗셈으로 몫만 취함

public class Q14888 {
    public static int[] num;
    public static int[] ops = new int[4];
    public static ArrayList<Integer> list = new ArrayList<>();
    public static int n;
    public static int MAX = Integer.MIN_VALUE;
    public static int MIN = Integer.MAX_VALUE;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.parseInt(br.readLine());
        num = new int[n];
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        for (int i=0; i<n; i++) {
            num[i] = Integer.parseInt(st.nextToken());
        }
        
        st = new StringTokenizer(br.readLine(), " ");
        for (int i=0; i<4; i++) {
            ops[i] = Integer.parseInt(st.nextToken());
        }

        dfs(num[0], 1);

        System.out.println(MAX);
        System.out.println(MIN);
    } 
    
    public static void dfs(int number, int idx) {
        if (idx == n) {
            MAX = Math.max(MAX, number);
            MIN = Math.min(MIN, number);
            return;
        }

        for (int i=0; i<4; i++) {
            if (ops[i] > 0) {
                ops[i]--;
                switch (i) {
                case 0:
                    dfs(number + num[idx], idx + 1);
                    break;
                case 1:
                    dfs(number - num[idx], idx + 1);
                    break;
                case 2:
                    dfs(number * num[idx], idx + 1);
                    break;
                case 3:
                    dfs(number / num[idx], idx + 1);
                    break;
                }
                ops[i]++;
            }
        }
    }
}
