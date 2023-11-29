#include <iostream>
using namespace std;

//..........................................................................STRUCT SEIT
struct SEIT
{
    int rollno;
    string name;
    float sgpa;
};

//..........................................................................STRUCT ARRAY AND LENGTH


SEIT students[19];
int i=0;
int length=sizeof(students)/sizeof(students[0]);

//..........................................................................ADD STUDENT METHOD

void addStudent(string name,int rollno,float sgpa)
{
    if (i<length)
    {
     students[i].name=name;
     students[i].rollno=rollno;
     students[i].sgpa=sgpa;
     i++;
    }
}

//..........................................................................SHOW STUDENT METHOD

void showData(SEIT array[],int length)
{
    int i=0;
    while(i<length)
    {
        cout<<array[i].name<<" "<<array[i].rollno<<" "<<array[i].sgpa<<endl;

        i++;
    }
    cout<<""<<endl;

}

//.......................................................................... BUBBLE SORT METHOD


void bubbleSort(SEIT array[],int length)
{
    for (i=0;i<length;i++)
    {
        for(int j=0;j<length-i;j++)
        {
           if(array[j].rollno>array[length-i-1].rollno)
           {
               std::swap(array[j],array[length-i-1]);
           }

        }
    }
}

//..........................................................................INSERTION SORT METHOD


void insertionSort(SEIT array[],int length)
{
    for (int i=0;i<length;i++)
    {
        int j=i;
        while (j>0&&array[j].name<array[j-1].name)
        {
            swap(array[j],array[j-1]);
            j--;
        }
    }
}

//..........................................................................PARTITION SORT AND QUICK SORT METHOD
int partition(SEIT array[], int l, int h)
{
    float pivot = array[h].sgpa;
    int i = (l - 1);

    for (int j = l; j <= h - 1; j++)
    {
        if (array[j].sgpa < pivot)
        {
            i++;
            swap(array[i], array[j]);
        }
    }
    swap(array[i + 1], array[h]);
    return (i + 1);
}

void quickSort(SEIT array[], int l, int h)
{
    if (l<h)
    {
        int pi = partition(array, l, h);

        quickSort(array, l, pi - 1);
        quickSort(array, pi + 1, h);
    }
}



//..........................................................................MAIN METHOD
int main()
{
    
    addStudent("Ramanujan",33,9.8);
    addStudent("Akshay",33,3.9);
    addStudent("Ashpak",55,10);
    addStudent("Mayur", 45, 8.9);
    addStudent("John", 12, 9.5);
    addStudent("Jane", 23, 9.0);
    addStudent("Bob", 34, 8.7);
    addStudent("Alice", 56, 8.2);
    addStudent("David", 78, 9.3);
    addStudent("Emily", 89, 8.8);
    addStudent("Michael", 90, 9.1);
    addStudent("Olivia", 67, 8.4);
    addStudent("Ethan", 32, 9.7);
    addStudent("Sophia", 21, 8.5);
    addStudent("Liam", 43, 9.2);
    addStudent("Ava", 54, 8.6);
    addStudent("Noah", 65, 9.4);
    addStudent("Mia", 76, 8.1);
    bubbleSort(students,length);
    showData(students,length);
    insertionSort(students,length);
    showData(students,length);
    quickSort(students, 0, length - 1);
    showData(students, length);


}
