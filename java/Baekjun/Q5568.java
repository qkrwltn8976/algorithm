package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.HashSet;

public class Q5568 {
    public static HashSet<String> set;
    public static String[] arr;
    public static boolean[] visited;
    public static int n;
    public static int k;
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        n = Integer.parseInt(br.readLine());
        k = Integer.parseInt(br.readLine());
        set = new HashSet<>();
        arr = new String[n];
        visited = new boolean[n];

        for (int i=0; i<n; i++) {
            arr[i] = br.readLine();
        }

        select(k, " ");

        System.out.println(set.size());
    }

    public static void select(int num, String s) {
        if (num == 0) {
            set.add(s);
            return;
        }

        for (int i=0; i<n; i++) {
            if (!visited[i]) {
                visited[i] = true;
                select(num-1, s+arr[i]);
                visited[i] = false;
            }
        }
    }
}
