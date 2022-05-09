#include <iostream>

using namespace std;

class myQueue{
int Queue [500], front=-1, rear=-1, maxSize=500;
public:
    bool isEmpty(){
    if (front==-1 && rear==-1){
        return true;
    }
    return false;
    }

    bool isFull(){
    if (rear==maxSize-1){
        return true;
    }
    return false;
    }
    void enQueue (int value){
        if (isFull()){
            cout<<"Queue is full"<<endl;
        }
        else if(isEmpty()){
            front=rear=0;
            Queue[rear]=value;
        }
        else{
            rear++;
            Queue[rear]=value;
        }
    }
    void deQueue(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
        }
        else if(front==rear && front!=-1){
            front=rear=-1;
        }
        else{
            front++;
        }
    }
    int count(){
    return (rear - front + 1);
    }
    void showvehicles(){
    cout << "Car paid toll-Registration number: " << endl;
    for(int i=front;i<=rear;i++)
        {
            cout<<Queue[i]<<" ";
        }
    }
//    void resize(int size)
//    {
//        int *tempArray=new int[maxSize];
//        for(int i=0;i<rear;i++)
//        {
//            tempArray[i]=Queue[i];
//        }
//        delete [] Queue;
//    }

};

int main()
{
   myQueue q1;
  int value, size, option;
  cout<<"***********************************************"<<endl;
  cout<<"WELCOME TO PADMA BRIDGE TOLL PLAZA"<<endl;
  cout<<"------------Light duty------------"<<endl;
  cout<<"***********************************************"<<endl;



  do {
    cout << "\n\nChoose a option:" << endl;
    cout << "1. ADD VEHICLE INFORMATION" << endl;
//    cout << "2. Resize"<<endl;
    cout << "2. COUNT VECHICLES & EARNING" << endl;
    cout << "3. SHOW VEHICLES" << endl;
    cout << "4. Exit" << endl << endl;

    cin >> option;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Enter car registration number:" << endl;
      cin >> value;
      q1.enQueue(value);
      cout<<"Toll received!!!"<<endl;
            cout<<"Amount paid : 200.00 BDT"<<endl;
            cout<<"----------------------------------"<<endl;


      break;
//      case 2:
//        cout<<"resize"<<endl;
//        cin>>size;
//        q1.resize(size);
//        break;
      case 2:
      cout << "Total vehicle paid toll : " << q1.count() << endl;
            cout << "Total Earnings : " << q1.count()*200 << endl;
            cout<<"----------------------------------"<<endl;


      break;
    case 3:
      cout << "All vehicle information is given bellow : " << endl;
      q1.showvehicles();
      cout<<""<<endl;
      cout<<"----------------------------------"<<endl;

      break;
    case 4:
      system("Exited");
      break;
    default:
      cout << "Invalid option" << endl;
    }

  }
  while (option != 0);

  return 0;
}



/*
//Medium duty
#include <iostream>

using namespace std;

class myQueue{
int Queue [500], front=-1, rear=-1, maxSize=500;
public:
    bool isEmpty(){
    if (front==-1 && rear==-1){
        return true;
    }
    return false;
    }

    bool isFull(){
    if (rear==maxSize-1){
        return true;
    }
    return false;
    }
    void enQueue (int value){
        if (isFull()){
            cout<<"Queue is full"<<endl;
        }
        else if(isEmpty()){
            front=rear=0;
            Queue[rear]=value;
        }
        else{
            rear++;
            Queue[rear]=value;
        }
    }
    void deQueue(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
        }
        else if(front==rear && front!=-1){
            front=rear=-1;
        }
        else{
            front++;
        }
    }
    int count(){
    return (rear - front + 1);
    }
    void showvehicles(){
    cout << "Car paid toll-Registration number: " << endl;
    for(int i=front;i<=rear;i++)
        {
            cout<<Queue[i]<<" ";
        }
    }
//    void resize(int size)
//    {
//        int *tempArray=new int[maxSize];
//        for(int i=0;i<rear;i++)
//        {
//            tempArray[i]=Queue[i];
//        }
//        delete [] Queue;
//    }

};

int main()
{
   myQueue q1;
  int value, size, option;
  cout<<"***********************************************"<<endl;
  cout<<"WELCOME TO PADMA BRIDGE TOLL PLAZA"<<endl;
  cout<<"------------Medium duty-----------"<<endl;
  cout<<"***********************************************"<<endl;



  do {
    cout << "\n\nChoose a option:" << endl;
    cout << "1. ADD VEHICLE INFORMATION" << endl;
//    cout << "2. Resize"<<endl;
    cout << "2. COUNT VECHICLES & EARNING" << endl;
    cout << "3. SHOW VEHICLES" << endl;
    cout << "4. Exit" << endl << endl;

    cin >> option;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Enter car registration number:" << endl;
      cin >> value;
      q1.enQueue(value);
      cout<<"Toll received!!!"<<endl;
            cout<<"Amount paid : 400.00 BDT"<<endl;
            cout<<"----------------------------------"<<endl;


      break;
//      case 2:
//        cout<<"resize"<<endl;
//        cin>>size;
//        q1.resize(size);
//        break;
      case 2:
      cout << "Total vehicle paid toll : " << q1.count() << endl;
            cout << "Total Earnings : " << q1.count()*400 << endl;
            cout<<"----------------------------------"<<endl;


      break;
    case 3:
      cout << "All vehicle information is given bellow : " << endl;
      q1.showvehicles();
      cout<<""<<endl;
      cout<<"----------------------------------"<<endl;

      break;
    case 4:
      system("Exited");
      break;
    default:
      cout << "Invalid option!!!" << endl;
    }

  }
  while (option != 0);

  return 0;
}*/

