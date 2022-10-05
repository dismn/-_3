//Copyright (c), Semeniuta Diana 202 TN, 2022

/*Реалізувати конструктори на основі завдання:
    Комплексне число представлено парою дійсних чисел (а, b), де а — дійсна частина, b — уявна частина. Реалізувати клас Complex для роботи з
комплексними числами. Обов'язково повинні бути присутнім операції:
додавання add(), (a, b) + (с, d) = (а + b, c + d);
віднімання sub(), (a, b) - (c, d) = (а - b, c - d);
множення mul(), (а, b) * (c, d) = (ас - bd, dd + bc);
ділення div(), (а, b) / (c, d) = (ас + bd, bс - dd) / (c2 + d2);
сполучене число conj(), conj(a, b) = (a, -b)
*/

#include "Complex.h"
#include <iostream>
using namespace std;

int main()
{
    Complex M1(5 ,6);
    M1.Display();
    Complex M2(4, 3);
    M2.Display();
 
   
    cout << endl;

    M1.Add(M2);
    M1.Display();
    M1.Sub(M2);
    M1.Display();
    M1.Mul(M2);
    M1.Display();
    M1.Div(M2);
    M1.Display();





}