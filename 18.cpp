/*18) Дед Мороз и Снегурочка приходят на детские утренники с мешком конфет. Дед
Мороз делит конфеты поровну между всеми присутствующими детьми (детей на
утреннике никогда не бывает больше 100), а оставшиеся конфеты отдает
Снегурочке. Снегурочка каждый раз записывает в блокнот количество полученных
конфет. Если конфеты разделились между всеми детьми без остатка, Снегурочка
ничего не получает и ничего не записывает. Когда утренники закончились, Деду
Морозу стало интересно, какое число чаще всего записывала Снегурочка. Дед
Мороз и Снегурочка — волшебные, поэтому число утренников N, на которых они
побывали, может быть очень большим. Напишите программу, которая будет
решать эту задачу.
Описание входных данных
В первой строке вводится одно целое положительное число — количество
утренников N. Каждая из следующих N строк содержит два целых числа: сначала
D — количество пришедших на очередной утренник детей, а затем K – количество
конфет в мешке Деда Мороза на этом утреннике. Гарантируется выполнение
следующих соотношений:
1 ≤ N ≤ 10000
1 ≤ D ≤ 100 (для каждого D)
D ≤ K ≤ 1000 (для каждой пары D, K)
Описание выходных данных
Программа должна вывести одно число — то, которое Снегурочка записывала
чаще всего. Если несколько чисел записывались одинаково часто, надо вывести
большее из них. Если Снегурочка ни разу ничего не записывала, надо вывести
ноль.
*/
/*
#include <iostream>
#include <stdlib.h>

using namespace std;

int comp1 (const void * a, const void * b)
{
  return ( *(int*)a - *(int*)b );
}

int main(){

int N; cin >> N;
int* Deti = new int [N];
int* Konf = new int [N];

int* Sneg = new int [N];

for(int i = 0; i < N; i++){
    cin >> Deti[i] >> Konf[i];
    Sneg[i] = (Konf[i] % Deti[i]);
};

qsort(Sneg, N, sizeof(int), comp1);
int c = 1;
int count_max = 0;
int num_max = Sneg[0];
for(int o = 1; o < N; o++){
    if(Sneg[o] == Sneg[o - 1]){
        c++;}
    else {
          int temp = 1;
          if(c > count_max){
             count_max = c;
             num_max = Sneg[o - 1];}
          c = temp;
    };
}
cout << num_max;
return 0;
}*/