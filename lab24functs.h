/* lab24functs.h
 * =============================================================
 *    Name: Benjamin Tat
 * Section: T6
 * Purpose: Practice using malloc / free
 * =============================================================
 */

#ifndef lab24
#define lab24
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct CadetInfoStruct {
    char name[50];
    int age;
    int squad;
    int year;
} CadetInfoStructType;

/** ----------------------------------------------------------
 * Reads the number of records from the data file
 * @param dataFile is a string that indicates the filename of the data file
 * @return number of records in the file or -1 on error
 * @pre file is not open
 * @post file is closed
 * ----------------------------------------------------------
 */
int getNumRecs(char datafile[]);

/** ----------------------------------------------------------
 * Reads CadetInfoStructType  records from a text file
 * @param cadetRecords is the array of cadet records
 * @param numRecs is the number of records in the file
 * @param dataFile is a string that indicates the path to and filename of the datafile
 * @pre file is not open
 * @post file is closed
 * ----------------------------------------------------------
 */
void getDataText(CadetInfoStructType cadetRecords[], int numRecs, char dataFile[]);

#endif