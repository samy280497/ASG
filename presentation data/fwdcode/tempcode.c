#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

const int SEN_LEN = 80;
const int MAX_SEN = 20;

const char* ARTICLES[] = {"the", "a", "one", "some", "any", "once a", "long ago"};
const char* NOUNS[] =  {"boy", "girl", "dog", "town", "car", "man","team","players"};
const char* VERBS[] =  {"drove", "jumped", "ran", "walked", "skipped","played","sprint"};
const char* PREPOSITIONS[] =  {"to", "from", "over", "under", "on","in","for","with"};
const int ARTICLES_SIZE = sizeof(ARTICLES)/sizeof(ARTICLES[0]);
const int NOUNS_SIZE = sizeof(NOUNS)/sizeof(NOUNS[0]);
const int VERBS_SIZE = sizeof(VERBS)/sizeof(VERBS[0]);
const int PREPOSITIONS_SIZE = sizeof(PREPOSITIONS)/sizeof(PREPOSITIONS[0]);

char* generateSentence() {
  char* sentence = calloc((SEN_LEN+1), sizeof(char));

  //Build Sentence
  strcat(sentence, ARTICLES[rand()%ARTICLES_SIZE]);

  strcat(sentence, " ");
  strcat(sentence, NOUNS[rand()%NOUNS_SIZE]);

  strcat(sentence, " ");
  strcat(sentence, VERBS[rand()%VERBS_SIZE]);

  strcat(sentence, " ");
  strcat(sentence, PREPOSITIONS[rand()%PREPOSITIONS_SIZE]);

  //Capitalize
  sentence[0] = toupper(sentence[0]);

  return sentence;
}

int main(int argc, char* argv[]) {
    srand(time(NULL));

    for(int i = 0; i < MAX_SEN; i++) {
        char* sentence = generateSentence();
        printf("%s.\n", sentence);
        free(sentence);
    }

    return 0;
}
