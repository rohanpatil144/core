int main() { 
char str[100]; 
 
int ch; 
int num; 
clrscr(); 
 
while (1) { 
printf("\nOperations\n"); 
printf("1. Push\n"); 
printf("2. Pop\n"); 
printf("3. Check Palindrome\n"); 
printf("4. Display Stack Status\n"); 
printf("5. Exit\n"); 
 
printf("Enter your choice: "); 
scanf(" %d", &ch); 
 
switch (ch) { 
case 1: 
printf("Enter the number of items you want to push:\n"); 
scanf("%d", &num); 
for (int i = 0; i < num; i++) { 
printf("Enter value to push: "); 
int value; 
scanf("%d", &value); 
push(value); 
} 
break; 
case 2: 
printf("%d popped from stack\n", pop()); 
break; 
case 3: 
printf("Enter a string: "); 
scanf("%s", str); 
if (isPalindrome(str)) { 
printf("%s is a palindrome.\n", str); 
} else { 
printf("%s is not a palindrome.\n", str); 
} 
break; 
case 4: 
displayStatus(); 
break; 
case 5: 
exit(0); 
default: 
printf("Invalid choice, please enter a valid option.\n"); 
} 
} 
getch(); 
 
return 0; 
} 
