#include <iostream>
#include <string>

using namespace std;

/*
  �����ĺ���
*/

class student{
public:
    string name;

    student(string name ):name(name){

    }
};
int main() {

    //����
    int a = 3;
    int b = 3;

    // ����c���������ʱ�򣬰�a��ֵ����������
    int c = a;

    //-================================================
    //����
    student s1("����");
    student s2("����");


    //������s3����s3����������Ǵ�s1���������ġ�
    student s3 = s1;




    return 0;
}
