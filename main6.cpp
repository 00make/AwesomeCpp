#include <iostream>

using namespace std;

/****************************************

                 C++ ��д
       1. Override,��д��Ҫ�����ڼ̳й�ϵ��
       2. ��Ҫ��д�ķ����壬�����Ĳ����ͷ���ֵ����һ��

*****************************************/


class Fruit{
    public:
        void foo(){
            cout << "Fruit::foo������" << endl;
        }
};


class Banana:public Fruit{
    public:
        void foo(){   //��д�����foo������Ҫ�󷵻�ֵ�Ͳ�������������������ȫһ��
            cout << "Banana::foo������" << endl;
        }
};


int main()
{
    Fruit fru;
    Banana ban;

    fru.foo();
    ban.foo();

    // ˼���Ͷ�̬���������ϵ
    return 0;
}


