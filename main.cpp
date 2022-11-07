#include <iostream>
#include <cstring>
#include <cstdint>
using package_type=uint8_t;//package_type为8为无符号整形的别名，指代包的类型
#define file 0
#define zip_file 1
using namespace std;
const string version="version 0.0.1";
struct package{
	uint64_t id;
	string name;
	string description;
	string version;
	string address;
	package_type type;
};
int main(int args,char* argv[]){
	if(args==1){
		cout<<"欢迎使用红熊猫包管理器，请键入你想要执行的操作"<<endl;
		return 0;
	}
	if(strcmp(argv[1],"-v")==0){//判断键入参数是否要求输出版本信息
		cout<<version<<endl;
	}
	return 0;
}
