#include <iostream>
#include <string>

using namespace std;

/*
  �������캯��
*/

class student{
public:
    string name;
    student(){
        cout <<"�޲ι���" <<endl;
    }

    student(string name ) :name(name){
        cout <<"�вι���" <<endl;
    }

    //�������� , ��һ�����������ǹ̶��ģ����ǵ�ǰ���(��)�������͡�
    //�������죬���������������const �����ñ�ɳ�������
    //���Է�ֹ�����޸Ŀ���Դ��
    student(const student &  s){ // student s = s1;
        cout << "�������캯��" <<endl;
        name = s.name;
    }



    ~student(){
        cout <<"����" <<endl;
    }
};
int main() {

   //�������� s1 , �вι���
    student s1("����");
    cout <<"s1.name=" <<s1.name <<endl;

   //��������s2  , ��������
    student s2 = s1;

    cout <<"s2.name=" <<s2.name <<endl;

    return 0;
}
