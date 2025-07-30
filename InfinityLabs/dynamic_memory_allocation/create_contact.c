#include "contact.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

contact_type *CreateContact(const char *name, unsigned tel_num)
{
    contact_type *contact = (contact_type *)malloc(sizeof(contact_type));
    if (contact == NULL)
        return NULL;

    strncpy(contact->name, name, NAME_LEN);
    contact->name[NAME_LEN] = '\0';

    contact->tel_num = tel_num;

    return contact;
}

void RunTest(const char *name, unsigned tel)
{
    contact_type *contact = CreateContact(name, tel);

    printf("Running test: CreateContact(\"%s\", %u)  --  ", name, tel);

    if (contact != NULL &&
        strncmp(contact->name, name, NAME_LEN) == 0 &&
        contact->tel_num == tel)
    {
        printf("Passed\n");
    }
    else
    {
        printf("Failed\n");
    }

    // DestroyContact(contact);
}

int main()
{
    printf("Testing Report:\n");

    RunTest("PHHUUJNDYN", 265056);
    RunTest("JHUVEKNQXCGMQIZLHMLYVSSPDFUBUGYDP", 123643); // name too long
    RunTest("TEOLCSTOKBPYIBJGZDAQH", 848452);

    return 0;
}
