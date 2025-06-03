# DS024. 수강 신청 프로그램 (C++ 버전)
데이터 파일에서 읽어온 교과목 목록을 관리(추가, 수정, 목록보기, 검색 등)하면서, 이 중에서 내 수강 과목을 등록하는 과정을 진행하고, 변경된 교과목 목록 및 내 수강과목 목록을 파일로 저장하는 프로그램을 제작하시오. (C004 문제를 참고할 것)

```
class Myclass{
    private:
        int code;       // class code
        string name;    // class name
        int unit;       // credites
        int grading;    // grading category (1: A+~F, 2: P/F)
    public:
        // 멤버함수는 제공된 코드 확인할 것.
}

class MyClassManager{
private:
    MyClass* allclasses[MAX];
    MyClass* myclasses[10];
    int count;
    int mycount;
public:
    // 제시된 코드에 대해 다음 5개의 멤버함수를 완성하여 문제를 해결하되, 반드시 다음 사항을 준수할 것!
}

기본 코드: https://github.com/kkim-hgu/PStudio/blob/master/DS%20Labs/DS024.cpp  
데이터파일: https://github.com/kkim-hgu/PStudio/blob/master/DS%20Labs/classes.txt

프로그램의 메뉴별 기능
------------------
0) 교과목 목록 읽어오기: MyClassManager::loadData() 완성 코드 제공됨  
   > classes.txt에서 읽어온 목록은 교과목 목록 객체 포인터 배열(allclasses)에 저장된다.

1) 교과목 목록 출력하기: MyClassManager::printAllClasses() 완성 코드 제공됨  

2) 교과목 목록 추가하기: MyClassManager::addNewClass() 함수에서 제공된 코드 완성해야 함  
   현재 교과목 목록에 새로운 과목을 추가하고, 과목 개수를 증가시킨다.  
   중복 추가 시, 이미 등록된 교과목코드가 추가되지 않도록 코드를 수정하라.

3) 교과목 목록 수정하기: MyClassManager::editClass() 함수에서 제공된 코드 완성해야 함  
   현재 교과목 목록에서 입력된 과목코드에 해당하는 과목 정보를 새로 입력받아 수정한다.  
   과목코드를 입력받은 후, 수정작업을 진행하기 위해 과목객체의 포인터값을  
   클래스 포인터 변수에 할당하여 수정하라. 과목코드가 존재하지 않는 경우도 적절하게 처리하라.

4) 교과목 목록 검색하기: MyClassManager::findClasses() 완성 코드 제공됨  
   과목 이름 일부를 입력받아 과목 정보를 출력한다.

5) 내 수강과목 등록하기: MyClassManager::applyMyClass() 함수 내 코드를 직접 제작할 것  
   과목코드를 입력받아 이 과목이 전체 교과목 중 내 수강신청 과목 목록에 추가하는 과정을 반복한다.  
   반드시 이미 등록된 과목코드의 경우, 과목코드가 존재하지 않는 경우를 반영해야 한다.

6) 내 수강과목 출력하기: MyClassManager::printMyClasses() 함수 내 코드를 직접 제작할 것  
   내가 수강신청한 과목의 모든 정보를 출력한다.

7-1) 교과목 목록 파일로 저장하기: MyClassManager::saveAllClasses() 완성 코드 제공됨  
   현재의 교과목 목록 과목 목록을 classes.txt에 저장한다.  
   저장 포맷: 과목코드 과목명 학점 평가방식  
   과목 코드 : 3자리 숫자  
   평가 방식 : 1 A+~F 방식, 2 Pass/Fail 방식

7-2) 내 수강과목 파일로 저장하기: MyClassManager::saveMyClasses() 함수 내 코드를 직접 제작할 것  
   나의 수강신청 과목의 모든 과목정보를 my_classes.txt 파일로 저장한다.  
   파일에 포함되어야 하는 내용: (실행 예 참조)  
     내가 신청한 수강 과목 목록 (과목코드, 과목명, 학점, 평가방식)  
     총 수강학점, 평가방식별 수강학점, 수강과목수 등
```

---

