#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct question
{
    char question_ask[300];
    char options[4][100];
    int correct_answer;
};

int ask_question(struct question q)
{
    int user_answer;
    printf("%s \n", q.question_ask);
    for (int i = 0; i < 4; i++)
    {
        printf("%d. %s\n", i + 1, q.options[i]);
    }
    do
    {
        printf("choose one option(1,2,3,4) \n");
        scanf("%d", &user_answer);
        if (user_answer < 1 || user_answer > 4)
        {
            printf("invalid answer\n please choose valid option from 1 to 4 \n");
        }

    } while (user_answer < 1 || user_answer > 4);

    return user_answer - 1;
}

int main()
{
    char name[40];
    int score = 0;
    struct question questions[5] = {

        {
            "what's the capital of BIHAR",
            {"parasnath", "patna", "philidelphia", "punjab"},
            1,
        },
        {
            "what's the capital of CHHATTISGARH",
            {"raipur", "raigarh", "rampur", "bhilai"},
            0,
        },
        {
            "what's the capital of RAJASTHAN",
            {"jaipur", "junagarh", "mewar", "willington"},
            0,
        },
        {
            "what's the capital of haryana",
            {"noida", "gurgaon", "champa", "chandigarh"},
            3,
        },
        {
            "what's the capital of PUNJAB",
            {"bhatinda", "bhopal", "chandigarh", "none of these"},
            2,
        },

    };

    int total_question = 5;

    printf("welcome to the world of quiz! \n");
    printf("INSTRUCTION!!!! \n\nyou will be asked 5 questions\nquestions are case sensative\n\n");
    printf("what's your good name: \n");
    fgets(name, sizeof(name), stdin);
    printf("hello!! %s\n", name);
    printf("here we go!!!!!!!!!! \n");

    for (int i = 0; i < total_question; i++)
    {
        printf("\nquestion %d:  \n", i + 1);
        int user_answer = ask_question(questions[i]);

        if (user_answer == questions[i].correct_answer)
        {
            printf("correct!! \n");
            score++;
        }
        else
        {
            printf("wrong! correct answer is : %s\n", questions[i].options[questions[i].correct_answer]);
        }
    }

    printf("\nQuiz Over! You scored %d out of %d.\n", score, total_question);

    return 0;
}  