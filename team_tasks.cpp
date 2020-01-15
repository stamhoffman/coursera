//#include <iostream>
//#include <map>
//#include <vector>

// using namespace std;

// bool operator<(const TaskStatus lhs, const TaskStatus rhs) {
//  return static_cast<int>(lhs) < static_cast<int>(rhs);
//}

// class TeamTasks {
// public:
//  // Получить статистику по статусам задач конкретного разработчика
//  const TasksInfo& GetPersonTasksInfo(const string& person) const {
//    return tasks.at(person);
//  }

//  // Добавить новую задачу (в статусе NEW) для конкретного разработчитка
//  void AddNewTask(const string& person) { tasks[person][TaskStatus::NEW]++; }
//  // Добавить n новых задач (в статусе NEW) для конкретного разработчитка
//  void AddNewTasks(const string& person, int number_task) {
//    tasks[person][TaskStatus::NEW] += number_task;
//  }

//  // Обновить статусы по данному количеству задач конкретного разработчика,
//  // подробности см. ниже
//  tuple<TasksInfo, TasksInfo> PerformPersonTasks(const string& person,
//                                                 int task_count) {
//    TasksInfo new_task;
//    TasksInfo old_task{tasks[person]};
//    TasksInfo abs_task{tasks[person]};
//    old_task.erase(TaskStatus::DONE);

//    std::vector<TaskStatus> t{TaskStatus::NEW, TaskStatus::IN_PROGRESS,
//                              TaskStatus::TESTING, TaskStatus::DONE};

//    for (auto unit = t.begin(); *unit != TaskStatus::DONE; unit++) {
//      int old_max = old_task[*unit];
//      if (old_max > 0 && task_count > 0) {
//        auto i = 0;
//        for (i = 0; (task_count > 0) && i < old_max; i++, task_count--) {
//          tasks[person][*(unit + 1)]++;
//          tasks[person][*unit]--;
//        }
//        old_task[*unit] = abs_task[*unit] - i;
//        new_task[*(unit + 1)] = i;
//      }
//    }

//    for (auto& unit : old_task) {
//      if (unit.second == 0) {
//        old_task.erase(unit.first);
//      }
//    }

//    for (auto& unit : new_task) {
//      if (unit.second == 0) {
//        old_task.erase(unit.first);
//      }
//    }

//    for (auto& unit : tasks.at(person)) {
//      if (unit.second == 0) {
//        tasks.at(person).erase(unit.first);
//      }
//    }
//    return {new_task, old_task};
//  }

// private:
//  std::map<const std::string, TasksInfo> tasks;
//};
