#include <iostream>
#include <string>

using namespace std;

/*
  ���캯��
    1. ֻҪ���Ǵ����˶��󣬾�һ����ִ����Ĺ��캯����
    2. ������Ĭ�ϻ�Ϊ���ǵ����ṩһ���޲ι��캯����
    3. ���캯����
        ����ʱ���� ���������ʱ�����
        ���ã� ������ʼ�����ԣ���ɳ�ʼ��������

    4. һ������д���Լ��Ĺ��캯������ô��������Ҳ����������ṩĬ�ϵĹ��캯���ˡ�
*/

class student{
public:



    string name;
    int age;

    //Ĭ�ϵ��޲ι��캯��
   /* student (){
        cout << "student �޲ι���" <<endl;
    }*/

    //�вι��캯��
    student(string name2 , int age2){
        name = name2;
        age = age2;
    }

    void read(){
        cout <<age <<" ��� "<< name << " �ڿ��顤" << endl;
    }
};


int main() {

    student s; //���޲ι���
    s.name = "����";
    s.age = 18;
    s.read();

    // ���������ͬʱ��������Եĸ�ֵ������
    student s2("����" , 19);
    s2.read();


    return 0;
}
