// Bill Division
// https://www.hackerrank.com/challenges/bon-appetit/problem
void bonAppetit(vector<int> bill, int k, int b)
{
    int sum = 0;
    for (int i = 0; i < bill.size(); i++)
    {
        if (i == k)
        {
            continue;
        }
        sum += bill[i];
    }
    int share = sum / 2;
    if (share == b)
    {
        cout << "Bon Appetit" << endl;
    }
    else
    {
        share = b - share;
        cout << share << endl;
    }
}