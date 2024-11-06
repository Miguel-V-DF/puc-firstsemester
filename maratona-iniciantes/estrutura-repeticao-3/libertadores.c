#include <stdio.h>

int main()
{
    int n;
    // scanning the number of dupla de jogos
    scanf("%d", &n);

    //loop to reset everything each new double match
    for(int i = 0; i < n; i++)
    {
        int m[2] = {0, 0};
        int v[2] = {0, 0};
        int team1 = 0;
        int team2 = 0;

        for(int j = 0; j < 2; j++)
        {
            scanf("%d %*c %d", &m[j], &v[j]);
            // checking if it's the first round
            if(j == 0)
            {
                if(m[j] > v[j])
                {
                    team1 += 3;
                }
                else
                {
                    if(m[j] < v[j])
                    {
                        team2 += 3;
                    }
                    else
                    {
                        team1 += 1;
                        team2 += 1;
                    }
                }
            }
            else
            {
                if(m[j] > v[j])
                {
                    team2 += 3;
                }
                else
                {
                    if(m[j] < v[j])
                    {
                        team1 += 3;
                    }
                    else
                    {
                        team1 += 1;
                        team2 += 1;
                    }
                }                
            }
        }
        if(team1 > team2 || (team1 == team2 && (m[0] + v[1]) > (m[1] + v[0])) || (team1 == team2 && (m[0] + v[1]) == (m[1] + v[0]) && (v[1] > v[0])))
        {
            printf("Time 1\n");
        }
        else
        {
            if(team1 < team2 || (team1 == team2 && (m[1] + v[0]) > (m[0] + v[1])) || (team1 == team2 && (m[1] + v[0]) == (m[0] + v[1]) && (v[0] > v[1])))
            {
                printf("Time 2\n");
            }
            else
            {
                printf("Penaltis\n");
            }
        }
    }
    return 0;
}