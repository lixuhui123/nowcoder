#include <iostream>
using namespace std;
class base
{
	int m_base=0;
public:
	base()
	{
		cout << "���๹�캯��" << endl;
	}
	void foo()
	{
		cout << "base" << endl;
	}
	virtual void func()
	{
		cout << ++m_base << endl;
	}
	void ok()
	{
		cout << "public ok" << endl;
	}
};
class testbase:protected base
{
	int m_testbase = 100;
public:
	testbase()
	{
		cout << "������Ĺ���" << endl;
	}
	void foo()/*�������� */
	{
		base c;
		c.foo();
		c.func();
		
		cout << "testbase" << endl;
	}
	virtual void func()/* ������д */
	{
		cout << ++m_testbase << endl;
	}

};
/* �����public��ʽ�̳У���ô������Ķ�����Է��ʻ����public��Ա�ͺ���
�����private��ʽ�̳У��������麯����������������ܷ����κλ����Ա�ͺ���
protected�̳к�privateһ��
public�ɼ̳з�����
protected�ɼ̳в��ɷ���
private���ɼ̳в��ɷ���*/
int mainlkjhggxc()
{
	/* һ����������ת���ɻ���ָ��֮����д�ͻ���Ч�����õ�����д��ĺ���
	���ز�������Ч*/ 
	//base * p = new testbase;
	///* һ��Ҫ��ס���ڸ������࿪�ٿռ��ʱ�򣬻��ȵ��û���Ĺ��캯����Ȼ������Լ��Ĺ��캯�� */
	//p->foo();
	//p->func();

	//testbase *r = new base;
	/* ���಻��ת���������࣬��Ϊ���ڷ���Խ������⣬������̳л��ķ�ʽ��
	�̳л����������Լ����麯���ӵ�����ĩβ���������ǻ���ı���Ȼ�����Լ��ı���
	*/

	base b;
	b.foo();
	b.func();
	cout << endl;
	testbase t;
	t.foo();
	t.func();
	 
	//t.ok();
	cout << endl;
	cout << sizeof(b) << ' ' << sizeof(t);/* 8 12 ��Ϊ������̳��˻���ĳ�Ա����������ռ�õ��ڴ���� */
	/* ͨ�����ϵĲ��ԣ� ��������ǵ����Ķ��󣬸���˭�ľ���˭�ģ����������غ���д
	*/
	system("pause"); 
	return 0;
}