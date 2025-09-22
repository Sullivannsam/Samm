#include<stdio.h>

int main() {
    char name[20], gender[20];
    int age;
    float score, total, math, physics, chemistry;

    printf("Enter Your Name: ");
    scanf("%s", name);
    
    printf("Enter Your Gender: ");
    scanf("%s", gender);

    printf("Enter Your Age: ");
    scanf("%d", &age);

    printf("Enter Math Score: ");
    scanf("%f", &math);
    
    printf("Enter Physics Score: ");
    scanf("%f", &physics);
    
    printf("Enter Chemistry Score: ");
    scanf("%f", &chemistry);

    total = math + physics + chemistry;
    score = total / 3;

    printf("\n\n-------------------------------");

    printf("\n\nYour total score is: %2.f", total);
    printf("\nYour Name is: %s", name);
    printf("\nYour Gender is: %s", gender);
    printf("\nYour Age is: %d year old", age);
    printf("\nYour Score is: %2.f", score);

    if(score >= 90 && score <= 100){
        printf("\nYour AVG is: A");
    }
    else if(score >= 80 && score < 90){
        printf("\nYour AVG is: B");
    }
    else if(score >= 70 && score < 80){
        printf("\nYour AVG is: C");
    }
    else if(score >= 60 && score < 70){
        printf("\nYour AVG is: D");
    }
    else if(score >= 50 && score < 60){
        printf("\nYour AVG is: E");
    }
    else{
        printf("\nYour AVG is: F");
    }
    
    printf("Hellow");

    return 0;
}