[실행 예]: 교과목 목록 보기 및 과목 추가
```
> Load 20 classes.

> Menu 1.List 2.Add 3.Modify 4.Search 5.Apply 6.My classes 7.Save 0.Quit  
>> Menu? > 1  
> 1. Class list (20 classes)  
[101] C [credit 3 – A+~F]  
[102] CodingStudio [credit 1 – P/F]  
[109] ICT [credit 3 – A+~F]  
[110] Reading [credit 1 – P/F]  
[111] Korean [credit 3 – A+~F]  
[113] Ethics [credit 1 – P/F]  
[201] EngineeringBasic [credit 3 – A+~F]  
[202] ComputerArchitecture [credit 2 – A+~F]  
[203] WebService [credit 3 – A+~F]  
[204] ProgramingStudio [credit 2 – A+~F]  
[205] Java [credit 3 – A+~F]  
[205] DS [credit 3 – A+~F]  
[208] Project [credit 3 – P/F]  
[210] SocialService [credit 2 – A+~F]  
[301] OS [credit 3 – A+~F]  
[302] Database [credit 3 – A+~F]  
[303] Algorithm [credit 3 – A+~F]  
[304] Capstone1 [credit 2 – P/F]  
[309] ComputerVision [credit 3 – A+~F]  
[401] Capstone1 [credit 4 – A+~F]  

> Menu 1.List 2.Add 3.Modify 4.Search 5.Apply 6.My classes 7.Save 0.Quit  
>> Menu? > 2  
> 2. Add a Class  
>> code number > 101  
>> Code duplicated! Retry.  
>> code number > 103  
>> class name > English  
>> credits > 3  
>> grading (1: A+~F, 2: P/F) > 1  

> Menu 1.List 2.Add 3.Modify 4.Search 5.Apply 6.My classes 7.Save 0.Quit  
>> Menu? > 1  
> 1. Class list (21 classes)  
[101] C [credit 3 – A+~F]  
[102] CodingStudio [credit 1 – P/F]  
[109] ICT [credit 3 – A+~F]  
[110] Reading [credit 1 – P/F]  
[111] Korean [credit 3 – A+~F]  
[113] Ethics [credit 1 – P/F]  
[201] EngineeringBasic [credit 3 – A+~F]  
[202] ComputerArchitecture [credit 2 – A+~F]  
[203] WebService [credit 3 – A+~F]  
[204] ProgramingStudio [credit 2 – A+~F]  
[205] Java [credit 3 – A+~F]  
[205] DS [credit 3 – A+~F]  
[208] Project [credit 3 – P/F]  
[210] SocialService [credit 2 – A+~F]  
[301] OS [credit 3 – A+~F]  
[302] Database [credit 3 – A+~F]  
[303] Algorithm [credit 3 – A+~F]  
[304] Capstone1 [credit 2 – P/F]  
[309] ComputerVision [credit 3 – A+~F]  
[401] Capstone1 [credit 4 – A+~F]  
[103] English [credit 3 – A+~F]
```

실행 예 - 내 수강 과목 등록 및 목록 보기
```
> Menu 1.List 2.Add 3.Modify 4.Search 5.Apply 6.My classes 7.Save 0.Quit  
>> Menu? > 5  
> 5. Apply a class  
>> Enter a class code > 101  
> [101] C++ [credit 3 – A+~F]  
>> Add more?(1:Yes 2:No) > 1  
>> Enter a class code > 107  
> No such code of class.  
>> Enter a class code > 110  
> [110] Reading [credit 1 – P/F]  
>> Add more?(1:Yes 2:No) > 1  
>> Enter a class code > 201  
> [201] EngineeringBasic [credit 3 – A+~F]  
>> Add more?(1:Yes 2:No) > 1  
>> Enter a class code > 205  
> [205] Java [credit 3 – A+~F]  
>> Add more?(1:Yes 2:No) > 1  
>> Enter a class code > 208  
> [208] Project [credit 3 – P/F]  
>> Add more?(1:Yes 2:No) > 1  
>> Enter a class code > 204  
> [204] ProgramingStudio [credit 2 – A+~F]  
>> Add more?(1:Yes 2:No) > 2  
6 classes has been applied.

> Menu 1.List 2.Add 3.Modify 4.Search 5.Apply 6.My classes 7.Save 0.Quit  
>> Menu? > 6  
> 6. My classes  
1. [101] C++ [credit 3 – A+~F]  
2. [110] Reading [credit 1 – P/F]  
3. [201] EngineeringBasic [credit 3 – A+~F]  
4. [205] Java [credit 3 – A+~F]  
5. [208] Project [credit 3 – P/F]  
6. [204] ProgramingStudio [credit 2 – A+~F]  
All : 15 credits
```

실행 예 - 저장하기
```
> Menu 1.List 2.Add 3.Modify 4.Search 5.Apply 6.My classes 7.Save 0.Quit  
>> Menu? > 7  
> 7. Save  

> All my classes were saved to my_classes.txt.  
> All of class list were saved to classes.txt.
```

파일 예시 - my_classes.txt
```
My Classes  
1. [101] C++ [credit 3 – A+~F]  
2. [110] Reading [credit 1 – P/F]  
3. [201] EngineeringBasic [credit 3 – A+~F]  
4. [205] Java [credit 3 – A+~F]  
5. [208] Project [credit 3 – P/F]  
6. [204] ProgramingStudio [credit 2 – A+~F]  
All : 6 classes, 15 credits (A+~F 11 credits, P/F 4 credits)
```