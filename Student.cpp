#include"Myheader.h"

int Management::math_sum = 0;
int Management::eng_sum = 0;
int Management::phy_sum = 0;
int Management::num = 0;
void Management::Add_Student() {
	num++;
	string id, name;
	int math, eng, phy;
	cout << "请输入学生的学号及姓名" << endl;
	cin >> id >> name;
	cout << "请输入学生的数学，英语，物理成绩" << endl;
	cin >> math >> eng >> phy;
	sum = math + eng + phy;
	math_sum += math;
	eng_sum += eng;
	phy_sum += phy;
	Student a(id, name, math, eng, phy, sum,0);
	stu.push_back(a);
	Add_oldTxt();
	cout << endl
		<< "是否继续输入？" << endl
		<< "一：继续输入" << endl
		<< "二：停止输入" << endl;
	int m;
	cin >> m;
	if (m == 1) {
		system("cls");
		Add_Student();
	}
	else if (m == 2) {
		system("cls");
	}
}

void Management::Check_Students() {
	cout << "当前共有" << num << "名学生。" << endl;
	cout << "目前学生成员情况如下" << endl;
	cout << "  学生学号 " << "||" << "学生姓名" << "\t\t" << "数学成绩" << '\t' << "英语成绩" << '\t' << "物理成绩" << '\t' << "总成绩" << "\t\t" << "排名" << endl;
	for (int i = 0; i < stu.size(); i++) {
		cout << stu[i].m_id << "||" << stu[i].m_name << "\t\t" << stu[i].m_math << "\t\t" << stu[i].m_eng << "\t\t" << stu[i].m_phy << "\t\t" << stu[i].m_sum << "\t\t" << stu[i].m_rank << endl;
	}
}

void Management::Delete_Student() {
	cout << "请选择：" << endl
		 << "一·删除所有学生信息" << endl
		 << "二·删除单个学生信息" << endl;
	int get;
	cin >> get;
	if (get == 1) {
		int a = stu.size();
		for (int i = 0; i < a; i++) {
			stu.erase(stu.begin());
		}
		num = 0;
		cout << "删除成功！" << endl;
		system("pause");
	}
	else if (get == 2) {
		Rage_Search_Students();
		cout << "请输入您想要删除的学生id或者姓名" << endl;
		string a;
		cin >> a;
		cout << "  学生学号 " << "||" << "学生姓名" << "\t\t" << "数学成绩" << '\t' << "英语成绩" << '\t' << "物理成绩" << '\t' << "总成绩" << "\t\t" << "排名" << endl;
		for (int i = 0; i < stu.size(); i++) {
			if (stu[i].m_id == a || stu[i].m_name == a) {
				cout << stu[i].m_id << "||" << stu[i].m_name << "\t\t" << stu[i].m_math << "\t\t" << stu[i].m_eng << "\t\t" << stu[i].m_phy << "\t\t" << stu[i].m_sum << "\t\t" << stu[i].m_rank << endl
					<< endl;
				cout << "是否要删除该学生的信息？" << endl;
				cout << "一·删除" << endl
					<< "二·再想想" << endl;
				int b;
				cin >> b;
				if (b == 1) {
					stu.erase(stu.begin() + i);
					cout << "删除成功！" << endl;
					Rank();
					system("pause");
					break;
				}
				else {
					cout << "返回上一级菜单" << endl;
					break;
				}
			}
		}
	}
}

void Management::Search_Students() {
	Rage_Search_Students();
	cout << "请输入您想要继续查找的学生id或者姓名" << endl;
	string a;
	cin >> a;
	cout << "  学生学号 " << "||" << "学生姓名" << "\t\t" << "数学成绩" << '\t' << "英语成绩" << '\t' << "物理成绩" << '\t' << "总成绩" << "\t\t" << "排名" << endl;
	for (int i = 0; i < stu.size();i++) {
		if (stu[i].m_id == a || stu[i].m_name == a) {
			cout << stu[i].m_id << "||" << stu[i].m_name << "\t\t" << stu[i].m_math << "\t\t" << stu[i].m_eng << "\t\t" << stu[i].m_phy << "\t\t" << stu[i].m_sum << "\t\t" << stu[i].m_rank << endl;
		}
	}
}

