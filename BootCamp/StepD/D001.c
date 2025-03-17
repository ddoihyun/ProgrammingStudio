#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct st_movie{
	char title[100];
	int year, genre, playtime, viewers;
	char description[255];
} MOVIE;

const char* genre_name[] = {
	"Sci-Fi",
	"Thriller",
	"Action",
	"Romance",
	"Musical",
	"Drama",
	"Animation",
	"War"
};

void printMovie(MOVIE* p) {
    // 특정 영화 정보를 출력한다. ex. Inception [2010, Sci-Fi, 148 min, 750421 viewers]
    // - 리턴값 : 없음
    printf("%s [%d, %s, %d min, %d viewers]\n", 
           p->title, p->year, genre_name[p->genre], p->playtime, p->viewers);
}

int indexGenre(char* name){
    // 장르 이름에 해당하는 인덱스 값을 찾는다.
    // - 파라미터 : 쟝르이름
    // - 리턴값 : 해당 쟝르의 인덱스 값
    int gen = 7;
    for(int i=0; i<sizeof(genre_name)-1; i++)
        if(strcmp(name, genre_name[i]) == 0){
            gen = i;
            break;}
    return gen;
}

int main(void){
    MOVIE* list[10];
	int count;
	char genre[50];
	
	scanf("%d", &count);
	for(int i=0; i<count; i++){
		getchar();
        list[i] = (MOVIE*) malloc(sizeof(MOVIE));
        fgets(list[i]->title, sizeof(list[i]->title), stdin);
        list[i]->title[strcspn(list[i]->title, "\n")] = '\0'; // 개행 문자 제거

        fgets(list[i]->description, sizeof(list[i]->description), stdin);
        list[i]->description[strcspn(list[i]->description, "\n")] = '\0'; // 개행 문자 제거
   
		scanf("%d %s %d %d", &list[i]->year, genre, &list[i]->playtime, &list[i]->viewers);
        list[i]->genre = indexGenre(genre);
		// list[i] = (MOVIE*) malloc(sizeof(MOVIE));
    }
	
    for(int i=0; i<count; i++){
        printf("%d) ", i+1);
        printMovie(list[i]);
    }
	
	return 0;
}