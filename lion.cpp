#include<iostream>
class employee{
 int a,b;
 public:
 char c,d;

 void function(void);
 void display();

};
void employee::function(void){
    std::cout<<"Enter the number between a-i:";
    std::cin>>c;
    switch(c){
        case'a':
        std::cout<<"congratulation you won the car ";
        break;
        case'b':
        std::cout<<"congratulation you won a guiltar";
        break;
        case'c':
        std::cout<<"congratulation you won a horse";
        break;
        case'd':
        std::cout<<"you are not won anything";
        break;
        case'e':
        std::cout<<"you are not elligible for anything";
        break;
        case'f':
        std::cout<<"you are not winninig anyhting";
        break;
        case'g':
        std::cout<<"you are base ";
        break;
        case'h':
        std::cout<<"never be disappointed ";
        break;
        case'i':
        std::cout<<"everything in the future can be a way to achieve their goal";
        break;
        
    }

}

void employee::display(void){
std::cout<<"after winnning enter you age: ";
std::cin>>d;
if(d= 18){
std::cout<<"Detaileed can be submitted!";
}
else if (d>18){
std::cout<<"the all function can be maniipulated ate the same time and gorilla battle through teh heaven :";

}
else if (d<18){
std::cout<<"the method is correct:";
}

}

int main(){

employee ankush;
ankush.function();
ankush.display();

    return 0;
}