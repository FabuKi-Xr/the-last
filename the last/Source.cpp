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

	if (n == 0) 
	{	
		printf("===== consequence =====\n");
		printf("NO sentence needed to find"); 
	}
	else {
		printf("what word do you want to find? : ");
		scanf("%s", word);
		w = word;
		for (int i = 0;i < n;i++)
		{
			printf("Enter Text[%d] : ", i);
			scanf(" %[^\n]", str_input[i].text);
			str_input[i].p = str_input[i].text;
		}
		printf("===== consequence =====\n");
		for (int i = 0;i < n;i++)
		{
			printf("text[%d] : ",i);
			finding(str_input[i].p,w);
			printf("\n");
		}
	}

	return 0;
}
void finding(char* x,char* w)
{
	int found = 0;
	int i = 0,j = 0;
	char* tempw,*tempx;
	tempw = w;
	
	for (x;*x != '\0'&&(found == false);x++)
	{
		tempx = x;
		found = true;
		for(w;*w != '\0';w++)
		{
			
			if (*x != *w) 
			{
				found = false;
				break;
			}
			else
			x++;
		}
		x = tempx;
		w = tempw;
		i++;

	}
	
	if (found == true)
	{
		printf("\'");
		for (w;*w != '\0';w++)
		{
			printf("%c", *w);
		}
		printf("\'");
		printf(" found at character: %d", i );
	}
	if (found == false)
	{
		printf("\'");
		for (w;*w != '\0';w++)
		{
			printf("%c", *w);
		}
		printf("\'");
		printf(" didn't find in this sentence");
	}
}