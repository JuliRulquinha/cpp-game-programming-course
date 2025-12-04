#include <iostream>
#include <vector>

class Student
{   
    int id = 0;
    std::string m_first = "First name";
    std::string m_last  = "Last name";
    int         m_id    = 0;
    float       m_avg   = 0;

public:

    Student(){}

    Student(std::string first, std::string last, int id, float avg)
    : m_first (first)
    , m_last  (last)
    , m_id    (id)
    , m_avg   (avg)
    {
    }

    int getAvg() const
    {
        return m_avg;
    }

    int getID() const
    {
        return m_id;
    }

    std::string getFirst() const
    {
        return m_first;
    }

    std::string getLast() const
    {
        return m_last;
    }

    void print() const
    {
        std::cout << m_first << " " << m_last << " " << m_id << " " << m_avg << "\n";
    }
};

void doSomeMachineLearning()

int main(int argc, char* argv[])
{
    Student s1;
    Student s2("Juli", "Félix", 1, 98.9);
    Student s3("Jane", "Doe", 2, 100.0);

    s3.print();

    return 0;
}
