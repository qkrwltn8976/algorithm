package Programmers;

class Q86491 {
    public int solution(int[][] sizes) {
        int answer = 0;
        
        for (int i=0; i<sizes.length; i++) {
            int tmp = 0;
            if (sizes[i][0] < sizes[i][1]) {
                tmp = sizes[i][1];
                sizes[i][1] = sizes[i][0];
                sizes[i][0] = tmp;
            }    
        }
        
        int wMax = 0;
        int hMax = 0;
        
        for (int i=0; i<sizes.length; i++) {
            if (wMax < sizes[i][0]) {
                wMax = sizes[i][0];
            }
            if (hMax < sizes[i][1]) {
                hMax = sizes[i][1];
            }
        }
        
        return wMax * hMax;
    }
}