#include <iostream>

using namespace std;

/****************************************

            C++ �쳣

*****************************************/

int main()
{
    int x;
    int y;

    cout << "������������" << endl;
    cout << "x = ";
    cin >> x;
    cout << "y = ";
    cin >> y;

    try   //try������Ҫ�쳣���Ĵ����
    {
        if(x < y)
            throw 0;  //�׳��쳣1
        else
            throw 1;  //�׳��쳣2
    }
    catch(int e)  //�����쳣
    {
        switch(e) //�����쳣���ͷֱ���
        {
        case 0:
            cout << "x С�� y" << endl;
            break;
        case 1:
            cout << "x ���� y" << endl;
            break;
        }
    }
}
