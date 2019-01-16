
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
int check(char str[20]);
int main(){
	char str[100];
	int i;
printf("enter a ip address\n");
scanf("%s",str);
i=check(str);
if(i==1)
printf("it is valid ip address");
else
printf("it is not valid");
getch();
}
int check(char str[20]){
char str1[20][20];
int len,i,j=0,k=0,arr[10],sum=0;
len=strlen(str);
for(i=0;i<len;i++){
      if(str[i]!='.'){
      str1[k][j]=str[i];
      j++;}
      else {
      str1[k][j]='\0';
      k=k+1;
      j=0;}}
      str1[k][j]='\0';
      for(i=0;i<4;i++){

	arr[i]=atoi(str1[i]);}


	for(i=0;i<4;i++){
	if((arr[i]>0)&&(arr[i]<255))
	sum=sum+1;}
	if(sum==4)
	return 1;
	else return 0;


}









