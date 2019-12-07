#include<stdio.h>
int main(){
    int m;
    scanf("%d",&m);
    int row=m*m;
    int a1=m,n=m-1,d=m-2;
    int an=a1+(n-1)*d;
    int col=an*2-1;
    char arr[row][col];
    int l=col/2,r=col/2,count=0;
    for(int i=0;i<row-m;i++){
        for(int j=0;j<col;j++){
           
            if(j>=l && j<=r){
                if((i+j)%2!=0){
                    arr[i][j]='*';
                }
                else{
                    arr[i][j]=' ';
                }
            }
            else{
                arr[i][j]=' ';
            }
        }
        count++;
 if(count==m){
     count=0;
     l++;
     r--;
 }
 else{
     l--;
     r++;
 }
 
    }
    int start=an-m;
    for(int i=row-m;i<row;i++){
        for(int j=0;j<col;j++){
            arr[i][j]=' ';
        }
    }
    for(int i=row-m;i<row;i++){
        for(int j=start;j<col-start;j+=2){
            arr[i][j]='*';
        }
    }
  for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
                printf("%c",arr[i][j]);
        }
        printf("\n");
  }
}