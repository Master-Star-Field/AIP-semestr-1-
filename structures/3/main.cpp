/*
3. Имеется информация о роботах: габариты, вес, максимальная скорость. Вывести
данные о самом маленьком роботе
*/
#include <iostream>
#include<array>

int const N = 5;

struct Robot
{
    float width;
    float length;
    float height;
    float dimensions;
    float weight;
    float speed;

};

void RobotInput(Robot &bot)
{
    std::cout << "Please enter robot dimensions(width, length, height):" << std::endl;
    std::cin >> bot.width >> bot.length >> bot.height;

    std::cout << "Please enter robot weight: ";
    std::cin >> bot.weight;
    std::cout << std::endl;

    std::cout << "Please enter robot speed: ";
    std::cin >> bot.speed;
    std::cout << std::endl;
}

void RobotData(Robot &bot)
{
    bot.dimensions = bot.width * bot.length * bot.height;
}

void RobotInfo(Robot bot){
    std::cout << "---Robot INFO----" << std::endl;
    std::cout << "Dimensions: " << bot.dimensions << std::endl;
    std::cout << "Weight: " << bot.weight << "\t Speed: " << bot.speed << std::endl;
}

Robot MinDimensions(std::array<Robot, N> &skynet)
{
    Robot little_Robot = skynet[0];

    for(int i = 1; i < N; i++)
        if(skynet[i].dimensions < little_Robot.dimensions)
            little_Robot.dimensions = skynet[i].dimensions;

    return little_Robot;
}
int main()
{
   std::array<Robot, N> iron_army;

   for(int i = 0; i < N; i++){
       RobotInput(iron_army[i]);
       RobotData(iron_army[i]);
   }

   RobotInfo(MinDimensions(iron_army));

    return 0;
}
