#include "user_system.h"
#include <stdio.h>
#include <stdlib.h>
#include ".assignment/dhbw.h"
#include ".assignment/user_interface.h"

// AVAILABLE HERE: Function print_user(id, name, email) to print a single user
// Make sure to write empty functions for ALL functions in the header (also optional ones),
// otherwise the program will not compile




typedef int user_id;

typedef struct Liste{
    user_id id;
    char *name;
    char *eMail;
    struct Liste *next;
}Liste;

Liste* goToEnd(Liste anfang){

}

void users_initialize_table(int capacity){
    
    if (capacity>0){

        Liste start={.id=0, .next=NULL};
    
        for (int i = 1; i < capacity; i++)
        {
        
        }
    }


}


user_id users_add(char *name, char *email);

void users_printall();

char *users_get_name(user_id id);
