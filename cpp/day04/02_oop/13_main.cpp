#include <iostream>
#include <string>

using namespace std;

/*
  ǳ��������������

    ֻҪ��������������һ�仰��һ���ᷢ������ stu s2 = s1;
        1. ��������
        2. ���պ����ķ���ֵ
        3. �ֶ�ʹ��ԭ�ж����������¶���
            stu s1;
            stu s2 = s1;
*/

class student{
public:
    //string * name; //Ұָ�룬����ָ��
    string * name = nullptr;
    student (string name ) : name(new string(name)){
        cout << "�вι��캯��" <<endl;
    }
    student (const student & s){

        //����൱����ָ��ĳ�Ա����ô����ֱ�����򵥵Ŀ�����
        //��������������е�ͬ����Աָ��ͬһ���ط���
        //�Ժ�ֻҪ������һ�������޸�ָ������ݣ���һ�����������Ҳ�ᷢ���ı䡣
        //name = s. name;

        //=============���=====================
        //1. �����Լ��Ŀռ�
        //name = new string();

        //2. �����ݿ�������
        //*name = *s.name;

        //==========��д��ʽ========================
        name = new string(*s.name);
    }
    ~student (){
        cout << "��������" << endl;
    }
};
int main() {
    student s1("����");
    student s2 = s1;

    cout <<"s1.name=" << *s1.name <<endl;
    cout <<"s2.name=" << *s2.name <<endl;

    *s2.name = "����";

    cout <<"====s1.name=" << *s1.name <<endl;
    cout <<"====s2.name=" << *s2.name <<endl;


    return 0;
}
