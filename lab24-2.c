/* lab24-2.c
 * =============================================================
 *    Name: Benjamin Tat
 * Section: T6
 * Purpose: Practice using malloc / free
 * =============================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "lab24functs.h"

int main() {

    // FOLLOW THE LAB INSTRUCTIONS BEFORE WRITING CODE!
    // Call getNumRecs() with the appropriate parameters
    // Store the result in a variable
    int numberRecords;
    numberRecords = getNumRecs("lab24data.txt");

    // Print the Number of Records in the File (according to getNumRecs)
    printf("%d records in the data file.\n", numberRecords);

    // Using the value obtained above, dynamically allocate an array of CadetInfoStructType that is exactly the right size
    // to hold the number of records in the data file
    CadetInfoStructType* cadetInfo = (CadetInfoStructType*)malloc(sizeof(CadetInfoStructType)*numberRecords);

    // Call getDataText() to read the file data into the dynamically allocated array
    getDataText(cadetInfo, numberRecords, "lab24data.txt");
    
    // Print the First Cadet
    printf("The first cadet is:\n");
    printf("Cadet name = %s\n", cadetInfo->name);
    printf("Cadet age = %d\n", cadetInfo->age);
    printf("Cadet squad = %d\n", cadetInfo->squad);
    printf("Cadet year = %d\n", cadetInfo->year);

    // Print the Last Cadet
    printf("The last cadet is:\n");
    printf("Cadet name = %s\n", cadetInfo->name);
    printf("Cadet age = %d\n", cadetInfo->age);
    printf("Cadet squad = %d\n", cadetInfo->squad);
    printf("Cadet year = %d\n", cadetInfo->year);

    // Free the array
    free(cadetInfo);

    return 0;
}