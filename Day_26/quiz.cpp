#include <stdio.h>

int main()
{
    int totalQuestions;
    int score;
    int answer;
    int i;

    totalQuestions = 5;
    score = 0;

    printf("Welcome to the Quiz Application\n");
    printf("Answer the following questions by entering the option number\n\n");

    printf("Question 1: What is the capital of India?\n");
    printf("1. Mumbai\n");
    printf("2. Delhi\n");
    printf("3. Kolkata\n");
    printf("4. Chennai\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 2)
    {
        printf("Correct Answer!\n\n");
        score = score + 1;
    }
    else
    {
        printf("Wrong Answer. Correct answer is Delhi.\n\n");
    }

    printf("Question 2: What is 5 + 7?\n");
    printf("1. 10\n");
    printf("2. 11\n");
    printf("3. 12\n");
    printf("4. 13\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
    {
        printf("Correct Answer!\n\n");
        score = score + 1;
    }
    else
    {
        printf("Wrong Answer. Correct answer is 12.\n\n");
    }

    printf("Question 3: Which language is this program written in?\n");
    printf("1. Java\n");
    printf("2. Python\n");
    printf("3. C++\n");
    printf("4. HTML\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
    {
        printf("Correct Answer!\n\n");
        score = score + 1;
    }
    else
    {
        printf("Wrong Answer. Correct answer is C++.\n\n");
    }

    printf("Question 4: How many days are there in a leap year?\n");
    printf("1. 364\n");
    printf("2. 365\n");
    printf("3. 366\n");
    printf("4. 367\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
    {
        printf("Correct Answer!\n\n");
        score = score + 1;
    }
    else
    {
        printf("Wrong Answer. Correct answer is 366.\n\n");
    }

    printf("Question 5: What is the square root of 81?\n");
    printf("1. 7\n");
    printf("2. 8\n");
    printf("3. 9\n");
    printf("4. 10\n");
    printf("Enter your answer: ");
    scanf("%d", &answer);

    if (answer == 3)
    {
        printf("Correct Answer!\n\n");
        score = score + 1;
    }
    else
    {
        printf("Wrong Answer. Correct answer is 9.\n\n");
    }

    printf("Quiz Completed!\n");
    printf("Your score is %d out of %d\n", score, totalQuestions);

    if (score == totalQuestions)
    {
        printf("Excellent! You got a perfect score.\n");
    }
    else
    {
        if (score >= 3)
        {
            printf("Good job! You did well.\n");
        }
        else
        {
            printf("You need to study more. Try again.\n");
        }
    }

    return 0;
}