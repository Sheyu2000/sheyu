#include"Myheader.h"

int Management::math_sum = 0;
int Management::eng_sum = 0;
int Management::phy_sum = 0;
int Management::num = 0;
void Management::Add_Student() {
	num++;
	string id, name;
	int math, eng, phy;
	cout << "������ѧ����ѧ�ż�����" << endl;
	cin >> id >> name;
	cout << "������ѧ������ѧ��Ӣ�����ɼ�" << endl;
	cin >> math >> eng >> phy;
	sum = math + eng + phy;
	math_sum += math;
	eng_sum += eng;
	phy_sum += phy;
	Student a(id, name, math, eng, phy, sum,0);
	stu.push_back(a);
	Add_oldTxt();
	cout << endl
		<< "�Ƿ�������룿" << endl
		<< "һ����������" << endl
		<< "����ֹͣ����" << endl;
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
	cout << "��ǰ����" << num << "��ѧ����" << endl;
	cout << "Ŀǰѧ����Ա�������" << endl;
	cout << "  ѧ��ѧ�� " << "||" << "ѧ������" << "\t\t" << "��ѧ�ɼ�" << '\t' << "Ӣ��ɼ�" << '\t' << "����ɼ�" << '\t' << "�ܳɼ�" << "\t\t" << "����" << endl;
	for (int i = 0; i < stu.size(); i++) {
		cout << stu[i].m_id << "||" << stu[i].m_name << "\t\t" << stu[i].m_math << "\t\t" << stu[i].m_eng << "\t\t" << stu[i].m_phy << "\t\t" << stu[i].m_sum << "\t\t" << stu[i].m_rank << endl;
	}
}

void Management::Delete_Student() {
	cout << "��ѡ��" << endl
		 << "һ��ɾ������ѧ����Ϣ" << endl
		 << "����ɾ������ѧ����Ϣ" << endl;
	int get;
	cin >> get;
	if (get == 1) {
		int a = stu.size();
		for (int i = 0; i < a; i++) {
			stu.erase(stu.begin());
		}
		num = 0;
		cout << "ɾ���ɹ���" << endl;
		system("pause");
	}
	else if (get == 2) {
		Rage_Search_Students();
		cout << "����������Ҫɾ����ѧ��id��������" << endl;
		string a;
		cin >> a;
		cout << "  ѧ��ѧ�� " << "||" << "ѧ������" << "\t\t" << "��ѧ�ɼ�" << '\t' << "Ӣ��ɼ�" << '\t' << "����ɼ�" << '\t' << "�ܳɼ�" << "\t\t" << "����" << endl;
		for (int i = 0; i < stu.size(); i++) {
			if (stu[i].m_id == a || stu[i].m_name == a) {
				cout << stu[i].m_id << "||" << stu[i].m_name << "\t\t" << stu[i].m_math << "\t\t" << stu[i].m_eng << "\t\t" << stu[i].m_phy << "\t\t" << stu[i].m_sum << "\t\t" << stu[i].m_rank << endl
					<< endl;
				cout << "�Ƿ�Ҫɾ����ѧ������Ϣ��" << endl;
				cout << "һ��ɾ��" << endl
					<< "����������" << endl;
				int b;
				cin >> b;
				if (b == 1) {
					stu.erase(stu.begin() + i);
					cout << "ɾ���ɹ���" << endl;
					Rank();
					system("pause");
					break;
				}
				else {
					cout << "������һ���˵�" << endl;
					break;
				}
			}
		}
	}
}

void Management::Search_Students() {
	Rage_Search_Students();
	cout << "����������Ҫ�������ҵ�ѧ��id��������" << endl;
	string a;
	cin >> a;
	cout << "  ѧ��ѧ�� " << "||" << "ѧ������" << "\t\t" << "��ѧ�ɼ�" << '\t' << "Ӣ��ɼ�" << '\t' << "����ɼ�" << '\t' << "�ܳɼ�" << "\t\t" << "����" << endl;
	for (int i = 0; i < stu.size();i++) {
		if (stu[i].m_id == a || stu[i].m_name == a) {
			cout << stu[i].m_id << "||" << stu[i].m_name << "\t\t" << stu[i].m_math << "\t\t" << stu[i].m_eng << "\t\t" << stu[i].m_phy << "\t\t" << stu[i].m_sum << "\t\t" << stu[i].m_rank << endl;
		}
	}
}

