#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
#include <ctype.h>

const int SEN_LEN = 80;
const int MAX_SEN = 20;



char* generateSentence() {
  char* sentence = calloc((SEN_LEN+1), sizeof(char));
  const char* ARTICLES[] = {"Microsoft","Google","Facebook","Twitter","Amazon","A comapany","Ebay","Flipkart","IBM","An software Engineer","Acer","They",};
const char* NOUNS[] =  {"published","revealed","announces","developed","prepared","made","attached"};
const char* VERBS[] =  {"latest","newest","biggest","advanced","fastest","costly"};
const char* PREPOSITIONS[] =  {"software","app","technology","service","product"};
const int ARTICLES_SIZE = sizeof(ARTICLES)/sizeof(ARTICLES[0]);
const int NOUNS_SIZE = sizeof(NOUNS)/sizeof(NOUNS[0]);
const int VERBS_SIZE = sizeof(VERBS)/sizeof(VERBS[0]);
const int PREPOSITIONS_SIZE = sizeof(PREPOSITIONS)/sizeof(PREPOSITIONS[0]);
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
char* generateSent() {
  char* sent = calloc((SEN_LEN+1), sizeof(char));
  const char* ARTICLES[] = {"The","This",};
const char* NOUNS[] =  {"technology is","technical work is","work is","invention is"};
const char* VERBS[] =  {"latest","oldest","newest","biggest","advanced","fastest","easiest"};
const char* PREPOSITIONS[] =  {"till now","yet","as compared","till"};
const int ARTICLES_SIZE = sizeof(ARTICLES)/sizeof(ARTICLES[0]);
const int NOUNS_SIZE = sizeof(NOUNS)/sizeof(NOUNS[0]);
const int VERBS_SIZE = sizeof(VERBS)/sizeof(VERBS[0]);
const int PREPOSITIONS_SIZE = sizeof(PREPOSITIONS)/sizeof(PREPOSITIONS[0]);
  //Build Sentence
  strcat(sent, ARTICLES[rand()%ARTICLES_SIZE]);

  strcat(sent, " ");
  strcat(sent, NOUNS[rand()%NOUNS_SIZE]);

  strcat(sent, " ");
  strcat(sent, VERBS[rand()%VERBS_SIZE]);

  strcat(sent, " ");
  strcat(sent, PREPOSITIONS[rand()%PREPOSITIONS_SIZE]);

  //Capitalize
  sent[0] = toupper(sent[0]);

  return sent;
}
char* generateSente() {
  char* sentence = calloc((SEN_LEN+1), sizeof(char));
  const char* ARTICLES[] = {"Soon","In future","In reality","In virtuality","Tomorrow","In this field","Upcomming"};
const char* NOUNS[] =  {"the technology","the advancement","the research work","the planning"," invention"};
const char* VERBS[] =  {"will be","must be","should be","would be","could be","will be"};
const char* PREPOSITIONS[] =  {"usefull","helpfull","implemented","launched","announced"};
const int ARTICLES_SIZE = sizeof(ARTICLES)/sizeof(ARTICLES[0]);
const int NOUNS_SIZE = sizeof(NOUNS)/sizeof(NOUNS[0]);
const int VERBS_SIZE = sizeof(VERBS)/sizeof(VERBS[0]);
const int PREPOSITIONS_SIZE = sizeof(PREPOSITIONS)/sizeof(PREPOSITIONS[0]);
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

    
        char* sentence = generateSentence();
        printf("%s.", sentence);
        free(sentence);
        char* sent = generateSent();
        printf("%s.", sent);
        free(sentence);
        char* sente = generateSente();
        printf("%s.\n", sent);
        free(sentence);
    
    

    return 0;
}
