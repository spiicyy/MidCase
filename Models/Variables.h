struct Name
{
    char Name[255], birth[255];
};

struct NodeName
{
    struct Name Name;
    NodeName *next, *prev;
} * head, *tail, *curr;
