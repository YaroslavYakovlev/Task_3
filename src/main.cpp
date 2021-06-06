#include <iostream>
#include <vector>
#include <algorithm>

int main(){
  std::cout << "Task_3" << std::endl;
  std::vector<int> vec;
  int value;
  while(value != -2){
    std::cin >> value;
    vec.push_back(value);
    if(value == -1){
      vec.pop_back();
      for(int i = 0; i < vec.size(); i++){
        for(int j = 0; j < vec.size()-1; j++){
          if(vec[j] > vec[j+1]){
            int temp = vec[j];
            vec[j] = vec[j+1];
            vec[j+1] = temp;
          }
        }
      }
      if(vec.size() > 4){
        for(int i = 0; i < vec.size(); i++){
          std::cout << vec[i] << " ";
        }
        std::cout << std::endl;
        std::cout << "Element - " << vec[4] << std::endl;
      }else {
        std::cout << "Enter element" << std::endl;
      }
    }
  }
  std::cout << "EXIT" << std::endl;
  return 0;
}

// С клавиатуры вводятся числа. Когда пользователь 
// вводит -1 -- необходимо выводить на экран пятое 
// по возрастанию число среди введённых. 
// Когда пользователь вводит -2 -- программа завершает работу.
// Пример:
// ввод: 7 5 3 1 2 4 6 -1
// вывод: 5 (в отсортированном виде массив 
// выглядит так: {1,2,3,4,5,6,7})
// ввод: 1 1 1 -1
// вывод: 2 (в отсортированном виде массив 
// выглядит так: {1,1,1,1,2,3,4,5,6,7})
// ввод -2
// завершение программы