void Management::Change_Score() {
	Rage_Search_Students();
	cout << "请输入您想要查找的学生id或者姓名" << endl;
	string a;
	cin >> a;
	cout << "  学生学号 " << "||" << "学生姓名" << "\t\t" << "数学成绩" << '\t' << "英语成绩" << '\t' << "物理成绩" << '\t' << "总成绩" << "\t\t" << "排名" << endl;
	for (int i = 0; i < stu.size();i++) {
		if (stu[i].m_id == a || stu[i].m_name == a) {
			cout << stu[i].m_id << "||" << stu[i].m_name << "\t\t" << stu[i].m_math << "\t\t" << stu[i].m_eng << "\t\t" << stu[i].m_phy << "\t\t" << stu[i].m_sum << "\t\t" << stu[i].m_rank << endl
				 << endl;
			cout << "请问您想修改哪项单科成绩？" << endl
				 << "一·数学" << endl
				 << "二·英语" << endl
				 << "三·物理" << endl;
			int b;
			cin >> b;
			if (b == 1) {
				cout << "该生现在的数学成绩为：" << stu[i].m_math << endl;
				cout << "请输入您修改后的成绩：" << endl;
				int x;
				cin >> x;
				math_sum = math_sum - stu[i].m_math + x;
				stu[i].m_math = x;
				stu[i].m_sum = stu[i].m_math + stu[i].m_eng + stu[i].m_phy;
				Change_oldTxt();
			}
			else if (b == 2) {
				cout << "该生现在的英语成绩为：" << stu[i].m_eng << endl;
				cout << "请输入您修改后的成绩：" << endl;
				int x;
				cin >> x;
				eng_sum = eng_sum - stu[i].m_eng + x;
				stu[i].m_eng = x;
				stu[i].m_sum = stu[i].m_math + stu[i].m_eng + stu[i].m_phy;
				Change_oldTxt();
			}
			else if (b == 3) {
				cout << "该生现在的物理成绩为：" << stu[i].m_phy << endl;
				cout << "请输入您修改后的成绩：" << endl;
				int x;
				cin >> x;
				phy_sum = phy_sum - stu[i].m_phy + x;
				stu[i].m_phy = x;
				stu[i].m_sum = stu[i].m_math + stu[i].m_eng + stu[i].m_phy;
				Change_oldTxt();
			}
			Rank();
			cout << "修改成功！" << endl;
		}
	}
}

void Management::Search_Range() {
	cout << "请问您想查看哪项单科成绩分数段？" << endl
		<< "一·数学" << endl
		<< "二·英语" << endl
		<< "三·物理" << endl;
	int a;
	cin >> a;
	cout << "请输入分数段（最低分 最高分）" << endl;
	int m, n;
	cin >> m >> n;
	cout << "  学生学号 " << "||" << "学生姓名" << "\t\t" << "数学成绩" << '\t' << "英语成绩" << '\t' << "物理成绩" << '\t' << "总成绩" << "\t\t" << "排名" << endl;
	if (a == 1) {
		for (int i = 0; i < stu.size(); i++) {
			if (stu[i].m_math >= m && stu[i].m_math <= n) {
				cout << stu[i].m_id << "||" << stu[i].m_name << "\t\t" << stu[i].m_math << "\t\t" << stu[i].m_eng << "\t\t" << stu[i].m_phy << "\t\t" << stu[i].m_sum << "\t\t" << stu[i].m_rank << endl;
			}
		}
	}
	else if (a == 2) {
		for (int i = 0; i < stu.size(); i++) {
			if (stu[i].m_eng >= m && stu[i].m_eng <= n) {
				cout << stu[i].m_id << "||" << stu[i].m_name << "\t\t" << stu[i].m_math << "\t\t" << stu[i].m_eng << "\t\t" << stu[i].m_phy << "\t\t" << stu[i].m_sum << "\t\t" << stu[i].m_rank << endl;
			}
		}
	}
	else if (a == 3) {
		for (int i = 0; i < stu.size(); i++) {
			if (stu[i].m_phy >= m && stu[i].m_phy <= n) {
				cout << stu[i].m_id << "||" << stu[i].m_name << "\t\t" << stu[i].m_math << "\t\t" << stu[i].m_eng << "\t\t" << stu[i].m_phy << "\t\t" << stu[i].m_sum << "\t\t" << stu[i].m_rank << endl;
			}
		}
	}
}

void Management::Average(double a, double x) {
	a = (math_sum+eng_sum+phy_sum) / num;
	double x1 = 0;
	for (int i = 0; i < stu.size(); i++) {
		x += ((stu[i].m_sum - a)*(stu[i].m_sum - a) / 4);
		x1 = sqrt(x);
	}
	cout << "该班三科的平均成绩为：" << a << "，标准差为：" << x1 << endl;
}

void Management::Average(double math_sum, double eng_sum, double phy_sum,double m,double n,double q) {
	double a, b, c;
	a = math_sum / num;
	b = eng_sum / num;
	c = phy_sum / num;
	double x1 = 0, x2 = 0, x3 = 0;
	for (int i = 0; i < stu.size(); i++) {
		m += ((stu[i].m_math - a)*(stu[i].m_math - a) / 4);
		x1 = sqrt(m);
		n+= ((stu[i].m_eng - b)*(stu[i].m_eng - b) / 4);
		x2 = sqrt(n);
		q += ((stu[i].m_phy - c)*(stu[i].m_phy - c) / 4);
		x3 = sqrt(q);
	}
	cout << "该班数学的平均成绩为：" << a << "，标准差为：" << x1 << endl
		 << "该班英语的平均成绩为：" << b << "，标准差为：" << x2 << endl
		 << "该班物理的平均成绩为：" << c << "，标准差为：" << x3 << endl;
}

