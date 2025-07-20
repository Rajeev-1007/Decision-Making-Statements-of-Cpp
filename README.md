# Decision-Making-Statements-of-Cpp
# Name: Rajeev Ramesh Reddy E
# PRN: 24070123081

Aim: To study and implement C++ decision making statements.

Software Used: VS Code.

Theory: 


C++ decision-making statements control program flow based on conditions. The fundamental construct is the **`if` statement**, which executes code when a condition is true. **`if-else`** handles alternate cases, while **`if-else if` ladder** chains multiple conditions. The **`switch` statement** selects from multiple options based on the value of an expression—commonly used with `int` or `char` types. Conditional execution helps automate choices and logic flow, enhancing program responsiveness.

- `if (condition) { /* code */ }`
- `if (condition) { /* code */ } else { /* code */ }`
- `switch (expression) { case value: /* code */ break; }`

C++ also supports the **ternary operator** `condition ? expr1 : expr2` for concise decisions. These statements are essential for controlling behavior, reacting to input, and implementing algorithms that adapt dynamically.


CODE: C++ Program to check whether number is Even or Odd using decision making statements.


    #include<iostream>
    using namespace std;
    int main()
    {
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    if(num%2==0)
    {
        cout<<"The number is Even.";
    }
    else
    {
        cout<<"The number is Odd.";
    }
    return 0;
    }


  CODE: C++ program to check whether a character is vowel or consonant.

  
    #include<iostream>
    using namespace std;
    int main()
    {
    char alphabet;
    cout<<"Enter an alphabet: ";
    cin>>alphabet;
    if (alphabet == 'a' || alphabet == 'e' || alphabet == 'i' || alphabet == 'o' || alphabet == 'u' || alphabet == 'A' || alphabet == 'E' || alphabet == 'I' || alphabet ==       'O' || alphabet == 'U') 
    {
        cout<<"This alphabet is a vowel.";
    }
    else
    {
        cout<<"This alphabet is a consonant.";
    }
    return 0;
    }


CODE: C++ program to find largest number among three numbers using decision making statements.


    #include<iostream>
    using namespace std;
    int main()
    {
    int a,b,c;
    cout<<"Enter number a: "<<endl;
    cin>>a;
    cout<<"Enter number b: "<<endl;
    cin>>b;
    cout<<"Enter number c: "<<endl;
    cin>>c;
    if(a>b && a>c)
    {
        cout<<"Number a is the largest among the three.";
    }
    else if(b>a && b>c)
    {
        cout<<"Number b is the largest among the three.";
    }
    else
    {
        cout<<"Number c is the largest among the three.";
    }
    return 0;
    }


Conclusion: Decision-making statements in C++ provide essential control over program flow, enabling dynamic logic, adaptive behavior, and efficient problem-solving through conditional execution and branching structures.
























