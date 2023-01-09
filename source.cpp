class Solution {
public:
    char checknext(int index,string s)
    {
        if(index<s.length())
        {
            return s[index+1];
        }
        else 
        return 0;
    }
    int romanToInt(string s) 
    {
        int number = 0;
        char temp = '\0';
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'I')
            {
                temp = checknext(i, s);
                if (temp == 'V') {
                    number += 4;
                    i++;
                    continue;
                }
                else if (temp == 'X') {
                    number += 9;
                    i++;
                    continue;
                }
                else
                    number += 1;
            }
            else if (s[i] == 'V')
            {
                number += 5;
            }
            else if (s[i] == 'X')
            {
                temp = checknext(i, s);
                if (temp == 'L') {
                    number += 40;
                    i++;
                    continue;
                }
                else if (temp == 'C') {
                    number += 90;
                    i++;
                    continue;
                }
                else
                    number += 10;
            }
            else if (s[i] == 'L')
            {
                number += 50;
            }
            else if (s[i] == 'C')
            {
                temp = checknext(i, s);
                if (temp == 'D') {
                    number += 400;
                    i++;
                    continue;
                }

                else if (temp == 'M')
                {
                    number += 900;
                    i++;
                    continue;
                }
                else
                    number += 100;
            }
            else if (s[i] == 'D')
            {
                number += 500;
            }
            else if (s[i] == 'M')
            {
                number += 1000;
            }
            
        }
        return number;
    }
};
