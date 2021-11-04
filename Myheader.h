#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<iomanip>
#include<fstream>
using namespace std;
class Mangement;
class Student {
	friend class Mangement;//友元声明
public:
	string m_id, m_name;//学号，姓名
	int m_math, m_eng, m_phy;//数学成绩、英语成绩、物理成绩
	int m_sum;//总分
	int m_rank;//排名
	Student (string id = " ", string name = " ", int math = 0, int eng = 0, int phy = 0,int sum=0,int rank=0) :m_id(id), m_name(name), m_math(math), m_eng(eng), m_phy(phy), m_sum(sum),m_rank(rank) {}//方便导入数组
};

class Management {
private:
	vector<Student>stu;//存放学生信息
public:

	Management(int i) {}

	int menu();//菜单函数
	void Add_Student();//添加函数
	void Check_Students();//查看函数
	void Delete_Student();//删除函数
	void Search_Students();//查找函数（精准）
	void Search_Range();//查找分数段函数
	void Rage_Search_Students();//查找函数（模糊）

	void Write_Txt();//写入新文件操作函数
	void Read_Txt();//录入文件操作函数
	void Add_oldTxt();//写入旧文件操作函数
	void Change_oldTxt();//修改旧文件操作函数

	void Change_Score();//修改函数
	void Average(double a, double x);//求标准差函数（三科）
	void Average(double math_sum, double eng_sum, double phy_sum, double m, double n, double q);//求标准差函数（单科）
	void jigelv();//求及格率函数
	void Rank();//排序函数
	
	static int math_sum, eng_sum, phy_sum;//单科所有学生总分
	static int num;//人数
	int sum=0;//学生总分
};