#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int findRoom(int persons[5]); 
void printReport(string mn[10], int mr[10], int mc, string wn[10], int wr[10], int wc);

int main(){
	string mnames[10]; // names of all male students (max. 10)
	string wnames[10]; // names of all female students (max. 10)
	int mroom[10];		// room numbers assigned all male students
	int wroom[10];		// room numbers assigned all female students
	int person[2][5]={0};   // number of persons assgined to all rooms (two floors & each five rooms) 
	int mcount=0, wcount=0; // number of all persons (male, female)
	int menu;

	srand(time(0));
	cout << "===========================================" << endl;
	cout << "생활관 호실 배정 프로그램" << endl;
	cout << "===========================================" << endl;
	while(1){
		cout << "메뉴 : 1.남학생 등록 2.여학생 등록 0.종료 > ";
		cin >> menu;
		if(menu==0) break;
		else if(menu==1) {
			if(mcount>=10) {
				cout << "정원 초과입니다. 등록불가!" << endl;
				continue;
			}
			cout << "학생 이름은? > ";
			cin >> mnames[mcount];
			int roomno = findRoom(person[0]);
			mroom[mcount] = 100+roomno;
			cout <<  mnames[mcount] << " 학생 " << mroom[mcount] << "호실 배정되었습니다." << endl;
			mcount++;
		}
		else if(menu==2) {
			if(wcount>=10) {
				cout << "정원 초과입니다. 등록불가!" << endl;
				continue;
			}
			cout << "학생 이름은? > ";
			cin >> wnames[wcount];
			int roomno = findRoom(person[1]);
			wroom[wcount] = 200+roomno;
			cout <<  wnames[wcount] << " 학생 " << wroom[wcount] << "호실 배정되었습니다." << endl;
			wcount++;
		}
	}

	cout << "===========================================" << endl;
	cout << "생활관 호실 배정 결과는 다음과 같습니다." << endl;
	cout << "===========================================" << endl;
	printReport(mnames, mroom, mcount, wnames, wroom, wcount);

	return 0;
}

int findRoom(int persons[5]){
// 파라미터 : 5개의 호실 내에 이미 배정된 사람의 숫자 배열
// 리턴 값 : 빈 베드가 있는 경우 1~5, 없는 경우 -1
// 하는 일 : 5개의 호실 중 빈 베드가 있는 방을 랜덤으로 찾아낸다. 2명 모두 배정된 호실을 배정하면 안됨!
	int no; 
	while(1){
		no = rand()%5;
		if(persons[no]<2) break;
	} 
	persons[no]++;
	return no+1;
}

void printReport(string mn[10], int mr[10], int mc, string wn[10], int wr[10], int wc){
// 파라미터 : 남학생 이름 배열, 남학생 배정된 호실 번호 배열, 등록된 남학생 수, 여학생 이름 배열, 여학생 배정된 호실 번호 배열, 등록된 여학생 수
// 리턴 값 : 없음
// 하는 일 : 생활관 호실 배정 결과를 출력한다. (남학생 명단 및 호실, 여학생 명단 및 호실, 호실별 배정 명단)

cout << "남학생 명단(" << mc << "명)"<< endl;
for(int i=0; i<mc; i++)
	cout << i+1 << ". " << mn[i] << " [" << mr[i] << "호]"<< endl;

cout << "여학생 명단(" << wc << "명)"<< endl;
for(int i=0; i<wc; i++)
  cout << i+1 << ". " << wn[i] << " [" << wr[i] << "호]"<< endl;

cout << "\n호실별 배정 명단" << endl;
for (int i = 1; i <= 2; i++) {
	for (int j = 1; j <= 5; j++) {
		cout << i * 100 + j << "호 : ";
	  
		for (int k = 0; k < mc; k++) {
			if (mr[k] / 100 == i && mr[k] % 100 == j)
				cout << mn[k] << " ";}
	  
		for (int k = 0; k < wc; k++) {
			if (wr[k] / 100 == i && wr[k] % 100 == j)
				cout << wn[k] << " ";}
		cout << endl;}}
}