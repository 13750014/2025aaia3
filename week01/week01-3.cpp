/// week01-3.cpp
#include<iostream> ///�ϥ� C++ ���~���A�t�d��JInput ��XOutput
useing namespace std; ///�ϥ� C++ �� std ���u�R�W�Ŷ��v

int main(){
	int n;
	cin >> n; ///�ϥ� C++ �� Console Input ��J��r���
	int ans=0;
	for(int i=1;i<=n;i++){
		ans+=i*i;
	}
	cout <<ans; ///�ϥ� C++ �� Console Output ��X��r���
}
