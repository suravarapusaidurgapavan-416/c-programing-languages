#include<stdio.h>
int main(){
	int height;
	scanf("%d",height);
	if(height<150)
	printf("the person is dwarf");
	else
	if(height>=150 && height<=165)
	printf("person is average heighted");
	else
	if(height>=165 && height>195)
	printf("person is taller");
	else
	printf("abnormal height");
	return 0;
}
