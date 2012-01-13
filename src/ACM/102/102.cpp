///* @JUDGE_ID: 55408NE 102 C++ */
//#include <iostream.h>
//using namespace std;
//
//struct BIN
//{
//	int value;
//	char *str;
//};
//
//void getBCG(int*, BIN*);
//void getBGC(int*, BIN*);
//void getCBG(int*, BIN*);
//void getCGB(int*, BIN*);
//void getGBC(int*, BIN*);
//void getGCB(int*, BIN*);
//
//int main(void) {
//	int num[9];
//	int min;
//	char *str;
//	BIN *obj = new BIN;
//
//	void (*ptr[6])(int*, BIN*);
//	ptr[0] = getBCG;
//	ptr[1] = getBGC;
//	ptr[2] = getCBG;
//	ptr[3] = getCGB;
//	ptr[4] = getGBC;
//	ptr[5] = getGCB;
//
//	//each line represent the number of brown, green, and clear bottles
//	while(	cin>>num[0] && cin>>num[1] && cin>>num[2] &&
//			cin>>num[3] && cin>>num[4] && cin>>num[5] &&
//			cin>>num[6] && cin>>num[7] && cin>>num[8]	)
//	{
//		min = INT_MAX;
//		str = "";
//		for(int idx = 0; idx < 6; idx++)
//		{
//			ptr[idx](num, obj);
//			if(min > obj->value) {
//				min = obj->value;
//				str = obj->str;
//			}
//		}
//		cout<<str<<" "<<min<<endl;
//	}
//	return 0;
//}
//
//void getBCG(int *num, BIN *obj)
//{
//	obj->value = (num[3]+num[6]) + (num[2]+num[8]) + (num[1]+num[4]);
//	obj->str = "BCG";
//}
//
//void getBGC(int *num, BIN *obj)
//{
//	obj->value = (num[3]+num[6]) + (num[1]+num[7]) + (num[2]+num[5]);
//	obj->str = "BGC";
//}
//
//void getCBG(int *num, BIN *obj)
//{
//	obj->value = (num[5]+num[8]) + (num[0]+num[6]) + (num[1]+num[4]);
//	obj->str = "CBG";
//}
//
//void getCGB(int *num, BIN *obj)
//{
//	obj->value = (num[5]+num[8]) + (num[1]+num[7]) + (num[0]+num[3]);
//	obj->str = "CGB";
//}
//
//void getGBC(int *num, BIN *obj)
//{
//	obj->value = (num[4]+num[7]) + (num[0]+num[6]) + (num[2]+num[5]);
//	obj->str = "GBC";
//}
//
//void getGCB(int *num, BIN *obj)
//{
//	obj->value = (num[4]+num[7]) + (num[2]+num[8]) + (num[0]+num[3]);
//	obj->str = "GCB";
//}
