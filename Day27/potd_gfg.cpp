#include <bits/stdc++.h>
using namespace std;
bool isVowel(char ch)
{

    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {

        return true;
    }

    return false;
}

char getVowel(int arr[])
{

    for (int i = 0; i < 26; i++)
    {

        if (isVowel((char)(i + 'a')) && arr[i])
        {

            arr[i]--;

            return (char)(i + 'a');
        }
    }

    return '0';
}

char getConsonant(int arr[])
{

    for (int i = 0; i < 26; i++)
    {

        if (!isVowel((char)(i + 'a')) && arr[i])
        {

            arr[i]--;

            return (char)(i + 'a');
        }
    }

    return '0';
}

string rearrange(string S, int N)

{

    int arr[26] = {0};

    int cntConsonants = 0, cntVowels = 0;

    for (int i = 0; i < N; i++)
    {

        arr[S[i] - 'a']++;

        if (isVowel(S[i]))
            cntVowels++;

        else
            cntConsonants++;
    }

    string ans = "";

    while (ans.size() != N)
    {

        if (ans.size() % 2 == 0)
        {

            if (cntVowels >= cntConsonants)
            {

                char ch = getVowel(arr);

                if (ch == '0')
                    return "-1";

                ans += ch;
            }

            else
            {

                char ch = getConsonant(arr);

                if (ch == '0')
                    return "-1";

                ans += ch;
            }
        }

        else
        {

            if (cntVowels >= cntConsonants)
            {

                char ch = getConsonant(arr);

                if (ch == '0')
                    return "-1";

                ans += ch;
            }

            else
            {

                char ch = getVowel(arr);

                if (ch == '0')
                    return "-1";

                ans += ch;
            }
        }
    }

    return ans;
};
int main()
{

    return 0;
}