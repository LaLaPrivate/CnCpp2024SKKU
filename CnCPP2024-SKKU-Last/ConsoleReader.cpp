#include "ConsoleReader.h"

int ReadInt(const char* prompt){
    printf(prompt);
    int input;
    scanf("%d", &input);
    fseek(stdin, 0, SEEK_END);
    return input;
}

float ReadFloat(const char* prompt){
    printf(prompt);
    float input;
    scanf("%f", &input);
    fseek(stdin, 0, SEEK_END);
    return input;
}

void ReadString(const char* prompt, char* out){
    printf(prompt);
    scanf("%99[^\n]s", out);
    fseek(stdin, 0, SEEK_END);
}