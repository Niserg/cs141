#include <iostream>

using namespace std;

string func(short arg);

int main()
{
    long Oct;
    string st;
    cout<<"\nProgram to convert Octal to Binary number system.";
    cout<<"\nEnter an octal number :";
    cin >> Oct;
    for (long oct_C = Oct ; oct_C > 0 ; oct_C /= 10) {
        if (oct_C%10 > 7) { //Check
            cout << "ERROR!" << endl;
            return -1;
        }
        st.append(func((short)oct_C%10));
    }

    string str;
    int len = st.size();
    for (int i = 0, j = len-1 ; i < len ; i++, j--)
        str[j] = st[i]; //Reversing
    cout << endl << st << " " << str << endl; //Output

 return 0;
}


string func(short arg)
{
    switch (arg)
    {
        case 0: return "0000";
        case 1: return "0001";
        case 2: return "0010";
        case 3: return "0011";
        case 4: return "0100";
        case 5: return "0101";
        case 6: return "0110";
        case 7: return "0111";
        default: return "";
    }
}
