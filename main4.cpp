
#include <iostream>

using namespace std;

/****************************************

        C++ �̳�

*****************************************/

class Fruit{
    public:
        Fruit(){ //���캯������������ʱ�Զ�����
            cout << "����Fruit" << endl;
        }
        ~Fruit(){ //ǰ���~�������ֺ�����һ������������������
            cout << "����Fruit" << endl;
        }
        string getName();//��������ʵ��
        void setName(string n);//��������ʵ��
    private:
        string name;  //����
        double weight;//����
        string color; //��ɫ
        int number;   //����
};//ע��ֺ�

string Fruit::getName(){  //::���� ���������Fruit::getName ������Fruit���е�getName����
    return name;
}

void Fruit::setName(string n){
    name = n;
}

/** Banana�̳���Fruit **/
class Banana:public Fruit{ // :public Fruit ����̳�Fruit
    public:
        Banana(){cout << "����Banana" << endl;};
        ~Banana(){cout << "����Banana" << endl;};
};

int main()
{
    string name;

    Fruit fru; //���������fru,��ʱ���Զ����ù��캯��
    Banana ban;
    cout << "�����ͬʱ�̳и���Ĺ��캯���������������Լ�public�����ͱ���" << endl;
    cout << "Banana����Ȼû��ʵ��setName()��getName()���������̳���Fruit���������������" << endl;
    ban.setName("banana");  //�����fru���ú���
    name = ban.getName();
    cout << "Banana's name = " << name << endl;

    return 0;
} //�������������,fru��������ٵ�����ʱ���Զ����ù��캯��

