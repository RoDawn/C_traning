#include <stdio.h>                              //��ó����, 5��
#define SIZE 3                                  //��ó����, 5��    
typedef struct {                                //����ü, 12��
	char name[10];
	double w;
}WEIGHT;
void swap(WEIGHT*, WEIGHT*);                    //�Լ� ����, 8��
int main(void)
{
	WEIGHT man[SIZE] = { {"�Ѱ���", 57.5},      //�迭, 10��
						 {"��û��", 125.6},
						 {"�����", 35.7} };

	int i, j;                                  //����, 3��, ��� Ŭ����, 9��
	for (i = 0; i < 2; i++) {                  //���, 7��
		for (j = i + 1; j < 3; j++) {          //������, 6��
			if (man[i].w < man[j].w) {
				swap(&man[i], &man[j]);
			}                                 //call by address, 11��
		}
	}
	printf("�̸�\tü��\n");                   //ǥ�� ���̺귯�� �Լ�, 4��
	for (i = 0; i < 3; i++) {
		printf(" %s %5.1f\n", man[i].name, man[i].w);
	}
	return 0;
}

void swap(WEIGHT* mani, WEIGHT* manj)       //������, 11��
{                                           //�Լ� ����
	WEIGHT temp;
	temp = *mani;
	*mani = *manj;
	*manj = temp;
}