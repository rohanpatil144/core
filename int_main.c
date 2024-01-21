#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

#define max 100

int main()
{
 char str[100];
 
int ch;
int num;
clrscr();

while(1){
 printf("1.push \n");
 printf("2.pop \n");
 printf("3.display \n");
 printf("4.exit \n");

printf("enter th choice:");
scanf("%d",&ch);

switch (ch){
 case 1:
 printf("
