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
	printf("%f", num1);

	return 0;
} result would be 3

int main(){
	const float num1 = 2;
	num1 = 3;
	printf("%f", num1);

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
//small calculator program
//just some string and switch case
int main(){
    char operator;
    double fnum;
    double snum;
    double result;

    printf("\nInsert a operator for only (+, -, /, *, ^)");
    scanf("%c", &operator);
    printf("\nInsert first number:");
    scanf("%lf", &fnum);
    printf("\nInsert second number:");
    scanf("%lf", &snum);
    

    switch (operator)
    {
    case '+':
        result = fnum + snum;
        printf("\nThe result will be:%.2lf", result);
        break; //for plus

    case '-':
        result = fnum - snum;
        printf("\nThe result will be:%.2lf", result);
        break; //for subtract

    case '/':
        result = fnum / snum;
        printf("\nThe result will be:%.2lf", result);
        break; //for divide

    case '*':
        result = fnum * snum;
        printf("\nThe result will be:%.2lf", result);
        break; //for mutiply

    case '^':
        result = pow(fnum, snum);
        printf("\nThe result will be:%.2lf", result);
        break; //the power of

    default:
        printf("\nError, please insert again.");
        break;
    } 

    return 0;
}
//(AND(&&), OR(||), NOT(!)) logical operators
int main(){
    float temp; //the temperature
    _Bool notsunny = 1; //means not sunny for 1 is true for not sunny and 0 for it's sunny
    printf("\nhow's the temperature out there?");
    scanf("%f", &temp);

    if ((temp >= 15 || temp <= 40) && !notsunny) //with bool you don't need to specifize the verable (notsunny == 1)
    { //now we have if temp is greater than 15 OR less than 40 AND if it is NOT NOT sunny than return false
      //if notsunny was 1(true = there's no sun) then return to the else one which is false for !(NOT) logic statement
        printf("\nThe weather is great.");
    }
    else
    {
        printf("\nthe weather is not great.");
    }
//function
//where the code is executed
//the default will be:
int main()
{
    return 0;
}
//you can reuse the function by using:
void reuse() {
    printf("I'm just a 2019 guy\n");
    printf("2019!\n");
    printf("2019!\n");
    printf("2019!\n");
}

int main() {
    reuse();
    reuse();
    reuse();
    return 0;
}
//for getting fancy you can add value in main reuse()
//in the () you can type numbers which add a value
void reuse(int times) {                 // Added an integer parameter for (reuse) named 'times'
    for (int i = 0; i < times; i++) {   // Loop 'times' by calling the main reuse int                                              
        printf("I'm just a 2019 guy\n");
        printf("2019!\n");
        printf("2019!\n");
        printf("2019!\n");
    }
}

int main() {
    reuse(1);     // Call reuse and pass the value 1
    reuse(2);     // Call reuse and pass the value 2
    reuse(3);     // Call reuse and pass the value 3
    return 0;     // Called the total of 6 times but you can just use one number to decide in one parameter
}
    return 0;
}
//arguments
//functions can't cross sessions to make it
//but using arguments can pass the varables to the void one
void reuse(char name[], int year) //need matching parameters for the main one #REQUIRED TO WORK
{
        printf("I'm just a %d %s\n", year, name);
        printf("%d!\n", year);
        printf("%d!\n", year);
        printf("%d!\n", year);

}

int main() {
    char name[] = "guy";
    int year = 2019;
    reuse(name, year); //specify the variables to work

    return 0;     
}
//return statement
//returns a value back to a calling function
int square(int x) //the default 'void' should change to the functions like int, double, char, etc. 
{
    //int result = x * x;
    //return result;        
    return x * x;           //this will also work, just to keep it simple
}

int main() 
{
    int x =square(4);
    printf("the result will be:%d", x); //the result will be 16 after the return
    return 0;     //0 means if the program runs successfully
}
//the further examples
double multi(double x, double y) //if store 2 variables declare clearly 
{       
    return x * y;      
}

int main() 
{   
    double x;   // Declare x without initializing it initially
    double y;
    printf("Enter first number\n");
    scanf("%lf", &x);
    printf("Enter second number\n");
    scanf("%lf", &y);

    double result = multi(x, y); //should assign a result data type
    printf("the result will be:%.2lf\n", result); 
    return 0;     //0 means if the program runs successfully
}
//tenary operator
//the simplified version of if/else statement
//structure: (condition) ? value if true :(or) value if false
int findMax(int x, int y) 
{       
    return (x > y) ? x : y; //simplified if/else statement
}

int main() 
{      
    int max = findMax(9, 4);
    printf("Find the maximum:%d\n", max);

    return 0;
}
