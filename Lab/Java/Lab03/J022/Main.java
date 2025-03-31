import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        Main pStudio = new Main();
        pStudio.J022();
    }

    void J022() {
        double m2_area;     // 면적(제곱미터)
        double pyung_area;  // 면적(평형)

        int count1 = 0;         // small 아파트 개수
        int count2 = 0;         // normal 아파트 개수
        int count3 = 0;         // large 아파트 개수
        int count4 = 0;         // huge 아파트 개수


        Scanner s = new Scanner(System.in);
        for(int i=0; i<10; i++){
            m2_area = s.nextDouble();
            pyung_area = m2_area / 3.305;
            if(pyung_area < 15) count1++;
            else if(pyung_area < 30) count2++;
            else if(pyung_area < 50) count3++;
            else count4++;
        }
        
        System.out.printf("small - %d\n",count1);
        System.out.printf("normal - %d\n",count2);
        System.out.printf("large - %d\n",count3);
        System.out.printf("huge - %d\n",count4);

        s.close();
    }
}