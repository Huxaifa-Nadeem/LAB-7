#include <stdio.h>

int main()
{
    char input_arr[50];
    printf("Enter equation: ");
    scanf("%s", input_arr);

    int i = 0;
    int answer = 0;
    int temp = 0;
    char operator = '+';

    while (input_arr[i] != '\0')
    {
        if ((input_arr[i] >= '0') && (input_arr[i] <= '9'))
        {
            temp = (temp * 10) + (input_arr[i] - '0');
        }
        else if (input_arr[i] == '+')
        {
            if (operator == '+')
            {
                answer += temp;
            }
            else if (operator == '-')
            {
                answer -= temp;
            }
            operator = '+';
            temp = 0;
        }
        else if (input_arr[i] == '-')
        {
            if (operator == '+')
            {
                answer += temp;
            }
            else if (operator == '-')
            {
                answer -= temp;
            }
            operator = '-';
            temp = 0;
        }
        else
        {
            printf("Invalid operator '%c'\n", input_arr[i]);
            return 1;
        }

        i++;
    }

    if (operator == '+')
    {
        answer += temp;
    }
    else if (operator == '-')
    {
        answer -= temp;
    }

    printf("Answer: %d\n", answer);
}
