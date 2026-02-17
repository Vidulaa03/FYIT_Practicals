#include<iostream>
using namespace std;
class stringConcat
{
    string str;
public:
    stringConcat()
    {
    }
    stringConcat(string s)
    {
        str=s;
    }
    stringConcat operator+(stringConcat s2)
    {
        stringConcat temp;
        temp.str=str+s2.str;
        return temp;
    }
    void display()
    {
        cout<<"concatenated string:"<<str;
    }
};
int main()
{
    stringConcat s1("Py"),s2("thon"),s3;
    s3=s1+s2;
    s3.display();
    return 0;
}

