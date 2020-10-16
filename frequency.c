#include <stdio.h>
#include <string.h>

int main()
{
    char upper[26] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
    char lower[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    int x[100] = {0},p=0;
    char string[20];

    printf("Enter the string: ");
    scanf("%[^\n]s", string);

    //finding the size of string
    p=strlen(string);

    //Finding the frequency
        for(int i=0;i<26;i++){
            for(int t=0; t<p; t++){
                if(string[t]==upper[i] || string[t]==lower[i]){
                    x[i]++;
                }
            }
        }

        //printing the values
        for(int q=0;q<26;q++){
            if (x[q]>0){
                    printf("Letter %c = %d\n", upper[q], x[q]);
            }
        }
    return 0;
}

