// Name: Solomon Ewusi
// Student ID: N01659373
// Lab 1 - Data Sizes of x86 Architecture

#include <stdio.h>  // needed for printf()

struct Account {
    unsigned int account_number;  // 4-byte unsigned integer field
    char account_type;            // 1-byte character field
    char *last_name;              // pointer to char (last name string)
    char *first_name;             // pointer to char (first name string)
    float balance;                // 4-byte floating point field
    char reserved[6];             // 6-byte reserved character array
};

int main()
{
    char a;    // example variable for char
    short b;   // example variable for short
    int c;     // example variable for int
    long d;    // example variable for long
    float e;   // example variable for float
    double f;  // example variable for double

    int *pInt;       // pointer to int
    long *pLong;     // pointer to long
    float *pFloat;   // pointer to float
    double *pDouble; // pointer to double

    struct Account acc;    // instance of the struct Account
    struct Account *pAcc;  // pointer to struct Account

    printf("Size of char: %zu\n", sizeof(a));                              // print size of char
    printf("Size of short: %zu\n", sizeof(b));                             // print size of short
    printf("Size of int: %zu\n", sizeof(c));                               // print size of int
    printf("Size of long: %zu\n", sizeof(d));                              // print size of long
    printf("Size of float: %zu\n", sizeof(e));                             // print size of float
    printf("Size of double: %zu\n", sizeof(f));                            // print size of double
    printf("Size of pointer to int: %zu\n", sizeof(pInt));                 // print size of int pointer
    printf("Size of pointer to long: %zu\n", sizeof(pLong));               // print size of long pointer
    printf("Size of pointer to float: %zu\n", sizeof(pFloat));             // print size of float pointer
    printf("Size of pointer to double: %zu\n", sizeof(pDouble));           // print size of double pointer
    printf("Size of struct Account: %zu\n", sizeof(acc));                  // print size of struct
    printf("Size of pointer to struct Account: %zu\n", sizeof(pAcc));      // print size of struct pointer

    return 0;  // end of program, indicates success
}