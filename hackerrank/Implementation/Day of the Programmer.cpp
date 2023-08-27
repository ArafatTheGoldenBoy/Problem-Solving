// Day of the Programmer
//  https://www.hackerrank.com/challenges/day-of-the-programmer/problem
string dayOfProgrammer(int year)
{
    string day;
    if (year < 1918)
    {
        if (year % 4 == 0)
        {
            day = "12.09." + to_string(year);
        }
        else
        {
            day = "13.09." + to_string(year);
        }
    }
    else
    {
        if (year == 1918)
        {
            day = "26.09." + to_string(year);
        }
        else if (year % 4 == 0)
        {
            if (year % 100 == 0)
            {
                if (year % 400 == 0)
                {
                    day = "12.09." + to_string(year);
                }
                else
                {
                    day = "13.09." + to_string(year);
                }
            }
            else
            {
                day = "12.09." + to_string(year);
            }
        }
        else
        {
            day = "13.09." + to_string(year);
        }
    }
    return day;
}