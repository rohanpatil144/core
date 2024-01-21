void push(int item,int *top,int s[])
{
if(*top==STACK_SIZE-1)
{
printf("Stack Overflow");
return;
}
s[++(*top)]=item;
printf("Item added");
}
