#include <iostream>
#include <cstring>
#include <cstdint>
#include <functional>
using package_type=uint8_t;//package_type为8为无符号整形的别名，指代包的类型
#define file 0
#define zip_file 1
using namespace std;
const string version="version 0.0.2";
struct package{
	uint64_t hash_id;
	package_type type;
};
uint64_t get_hash(string package_name){
	hash<string> do_hash;
	uint64_t hash_num=(uint64_t)do_hash(package_name);//强制类型转换，避免类型冲突
	return hash_num;
}
int main(int args,char* argv[]){
	string arg;
	if(args==1){
		cout<<"欢迎使用红熊猫包管理器，请键入你想要执行的操作"<<endl;
		cin>>arg;
		return 0;
	}
	else{
		arg=argv[1];
	}
	if(arg=="-v"){//判断键入参数是否要求输出版本信息
		cout<<version<<endl;
	}
	if(arg=="-i"){
		package_name=argv[2];
		uint64_t hash_id=get_hash(package_name);
	}
	return 0;
}
