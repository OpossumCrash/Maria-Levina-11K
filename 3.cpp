/*3) � ����������� ������ �������, ������� ��������� ������:
1. ������� 9
2. ������� � �������
3. ������ �� 7
4. ������� 1 � �����
������ �� ��� ����������� �� 9 �������� ����� x, ������ �������� ��� ����� �� 7,
������ ��������� ����� x � ����� x*x, �������� ��������� � ����� ������� �
����� (��������, �� ����� 30 ���������� ����� 301). ��������� ��� �����������
� ��� ������������������ ������. �������� ���������, �����������, ����� ��
������������������� ������ ����������� �������� �� ����� X ����� Y. ����
�����, ��������� ������ ���������� YES, � ��������� ������ � NO.*/

#include <iostream>

using namespace std;
/*
long long sqrt(long long a) {
 long long i;

 if (a == 0){return 0;};
 for (i = 1; i < a; i += 1){
    if ((a / i) == i) {
       return i;
    }
 };
 return 0;
};

int main (){

 long long X, Y;
 cin >> X >> Y;
 long long* arr = new long long [Y];

 for(long long j = 0; j <= Y; j++){
    if (j == X) {
        arr[j] = 1;
    }
    else if (j < X){
      arr[j] = 0;
    }
    else if(((j % 7) == 0) && ((j % 10) == 1)){
        arr[j] = arr[j / 7] + arr[sqrt (j)] + arr[j - 9] + arr[(j - 1) / 10];
    }
    else if(((j % 7) != 0)  && ((j% 10) == 1)){
        arr[j] = arr[sqrt (j)] + arr[j - 9] + arr[(j - 1) / 10];
    }
    else if(((j % 7) == 0)  && ((j % 10) != 1)){
        arr[j] = arr[sqrt (j)] + arr[j - 9] + arr[j / 7];
    }
    else if(((j % 7) != 0)  && ((j % 10) != 1 )){
        arr[j] = arr[sqrt (j)] + arr[j - 9];   //
    };
 };

if(arr[Y] == 0){
cout << arr [Y] <<  "No";
} else cout << "Yes";
return 0;
} */