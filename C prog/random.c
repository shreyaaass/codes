#include<stdio.h>
struct laptop{
	int ram;
	char itemname[20];
	int itemid;
	int price;
	char vendorname[20];
	char custcat[20];
	int cpu;
	int storage;
};
int isarmstrong(int n)
{
	int a,s;
	s=n;
	a=0;
	while(s!=0)
	{
		a=a+(s%10)*(s%10)*(s%10);
		s=s/10;		
	}	
	if (a==n)
	{
		return (0);
	}
	else
	{
		return 1;
	}
}
int main()
 {
	int num,i;
    float price;
	scanf("%d",num);
	struct laptop l[n]
	};
	for(i=0;i<num;i++)
	{
	getchar();
	scanf("%[^\n]c",&l[i].vendorname);
	getchar();
	scanf("%[^\n]",&l[i].custcat);
	getchar();
	scanf("%[^\n]",&l[i].itemname);
	scanf("%d",&l[i].itemid);
	scanf("%d",&l[i].price);
	scanf("%d",&l[i].ram);
	scanf("%d",&l[i].cpu);
	scanf("%d",&l[i].storage);
	}
	for(i=0;i<num;i++)
    {
        price=0
        {
            if(strcmp(l[i].custcat,"Student")==0&&isarmstrong(l[i].itemid)==0&&l[i].ram==16&&l[i].price>61000&&l[i].itemname[1]!='a');
            price=l[i].price*.93
        }

    }
    printf("%d",price);
}