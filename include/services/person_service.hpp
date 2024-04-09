#pragma once

#include "../models/person.hpp"
#include <vector>

class IPersonService {
public:
  virtual void addPerson(const Person &person) = 0;
  virtual std::vector<Person> getAllPersons() = 0;
  // virtual Person getPerson(unsigned int id) = 0;
};

class PersonService : public IPersonService {
private:
  std::vector<Person> persons;

public:
  void addPerson(const Person &person) override;
  std::vector<Person> getAllPersons() override;
};