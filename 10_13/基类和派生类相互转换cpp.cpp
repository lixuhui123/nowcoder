#include <iostream>
using namespace std;
class base
{
	int m_base=0;
public:
	base()
	{
		cout << "基类构造函数" << endl;
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
		cout << "派生类的构造" << endl;
	}
	void foo()/*构成隐藏 */
	{
		base c;
		c.foo();
		c.func();
		
		cout << "testbase" << endl;
	}
	virtual void func()/* 构成重写 */
	{
		cout << ++m_testbase << endl;
	}

};
/* 如果是public方式继承，那么派生类的对象可以访问基类的public成员和函数
如果是private方式继承（不考虑虚函数），派生类对象不能访问任何基类成员和函数
protected继承和private一样
public可继承发访问
protected可继承不可访问
private不可继承不可访问*/
int mainlkjhggxc()
{
	/* 一旦将派生类转换成基类指针之后，重写就会生效，调用的是重写后的函数
	隐藏并不会生效*/ 
	//base * p = new testbase;
	///* 一定要记住，在给派生类开辟空间的时候，会先调用基类的构造函数，然后调用自己的构造函数 */
	//p->foo();
	//p->func();

	//testbase *r = new base;
	/* 父类不能转换成派生类，因为存在访问越界的问题，派生类继承基的方式是
	继承基类的虚表，将自己的虚函数加到虚表的末尾，紧接着是基类的变量然后是自己的变量
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
	cout << sizeof(b) << ' ' << sizeof(t);/* 8 12 因为派生类继承了基类的成员变量，所以占用的内存会变大 */
	/* 通过以上的测试， 发现如果是单个的对象，该是谁的就是谁的，不存在隐藏和重写
	*/
	system("pause"); 
	return 0;
}