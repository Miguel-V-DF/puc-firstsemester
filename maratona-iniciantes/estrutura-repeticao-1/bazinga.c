    #include <stdio.h>
    #include <string.h>

    int main()
    {
        int t;

        scanf("%d", &t);

        for(int i = 1; i <= t; i++)
        {
            char sheldon[10], raj[10];
            scanf("%s %s", sheldon, raj);
            
            if ((strcmp(sheldon, "pedra") == 0 && strcmp(raj, "tesoura") == 0) ||
            (strcmp(sheldon, "pedra") == 0 && strcmp(raj, "lagarto") == 0) ||
            (strcmp(sheldon, "tesoura") == 0 && strcmp(raj, "papel") == 0) ||
            (strcmp(sheldon, "tesoura") == 0 && strcmp(raj, "lagarto") == 0) ||
            (strcmp(sheldon, "papel") == 0 && strcmp(raj, "pedra") == 0) ||
            (strcmp(sheldon, "papel") == 0 && strcmp(raj, "Spock") == 0) ||
            (strcmp(sheldon, "lagarto") == 0 && strcmp(raj, "Spock") == 0) ||
            (strcmp(sheldon, "lagarto") == 0 && strcmp(raj, "papel") == 0) ||
            (strcmp(sheldon, "Spock") == 0 && strcmp(raj, "tesoura") == 0) ||
            (strcmp(sheldon, "Spock") == 0 && strcmp(raj, "pedra") == 0))
            {
                printf("Caso #%d: Bazinga!\n", i);
            }
            else if (strcmp(sheldon, raj) == 0)
            {
                printf("Caso #%d: De novo!\n", i);
            }
            else
            {
                printf("Caso #%d: Raj trapaceou!\n", i);
            }
        }

        return 0;
    }