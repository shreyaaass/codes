#include<stdio.h>
#include<math.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int l[n];
    //Adding elements in l
    for(i=0;i<n;i++){
        scanf("%d",&l[i]);
    }
    //Creating Subsequences and finding average
    int s[n][n];
    float avg[n];
    for(i=0;i<(n/2)-1;i++){
        int c=0;
        float sum=0.0;
        for(int j=i+1;j<(n-i-1);j++)
		{
            s[i][j]=l[j];
            sum=sum+l[j];
            c++;
        }
        avg[i]=sum/(float)c;
        sum=0.0;
        c=0;
    }
    //finding the one having maximum avg
    float max=avg[0];
    for(i=0;i<(n/2)-1;++i){
        if (avg[i]>max){
            max=avg[i];
        }
    }
    //finding the one having minimum avg
    float min=avg[0];
    for(i=0;i<(n/2)-1;++i){
        if (avg[i]<min){
            min=avg[i];
        }
    }
    //finding the indexes of max and min
    int high,low;
    for(i=0;i<(n/2)-1;++i){
        if (avg[i]==max){
            high=i;
        }
        else if (avg[i]==min){
            low=i;
        }
    }
    //Printing desired output
    if(high>low){
        printf("S%d and S%d\n",low+1,high+1);
        for(i=low+1;i<n-low-1;++i){
            printf("%d ",l[i]);
        }printf("\n");
        for(i=high+1;i<n-high-1;++i){
            printf("%d ",l[i]);
        }
    }
    else{
        printf("S%d and S%d\n",high+1,low+1);
        for(i=high+1;i<n-high-1;++i){
            printf("%d ",l[i]);
        }printf("\n");
        for(i=low+1;i<n-low-1;++i){
            printf("%d ",l[i]);
        }
    }
    
    return 0;
}
