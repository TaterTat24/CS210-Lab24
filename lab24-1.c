/* lab24-1.c
 * =============================================================
 *    Name: Benjamin Tat
 * Section: T6
 * Purpose: Practice using malloc / free
 * =============================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main() {

    // Step 1:  Ask the user how many PFT scores to process
    printf("How many PFT scores: ");
    int numScores = 0;
    scanf("%d", &numScores);

    // Step 2:  Create an array with the exact size needed to store the PFT scores
    //          Hint:  Use malloc()
    int* pftArray = (int*)malloc(sizeof(int)*numScores);

    // Step 3:  Get all the PFT Scores from the User
    //          (Store them in your array)
    for(int i = 0; i < numScores; i++){
        printf("Enter a PFT Score: ");
        scanf("%d", &pftArray[i]);
    }

    // Step 4:  Calculate the Average of the PFT Scores
    //          Hint:  Don't forget that the average can be a double!
    double average = 0.0;
    for(int i = 0; i < numScores; i++){
        average = average + (double)pftArray[i];
        }
    average = average / numScores;
    // Step 5:  Print the Average
    printf("The average PFT Score is %.1lf\n", average);

    // Step 6:  Reexamine All PFT Scores, and Count How Many are Lower than the Average
    int underAverage = 0;
    for(int i = 0; i < numScores; i++){
        if(pftArray[i] < average){
            underAverage ++;
        }
    }

    // Step 7:  Print the # of Cadets Lower than the Average
    printf("%.1d cadets are below the average\n", underAverage);

    // Step 8:  Free the Memory you malloc'ed in Step 2
    //          Hint:  Use free()  
    free(pftArray);

    return 0;

}