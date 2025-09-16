#pragma once

#define NAME_LEN 30

typedef struct Contact
{
    char name[NAME_LEN + 1];
    unsigned tel_num;
} contact_type;

contact_type *CreateContact(const char *name, unsigned tel_num);
void DestroyContact(contact_type *contact);
