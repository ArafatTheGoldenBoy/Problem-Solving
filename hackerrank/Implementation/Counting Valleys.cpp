// Counting Valleys
// https://www.hackerrank.com/challenges/counting-valleys/problem
int countingValleys(int steps, string path)
{
    int u = 0, d = 0, direction = 0;
    int mountain = 0, vallay = 0;
    if (path[0] == 'U')
    {
        direction = 1;
        u++;
    }
    else
    {
        direction = -1;
        d--;
    }
    for (int i = 1; i < steps; i++)
    {
        if (path[i] == 'U')
        {
            u++;
        }
        else
        {
            d--;
        }
        int dif = u + d;

        if (dif == 0)
        {
            if (direction == 1)
            {
                mountain++;
                if (path[i + 1] == 'D')
                {
                    direction = -1;
                }
            }
            else
            {
                vallay++;
                if (path[i + 1] == 'U')
                {
                    direction = 1;
                }
            }
            u = 0;
            d = 0;
        }
    }
    return vallay;
}