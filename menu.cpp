#include"Myheader.h"

int Management::menu() {
	int m = 1;
	while (m) {
	   cout << "******************************************************" << endl
			<< "*                                                    *" << endl
			<< "************请根据数字选择您想要进行的操作************" << endl
			<< "*             一·学生信息录入及修改                 *" << endl
			<< "*             二·学生查找                           *" << endl
			<< "*             三·学生成绩统计分析操作               *" << endl
			<< "*             四·录入/写入文件操作                  *" << endl
			<< "*             五·学生成绩排序                       *" << endl
			<< "*             零·退出程序                           *" << endl
			<< "******************************************************" << endl;
		cin >> m;
		switch (m) {
		case 1: {
			system("cls");
			int m1 = 1;
			while (m1) {
			   cout << "******************************************************" << endl
					<< "*                                                    *" << endl
					<< "************请根据数字选择您想要进行的操作************" << endl
					<< "*             一·学生信息录入                       *" << endl
					<< "*             二·学生成绩修改                       *" << endl
					<< "*             三·学生信息删除                       *" << endl
				    << "*             四·查看当前所有学生信息               *" << endl
					<< "*             零·返回上一级菜单                     *" << endl
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
					<< "************请根据数字选择您想要进行的操作************" << endl
					<< "*             一·学生查找                           *" << endl
					<< "*             二·查找分数段学生名单                 *" << endl
					<< "*             零·返回上一级菜单                     *" << endl
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
					<< "************请根据数字选择您想要进行的操作************" << endl
					<< "*             一·计算学生单科或三科平均成绩及标准差 *" << endl
					<< "*             二·学生成绩及格率                     *" << endl
					<< "*             零·返回上一级菜单                     *" << endl
					<< "******************************************************" << endl;
				cin >> m3;
				switch (m3) {
				case 1:
					cout << "请选择单科或三科" << endl
						<< "一·单科" << endl
						<< "二·三科" << endl;
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
					<< "************请根据数字选择您想要进行的操作************" << endl
					<< "*             一·录入一个文件                       *" << endl
					<< "*             二·写入一个新的文件                   *" << endl
					<< "*             零·返回上一级菜单                     *" << endl
					<< "******************************************************" << endl;
				cin >> m4;
				switch (m4) {
				case 1: {
					system("cls");
					Read_Txt();
					cout << "已完成输入！" << endl;
					system("pause");
					system("cls");
					break;
				}
				case 2:
					system("cls");
					Write_Txt();
					cout << "已完成输出！" << endl;
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
			cout << "已完成排序！" << endl;
			system("pause");
			system("cls");
			continue;
		}
		system("cls");
		cout << "感谢您的使用，祝您生活愉快！" << endl;
		return 0;
	}
}