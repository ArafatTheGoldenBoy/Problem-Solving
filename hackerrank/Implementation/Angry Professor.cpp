// Angry Professor
// https://www.hackerrank.com/challenges/angry-professor/problem
string angryProfessor(int k, vector<int> a)
{
    int num = 0;
    for (auto i : a)
    {
        if (i > 0)
        {
        }
        else
        {
            num++;
        }
    }
    string ans;
    if (num >= k)
    {
        ans = "NO";
    }
    else
    {
        ans = "YES";
    }
    return ans;
}