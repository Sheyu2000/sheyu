#include<iostream>
#include<string>
#include<math.h>
#include<vector>
#include<iomanip>
#include<fstream>
using namespace std;
class Mangement;
class Student {
	friend class Mangement;//��Ԫ����
public:
	string m_id, m_name;//ѧ�ţ�����
	int m_math, m_eng, m_phy;//��ѧ�ɼ���Ӣ��ɼ�������ɼ�
	int m_sum;//�ܷ�
	int m_rank;//����
	Student (string id = " ", string name = " ", int math = 0, int eng = 0, int phy = 0,int sum=0,int rank=0) :m_id(id), m_name(name), m_math(math), m_eng(eng), m_phy(phy), m_sum(sum),m_rank(rank) {}//���㵼������
};

class Management {
private:
	vector<Student>stu;//���ѧ����Ϣ
public:

	Management(int i) {}

	int menu();//�˵�����
	void Add_Student();//��Ӻ���
	void Check_Students();//�鿴����
	void Delete_Student();//ɾ������
	void Search_Students();//���Һ�������׼��
	void Search_Range();//���ҷ����κ���
	void Rage_Search_Students();//���Һ�����ģ����

	void Write_Txt();//д�����ļ���������
	void Read_Txt();//¼���ļ���������
	void Add_oldTxt();//д����ļ���������
	void Change_oldTxt();//�޸ľ��ļ���������

	void Change_Score();//�޸ĺ���
	void Average(double a, double x);//���׼��������ƣ�
	void Average(double math_sum, double eng_sum, double phy_sum, double m, double n, double q);//���׼��������ƣ�
	void jigelv();//�󼰸��ʺ���
	void Rank();//������
	
	static int math_sum, eng_sum, phy_sum;//��������ѧ���ܷ�
	static int num;//����
	int sum=0;//ѧ���ܷ�
};