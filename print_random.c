#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "random.c"


//detelte before pull
//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

int main()
{
	int a;

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
	for(a=0;a<7;a++)
		putchar( randchar() );
	putchar('\n');

	return(0);
}