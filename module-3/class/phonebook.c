#include <cs50.h>
#include <stdio.h>
#include <string.h>

typedef struct // Agrupamento de informações, como um objeto
{
    string name;
    string number;
}
person; // nome do agrupamento


int main(void)
{
    // Forma não confiável e sujeito a muitos erros
    // string names[] = {"Brian", "David"};
    // string numbers[] = {"+1-617-495-1000", "+1-494-468-2750"};

    //     for (int i = 0; i < 2; i++)
    // {
    //     if (strcmp(names[i], "David") == 0)
    //     {
    //         printf("Found $s\n", numbers[i]);
    //         return 0;
    //     }
    // }


    person people[2];

    people[0].name = "Brian";
    people[0].number = "+1-617-495-1000";

    people[1].name = "David";
    people[1].number = "+1-494-468-2750";

    for (int i = 0; i < 2; i++)
    {
        if (strcmp(people[i].name, "David") == 0)
        {
            printf("Found $s\n", people[i].number);
            return 0;
        }
    }

    printf("Not found\n");
    return 1;
}
 