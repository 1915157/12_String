// 12-02>

#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int i = 0;
	char str[4];
	str[0] = 'a';
	str[1] = 'b';
	str[2] = 'c';
	str[3] = '\0';
	
	printf("%s\n", str);
	
	while (str[i] != '\0')
	{
			
		printf("%c", str[i]);
		i++;
	}
	
	return;
}

// 12 - 03>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void){
	
	char src[] = "The worst things to eat before you sleep";
	char dst[100];
	
	strcpy(dst, src);
	
	printf("copied string : %s", dst);
	
	return;
}

// 12 - 04>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void main(void){

	char str[30] = "happy C programming";
	
	printf("string \"%s\" length : %i", str, strlen(str) );
	
	return;
}

// 12 - 05 >

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void){

	int i;
	char input[100];
	FILE *fp;
	
	fp = fopen("sample.txt", "w");
	for(i=0; i<3; i++)
	{
		printf("input a world : ");
		scanf("%s", input);
		fprintf(fp, "%s\n", input);
	}
	
	fclose(fp);
	return 0;
	
}
