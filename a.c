#include <stdio.h>
#define SPACE " "
#define LINE "\n"

int main(){
	char *str[] = 
	{	"A",
		"B",
		"C",
		"D",
		"E",
		"F",
		"G",
		0
	};
		
	int len = 0;
	for(; str[len] != NULL; len ++);
	int count = 0;
	
	do{
		int i=0;
		for(;i < len; i++) printf("%s", str[i]);
		for(int j=i-2; j>-1; j--) printf("%s", str[j]);
		str[(i-1) - count] = SPACE;	
		printf("%s", LINE);
		count ++;
	}while(count < len);
	
	return 0;
}
