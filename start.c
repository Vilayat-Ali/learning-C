#include <stdio.h>

struct Person
{
    int id;
};

int main(int argc, char *argv[])
{
    struct Person ali = {1};
    printf("%d", ali.id);
    return 0;
}