/*
//Heavy duty
#include <iostream>

using namespace std;

class myQueue{
int Queue [500], front=-1, rear=-1, maxSize=500;
public:
    bool isEmpty(){
    if (front==-1 && rear==-1){
        return true;
    }
    return false;
    }

    bool isFull(){
    if (rear==maxSize-1){
        return true;
    }
    return false;
    }
    void enQueue (int value){
        if (isFull()){
            cout<<"Queue is full"<<endl;
        }
        else if(isEmpty()){
            front=rear=0;
            Queue[rear]=value;
        }
        else{
            rear++;
            Queue[rear]=value;
        }
    }
    void deQueue(){
        if(isEmpty()){
            cout<<"Queue is empty"<<endl;
        }
        else if(front==rear && front!=-1){
            front=rear=-1;
        }
        else{
            front++;
        }
    }
    int count(){
    return (rear - front + 1);
    }
    void showvehicles(){
    cout << "Car paid toll-Registration number: " << endl;
    for(int i=front;i<=rear;i++)
        {
            cout<<Queue[i]<<" ";
        }
    }
//    void resize(int size)
//    {
//        int *tempArray=new int[maxSize];
//        for(int i=0;i<rear;i++)
//        {
//            tempArray[i]=Queue[i];
//        }
//        delete [] Queue;
//    }

};

int main()
{
   myQueue q1;
  int value, size, option;
  cout<<"***********************************************"<<endl;
  cout<<"WELCOME TO PADMA BRIDGE TOLL PLAZA"<<endl;
  cout<<"------------Heavy duty------------"<<endl;
  cout<<"***********************************************"<<endl;



  do {
    cout << "\n\nChoose a option:" << endl;
    cout << "1. ADD VEHICLE INFORMATION" << endl;
//    cout << "2. Resize"<<endl;
    cout << "2. COUNT VECHICLES & EARNING" << endl;
    cout << "3. SHOW VEHICLES" << endl;
    cout << "4. Exit" << endl << endl;

    cin >> option;

    switch (option) {
    case 0:
      break;
    case 1:
      cout << "Enter car registration number:" << endl;
      cin >> value;
      q1.enQueue(value);
      cout<<"Toll received!!!"<<endl;
            cout<<"Amount paid : 700.00 BDT"<<endl;
            cout<<"----------------------------------"<<endl;


      break;
//      case 2:
//        cout<<"resize"<<endl;
//        cin>>size;
//        q1.resize(size);
//        break;
      case 2:
      cout << "Total vehicle paid toll : " << q1.count() << endl;
            cout << "Total Earnings : " << q1.count()*700 << endl;
            cout<<"----------------------------------"<<endl;


      break;
    case 3:
      cout << "All vehicle information is given bellow : " << endl;
      q1.showvehicles();
      cout<<""<<endl;
      cout<<"----------------------------------"<<endl;

      break;
    case 4:
      system("Exited");
      break;
    default:
      cout << "Invalid option!!!" << endl;
    }

  }
  while (option != 0);

  return 0;
}
*/


