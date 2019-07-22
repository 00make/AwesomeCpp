
#include <iostream>

using namespace std;

/****************************************

                 C++ ����������
       C++�����������ܰ���������������Զ�������ͽ��в���
       1. ����������ʵ��Ϊ���Ա����
       2. ����������ʵ��Ϊ�����Ա����(ȫ�ֺ���)

*****************************************/


class NumberOp{
    public:
        NumberOp(){}
        NumberOp(double x_){
            x = x_;
        }
        double getNum(){
            return x;
        }
        void setNum(double x_){
            x = x_;
        }
        NumberOp operator+(NumberOp a);     //1. ����������ʵ��Ϊ���Ա����
    private:
        double x;
};

NumberOp NumberOp::operator+(NumberOp a){   //1. ����������ʵ��Ϊ���Ա����
    NumberOp newOp;
    newOp.setNum(getNum() + a.x);

    return newOp;
}

NumberOp operator*(NumberOp a, NumberOp b){ //2. ����������ʵ��Ϊ�����Ա����(ȫ�ֺ���)
    NumberOp newOp;
    newOp.setNum(a.getNum() * b.getNum());
    return newOp;
}

int main()
{
    NumberOp n1(2.5), n2(3.7);
    NumberOp newN1, newN2;

    newN1 = n1 + n2;  //��������������ֱ��ʹ�ö���ֱ�����
    newN2 = n1 * n2;  //��������������ֱ��ʹ�ö���ֱ�����
    cout << "���������ʵ��Ϊ���Ա���� : n1 + n2 = " << newN1.getNum()<< endl;
    cout << "���������ʵ��Ϊ�����Ա���� : n1 * n2 = " << newN2.getNum() << endl;

    return 0;
}
