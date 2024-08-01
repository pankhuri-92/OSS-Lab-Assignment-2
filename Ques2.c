#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX_WORDS 1000
#define MAX_WORD_LEN 100
#define MAX_PARAGRAPH_LEN 10000

typedef struct {
    char word[MAX_WORD_LEN];
    int count;
} WordFrequency;

int findWord(WordFrequency words[], int count, char *word);
void toLowerCase(char *str);

int main() {
    char paragraph[MAX_PARAGRAPH_LEN];
    WordFrequency words[MAX_WORDS];
    int wordCount = 0;

    printf("Enter a paragraph: ");
    fgets(paragraph, sizeof(paragraph), stdin);

    char *token = strtok(paragraph, " ,.-\n");

    while (token != NULL) {
        toLowerCase(token);
        int index = findWord(words, wordCount, token);

        if (index != -1) {
            words[index].count++;
        } else {
            strcpy(words[wordCount].word, token);
            words[wordCount].count = 1;
            wordCount++;
        }

        token = strtok(NULL, " ,.-\n");
    }

    for (int i = 0; i < wordCount; i++) {
        printf("%s: %d\n", words[i].word, words[i].count);
    }

    return 0;
}

int findWord(WordFrequency words[], int count, char *word) {
    for (int i = 0; i < count; i++) {
        if (strcmp(words[i].word, word) == 0) {
            return i;
        }
    }
    return -1;
}

void toLowerCase(char *str) {
    for (int i = 0; str[i]; i++) {
        str[i] = tolower(str[i]);
    }
}
