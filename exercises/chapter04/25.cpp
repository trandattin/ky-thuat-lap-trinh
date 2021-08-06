#include "stdio.h"

struct team{
	char name[100];
	int num_lose;
	int num_win;
	int num_draw;
	float point;
};

void inputTeam(team SOCCER[], int& num_team){
	printf("Number of teams: ");
	scanf("%d",&num_team);
	for (int i=0; i<num_team; i++){
		printf("Team number %d\n",i+1);
		printf("Name = ");
		scanf("%s",&SOCCER[i].name);
		printf("Number victory games = ");
		scanf("%d",&SOCCER[i].num_win); 
		printf("Number draw games = ");
		scanf("%d",&SOCCER[i].num_draw);
		printf("Number lose games = ");
		scanf("%d",&SOCCER[i].num_lose);
		SOCCER[i].point = 3*SOCCER[i].num_win + SOCCER[i].num_draw;
	}
}

void outputSoccer(team SOCCER[], int num_team){
	for (int i = 0; i<num_team; i++){
		printf("Team number %d\n",i+1);
		printf("NAME: %s\n",SOCCER[i].name);
		printf("Point: %.1f\n",SOCCER[i].point);
		printf("\n");
	}
}

void outputTeam(team A){
	printf("NAME: %s\n",A.name);
	printf("Number victory games: %d\n",A.num_win);
	printf("Number draw games: %d\n",A.num_draw);
	printf("Number lose games: %d\n",A.num_lose);
	printf("Point: %.1f\n",A.point);

}

void swap(team& a, team& b){
	team tmp = a;
	a = b;
	b = tmp;
}

int indexMinPoint(team SOCCER[], int begin, int num_team){
	int index_min = begin;
	for (int i=begin+1; i<num_team; i++){
		if(SOCCER[i].point < SOCCER[index_min].point){
			index_min = i;
		}
	}
	return index_min;
}

void selectSort(team SOCCER[], int num_team){
	for(int k=0; k<num_team; k++){
		int index_min = indexMinPoint(SOCCER,k,num_team);
		if (index_min>k){
			swap(SOCCER[k],SOCCER[index_min]);
		}
	}
}

void noVictory(team SOCCER[], int num_team){
	for (int i=0; i<num_team; i++){
		if(SOCCER[i].num_win == 0)
			outputTeam(SOCCER[i]);
	}
}

int main(){
	team SOCCER[100];
	int num_team;
	inputTeam(SOCCER, num_team);
	printf("\n**SORT BY POINT**\n");
	selectSort(SOCCER,num_team);
	outputSoccer(SOCCER,num_team);
	printf("**THE CHAMPIONS**\n");
	for(int i = num_team-1; i>-1; i--){
		if(SOCCER[i].point == SOCCER[num_team-1].point)
			outputTeam(SOCCER[i]);
	}
	printf("\n**Team no victory**\n");
	noVictory(SOCCER,num_team);

}