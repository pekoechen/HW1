#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>	// for isdigit()
#include <string.h>	//for strlen()


#define SIZE_BUFFER 256

int main(void) {
	int n = 0, i, j, temp;
	char h; 
	char str[SIZE_BUFFER] = {'\0'};
	int length;	
	
	
	while(1){
		printf("input a integer N between 2 to 9:\n");
		scanf("%s", &str);
//		printf("str: %s\n", str);
//		printf("str lenght: %d\n", strlen(str));

	/* check input range */
		length = strlen(str);
		for(i=0;i<length;i++){
			if(!isdigit(str[i]))
				break;
		}

		if(i!=length){
			printf("[ERROR] input is invalidate \n");
			continue;
		}	

		/* change data type from "char" to "int" */
		n = atoi(str);
//		printf("n: %d\n", n);
	/////////////////////////////
	 
	 
		if(n>9 || n==1) {
			puts("只能輸入2到9.眼睛瞎了還是看不懂英文?"); 
		} 
		else{ 
			for(i = 2; i <= n; i++){
				for(j =1; j <= n; j++)
				{
					temp = i*j;
					printf("%d*%d=%2d\t", i, j, temp);
					if(j==n)
						puts(""); 
				}
			}
		}

		printf("press q to quit:\n"); 
		scanf("%s", &h);
		switch(h)
		{
			case 'q': 
				return 0;
			default: 
				printf("我愛九九乘法表!!(趁亂告白)\n");
			break;
		}
	}
}