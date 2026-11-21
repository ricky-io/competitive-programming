#include <stdio.h>
#include <string.h>

#define MAX 100

char stack[MAX];
int top = -1;

void push(char c)
{
    stack[++top] = c;
}

char pop()
{
    if(top == -1)
        return '\0';
    return stack[top--];
}

int match(char open, char close)
{
    if(open == '(' && close == ')') return 1;
    if(open == '{' && close == '}') return 1;
    if(open == '[' && close == ']') return 1;
    return 0;
}

int main()
{
    char exp[200];
    int i;

    printf("Enter expression: ");
    fgets(exp, sizeof(exp), stdin);

    for(i = 0; exp[i] != '\0'; i++)
    {
        if(exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            push(exp[i]);

        else if(exp[i] == ')' || exp[i] == '}' || exp[i] == ']')
        {
            char open = pop();

            if(open == '\0' || !match(open, exp[i]))
            {
                printf("Expression is NOT Balanced\n");
                return 0;
            }
        }
    }

    if(top == -1)
        printf("Expression is Balanced\n");
    else
        printf("Expression is NOT Balanced\n");

    return 0;
}
