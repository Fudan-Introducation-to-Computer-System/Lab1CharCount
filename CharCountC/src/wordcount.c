#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUF_SIZE 1024
void iterateWords(char* line);
FILE* outFp;

int main(int argc, char** argv) {
    char *file_path = "../res/macbeth.txt";
    char buffer[BUF_SIZE];
    FILE *fp = fopen(file_path, "r");
    outFp = fopen("../output/ref.txt", "w");
    if (fp == NULL) {
        fprintf(stderr, "can not read file.\n");
        return 1;
    }
    while(!feof(fp)) {
        fgets(buffer, BUF_SIZE, fp);
        fprintf(outFp, "%s", buffer);
        iterateWords(buffer);
    }
    fclose(fp);
    fclose(outFp);
    return 0;
}

void iterateWords(char* line) {
    int begin = 0;
    int i = begin;
    long hash = 0, base = 263, mod = (long)1E9+7;
    while(1) {
        // printf("processing.\n");
        if (line[i] == ' ' || line[i] == '\n' || line[i] == '\0') {
            int length = i - begin;
            if (length > 0){
                char *word = malloc(length+1);
                strncpy(word, &line[begin], length);
                word[length] = '\0';
                fprintf(outFp, "len:%d\n", length);
                fprintf(outFp, "%s\n", word);
                hash = hash % 10000;
                fprintf(outFp, "%ld\n", hash);
                hash = 0;
                free(word);
            }
            begin = i+1;
            if (line[i] == '\n' || line[i] == '\0') {
                return;
            }
        }
        hash = ((hash * base % mod) + line[i]) % mod;
        i++;
    }
}