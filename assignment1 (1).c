#include <cs50.h>
#include <stdio.h>

   int TOTALPOINTSEARNED = 0;
   int TOTALPOINTSPOSSIBLE = 0;
int main(void){
    int assignments = get_int("How many different assignments?\n");//user provides the number of assignment 
    int pointsEarned[assignments];
    int pointsPossible[assignments];
    for(int i = 0; i < assignments;i++){
         pointsEarned[i] = get_int ("How many points did you earn on assignment?\n");//user enters the points earned on assignment
         pointsPossible[i] = get_int ("How many points was the assignment worth?\n");}//user enteras the points that the assignment was worth 
    float f = (float) TOTALPOINTSEARNED / (float) TOTALPOINTSPOSSIBLE;{
    printf ("Overall Grade is: %f\n",f);//your overall grade will appear
    }
    for(int i = 0; i < assignments;i++){
        printf("Grade:#");//a bar chart of your grades
    }
    printf("\n");
}
    

            
