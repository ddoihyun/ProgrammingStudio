import java.util.Scanner;

class BMICalculator {
    int height, weight;    // 신장(cm), 체중(kg)
    double bmi;            // 비만도
    int level;             // 비만도 등급 (1~4)
    String name;           // 이름
    String[] levelStrings = {"Underweight", "Healthy Weight", "Overweight", "Obesity"};

    public BMICalculator(){          // 생성자
        getHW();
    }

    public void getHW(){             // 이름, 신장, 체중을 입력받아 비만도와 비만등급을 계산한다.
        Scanner s = new Scanner(System.in);
        System.out.print("Enter your name > ");
        name = s.nextLine();
        System.out.print("Enter your height(cm) > ");
        height = s.nextInt();
        System.out.print("Enter your weight(kg) > ");
        weight = s.nextInt();
        bmi = (double)weight / (height*0.01 * height*0.01);

        /*
         * 18.5 미만         : Underweight  
         * 18.5 ~ 25 미만    : Healthy Weight  
         * 25 ~ 30 미만      : Overweight 
         * 30 이상           : Obesity
         */

        if(bmi < 18.5) level = 1;
        else if(bmi < 25) level = 2;
        else if(bmi < 30) level = 3;
        else level = 4;

        s.close();
    }

    public void printBMI(){          // 이 사람의 이름, 신장, 체중, 비만도, 비만등급을 출력한다.
        System.out.println("Name : " + name);
        System.out.println("Height : " + height + " cm");
        System.out.println("Weight : " + weight + " kg");
        System.out.printf("BMI : %.1f\n", bmi);
        System.out.printf("level : " + level + ", ");
        System.out.println("You are " + levelStrings[level-1] + ".");
    }
}