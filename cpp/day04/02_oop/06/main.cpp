#include <iostream>
#include <string>

//��Զֻ����Դ�ļ����е���ͷ�ļ���
#include "stu.h"

using namespace std;

/*
 ʵ���൱�еĳ�Ա����

    ����������ŵ�ͷ�ļ�����
    �����ʵ�ַŵ�Դ�ļ����С�
*/
// ���´���÷ŵ�ͷ�ļ�����...
/*class student{
public:
    string name;
    int age ;

    //������ԭ��
    void read();
};*/


// ���´���÷ŵ�Դ�ļ�����
/*void student::read(){
    cout <<age << " ��� "<< name << " �ڿ���~" <<endl;
}*/



int main() {


    stu s;
    s.name ="����";
    s.age = 18;

    s.read();

    return 0;
}
