#include <stdio.h> //예제14-2
#include <stdlib.h>

struct student {
	int sno;
	char name[10];
	int kor;
	int eng;
	int mat;
	float avg;
};

int main(void)
{
	struct student s;
	int cnt, sum;

	printf("학생별 학번, 성명, 성적 입력\n");

	for (cnt = 1; cnt <= 3; cnt++)
	{
		printf("\n[3명 중 %d번째 학생]\n", cnt);
		printf("학번: ");
		scanf_s("%d", &s.sno); //scanf_s()함수로 받아서 평균값을 구하는 문제
		printf("성명: ");
		scanf_s("%s", s.name, sizeof(s.name)); //배열이기 때문에 주소참조연산자를 쓰지 않음
		printf("국어 점수: ");
		scanf_s("%d", &s.kor);
		printf("영어 점수: ");
		scanf_s("%d", &s.eng);
		printf("수학 점수: ");
		scanf_s("%d", &s.mat);

		sum = s.kor + s.eng + s.mat;
		s.avg = sum / 3.0;

		printf("\n학번 \t\t성명 \t국어 \t영어 \t수학 \t평균\n");
		printf("%d \t%s \t%d \t%d \t%d \t%.2f\n", s.sno, s.name, s.kor, s.eng, s.mat, s.avg);
	}
	return 0;
}