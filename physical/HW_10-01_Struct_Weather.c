#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Weather {
    char outlook[9];
    int temperature;
    int humidity;
    char wind;
} Weather;

Weather* createWeather(char out[9], int temp, int humid, char d_wind){
    Weather* newWeather = (Weather*) malloc(sizeof(Weather));
    strncpy(newWeather->outlook, out, sizeof(newWeather->outlook) - 1);
    newWeather->outlook[sizeof(newWeather->outlook) - 1] = '\0';
    newWeather->temperature = temp;
    newWeather->humidity = humid;
    newWeather->wind = d_wind;
}

void playing_decision(Weather* Weather){
    if (strcmp(Weather->outlook, "overcast") == 0)
        printf("yes\n");
    else if (strcmp(Weather->outlook, "rain") == 0){
        if (Weather->wind == 'F')
            printf("yes\n");
        else
            printf("no\n");
    }
    else{
        if (Weather->humidity > 77.5)
            printf("no\n");
        else
            printf("yes\n");
    }
}

int main(){
    int i;
    char outt[9];
    int temp;
    int humid;
    char wind;
    scanf("%d", &i);
    while (i--)
    {
        scanf("%s %d %d %c", outt, &temp, &humid, &wind);
        Weather* myWeather = createWeather(outt, temp, humid, wind);
        playing_decision(myWeather);
        free(myWeather);
    }
    
}