void Management::Change_Score() {
	Rage_Search_Students();
	cout << "����������Ҫ���ҵ�ѧ��id��������" << endl;
	string a;
	cin >> a;
	cout << "  ѧ��ѧ�� " << "||" << "ѧ������" << "\t\t" << "��ѧ�ɼ�" << '\t' << "Ӣ��ɼ�" << '\t' << "����ɼ�" << '\t' << "�ܳɼ�" << "\t\t" << "����" << endl;
	for (int i = 0; i < stu.size();i++) {
		if (stu[i].m_id == a || stu[i].m_name == a) {
			cout << stu[i].m_id << "||" << stu[i].m_name << "\t\t" << stu[i].m_math << "\t\t" << stu[i].m_eng << "\t\t" << stu[i].m_phy << "\t\t" << stu[i].m_sum << "\t\t" << stu[i].m_rank << endl
				 << endl;
			cout << "���������޸�����Ƴɼ���" << endl
				 << "һ����ѧ" << endl
				 << "����Ӣ��" << endl
				 << "��������" << endl;
			int b;
			cin >> b;
			if (b == 1) {
				cout << "�������ڵ���ѧ�ɼ�Ϊ��" << stu[i].m_math << endl;
				cout << "���������޸ĺ�ĳɼ���" << endl;
				int x;
				cin >> x;
				math_sum = math_sum - stu[i].m_math + x;
				stu[i].m_math = x;
				stu[i].m_sum = stu[i].m_math + stu[i].m_eng + stu[i].m_phy;
				Change_oldTxt();
			}
			else if (b == 2) {
				cout << "�������ڵ�Ӣ��ɼ�Ϊ��" << stu[i].m_eng << endl;
				cout << "���������޸ĺ�ĳɼ���" << endl;
				int x;
				cin >> x;
				eng_sum = eng_sum - stu[i].m_eng + x;
				stu[i].m_eng = x;
				stu[i].m_sum = stu[i].m_math + stu[i].m_eng + stu[i].m_phy;
				Change_oldTxt();
			}
			else if (b == 3) {
				cout << "�������ڵ�����ɼ�Ϊ��" << stu[i].m_phy << endl;
				cout << "���������޸ĺ�ĳɼ���" << endl;
				int x;
				cin >> x;
				phy_sum = phy_sum - stu[i].m_phy + x;
				stu[i].m_phy = x;
				stu[i].m_sum = stu[i].m_math + stu[i].m_eng + stu[i].m_phy;
				Change_oldTxt();
			}
			Rank();
			cout << "�޸ĳɹ���" << endl;
		}
	}
}

void Management::Search_Range() {
	cout << "��������鿴����Ƴɼ������Σ�" << endl
		<< "һ����ѧ" << endl
		<< "����Ӣ��" << endl
		<< "��������" << endl;
	int a;
	cin >> a;
	cout << "����������Σ���ͷ� ��߷֣�" << endl;
	int m, n;
	cin >> m >> n;
	cout << "  ѧ��ѧ�� " << "||" << "ѧ������" << "\t\t" << "��ѧ�ɼ�" << '\t' << "Ӣ��ɼ�" << '\t' << "����ɼ�" << '\t' << "�ܳɼ�" << "\t\t" << "����" << endl;
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
	cout << "�ð����Ƶ�ƽ���ɼ�Ϊ��" << a << "����׼��Ϊ��" << x1 << endl;
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
	cout << "�ð���ѧ��ƽ���ɼ�Ϊ��" << a << "����׼��Ϊ��" << x1 << endl
		 << "�ð�Ӣ���ƽ���ɼ�Ϊ��" << b << "����׼��Ϊ��" << x2 << endl
		 << "�ð������ƽ���ɼ�Ϊ��" << c << "����׼��Ϊ��" << x3 << endl;
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
	cout << "�ð���ѧ�ļ�����Ϊ��" << a1 << endl
		 << "�ð�Ӣ��ļ�����Ϊ��" << b1 << endl
		 << "�ð�����ļ�����Ϊ��" << c1 << endl;
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
	cout << "����������Ҫ���ҵ�ѧ��id��������" << endl;
	string a;
	cin >> a;
	cout << "  ѧ��ѧ�� " << "||" << "ѧ������" << "\t\t" << "��ѧ�ɼ�" << '\t' << "Ӣ��ɼ�" << '\t' << "����ɼ�" << '\t' << "�ܳɼ�" << "\t\t" << "����" << endl;
	for (int i = 0; i < stu.size(); i++) {
		int c = stu[i].m_id.find(a);
		int d = stu[i].m_name.find(a);
		if (c!=-1 || d!=-1) {
			cout << stu[i].m_id << "||" << stu[i].m_name << "\t\t" << stu[i].m_math << "\t\t" << stu[i].m_eng << "\t\t" << stu[i].m_phy << "\t\t" << stu[i].m_sum << "\t\t" << stu[i].m_rank << endl;
		}
	}
}