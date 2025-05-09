#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_MOVIES 50

typedef struct st_movie {
    char title[100];
    int year, genre, playtime, viewers;
    char description[255];
} MOVIE;

const char* genre_name[] = {
    "Sci-Fi", "Thriller", "Action", "Romance", "Musical", "Drama", "Animation", "War"
};

int indexGenre(char* name) {
    for (int i = 0; i < 8; i++) {
        if (strcmp(name, genre_name[i]) == 0) {
            return i;
        }
    }
    return -1; // 오류 처리
}

int loadRecords(MOVIE* list[]) {
    int count;
    char genre[50];
    
    scanf("%d", &count);
    getchar(); // 개행 문자 제거
    
    for (int i = 0; i < count; i++) {
        list[i] = (MOVIE*)malloc(sizeof(MOVIE));
        
        fgets(list[i]->title, sizeof(list[i]->title), stdin);
        list[i]->title[strcspn(list[i]->title, "\n")] = '\0';

        fgets(list[i]->description, sizeof(list[i]->description), stdin);
        list[i]->description[strcspn(list[i]->description, "\n")] = '\0';
        
        scanf("%d %s %d %d", &list[i]->year, genre, &list[i]->playtime, &list[i]->viewers);
        getchar();
        list[i]->genre = indexGenre(genre);
    }
    return count;
}

void printMovie(MOVIE* p) {
    printf("%s [%d, %s, %d min, %d viewers]\n", 
           p->title, p->year, genre_name[p->genre], p->playtime, p->viewers);
}

void printGenreCount(MOVIE* list[], int size) {
    int genre_count[8] = {0};
    
    for (int i = 0; i < size; i++) {
        genre_count[list[i]->genre]++;
    }
    
    printf("\n1. Number of movies by genre\n");
    // [1] Sci-Fi     2 movies
    for (int i = 0; i < 8; i++) {
        printf("[%d] %-10s %d movies\n", i+1, genre_name[i], genre_count[i]);
    }
}

int maxViewers(MOVIE* list[], int size) {
    int max_idx = 0;
    for (int i = 1; i < size; i++) {
        if (list[i]->viewers > list[max_idx]->viewers) {
            max_idx = i;
        }
    }
    return max_idx;
}

int maxPlaytime(MOVIE* list[], int size) {
    int max_idx = 0;
    for (int i = 1; i < size; i++) {
        if (list[i]->playtime > list[max_idx]->playtime) {
            max_idx = i;
        }
    }
    return max_idx;
}

void printReport(MOVIE* list[], int size) {
    printGenreCount(list, size);
    
    int max_view_idx = maxViewers(list, size);
    int max_time_idx = maxPlaytime(list, size);
    
    printf("\n2. Longest\n");
    printMovie(list[max_time_idx]);
    printf("%s\n", list[max_time_idx]->description);
    
    printf("\n3. Most popular\n");
    printMovie(list[max_view_idx]);
    printf("%s\n", list[max_view_idx]->description);
}

int main(void) {
    MOVIE* list[MAX_MOVIES];
    int count = loadRecords(list);

    printf("%d records loaded.\n", count);
    for (int i = 0; i < count; i++) {
        printf("%d) ", i + 1);
        printMovie(list[i]);
    }

    printReport(list, count);
    
    return 0;
}