/**
 * @file 10.06.02.cpp
 * @brief 八皇后问题
 * @author LiWenGang
 * @date 2016-10-06
 */

#include<iostream>
#include<algorithm>
#include<vector>
#include<cmath>

using namespace std;
const int MAX=8;

vector<int> board(MAX);
void show_result();
int check_cross();
void put_chess();

int main(int argc, char* argv[]){
	for(size_t i=0;i<board.size();i++){
		board[i]=i;
	}
	put_chess();
	return 0;
}

void show_result(){
	for(size_t i=0;i<board.size();i++){
		cout<<"("<<i<<","<<board[i]<<")";
	}
	cout<<endl;
}

int check_cross(){
	for(size_t i=0;i<board.size()-1;i++){
		for(size_t j=i+1;j<board.size();j++){
			if((j-i)==(size_t)abs(board[i]-board[j])){
				return 1;
			}
		}
	}
	return 0;
}

void put_chess(){
	while(next_permutation(board.begin(),board.end())){
		if(!check_cross()){
			show_result();
		}
	}
}

/*
 * 1 2 3 4 5 6 7 8
 * 使用next_permutation对上述八个数字做全排列
 * 每个位置的下标作为y，每个位置的元素值做x，这样就会形成(y,x)的坐标
 * - 若x=x，则表示两个元素在同一行
 * - 若y=y，则表示两个元素在同一列
 * - 若|xj-xi|=|yj-yi|，则表示两个元素在同一对角线
 * 对所有的全排列按照上述方法遍历完成，即可得到最后结果
 */
