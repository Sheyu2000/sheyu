#include"Myheader.h"

int Management::menu() {
	int m = 1;
	while (m) {
	   cout << "******************************************************" << endl
			<< "*                                                    *" << endl
			<< "************���������ѡ������Ҫ���еĲ���************" << endl
			<< "*             һ��ѧ����Ϣ¼�뼰�޸�                 *" << endl
			<< "*             ����ѧ������                           *" << endl
			<< "*             ����ѧ���ɼ�ͳ�Ʒ�������               *" << endl
			<< "*             �ġ�¼��/д���ļ�����                  *" << endl
			<< "*             �塤ѧ���ɼ�����                       *" << endl
			<< "*             �㡤�˳�����                           *" << endl
			<< "******************************************************" << endl;
		cin >> m;
		switch (m) {
		case 1: {
			system("cls");
			int m1 = 1;
			while (m1) {
			   cout << "******************************************************" << endl
					<< "*                                                    *" << endl
					<< "************���������ѡ������Ҫ���еĲ���************" << endl
					<< "*             һ��ѧ����Ϣ¼��                       *" << endl
					<< "*             ����ѧ���ɼ��޸�                       *" << endl
					<< "*             ����ѧ����Ϣɾ��                       *" << endl
				    << "*             �ġ��鿴��ǰ����ѧ����Ϣ               *" << endl
					<< "*             �㡤������һ���˵�                     *" << endl
					<< "******************************************************" << endl;
				cin >> m1;
				switch (m1) {
				case 1: {
					system("cls");
					Add_Student();
					break;
				}
				case 2: {
					system("cls");
					Change_Score();
					break;
				}
				case 3: {
					system("cls");
					Delete_Student();
					break;
				}
				case 4: {
					system("cls");
					Check_Students();
					system("pause");
					system("cls");
				}
				case 0:
					m = 1;
				}
			}
			system("cls");
			continue;
		}
		case 2: {
			system("cls");
			int m2 = 1;
			while (m2) {
			   cout << "******************************************************" << endl
					<< "*                                                    *" << endl
					<< "************���������ѡ������Ҫ���еĲ���************" << endl
					<< "*             һ��ѧ������                           *" << endl
					<< "*             �������ҷ�����ѧ������                 *" << endl
					<< "*             �㡤������һ���˵�                     *" << endl
					<< "******************************************************" << endl;
				cin >> m2;
				switch (m2) {
				case 1:{
					system("cls");
					Search_Students();
					system("pause");
					system("cls");
					break;
				}
				case 3:
					system("cls");
					Search_Range();
					system("pause");
					system("cls");
					break;
				case 0:
					m = 1;
				}
			}
			system("cls");
			continue;
		}
		case 3: {
			system("cls");
			int m3 = 1;
			while (m3) {
			   cout << "******************************************************" << endl
					<< "*                                                    *" << endl
					<< "************���������ѡ������Ҫ���еĲ���************" << endl
					<< "*             һ������ѧ�����ƻ�����ƽ���ɼ�����׼�� *" << endl
					<< "*             ����ѧ���ɼ�������                     *" << endl
					<< "*             �㡤������һ���˵�                     *" << endl
					<< "******************************************************" << endl;
				cin >> m3;
				switch (m3) {
				case 1:
					cout << "��ѡ�񵥿ƻ�����" << endl
						<< "һ������" << endl
						<< "��������" << endl;
					int m;
					cin >> m;
					if (m == 1) {
						system("cls");
						Average(math_sum, eng_sum, phy_sum, 0, 0, 0);
						system("pause");
						system("cls");
						break;
					}
					else {
						system("cls");
						Average(0, 0);
						system("pause");
						system("cls");
						break;
					}
				case 2:
					system("cls");
					jigelv();
					system("pause");
					system("cls");
					break;
				case 0:
					m = 1;
				}
			}
			system("cls");
			continue;
		}
		case 4:{
			system("cls");
			int m4 = 1;
			while (m4) {
			   cout << "******************************************************" << endl
					<< "*                                                    *" << endl
					<< "************���������ѡ������Ҫ���еĲ���************" << endl
					<< "*             һ��¼��һ���ļ�                       *" << endl
					<< "*             ����д��һ���µ��ļ�                   *" << endl
					<< "*             �㡤������һ���˵�                     *" << endl
					<< "******************************************************" << endl;
				cin >> m4;
				switch (m4) {
				case 1: {
					system("cls");
					Read_Txt();
					cout << "��������룡" << endl;
					system("pause");
					system("cls");
					break;
				}
				case 2:
					system("cls");
					Write_Txt();
					cout << "����������" << endl;
					system("pause");
					system("cls");
					break;
				case 0:
					m = 1;
				}
			}
			system("cls");
			continue;
		}
		case 5:
			system("cls");
			Rank();
			cout << "���������" << endl;
			system("pause");
			system("cls");
			continue;
		}
		system("cls");
		cout << "��л����ʹ�ã�ף��������죡" << endl;
		return 0;
	}
}