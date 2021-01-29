

#include <stdio.h>
#include <stdlib.h>
#define DETECT_BRIGHTNESS 0
#define LIGHT_ON 1
#define LIGHT_OFF 2


Light_Status = DETECT_BRIGHTNESS;

int testEventSequence[] = {1,5,6,0,27};

int testSequenceLength = sizeof(testEventSequence)/sizeof(testEventSequence[0]);

int exptectedOutputTestEventSequence[] = {LIGHT_ON,LIGHT_OFF};

int testOutputTestEventSequence[]={0,0,0,0,0};
int countErrors=0;

void validationTestRun();
void printTestResult();
int control(int Even);
int getState();

int main(void) {
validationTestRun();
printTestResult();
return EXIT_SUCCESS;
}

void validationTestRun(){

for(int testIndex =0; testIndex < 1; testIndex++){
control(testEventSequence[testIndex]);
if(getState() == exptectedOutputTestEventSequence[testIndex]){
testOutputTestEventSequence[testIndex]=1;
}else{
testOutputTestEventSequence[testIndex]=0;
}

}
}

void printTestResult(){
if(countErrors){
printf("%d error(s) identified. \n",countErrors);
for(int i=0; i<testSequenceLength; i++){
if(!testOutputTestEventSequence[i]){
printf("Error at event count %d. \n",i);
printf("Expected state for event %d is %d  \n",testEventSequence[i],exptectedOutputTestEventSequence[i]);
}
}
}else{
printf("No errors identified! \n");
	}
}
int control (int Even)
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
            printf("Your input is not correct \n");
            detectBrightness();
            return Light_Status = DETECT_BRIGHTNESS;
        }
}

int lightOn()
{
    printf("LIGHT STATUS: LIGHT ON\n");
    return Light_Status = LIGHT_ON;
}

int lightOff()
{
    printf("LIGHT STATUS: LIGHT OFF\n");
    return Light_Status = LIGHT_OFF;
}
int getState(){

return Light_Status;
}





/*
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

    printf("Set the your desired Brightness: \n");

    scanf("%d", &Brightness);

    if (Brightness >=400)
    {
        lightOff();
        return Light_Status = LIGHT_OFF;
    }
    else
    {
        lightOn();
        return Light_Status = LIGHT_ON;
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
int getState(){

return Light_Status;
}
*/
