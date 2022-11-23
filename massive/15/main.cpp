/*
15. Информация по N заводам города задается строкой следующего вида: фамилия,
средний возраст, специальность, средний оклад.
a. Ввести информацию по заводам, посчитать количество слесарей и токарей.
Напечатать эти значения.
b. Ввести информацию по заводам. Напечатать номера заводов, где средний
возраст выше 35 лет.
c. Ввести информацию по заводам, посчитать средний оклад по всем заводам.
Посчитать количество заводов, где средний оклад по заводу выше среднего
по всем заводам. Напечатать это значение и вывести информацию по этим
заводам.
*/

#include<iostream>
#include<array>
#include<string>

struct human{
    std::string surname;
    short age;
    std::string special;
    short salary;
};

struct fabric{
    int count_people;
    float middle_age;
    int count_plumbers = 0;
    int count_turners = 0;
    float middle_salary;
    std::array<human, 500> humans;

};

//functions for work with structurs
void statistic_data(fabric &company){
    float sum_salary{0}, sum_age{0};
    for(int i = 0; i < company.count_people; i++){
        sum_age += company.humans[i].age;
        sum_salary += company.humans[i].salary;
        if (company.humans[i].special == "plumber")
            company.count_plumbers++;
        if (company.humans[i].special == "turner")
            company.count_turners++;
    }
    company.middle_age = sum_age / company.count_people;
    company.middle_salary = sum_salary / company.count_people;
}

void writePerson(human &person,int  p){
    std::cout << "#" << p + 1 << " Worker" << std::endl;
    std::cout << "Enter surname:" << std::endl;
    std::cin >> person.surname;
    std::cout << "Enter age:" << std::endl;
    std::cin >> person.age;
    std::cout << "Enter spesial:" << std::endl;
    std::cin >> person.special;
    std::cout << "Enter salary:" << std::endl;
    std::cin >> person.salary;
}

void ViewPerson(human person){
    std::cout << person.surname << " age is " << person.age << " special is " << person.special << std::endl
              << "Get salary " << person.salary << " rubles" << std::endl;
}

void ViewFabric(fabric factory){
    std::cout << "\t\tFabric Info \n\tCount of people on fabric is " << factory.count_people << " Middle age is " << factory.middle_age << "\n\tMiddle salary is " << factory.middle_salary << std::endl;
}

int main()
{
    int fabric_n;
    std::array<fabric,20> fabrics;
    std::cout << "Enter number of fabric: ";
    std::cin >> fabric_n;
    std::cout << std::endl;

    //input info about fabrics and people
    for(int i = 0; i < fabric_n; i++){
        std::cout << "Please enter count of people on " << i + 1 << " fabric" << std::endl;
        std::cin >> fabrics[i].count_people;
        std::cout << "Please enter workers information" << std::endl;
        for(int p = 0; p < fabrics[i].count_people; p++)
            writePerson(fabrics[i].humans[p], p);
        statistic_data(fabrics[i]);
    }

    //questions about great commentary
    std::cout << std::endl;
    std::cout << "A question" << std::endl;
    int count_plumbers = 0;
    int count_turners = 0;
    for(int i = 0; i < fabric_n; i++){
        count_plumbers += fabrics[i].count_plumbers;
        count_turners += fabrics[i].count_turners;
    }
    std::cout << "On all fabrics count of plumbers are " << count_plumbers << " and count of turners are " << count_turners << std::endl;


    std::cout << std::endl;
    std::cout << "B question" << std::endl;
    std::cout << "Old personal on fabrics: ";
    for(int i = 0; i < fabric_n; i++){
        if(fabrics[i].middle_age > 35)
            std::cout << "# " << i + 1 << " ";
    }


    std::cout << std::endl;
    std::cout << "C quetion" << std::endl;
    float middle_salary_factories = 0;
    for(int i = 0; i < fabric_n; i++)
        middle_salary_factories += fabrics[i].middle_salary;
    middle_salary_factories /= fabric_n;

    int count_rich = 0;
    for(int i = 0; i < fabric_n; i++){
        if(fabrics[i].middle_salary > middle_salary_factories){
              std::cout <<"# " << i + 1 << " fabric has a very good salary for personal" << std::endl;
              ViewFabric(fabrics[i]);
              count_rich++;
        }
    }
    std::cout << "Count of good fabrics is " << count_rich << std::endl;

    return 0;
}
