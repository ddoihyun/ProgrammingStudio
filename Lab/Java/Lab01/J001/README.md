# J001. 키와 몸무게로 비만도(BMI) 계산하기 
신장(cm 단위)과 체중(kg 단위)을 입력받은 후, 비만도(BMI)를 계산하여 출력하라.

비만도 수치 = 체중(kg) / (신장(m) * 신장(m))으로 계산한다.

이 때, 신장은 미터 단위로 환산해야 하므로 입력받는 수치(cm 단위)에 0.01을 곱해 m 단위로 바꾸어 계산하라.


변수는 다음과 같이 사용하라.
```
int height, weight;     // 신장(cm), 체중(kg)
double bmi;             // 비만도 수치
```

---

input #1 : 신장(cm 단위)과 체중(kg 단위)를 표현하는 정수 2개
```
165 70
```
output #1 : 비만도(BMI)
```
25.7
```

input #2 : 신장(cm 단위)과 체중(kg 단위)를 표현하는 정수 2개
```
185 70
```
output #2 : 비만도(BMI)
```
20.5
```