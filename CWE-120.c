#include <stdio.h>
#include <string.h>

void manipulate_string(char* string){
	char buf[24];
	strcpy(buf, string);
	/* do something with buf */
}

int main(void) {

	/* Example 1 */
	char last_name[20];
	printf ("Enter your last name: ");
	scanf ("%s", last_name);

	/* Example 2 */
	manipulate_string(last_name);

	/* Example 3 */
	char buf[24];
	printf("Please enter your name and press <Enter>\n");
	gets(buf);

	return 0;
}
