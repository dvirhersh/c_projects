#include "contact.h"
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <stdio.h>

contact_type *CreateContact(const char *name, unsigned tel_num)
{
    /* ### Write your code below this line ### */
    contact_type *contact = malloc(sizeof(contact_type));

    if (name == NULL)
        return NULL;

    if (contact == NULL)
        return NULL;

    strncpy(contact->name, name, NAME_LEN);
    contact->name[NAME_LEN] = '\0';

    contact->tel_num = tel_num;

    return contact;
}

void DestroyContact(contact_type *contact)
{
    free(contact);
}

int main(void)
{
    return 0;
}