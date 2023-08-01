// unary
// https://www.codingame.com/training/easy/unary
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
int main()
{
    string message;
    vector<string> v;
    vector<string> rev_v;
    getline(cin, message);
    reverse(message.begin(), message.end());
    for (int i = 0; i < message.length(); i++)
    {
        int x = 0, y = 0, z = 0;
        x = int(message[i]);
        while (0 < x)
        {
            y = x % 2;
            if (y == 0)
            {
                v.insert(v.begin(), "0");
            }
            else
            {
                v.insert(v.begin(), "1");
            }
            x = x / 2;
            z++;
        }
        if (z % 7 == 0)
        {
            // cout << z << endl;
        }
        else
        {
            v.insert(v.begin(), "0");
        }
    }
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i];
    }
    cout << endl;
    vector<string> ans;
    int one = 0, zero = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] == "1")
        {
            one++;
        }
        else
        {
            zero++;
        }
        if (v[i] != v[i + 1])
        {
            if (v[i] == "1")
            {
                ans.push_back("0 ");
                for (int j = 0; j < one; j++)
                {
                    ans.push_back("0");
                }
                one = 0;
            }
            else
            {
                ans.push_back("00 ");
                for (int j = 0; j < zero; j++)
                {
                    ans.push_back("0");
                }
                zero = 0;
            }
            ans.push_back(" ");
        }
        /*
        else if(i == v.size()-1){ //
            if(v[i] == "1"){
                ans.push_back("0 ");
                    for(int j =0;j<one;j++){
                        ans.push_back("0");
                    }
                one = 0;
            }
            else{
                ans.push_back("00 ");
                    for(int j =0;j<zero;j++){
                        ans.push_back("0");
                    }
                zero = 0;
            }
            ans.push_back(" ");
            break;
        }
        */
    }
    for (int i = 0; i < ans.size() - 1; i++)
    {
        cout << ans[i];
    }
}
