#include <iostream>
#include <string>

using namespace std;

/*
  ��������
    ����ʱ���� �������ٵ�ʱ���ִ�С�
    ���ã�һ������������β�Ĺ�����
*/

class student{
public:
    string * name;
    //���캯��
    student(){
        cout <<"���캯��" << endl;
    }

    //��������  �� �޲ι��캯�����ƶȸߴ�99.9%

    ~student(){
        cout <<"��������" << endl;
    }
};
int main() {

    //ջ�ڴ淽ʽ��������
    //student s1;

    //���ڴ淽ʽ��������
    student *s2 = new student();
    cout <<"-------------1-----------" <<endl;
    delete s2;
    cout <<"-------------2-----------" <<endl;

    return 0;
}
