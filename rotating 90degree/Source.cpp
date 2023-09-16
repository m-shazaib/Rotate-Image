#include <iostream>
#include <vector>

using namespace std;

void transpose(vector <vector<int>> &m) {
	for (int i = 0; i < m.size(); i++) {
		for (int j = i + 1; j < m[i].size(); j++) {
			swap(m[i][j], m[j][i]);
		}
	}
	return;
}



void rotate(vector<vector<int>>& m) {
	
	
	transpose(m);
	int size = m.size();
	int mid=size/2;
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (j == mid)
				break;
		
			swap(m[i][j], m[i][size - j - 1]);
		}
	}
	return;
}



int main() {
	vector <vector <int>> matrix = { {5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, { 15, 14, 12, 16 }};
  rotate(matrix);
  for (int i = 0; i < matrix.size(); i++) {
	  for(int j=0; j<matrix[i].size(); j++)
		  cout << matrix[i][j] << " ";
	  cout << endl;
  }
  

    return 0;
}





/*
if size%2==0
swap(matrix[i][j], matrix[i][size-j-1])

else if size%2==1
swap(matrix[i][j], matrix[i][size-j-1])
if j==size/2
break;
*/

/*
5 1 9 11
2 4 8 10
13 3 6 7
15 14 12 16



5 2 13 15
1 4 3 14
9 8 6 12
11 10 7 16

15 13 2 5
14 3 4 1
12 6 8 9
16 7 10 11

i j = 0 0 = 5  swap with 0 3 = 15
i j = 0 1 = 2 swap with 0 2 = 13
i j = 1 0 = 1 swap with 1 3 = 10
i j = 1 1 = 4 swap with 1 2 = 8
i j = 2 0 = 9 swap with 2 3 = 7
i j = 2 1 = 3 swap with 2 2 = 6
i j = 3 0 = 11 swap with 3 3 = 16

i=0 j=0  swapping  with i, j=size-j -->  i=0 j=3
i= 0 j=1 swapping with i, j=size-j  --> i=0 j=2

*/



/*
1 2 3 
4 5 6 
7 8 9

1  4 7
2  5 8
3  6 9


i j =0 1 = 2

i j =0 2 = 3

i j = 1 2 = 6

i j =1 0 = 2
i j =2 0 = 3
i j =2 1 = 6

1   2   3   4
5   6   7   8
9   10  11  12
13  14  15  16

i j = 0 1 = 2
i j = 0 2 = 3
i j = 0 3 = 4
i j = 1 2 = 7
i j = 1 3 = 8
i j = 2 3 = 12

i j = 1 0 = 5
i j = 2 0 = 9
i j = 3 0 = 13
i j = 2 1 = 10
i j = 3 1 = 14
i j = 3 2 = 15
*/

/*
* j=i+1
* after j=matrix[i].size()-1
* i++
* meanwhile swap(matrix[i][j], matrix[j][i])
*/







/*
1 2 3
4 5 6
7 8 9

1  4 7
2  5 8
3  6 9

7 4 1
8 5 2
9 6 3

i j = 0 0 = 1
i j = 0 2 = 7
i j = 1 0 = 2
i j = 1 2 = 8
i j = 2 0 = 3
i j = 2 2 = 9


1   2   3   4   100
5   6   7   8   101
9   10  11  12  102
13  14  15  16  103
17  18  19  20  104

		1   5   9  13   17 
		2   6  10  14	18 
		3   7  11  15   19 
		4   8  12  16   20
	  100 101 102 103  104

	  17   13   9    5    1
	  18   14   10   6    2
	  19   15   11   7    3
	  20   16   12   8    4
	  104  103  102  101  100


13 9 5 1
14 10 6 2
15 11 7 3
16 12 8 4

i j = 0 0 = 1
i j = 0 3 = 4
i j = 1 0 = 5
i j = 1 3 = 8
i j = 2 0 = 9
i j = 2 3 = 12
i j = 3 0 = 13
i j = 3 3 = 16

difference=3

i j =0 1 = 5
i j =0 2 = 9
i j =1 1= 6
i j =1 2 = 10
i j =2 1 = 7
i j =2 2 = 11
i j =3 1 = 8
i j =3 2 = 12

difference=1




*/
/*
if size%2==0
swap(matrix[i][j], matrix[i][size-j-1])

else if size%2==1
swap(matrix[i][j], matrix[i][size-j-1])
if j==size/2
break;
*/



