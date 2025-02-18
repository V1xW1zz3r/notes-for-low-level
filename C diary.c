//%d- int, bool
//%s- string
//%c- char if the char stores a number or so use %c can turn into ASCII,if do int use %d
//%f- float, %lf- double(long float) in "scanf" double use %lf, float use %f, otherwize dosent matter
//%".num" show how many dep you want
//%(num1)".num2"f, num1 can decide how far the text will be can use also "-num"

//-------------------------------
const
//add const infront of a var, e.g.(int, float, char) the value can't be altered
int main(){
	float num1 = 2;
	num1 = 3;
	printf("%f", num1)

	return 0;
} result would be 3

int main(){
	const float num1 = 2;
	num1 = 3;
	printf("%f", num1)

	return 0;
} result would be an error

//-------------------------------
//arithmetic operattions
//add (+)
//minus (-)
//mutiply (*)
//div (/)
//increment (++) a++; -> 6
//decrement (--) b--; -> 1
//modulus (%) remain of divs
int a = 5;
int b = 2;
int c = a % b;
printf("%d", c); //print 1
//x = x + 1; equal to x+=1; can use on all arithmetic
int d = 10;
x = x + 4;
x+=4;
x(arugment)=(int)

//-------------------------------
//to create a string
//char name[];
//char name[] = "name";
//in the [] can be a number which represents how many bytes that string will use 
//if it exceeds the byte then it will cause buffer over flow
//scanf function is to let user to type something
//scanf("%s", &name);
char cool[] = "Nick";
char name[10];
printf("Hi my name is %s, what's your name\n", cool);
scanf("%s", &name);
printf("My name is %s", name);

//if the the string contain a space like "Jay Vulgan"
//then use "fgets" fucntion
char name[10];
int c; 
while ((c = getchar()) != '\n' && c != EOF); //basically you need this to work with fgets

fgets(name, 10, stdin);
name[strlen(name)-1] = '\0'; //use this doesn't create a new line for user input

//-------------------------------
//math functions
//sqrt = square root
double A = sqrt(9); -> 3
//pow = number^num, the power of the number
double B = pow(3, 4); -> 81
//round = round decimal
int C = (3.14); -> 3
//ceil = round the number up
int D = ceil(3.14); -> 4
//floor = round down the number
int E = floor(3.95); -> 3
//fabs = make negative to positive
doulbe F = fabs(-200); -> 200.0000
//log
double G = log(3); -> 1.098612
//sin
double H = sin(45)
//cos
double I = cos(45) 
//tan
double J = tan(45) 
//-------------------------------
//circumference calculation
int main(){

const double PI = 3.14159;
double radius;
double circumference;
double area;

printf("\ntype number that you want to calcualte:");
scanf("%lf", &radius); //cuz we are using double so need to use "%lf"

circumference = radius * 2 * PI;

printf("\nthe circumference is: %f", circumference);

area = radius * radius * PI;

printf("\nand the area of the circle is: %f", area);
}
//-------------------------------
//if statements
	int c;
    int age;
    char name[25] ="";
    char answer[25] ="";

    printf("\nHey just checking up, what's your age?");
    scanf("%d", &age);
	printf("\nHow do I call ya?");
    while ((c = getchar()) != '\n' && c != EOF); //with fgets if you want to display the blanks
    fgets(name, 25, stdin);
	printf("Hello %s", name);

	if (age >= 20) //if you are comparing value and wants to be the same as the value use "==" so if(age == 18){}
	{
    /* code */
	}
	else if(){//you can do mutiple "else if" funcitons before to else
	//you can check other statements before to else
	}
	else{
	/*code do sthing else*/
	}
	return 0;
//-------------------------------
//switch statements
//basically better than else if
//**noted that you need to add ":" after each cases and breaks**
float GPA;
    printf("\nHow well you do in this semester? Insert range from 1.0-4.0:");
    scanf("%f", &GPA);
    
    int int_GPA = (int)(GPA * 10); 

    switch(int_GPA){ //can store only chars, ints use if-else for "double" like statements
        case 40: //case can store char also but you need to add '' like case 'A'
        case 39:
        case 38:
        case 37:
        case 36:
        case 35:
        case 34:
        printf("\nWow really impressive %.1f!", GPA);
    break; //break is needed or otherwize it will continue to execute the next case
    	case 33:
    	case 32:
    	case 30:
        printf("\nThat's alright keep going");
    break;
    	case 29:
    	case 28:
    	case 27:
    	case 26:
    	case 25:
    	case 24:
    	case 23:
    	case 22:
    	case 21:
    	case 20:
        printf("\nHmm, someone needs to work harder!");
    break;
    	case 19:
    	case 18:
    	case 17:
    	case 16:
    	case 15:
    	case 14:
    	case 13:
    	case 12:
    	case 11:
    	case 10:
        printf("\nWow really impressive, YOU FAILED!");
    break;     
    default: //this one is for whatever not align with the cases and it will do whatever thing down there
        printf("Invailed answer, please insert again");
    }
//yoda notation - coding return
//the ret will return to see if the value is the same as int
//let's say the int in the if is 30 and if the input is 30 then it will compile the code in if statement
//should always put the num after the return function and add "==" or ">=" or "<="
//note that it's reversed, so it's better to use "==" equal to
    int ret = somefunc();
    scanf("%d", &somefunc);

    if (30 == ret){
        printf("I wrote code like Yoda");
    }
//temperature conversion
//idk why include ctype tho
#include <ctype.h>

int main(){
    char unit;
    float temp;

    printf("\nTemp converter, insert (C) or (F)");
    scanf("%c", &unit);

    unit = toupper(unit); //make the message upper

    if (unit == 'C') //if char to char need use ('char')
    {
        printf("\nWhat's the Temperature around there?");
        scanf("\n%f", &temp);
        float ansF = (temp * 9/5) + 32;     //formula basically 
        printf("\nconvert to (F) will be %.3fF", ansF);
    }
    else if (unit == 'F')
    {
        printf("\nInsert (F) temp to convert");
        scanf("\n%f", &temp);
        float ansC = ((temp - 32) * 5) / 9; //formula basically 
        printf("\nconvert to (C) will be %.3fC", ansC);
    }
    else
    {
       printf("\nplease enter again");
    }

    return 0;
}
