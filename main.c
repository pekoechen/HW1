#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n = 0, i, j, temp;
	char h; 

	while(1)
	{
		printf("input a integer N between 2 to 9:\n");
		scanf("%d", &n); 
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