package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;
import java.util.Arrays;

public class Q11650 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int n = Integer.parseInt(br.readLine());
        int[][] list = new int[n][2];

        for (int i=0; i<n; i++) {
            StringTokenizer st = new StringTokenizer(br.readLine(), " ");
            list[i][0] = Integer.parseInt(st.nextToken());
            list[i][1] = Integer.parseInt(st.nextToken());
        }
        
        Arrays.sort(list, (arr1, arr2) -> {
            if (arr1[0] == arr2[0]) {
                return arr1[1] - arr2[1]; // 2차원 배열에서 첫번째 원소가 같다면 두번째 원소끼리 비교
            } else {
                return arr1[0] - arr2[0]; // 2차원 배열에서 첫번째 원소가 다르면 첫번째 원소끼리 비교
            }
        });

        for (int i=0; i<n; i++) {
            System.out.println(list[i][0] + " " + list[i][1]);
        }
    }
}
