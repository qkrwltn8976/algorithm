package Baekjun;
import java.io.BufferedReader;
import java.io.InputStreamReader;
import java.io.IOException;
import java.util.Arrays;

public class Q2309 {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int[] dwarf = new int[9];
        int sum = 0;
        for (int i=0; i<9; i++) {
            dwarf[i] = Integer.parseInt(br.readLine());
            sum += dwarf[i];
        }
        boolean checked = false;
        for (int i=0; i<9; i++) {
            if (checked) break;
            for (int j=i+1; j<9; j++) {
                if (i == j) continue;
                if (sum - dwarf[i] - dwarf[j] == 100) { // 총합을 구하고 100을 넘게하는 나머지 2 난쟁이 제거
                    dwarf[i] = 0;
                    dwarf[j] = 0;
                    checked = true; // 이중포문을 벗어나기 위한 플래그
                    break;
                }
            }  
        }

        Arrays.sort(dwarf);
        for (int i=0; i<9; i++) {
            if (dwarf[i] != 0)
                System.out.println(dwarf[i]); 
        }
        
    }
}
