#include<stdio.h>
#include <ctype.h>
#include<string.h>
#include<stdlib.h>




void options()
{ // different options to chose int he program

    printf("\n\n\n\t\t  -> Enter '1' for making a new test");
    printf("\n\t\t  -> Enter '2' for adding more questions to existing test");
    printf("\n\t\t  -> Enter '3' for taking test");
    printf("\n\t\t  -> Enter '4' to exit this program\n");
}




void new_test()
{  /* Function to let the user set a new exam. Old exam will be deleted */

    FILE *fptrQ, *fptrA;
    fptrQ=fopen("questions.txt", "w");
    fptrA=fopen("answers.txt", "w");
    int n=0;
    while(n==0)
    {
        /* 3 types of questions can be added : MCQ single correct,
           MCQ multi correct and fill in the blanks */

        printf("\n\n\n \t-> Enter '1' for typing MCQ with single correct type question");
        printf("\n \t-> Enter '2' for typing MCQ with multiple correct type question");
        printf("\n \t-> Enter '3' for typing Fill in the blank question");
        printf("\n\t-> Enter '4' to finish entering the questions");
        printf("\n Enter the type of question you want to enter : ");
        int a;
        scanf("%d", &a);
        switch(a)
        {
            case 1 :
              {
                  /* Case 1 to add MCQ with single corret question */

                  char ques[500], ans[200];
                  printf("\n=========================================================================================");
                  printf("\n\t\t\t RULES FOR SINGLE CORRECT MCQ QUESTION : ");
                  printf("\n-----------------------------------------------------------------------------------------");
                  printf("\n 1 - Press '?' after entering question and all the choices\n");
                  printf(" 2 - Press enter after entering the question to enter the choices");
                  printf("\n-----------------------------------------------------------------------------------------");
                  printf("\n\n\tEnter the question  : \n Q -> "); //enter question here
                  char c;
                  int i=0, i1=1;

                  while((c=getchar())!='?')
                    { // loop terminates when user enters ? at the end

                        ques[i] = c;
                        i++;
                    }
                  ques[i] = '?';
                  ques[i+1]='\0';
                  fputs(ques, fptrQ);
                  getchar();

                  // enter correct answer
                  printf("Enter the correct answer number and press enter : \n Ans -> ");
                  char c1;
                  i=0;
                  while((c1=getchar())!='\n')
                    {
                        ans[i] = toupper(c1);
                        i++;
                    }
                  ans[i]='\n';
                  ans[i+1] = '\0';
                  fputs(ans, fptrA);
                  printf("\n=========================================================================================");
                  break;
              }

            case 2 :
              {  /* Case 2 for entering multi correct question and answer */

                  char ques[500], ans[200];
                  printf("\n==================================================================================================================");
                  printf("\n\t\t\t RULES FOR MULTIPLE CORRECT MCQ QUESTION : ");
                  printf("\n------------------------------------------------------------------------------------------------------------------");
                  printf("\n 1 - Press '?' after entering question and all the choices\n");
                  printf(" 2 - Press enter after entering the question to enter the choices\n");
                  printf(" 3 - Enter the correct answers in single line with space in between press enter to finish entering the answers");
                  printf("\n------------------------------------------------------------------------------------------------------------------");

                  // Enter the question here
                  printf("\n\tEnter the question  : \n Q -> ");
                  char c;
                  int i=0, i1=1;
                  while((c=getchar())!='?')
                    {
                        ques[i] = c;
                        i++;
                    }
                  ques[i]='?';
                  ques[i+1]='\0';
                  fputs(ques, fptrQ);
                  getchar();

                  //enter the correct answer here
                  printf("Enter the correct answer(s) number and press enter : \n Ans -> ");
                  char c1;
                  i=0;
                  while((c1=getchar())!='\n')
                    {
                        ans[i] = toupper(c1);
                        i++;
                    }
                  ans[i]='\n';
                  ans[i+1] = '\0';
                  fputs(ans, fptrA);
                  printf("\n==================================================================================================================");
                  break;
              }

            case 3 :
              { /* Case 3 to enter the fill in the blank question */

                  char ques[500], ans[200];
                  printf("\n=========================================================================================");
                  printf("\n\t\t\t RULES FOR FILL IN THE BLANK QUESTION : ");
                  printf("\n-----------------------------------------------------------------------------------------");
                  printf("\n 1 - Press '?' after entering question");
                  printf("\n 2 - Enter '---' in place of blank");
                  printf("\n-----------------------------------------------------------------------------------------");

                  // enter the question here and terminate with ?
                  printf("\n\tEnter the question  : \n Q -> ");
                  char c;
                  int i=0;
                  while((c=getchar())!='?')
                    {
                        ques[i]=c;
                        i++;
                    }
                  ques[i]='?';
                  ques[i+1]='\0';
                  fputs(ques, fptrQ);
                  getchar();

                  //Enter the answer here
                  printf("Enter the answer : \n Ans -> ");
                  char c1;
                  i=0;
                  while((c1=getchar())!='\n')
                    {
                        ans[i] = toupper(c1);
                        i++;
                    }
                  ans[i]='\n';
                  ans[i+1] = '\0';
                  fputs(ans, fptrA);
                  printf("\n=========================================================================================");
                  break;
              }
            case 4 :
              {
                  n=1;
                  break;
              }
            default :
              printf("\nWrong Input. Please enter again...");
        }
    }
    printf("\n==================================================================================================================");
    fclose(fptrA);
    fclose(fptrQ);
}




