#include <iostream>
#include <string>

using namespace std;

/*
 ʵ���൱�еĳ�Ա����

    1. ��������棬ֱ�ӰѺ���д���ˡ�

    2. �Ѻ����ĺ������õ�������д���Ѻ������һ�£�������ԭ�ͣ������� + ������ʵ�֡�
*/

class student{
public:
    string name;
    int age ;

    //������ԭ��
    void read();
};

//���������ʵ�����read����
//Ϊ�˱�ʾ�����read��������student�൱��read�����ľ���ʵ�֡���Ҫ�ڷ������ֵ�ǰ���������::
void student::read(){
    cout <<age << " ��� "<< name << " �ڿ���~" <<endl;
}

int main() {

    student s;
    s.name = "����";
    s.age = 18;

    s.read();
    return 0;
}
