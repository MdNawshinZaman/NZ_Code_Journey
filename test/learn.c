#include<stdio.h>
#include<cs50.h>

int string_length(string n){
    int i = 0;
    while(n[i] != '\0'){
        i++;
    }
    return i;
}


int main(void){
    string name = get_string("Name: ");
    int length = string_length(name);
    printf("%i\n",length);
}