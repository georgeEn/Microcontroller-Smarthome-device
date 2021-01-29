#include <stdio.h>

#define DETECT_BRIGHTNESS 0
#define LIGHT_ON 1
#define LIGHT_OFF 2

int LIGHT_Status;

Light_Status = DETECT_BRIGHTNESS;

int main()
{
    switch (Light_Status)
    {
    case DETECT_BRIGHTNESS:
        detectBrightness();
        break;
    case LIGHT_OFF:
        lightOff();
        break;
    case LIGHT_ON:
        lightOn();
        break;
    default:
        break;
    }
}

int detectBrightness()
{
    int Brightness;

    printf("CHOOSE A STATE: \n 0 for OFF \n 1 for ON \n");

    scanf("%d", &Brightness);
    int input = 1;


        if (Brightness == 0)
        {
            lightOff();
            return Light_Status = LIGHT_OFF;
        }
        else if(Brightness == 1)

        {
            lightOn();
            return Light_Status = LIGHT_ON;
        }
        else
        {
            printf("Your input is not correct\n");
            detectBrightness();
            return Light_Status = DETECT_BRIGHTNESS;
        }
}

int lightOn()
{
    printf("LIGHT STATUS: LIGHT ON");
    return Light_Status = LIGHT_ON;
}

int lightOff()
{
    printf("LIGHT STATUS: LIGHT OFF");
    return Light_Status = LIGHT_OFF;
}
