#include <iostream>
using namespace std;


/****************************************

            C++ �����ռ�
�� C++ Ӧ�ó����С����磬�����ܻ�дһ����Ϊ xyz() �ĺ���������һ�����õĿ���Ҳ����һ����ͬ�ĺ��� xyz()�����������������޷��ж�����ʹ�õ�����һ�� xyz() ������
��ˣ������������ռ�������ר�����ڽ����������⣬������Ϊ������Ϣ�����ֲ�ͬ������ͬ���Ƶĺ������ࡢ�����ȡ�ʹ���������ռ伴�����������ġ������ϣ������ռ���Ƕ�����һ����Χ��

*****************************************/
namespace first_space{
    int sameV = 5;
    void func(){
        cout << "space_1" << endl;
    }
}

namespace second_space{
    int sameV = 60;
    void func(){
        cout << "space_2" << endl;
    }
}


int main()
{
    cout << "first_space sameV = " << first_space::sameV << endl;
    cout << "second_space sameV = " << second_space::sameV << endl;
    first_space::func();
    second_space::func();

    return 0;
}
