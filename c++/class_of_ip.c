#include<stdio.h> 
#include<string.h>  
char findClass(char str[]) 
{
    char arr[4]; 
    int i = 0; 
    while (str[i] != '.') 
    { 
        arr[i] = str[i]; 
        i++; 
    } 
    i--; 
    int ip = 0, j = 1; 
    while (i >= 0) 
    { 
        ip = ip + (str[i] - '0') * j; 
        j = j * 10; 
        i--; 
    } 
    if (ip >=1 && ip <= 126) 
        return 'A';  
    else if (ip >= 128 && ip <= 191) 
        return 'B';  
    else if (ip >= 192 && ip <= 223) 
        return 'C'; 
    else if (ip >= 224 && ip <= 239) 
        return 'D'; 
    else
        return 'E'; 
} 
int main() 
{ 
    char str[15];
    char ipClass;
    printf("Enter The IP ADDRESS :-");
	gets(str); 
    ipClass = findClass(str); 
    printf("Given IP address belongs to Class %c\n",ipClass);
}
                                           
