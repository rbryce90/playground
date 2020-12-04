#import <stdio.h>
#import <string.h>


int dothis () { 

    printf("\nhello");
    return 0;
}

int main()
{
    printf("Hello there Victoria. \nHow is it going?");
    int num = 1;

    int numbers[10];

    numbers[0] = 112; 
    numbers[1] = 30;


    printf("\nThis is the number %d",  num );

    printf("\nDon't know ");
    
    printf("\n%d", numbers[1]);
    printf("\n%d", numbers[3]);

    char * name = "Bryce";

    char first[20] = "Hello"; 
    char second[20] = "World";

    strncat(first, second, 5);
    
    printf("/n%s", first);

    if (numbers[1] > 50 ){ 
        printf("\nWow that's old!");
    } else { 
        printf("\nNah man....");
    }

    if (numbers[1] < 50 ){
        printf("\nThat's not so bad... anhhh... ");
    }

    printf("\nHello %s", name);

    printf("\n%ld", strlen(name));
    printf("\n%s is %d years old, and his name has %ld letters in it!", name, numbers[1], strlen(name) );

    int i;

    for(i = 0; i < 10; i++){
        printf("\n %d", i);

    };
    dothis();

    return 0;
}