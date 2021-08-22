package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.StringTokenizer;
import java.util.Arrays;
import java.util.HashMap;

public class Q18870 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        StringBuilder sb = new StringBuilder();

        int n = Integer.parseInt(br.readLine());
        int[] list = new int[n];
        StringTokenizer st = new StringTokenizer(br.readLine(), " ");

        for (int i=0; i<n; i++) {
            list[i] = Integer.parseInt(st.nextToken());
        }

        int[] tmp = list.clone(); // 정렬 순서 기억하기 위한 용도

        Arrays.sort(list);

        int val = 0;
        HashMap<Integer, Integer> map = new HashMap<>();
        for (int i=0; i<n; i++) {
            if (!map.containsKey(list[i])) {
                map.put(list[i], val++);
            }
        }

        for (int i=0; i<n; i++) {
            sb.append(map.get(tmp[i])).append(" ");
        }
        
        System.out.println(sb.toString());
    }
}

// ** 시간 초과 **
// public class Q18870 {
//     public static void main(String[] args) throws IOException {
//         BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
//         int n = Integer.parseInt(br.readLine());
//         int[][] list = new int[n][2];
//         StringTokenizer st = new StringTokenizer(br.readLine(), " ");

//         for (int i=0; i<n; i++) {
//             list[i][0] = Integer.parseInt(st.nextToken());
//             list[i][1] = i; // idx 역할
//         }

//         Arrays.sort(list, (arr1, arr2) -> {
//             return arr1[0] - arr2[0];
//         });
//         int prev = 0;
//         for (int i=0; i<n-1; i++) {
//             if (i==0) {
//                 prev = list[0][0];
//                 list[0][0] = 0;
//             } 

//             if (prev != list[i+1][0]) {
//                 prev = list[i+1][0];
//                 list[i+1][0] = list[i][0];
//                 list[i+1][0]++;  
//             } else {
//                 prev = list[i+1][0];
//                 list[i+1][0] = list[i][0];
//             }
//         }

//         Arrays.sort(list, (arr1, arr2) -> {
//             return arr1[1] - arr2[1];
//         });

//         for (int i=0; i<n; i++) {
//             System.out.print(list[i][0] + " ");
//         }
//         System.out.println();
//     }
// }
