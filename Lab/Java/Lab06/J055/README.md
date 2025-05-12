# J055. 비만도 계산기
다음과 같이 한 사람의 비만도를 계산하는 클래스를 BMICalculator를 제작하라.
```
class BMICalculator {
    int height, weight;    // 신장(cm), 체중(kg)
    double bmi;            // 비만도
    int level;             // 비만도 등급 (1~4)
    String name;           // 이름

    public BMICalculator();          // 생성자
    public void getHW();             // 이름, 신장, 체중을 입력받아 비만도와 비만등급을 계산한다.
    public void printBMI();          // 이 사람의 이름, 신장, 체중, 비만도, 비만등급을 출력한다.
}
```

비만도 수치 = 체중(kg) / (신장(m)의 제곱)

※ 이 때, 신장은 미터 단위로 환산하여 함을 유의하라.


비만도 수치(bmi)에 따른 비만등급 판정 기준 (1~4)
1. 18.5 미만         : Underweight  
2. 18.5 ~ 25 미만    : Healthy Weight  
3. 25 ~ 30 미만      : Overweight  
4. 30 이상           : Obesity
   
테스트는 다음과 같은 과정으로 진행하라:
1) BMICalculator 객체를 하나 만든다.  
2) 이 객체의 getHW() 메소드를 사용하여 이름, 신장, 체중을 입력받는다.  
3) 이 객체의 printBMI() 메소드를 사용하여 이름, 신장, 체중, 비만도, 비만등급을 출력한다.