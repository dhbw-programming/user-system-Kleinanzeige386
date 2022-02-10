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




Liste *start;

Liste* goToEnd(Liste *anfang){
    Liste *temp=anfang;
    return temp;

}

void users_initialize_table(int capacity){
    
    if (capacity>0){
        
        start=malloc(sizeof(Liste));
        start->id=0;
        start->next=NULL;
        
    
        for (int i = 1; i < capacity; i++)
        {
            users_add("NA","NA");
        }
    }


}


user_id users_add(char *name, char *email){

    Liste *temp;
    
    temp=goToEnd(start);
    temp->next=malloc(sizeof(Liste));
    temp->next->name= name;
    temp->next->eMail= email;
    temp->next->next=NULL;
    temp->next->id= temp->id + 1;

    return (temp->next->id);
}

void users_printall();

char *users_get_name(user_id id);
