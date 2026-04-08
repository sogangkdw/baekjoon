#include <stdio.h>
#include <string.h>

int main(void) {

	char str[100];
	int len;
	char* p;
	int cnt = 0;

	char ch = 'a';
	scanf("%s", str);
	len = strlen(str);

	for (ch = 'a'; ch <= 'z'; ch++) {
		cnt = 0;
		for (p = str; p < str + len; p++) {
			if (*p == ch) {
				//Write your code here
                if (cnt==1){
                    continue;
                }
                printf("%d ", p-str);
                cnt=1;
			}
		}
		if (cnt == 0) {
			//Write your code here
            printf("%d ",-1);

		}
	}

	return 0;
}