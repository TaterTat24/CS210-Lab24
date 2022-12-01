/* lab24functs.c
 * =============================================================
 *    Name: Benjamin Tat
 * Section: T6
 * Purpose: Practice using malloc / free
 * =============================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lab24functs.h"

int getNumRecs(char datafile[]) {
    FILE* inputFile = NULL;
    int numberRecords;

    inputFile = fopen(datafile, "r");

    if (inputFile == NULL) {
        printf("Could not open file.\n");
        return -1; // -1 indicates error
    }
    
    fscanf(inputFile, "%d", &numberRecords);

    return numberRecords;
}

void getDataText(CadetInfoStructType* cadetRecords, int numRecs, char dataFile[]){
    FILE* inputFile = NULL;
    inputFile = fopen(dataFile, "r");

    fscanf(inputFile, "%*d");
    
    for (int i = 0; i < numRecs; i++) {
        fscanf(inputFile, "%s %d %d %d", cadetRecords[i].name, &cadetRecords[i].age, &cadetRecords[i].squad, &cadetRecords[i].year);
    }
}