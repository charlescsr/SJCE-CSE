#include<stdio.h>
#include<string.h>
int main()
{
char str1[1000];
char str2[1000];
char str3[1000];
scanf("%s",str1);
scanf("%s",str2);
int i=strlen(str1)-1;
int j=strlen(str2)-1;
int k=0;
while(i>=0 && j>=0){
    if(str1[i]>=str2[j]){
        str3[k]=((str1[i]-48)-(str2[j]-48))+48;
        k++;
        i--;
        j--;
    }
    else{
        int borrow=(str1[i]-48)+10;
        int m=i-1;
        while((str1[m]-48)==0){
            str1[m]=57;
            m--;
        }
        str1[m]=((str1[m]-48)-1)+48;
        str3[k]=((borrow)-(str2[j]-48))+48;
        k++;
        i--;
        j--;
    }
}
while(i>=0){
    str3[k]=str1[i];
    k++;
    i--;
}
str3[k]='\0';
printf("%s",strrev(str3));
}
