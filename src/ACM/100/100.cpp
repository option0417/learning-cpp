/* @JUDGE_ID: 55408NE 100 C */
//#include <iostream.h>
//using namespace std;
//
//int getCycleLength(int i);
//
//int main() {
//	int i;
//	int j;
//	int max = 0;
//	int tmp = 0;
//
//	while( cin>>i>>j )
//	{
//		if( (i > 0 && i < 1000000) && (j > 0 && j < 1000000))
//		{
//			max = tmp = 0;
//			cout<<i<<" "<<j<<" ";
//			if( i > j) {
//				tmp = i;
//				i = j;
//				j = tmp;
//				tmp = 0;
//			}
//
//			for(;i <= j; i++)
//			{
//				tmp = getCycleLength(i);
//				if( max < tmp)
//					max = tmp;
//			}
//		}
//		cout<<max<<endl;
//	}
//	return 0;
//}
//int getCycleLength(int i) {
//	int cnt = 1;
//	while(i != 1)
//	{
//		if( (i & 1) == 0)
//		{
//			i/=2;
//			cnt++;
//		}
//		else
//		{
//			i = 3 * i + 1;
//			cnt++;
//		}
//	}
//	return cnt;
//}
