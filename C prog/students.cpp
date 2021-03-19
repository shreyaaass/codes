#include<stdio.h>
#include<string.h>
struct student
{
    int age;
    char name[15];
    char lang[15];
    float gpa;
    char gen;
    char res[15];
    int bday;
    int bmonth;
};
int main()
{
	int i,n,c;
	c=0;
	scanf("%d",&n);
	struct student s[n];
	for(i=0;i<n;i++)
	{
		printf("Enter Name\n");
		getchar();
		scanf("%[^\n]c",&s[i].name);
		printf("Enter Age:\n");
		scanf("%d",&s[i].age);
		printf("Enter gender(M/F):\n");
		getchar();
		scanf("%c", &s[i].gen);
		printf("Enter Native Language:\n");
		scanf("%s",&s[i].lang);
		printf("Enter Date of Birth(dd):\n");
		scanf("%d",&s[i].bday);
		printf("Enter birthday month(mm):\n");
		scanf("%d",&s[i].bmonth);	
		printf("Enter city of residence:\n");
		getchar();
		scanf("%[^\n]c",&s[i].res);		
		printf("Enter GPA:\n");
		scanf("%f",&s[i].gpa);
		if (s[i].age>18 &&strcmp(s[i].lang,"tamil")==0 &&strcmp(s[i].res,"vellore")==0&&s[i].gpa>8.5&&s[i].bday==3&&s[i].bmonth==3&&s[i].gen=='M')
		{
			c++;
		}
	}	
printf("%d\n",c);
}
