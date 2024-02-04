#include<stdio.h>
#include<string.h>
int vowels(char *str){
	int count = 0;
	for(int i=0; *(str+i)!='\0'; i++){
		if(str[i]=='a' || str[i]=='A')
			count++;
		else if(str[i]=='e' || str[i]=='E')
			count++;
		else if(str[i]=='i' || str[i]=='I')
			count++;
		else if(str[i]=='o' || str[i]=='O')
			count++;
		else if(str[i]=='u' || str[i]=='U')
			count++;
		else
			continue;
	}
	return count;
}
int space(char *str){
	int count = 0;
	for(int i = 0; str[i]!='\0'; i++)
	{
		if(str[i]==' ')
			count++;
		else
			continue;
	}
	return count;
}
int main()
{
	char str[50] = "We are INDIAN";
	int n = strlen(str);
	int v = vowels(str);
	int s = space(str);
	int c = n-v-s;
	printf("v: %d, c: %d",v,c);
}
