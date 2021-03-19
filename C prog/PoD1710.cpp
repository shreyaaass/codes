#include<stdio.h>
#include<math.h>
int main()
{
	int finalp;
	float price,disc;
	scanf("%f",&price);
	if(price>=5000)
	disc=25;
	else if(price>=3000&&price<=4999)
	disc=15;
	else if(price>=1000&&price<=2999)
	disc=10;
	else if(price<1000)
	disc=5;
 float totprice= price*(100-disc)/100;
 int totp=price*(100-disc)/100;
	float fp=totp+.5;
	if(totprice>=fp)
	finalp=ceil(totprice);
	else
	finalp=floor(totprice);
	printf("%d",finalp);
	}
