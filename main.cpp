#include <iostream>

using namespace std;

/****************************************

            C++ ��Ͷ���:
    ��ֻ�Ƕ�������ͷ����ļ���϶���

*****************************************/

class Fruit{
    public:
        Fruit(){}  //���캯������������ʱ���ã������Ȳ��ܺ���ὲ��

        /** ��ʵ�ֺ�����1.������������ʵ��(��getName())��2.ֱ��������ʵ��(��setName()) **/
        string getName();//1. ��������ʵ��
        void setName(string n){//2. ֱ��������ʵ��
            name = n;
        }
    private:
        string name;  //����
        double weight;//����
        string color; //��ɫ
        int number;   //����
};//ע��ֺ�

string Fruit::getName(){  //�ຯ���ĵ�һ��ʵ�ַ����� ::���� ���������Fruit:: ������Fruit����
    return name;
}

int main()
{
    string name;

    Fruit fru; //���������fru
    fru.setName("banana");  //�����fru���ú���
    name = fru.getName();

    cout << "name = " << name << endl;

    return 0;
}
