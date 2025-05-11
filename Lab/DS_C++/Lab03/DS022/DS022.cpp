#include <iostream>
using namespace std;

class English_Qualification{
    public:
        string name;
        int LC_score;
        int RC_score;

        English_Qualification();    // 기본생성자
        English_Qualification(string name, int LC_score, int RC_score);
        bool ValidScore(int score);
        int TotalScore();
        void PrintScore();
        void Print();

        // 멤버메소드 : 기본생성자 / 입력받는 생성자 / 멤버변수 parameter가 있는 생성자 / 
        // 점수 0~495 점수 유효성 체크 함수 / 출력메소드 / pass,fail 메소드 등
};

English_Qualification::English_Qualification(){
    /*
    Hong gil-dong
    LC > 350
    RC > -90
    RC > 500
    RC > 200
    */
    getline(cin, name);

    while(true){
        cout << "LC > ";
        cin >> LC_score;
        if(!ValidScore(LC_score)) continue;
        break;
    }
    while(true){
        cout << "RC > ";
        cin >> RC_score;
        if(!ValidScore(RC_score)) continue;
        break;
    }
};

bool English_Qualification::ValidScore(int score){
    if(score >= 0 && score <= 495) return true;
    else return false;
};

int English_Qualification::TotalScore(){
    return LC_score + RC_score;
}

void English_Qualification::PrintScore(){
    cout << "LC - " << LC_score;
    if(LC_score >= 350) cout << " Pass" << endl;
    else cout << " Fail" << endl;
    cout << "RC - " << RC_score;
    if(RC_score >= 350) cout << " Pass" << endl;
    else cout << " Fail" << endl;
    cout << "Total - " << TotalScore() << endl;
}

void English_Qualification::Print(){
    /*
    [Hong gil-dong]
    LC - 350 Pass
    RC - 200 Fail
    Total - 550
    */
    cout << "[" << name << "]"<< endl;
    PrintScore();
}

int main(void){
    English_Qualification e1;
    e1.Print();
    return 0;
}