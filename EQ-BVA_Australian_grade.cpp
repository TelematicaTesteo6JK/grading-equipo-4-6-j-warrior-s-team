#include <iostream>
using namespace std;

/*
Funcion que calcula la calificacion basado en la escala Australiana
    de 0 a 49.99  = N
    de 50 a 62.99 = P
    de 63 a 72.99 = C
    de 73 a 82.99 = D
    de 83 a 100   = HD
*/
string australian_grade(float grade)
{
	string aGrade(" ");
	if (grade>=0 && grade<=49.99)
		aGrade = "N";
    else
	if (grade>=50 && grade<=62.99)
		aGrade = "P"; 
    else
    if (grade>=63 && grade<=72.99)
		aGrade = "C"; 
    else
    if (grade>=73 && grade<=82.99)
        aGrade = "D"; 
    else
    if (grade>=83 && grade<=100)
        aGrade = "HD"; 
    else
        aGrade = "fail";



	return aGrade;
}

void prueba (string e_result, string a_result)
{
    if( e_result == a_result)
        {
            cout << "|    pass   |" << endl;
        } 
    else
        {
            cout << "|    fail   |" << endl;
        }
}

void casos_de_prueba(){
    cout << "TEST CASES" << endl;
    cout << "EQ" << endl;
    cout << "| Test data |"<< "| E. result |"<< "| A. result |"<< "| pass/fail |"<< endl;
    cout << "|    -2     |"<< "|   fail    |"<< "|   " <<australian_grade(-2)     << "    |"; prueba("fail",australian_grade(-2));
    cout << "|   23.4    |"<< "|     N     |"<< "|     "<< australian_grade(23.4) << "     |"; prueba("N",australian_grade(23.4));
    cout << "|   58.2    |"<< "|     P     |"<< "|     "<< australian_grade(58.2) << "     |"; prueba("P",australian_grade(58.2));
    cout << "|   65.1    |"<< "|     C     |"<< "|     "<< australian_grade(65.1) << "     |"; prueba("C",australian_grade(65.1));
    cout << "|   82.98   |"<< "|     D     |"<< "|     "<< australian_grade(82.98)<< "     |"; prueba("D",australian_grade(82.98));
    cout << "|   85.7    |"<< "|    HD     |"<< "|     "<< australian_grade(85.7) << "    |"; prueba("HD",australian_grade(85.7));
    cout << "|   103     |"<< "|   fail    |"<< "|   "<< australian_grade(103)    << "    |"; prueba("fail",australian_grade(103));
    cout << " " << endl;
    cout << "TEST CASES" << endl;
    cout << "BVA" << endl;
    cout << "| Test data |"<< "| E. result |"<< "| A. result |"<< "| pass/fail |"<< endl;
    cout << "|    -1     |"<< "|   fail    |"<< "|   "<< australian_grade(-1) << "    |"; prueba("fail",australian_grade(-1));
    cout << "|     0     |"<< "|    N      |"<< "|     "<< australian_grade(0)<< "     |"; prueba("N",australian_grade(0));
    cout << "|   49.99   |"<< "|    N      |"<< "|     "<< australian_grade(49.99)<< "     |"; prueba("N",australian_grade(49.99));
    cout << "|     50    |"<< "|    P      |"<< "|     "<< australian_grade(50)<< "     |"; prueba("P",australian_grade(50));
    cout << "|   62.99   |"<< "|    P      |"<< "|     "<< australian_grade(62.99)<< "     |"; prueba("P",australian_grade(62.99));
    cout << "|     63    |"<< "|    C      |"<< "|     "<< australian_grade(63)<< "     |"; prueba("C",australian_grade(63));
    cout << "|   72.99   |"<< "|    C      |"<< "|     "<< australian_grade(72.99)<< "     |"; prueba("C",australian_grade(72.99));
    cout << "|     73    |"<< "|    D      |"<< "|     "<< australian_grade(73)<< "     |"; prueba("D",australian_grade(73));
    cout << "|   82.99   |"<< "|    D      |"<< "|     "<< australian_grade(82.99)<< "     |"; prueba("D",australian_grade(82.99));
    cout << "|     83    |"<< "|    HD     |"<< "|     "<< australian_grade(83)<<"    |"; prueba("HD",australian_grade(83));
    cout << "|    100    |"<< "|    HD     |"<< "|     "<< australian_grade(100)<<"    |"; prueba("HD",australian_grade(100));
    cout << "|    101    |"<< "|   fail    |"<< "|   "<< australian_grade(101)<< "    |"; prueba("fail",australian_grade(101));

}



int main()
{

    casos_de_prueba();

	return 0;
}