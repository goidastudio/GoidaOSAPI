#include<gosapi>
//!!!!OS includes GUI but from API 1.0 you can't call it. 
int main(int argc, char *argv[])
{
	SetApiV(1, 0);
	//SetApiV(1, 0); - set the api version to 1.0
	//SetApiV(1, 1); -set api version to 1.1
	//last api v - 1.1
	//...
	cnsl("Hello, World");
	//print the "Hello, World"
	//...
	fs::wrf("test.txt", "");//write file
	cnsl(fs::rf("test.txt"));//read file
	fs::delf("test.txt");//delete file
	fs::crdir("dir/");//create dir
	fs::deldir("dir/");//delete dir
	if(fs::direx("dir/")){//directory exists
		cnsl("dir not deleted");
	}
	else{
		cnsl("dir deleted");
	}
	//fs::fex(path) - file exists
}