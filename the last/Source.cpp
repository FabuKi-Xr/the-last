#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void finding(char*,char*);
int main()
{		
	struct text
	{

		char text[100], * p;

	}str_input[99];

	int n = 0;
	char word[20],*w;
	printf("=====FINDING WORD=====\n");
	printf("How many sentense that you want huh? : ");

	scanf_s("%d", &n);

	printf("what word do you want to find? : ");
	scanf("%s",word);
	w = word;
	if (n == 0) { printf("NO sentense needed to find"); }
	else {
		for (int i = 0;i < n;i++)
		{
			printf("Enter Text[%d] : ", i);
			scanf("%s", str_input[i].text);
			str_input[i].p = str_input[i].text;

		}
		//printf("the consequence : \n");
		for (int i = 0;i < n;i++)
		{
			printf("=====The consequence=====");
			finding(str_input[i].p,word);
			printf("\n");
		}
	}

	return 0;
}
void finding(char* x,char* w)
{
	int found=0;
	int i = 0,j = 0;
	for (x;*x != '\0';x++)
	{
		found = true;
		i = 0;
		for(w;*w != '\0';w++)
		{
			j = 0;
			if (*(x + j) != *w) 
			{
				found = false;
				break;
			}
			j++;
		}
		if (found == true)
		{
			printf("\"%s\" found at character: %d",*w,i+1);
		}
		i++;
	}

}