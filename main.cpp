/* main.cpp */
#include <iostream>
#include "students.h"

int main(){
// Создание объекта класса Student
    Students student;
    
    std::string name;
    std::string last_name;
// Ввод имени с клавиатуры
    std::cout << "Send name: ";
    std::cin >> name;
// Ввод фамилии
    std::cout << "Send last name: ";
    std::cin >> last_name;
// Сохранение имени и фамилии в объект класса Students

    student.set_name(name);
    student.set_last_name(last_name);

// Оценки
    int num_of_scores;
    std::cout << "Send size of scores: ";
    std::cin >> num_of_scores;
student.set_scores_length(num_of_scores);
    int scores[num_of_scores];
// Сумма всех оценок
int sum = 0;
// Ввод промежуточных оценок
for(int i= 0; i < num_of_scores; ++i){
    std::cout << "Send " << i+1 << " score: ";
    std::cin >> scores[i];
    // суммирование
    sum += scores[i];
}
// Сохраняем промежуточные оценки в объект класса Student
student.set_scores(scores);
// Считаем средний балл
float average_ball = sum / num_of_scores;
// Сохраняем средний балл в объект класса Students
student.set_average_ball(average_ball);
// Выводим данные по студенту
std::cout << "Average ball for " << student.get_name() << " " << student.get_last_name()
        << " is " << student.get_average_ball() << std::endl << std::endl;
}