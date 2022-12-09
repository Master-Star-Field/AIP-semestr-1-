/*
8. Имеется информация о датчиках: диапазон измеряемых значений (min, max),
погрешность, максимальная скорость. Вывести данные о датчике с наибольшим
диапазоном значений.
*/
#include <iostream>
#include<array>

int const N = 2;

struct Sensor
{
    float min;
    float max;
    float range;
    float error;
    float speed;

};

void SensorInput(Sensor &sensor)
{
    std::cout << "Please enter Sensor range(min, max):" << std::endl;
    std::cin >> sensor.min >> sensor.max;

    std::cout << "Please enter Sensor error: ";
    std::cin >> sensor.error;
    std::cout << std::endl;

    std::cout << "Please enter Sensor speed: ";
    std::cin >> sensor.speed;
    std::cout << std::endl;
}

void SensorData(Sensor &sensor)
{
    sensor.range = sensor.max - sensor.min;
}

void SensorInfo(Sensor sensor){
    std::cout << "---Sensor INFO----" << std::endl;
    std::cout << "Range: " << sensor.range << std::endl;
    std::cout << "Error: " << sensor.error << "\t Speed: " << sensor.speed << std::endl;
}

Sensor MaxRange(std::array<Sensor, N> &paranoia)
{
    Sensor best_Sensor = paranoia[0];

    for(int i = 1; i < N; i++)
        if(paranoia[i].range > best_Sensor.range)
            best_Sensor.range = paranoia[i].range;

    return best_Sensor;
}
int main()
{
   std::array<Sensor, N> sensors;

   for(int i = 0; i < N; i++){
       SensorInput(sensors[i]);
       SensorData(sensors[i]);
   }

   SensorInfo(MaxRange(sensors));

    return 0;
}
