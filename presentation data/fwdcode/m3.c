#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>
#include <string.h>
#define SIZE 5

void sentenceGenerator(const char *const article[],  const char *const noun[],
					  const char *const verb[], const char *const preposition[]);

int main()
{
  const char *article [SIZE] = { "the", "a", "one", "some", "any"};
  const char *noun[SIZE] = { "boy", "girl", "dog", "town", "car"};
  const char *verb[SIZE] = { "drove","jumped", "ran", "walked", "skipped"};
  const char *preposition[SIZE] = { "to", "from", "over", "under", "on"};
  srand(time( NULL ));
  sentenceGenerator( article, noun, verb, preposition );

  system ("pause");

  return 0;
}

void sentenceGenerator(const char *const article[],  const char *const noun[],const char *const verb[], const char *const preposition[])
{
  char sentence[128];

  int i;

  srand(time( NULL ));

  for ( i = 0; i < 7; i++ )
  {
	 sprintf( sentence, " %s %s %s %s %s %s.",
			 article		[rand() % SIZE],			 
			 noun		   [rand() % SIZE],
			 verb		   [rand() % SIZE],
			 preposition	[rand() % SIZE],
			 article		[rand() % SIZE],
			 noun		   [rand() % SIZE]);

  sentence[1] = toupper( sentence[1] );

	 puts(sentence);
  }
}

	

