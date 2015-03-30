/**********
 * define *
 **********/
#define OK 0
#define NG -1
#define MIN_PRIME 2

/**********
 * struct *
 **********/
typedef struct Array {
    unsigned int num; // number of elements
    unsigned int *arr; // array
} Array;

/************
 * function *
 ************/
void utl_get_prime(unsigned int, Array *);
void utl_make_prime_list(unsigned int, Array *);
void utl_array_push(Array **, unsigned int);
int utl_array_pop(Array **);
