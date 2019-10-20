#include <stdio.h>

int main() {

    printf("Let's chat\n");
    char userInput[20], name[20], question[100]; int age;
    gets(userInput);
    printf("%s to you too I am Hal. What's your name?\n", userInput);
    scanf( "%s", name);
    printf("Oh hi, %s. What's your age?\n", name);
    scanf( "%d", &age);
    printf("Wow. %d is something. What is your favorite food?\n", age);
    gets(userInput);
    gets(userInput);
    printf("%s? I hate that food. What else do you like?\n", userInput);
    scanf("%s", userInput);
    printf("%s is delicious! Do you have any pets?\n", userInput);
    scanf("%s", userInput);
    printf("That's cool! I think we could be good friends. What do you think?\n");
    gets(userInput);
    gets(userInput);
    printf("Ask me something yourself.\n");
    gets(question);
    printf("Sorry. I don't want to answer that. Bye ");

    return 0;
}