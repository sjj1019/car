#include <iostream>
#include <string>

using namespace std;

/*
  ���캯��
    ���캯����ʼ���б��д��
*/

class student{
public:
    string name;
    int age;
/*
    student (string name , int age){
        //����������д��벢���Ƕ�������������Խ��г�ʼ����
        //
        this->name = name ;
        this->age = age;
    }*/

    //�����ʼ���б�
    student (string name , int age):name(name) , age(age){
        cout <<"�вι���" <<endl;
    }

    void read(){
        cout <<age <<" ��� "<< name << " �ڿ��顤" << endl;
    }
};


int main() {


    student s("����" , 18);
    s.read();


    return 0;
}