void edit_test()
{ /* Function helps in adding more questions to the existing test */

    printf("\n\n\n\t\t\t EDIT TEST MENU : ");
    printf("\n\t -> Enter '1' to add more questions");
    printf("\n\t -> Enter '2' to exit from editing question paper");

    printf("\n\n Enter the operation number you want to perform : ");
    int op, h=0;
    scanf("%d", &op);

    while (h==0)
    {
      switch (op)
      {
      case 1 :
        {
            FILE *fptrA, *fptrQ;
            fptrA = fopen("answers.txt", "a");
            fptrQ = fopen("questions.txt", "a");
              int n=0;
              while(n==0)
              {
                  printf("\n-----------------------------------------------------------------------------------------");
                  printf("\n\n\n \t-> Enter '1' for typing MCQ with single correct type question");
                  printf("\n \t-> Enter '2' for typing MCQ with multiple correct type question");
                  printf("\n \t-> Enter '3' for typing Fill in the blank question");
                  printf("\n\t-> Enter '4' to finish entering the questions");
                  printf("\n Enter the type of question you want to enter : ");
                  int a;
                  scanf("%d", &a);
                  switch(a)
                  {
                      case 1 :
                        {
                            char ques[500], ans[200];
                            printf("\n=========================================================================================");
                            printf("\n\t\t\t RULES FOR SINGLE CORRECT MCQ QUESTION : ");
                            printf("\n-----------------------------------------------------------------------------------------");
                            printf("\n 1 - Press '?' after entering question and all the choices\n");
                            printf(" 2 - Press enter after entering the question to enter the choices");
                            printf("\n-----------------------------------------------------------------------------------------");
                            printf("\n\n\tEnter the question  : \n Q -> ");
                            char c;
                            int i=0, i1=1;
                            while((c=getchar())!='?')
                              {
                                  ques[i] = c;
                                  i++;
                              }
                            ques[i] = '?';
                            ques[i+1]='\0';
                            fputs(ques, fptrQ);
                            getchar();
                            printf("Enter the correct answer number and press enter : \n Ans -> ");
                            char c1;
                            i=0;
                            while((c1=getchar())!='\n')
                              {
                                  ans[i] = toupper(c1);
                                  i++;
                              }
                            ans[i]='\n';
                            ans[i+1] = '\0';
                            fputs(ans, fptrA);
                            printf("\n=========================================================================================");
                            break;
                        }
                      case 2 :
                        {
                            char ques[500], ans[200];
                            printf("\n==================================================================================================================");
                            printf("\n\t\t\t RULES FOR MULTIPLE CORRECT MCQ QUESTION : ");
                            printf("\n------------------------------------------------------------------------------------------------------------------");
                            printf("\n 1 - Press '?' after entering question and all the choices\n");
                            printf(" 2 - Press enter after entering the question to enter the choices\n");
                            printf(" 3 - Enter the correct answers in single line with space in between press enter to finish entering the answers");
                            printf("\n------------------------------------------------------------------------------------------------------------------");
                            printf("\n\tEnter the question  : \n Q -> ");
                            char c;
                            int i=0, i1=1;
                            while((c=getchar())!='?')
                              {
                                  ques[i] = c;
                                  i++;
                              }
                            ques[i]='?';
                            ques[i+1]='\0';
                            fputs(ques, fptrQ);
                            getchar();
                            printf("Enter the correct answer(s) number (seperated ny single space) and press enter : \n Ans -> ");
                            char c1;
                            i=0;
                            while((c1=getchar())!='\n')
                              {
                                  ans[i] = toupper(c1);
                                  i++;
                              }
                            ans[i]='\n';
                            ans[i+1] = '\0';
                            fputs(ans, fptrA);
                            printf("\n==================================================================================================================");
                            break;
                        }
                      case 3 :
                        {
                            char ques[500], ans[200];
                            printf("\n=========================================================================================");
                            printf("\n\t\t\t RULES FOR FILL IN THE BLANK QUESTION : ");
                            printf("\n-----------------------------------------------------------------------------------------");
                            printf("\n 1 - Press '?' after entering question");
                            printf("\n 2 - Enter '---' in place of blank");
                            printf("\n-----------------------------------------------------------------------------------------");
                            printf("\n\tEnter the question  : \n Q -> ");
                            char c;
                            int i=0;
                            while((c=getchar())!='?')
                              {
                                  ques[i]=c;
                                  i++;
                              }
                            ques[i]='?';
                            ques[i+1]='\0';
                            fputs(ques, fptrQ);
                            getchar();
                            printf("Enter the answer : \n Ans -> ");
                            char c1;
                            i=0;
                            while((c1=getchar())!='\n')
                              {
                                  ans[i] = toupper(c1);
                                  i++;
                              }
                            ans[i]='\n';
                            ans[i+1] = '\0';
                            fputs(ans, fptrA);
                            printf("\n=========================================================================================");
                            break;
                        }
                      case 4 :
                        {
                            n=1;
                            break;
                        }
                      default :
                        printf("\nWrong Input. Please enter again...");
                  }
              }
            fclose(fptrQ);
            fclose(fptrA);
      }
      case 2 :
      {
          h=1;
          break;
      }
      default :
      printf("\nWrong Input. Please enter again...");
    }
  }
}




