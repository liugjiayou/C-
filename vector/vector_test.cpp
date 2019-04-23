#include <vector>
#include <iostream>

//https://www.cnblogs.com/Nonono-nw/p/3462183.html
using namespace std;

int main(){
/*
	vector 初始化方式
*/
 	vector<int> a(10); //定义10个int类型元素，值不确定；
 	vector<int> b(10,1);//初始化为1；
 	vector<int> c(a); //用a给b赋值；
 	vector<int> d(a.begin(),a.begin()+3);//用a的0 1 2 三个元素初始化d；
 	int e[7] = {0,1,2,3,4,5,6};
	vector<int> f(e,e+7);
	
    return 0;
}
