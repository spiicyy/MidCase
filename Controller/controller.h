#include "../Models/Variables.h"

struct NodeName *createName(char name)
{
    struct NodeName *temp = (NodeName *)malloc(sizeof(NodeName));
    strcpy(temp->Name.Name, name);
    strcpy(temp->Name.birth, birth);

    return temp;
}

void pushNodeName(struct NodeName *temp)
{
    if (!head)
    {
        head = tail = temp;
    }
    else
    {
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
}

void addName()
{
    int patient, cure;
    char nameTemp[255], brithTemp[255];
    scanf("%d %d", &patient, &cure);
    for (int i = 0; i < patient; i++)
    {
        scanf("%[^-] %[^\n]", birthTemp, nameTemp);
        pushNodeName(createName(nameTemp));
    }
}

void printAll()
{
    curr = head;
    while (curr)
    {
        printf("%s ", curr->Name);
        curr = curr->next;
    }
}