void take_test()
{ /* Function for taking test and counting the marks */

    getchar();

    //Instructions for the test
    printf("\n\n\t\t\t: INSTRUCTIONS : ");
    printf("\n \t -> Enter your answer in single line. Pressing enter will submit your answer");
    printf("\n \t -> Avoid entering space before starting the answer.");
    printf("\n \t -> Enter the answer for multiple correct answer in single line with options sepearted by single space.");
    printf("\n \t -> Result will be shown as soon as you finish the exam.\n");
    printf("--------------------------------------------------------------------------------------------------------------\n");

    int correct = 0, incorrect = 0;
    FILE *fptrQ, *fptrA;
    fptrQ = fopen("questions.txt", "r");
    fptrA = fopen("answers.txt", "r");
    char c;
    int i=0, n=1, flag =0;

    // Loop runs until the whole test is not complete
    while((c=fgetc(fptrQ))!=EOF)
      {
          if(flag==0)
            {
              printf ("\nQ %d -> ", n);
              flag=1;
            }
          printf("%c", c);
          if(c == '?')
          { /* If file pointer finds a ? in the questions.txt file
               it allows the user to enter the answer */

              up:
              printf ("\n   Enter Ans -> ");
              i=0;
              char ans[200];
              char c1;
              while((c1=getchar())!='\n')
              {
                  ans[i] = toupper(c1);
                  i++;
              }
              ans[i] = '\n';
              ans[i+1] = '\0';

              // asks user to edit the current answer
              printf("Do you want to edit this answer? (y/Y = Yes & n/N = No) : ");
              char rep;
              scanf("%c", &rep);
              getchar();
              rep = toupper(rep);
              if(rep == 'Y')
                goto up;

              i=0;
              char c2;
              char ansC[200];
              fgets (ansC, 200, fptrA);

              // compare answer with the correct answer
              if (strcmp(ans, ansC) == 0)
                correct +=1;
              else if (strcmp(ans, ansC) != 0)
                incorrect +=1;
              flag=0;
              n++;
          }
      }

      // prints the total marks
      printf("\n\n______________________________________________________________________________________________________________");
      printf("\n\t\tYou got  (%d)  correct answers and  (%d)  incorrect answers", correct, incorrect);
      printf("\n===============================================================================================================");
}




int main()
{
    printf("\n\t\t\t: INSTRUCTIONS :");
    printf("\n 1. Using this program you can edit the current test, make a new test and check answers");
    printf("\n 2. If you create a new test, old test will be deleted");
    printf("\n 3. A test is already stored in this program but you can edit it");
    while(1)
    {
        options();
        int a;
        printf("\n\tEnter the operation number you want to perform : ");
        scanf("%d", &a);
        printf("==============================================================================================================");

        switch(a)
        {
            case 1 :
            {
                new_test();
                break;
            }
            case 2 :
            {
                edit_test();
                break;
            }
            case 3 :
            {
                take_test();
                break;
            }
            case 4 :
            {
                exit(0);
                break;
            }
            default :
            {
                printf ("\n\n\t\t\tWrong operation number enetered...");
            }
        }
    }
    return(0);
}