void Management::jigelv() {
	double a=0,b=0,c=0,a1=0,b1=0,c1=0;
	for (int i = 0; i < stu.size(); i++) {
		if (stu[i].m_math >= 60) {
			a++;
		}
	}
	a1 = (a / num);
	for (int i = 0; i < stu.size(); i++) {
		if (stu[i].m_eng >= 60) {
			b++;
		}
	}
	b1 = (b / num);
	for (int i = 0; i < stu.size(); i++) {
		if (stu[i].m_phy >= 60) {
			c++;
		}
	}
	c1 = (c / num);
	cout << "该班数学的及格率为：" << a1 << endl
		 << "该班英语的及格率为：" << b1 << endl
		 << "该班物理的及格率为：" << c1 << endl;
}

void Management::Rank() {
	for (int i = 1; i < stu.size(); i++) {
		for (int j = i; j > 0; j--) {
			if (stu[j].m_sum > stu[j - 1].m_sum) {
				Student arr = stu[j];
				stu[j] = stu[j - 1];
				stu[j - 1] = arr;
			}
			else if (stu[j].m_sum == stu[j - 1].m_sum) {
				if (stu[j].m_math > stu[j - 1].m_math) {
					Student arr = stu[j];
					stu[j] = stu[j - 1];
					stu[j - 1] = arr;
				}
				else if (stu[j].m_math == stu[j - 1].m_math) {
					if (stu[j].m_phy > stu[j - 1].m_phy) {
						Student arr = stu[j];
						stu[j] = stu[j - 1];
						stu[j - 1] = arr;
					}
					else if (stu[j].m_phy == stu[j - 1].m_phy) {
						if (stu[j].m_id > stu[j - 1].m_id) {
							Student arr = stu[j];
							stu[j] = stu[j - 1];
							stu[j - 1] = arr;
						}
					}
				}
			}
		}
	}
	for (int i = 0; i < stu.size(); i++) {
		stu[i].m_rank = i + 1;
	}
}

void Management::Read_Txt() {
	ifstream in("data.txt");
	if (in) {
		string id, name;
		int math, eng, phy;
		while (!in.eof()) {
			in >> id >> name >> math >> eng >> phy;
			sum = math + eng + phy;
			math_sum += math;
			eng_sum += eng;
			phy_sum += phy;
			Student a(id, name, math, eng, phy, sum);
			stu.push_back(a);
			num++;
		}
		stu.pop_back();
		num--;
		Rank();
	}
	in.close();
}

void Management::Write_Txt() {
	ofstream out("NewClass.txt");
		if (out) {
			for (int i = 0; i < stu.size(); i++) {
				out << stu[i].m_id << "  " << stu[i].m_name << "  " << stu[i].m_math << "  " << stu[i].m_eng << "  " << stu[i].m_phy << "  " << stu[i].m_sum << endl;
			}
		}
		out.close();
}

void Management::Add_oldTxt() {
	ofstream out("data.txt",ios::app);
	auto it = stu.end()-1;
	if (out) {
			out << it->m_id << " " << it->m_name << " " << it->m_math << " " << it->m_eng << " " << it->m_phy << endl;
	}
	out.close();
}

void Management::Change_oldTxt() {
	ofstream out("data.txt");
		if (out) {
			for (int i = 0; i < stu.size(); i++) {
				out << stu[i].m_id << "  " << stu[i].m_name << "  " << stu[i].m_math << "  " << stu[i].m_eng << "  " << stu[i].m_phy << endl;
			}
		}
	out.close();
}

void Management::Rage_Search_Students() {
	cout << "请输入您想要查找的学生id或者姓名" << endl;
	string a;
	cin >> a;
	cout << "  学生学号 " << "||" << "学生姓名" << "\t\t" << "数学成绩" << '\t' << "英语成绩" << '\t' << "物理成绩" << '\t' << "总成绩" << "\t\t" << "排名" << endl;
	for (int i = 0; i < stu.size(); i++) {
		int c = stu[i].m_id.find(a);
		int d = stu[i].m_name.find(a);
		if (c!=-1 || d!=-1) {
			cout << stu[i].m_id << "||" << stu[i].m_name << "\t\t" << stu[i].m_math << "\t\t" << stu[i].m_eng << "\t\t" << stu[i].m_phy << "\t\t" << stu[i].m_sum << "\t\t" << stu[i].m_rank << endl;
		}
	}
}