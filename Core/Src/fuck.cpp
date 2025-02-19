#include "main.h"
#include <utility>

const std::pair<GPIO_TypeDef *, uint32_t> leds[] = {{LED1_GPIO_Port, LED1_Pin},
                                                    {LED2_GPIO_Port, LED2_Pin},
                                                    {LED3_GPIO_Port, LED3_Pin},
                                                    {LED4_GPIO_Port, LED4_Pin},
                                                    {LED5_GPIO_Port, LED5_Pin},
                                                    {LED6_GPIO_Port, LED6_Pin},
                                                    {LED7_GPIO_Port, LED7_Pin},
                                                    {LED8_GPIO_Port, LED8_Pin},
                                                    {LED9_GPIO_Port, LED9_Pin},
                                                    {LED10_GPIO_Port, LED10_Pin},
                                                    {LED11_GPIO_Port, LED11_Pin},
                                                    {LED12_GPIO_Port, LED12_Pin},
                                                    {LED13_GPIO_Port, LED13_Pin},
                                                    {LED14_GPIO_Port, LED14_Pin},
                                                    {LED15_GPIO_Port, LED15_Pin},
                                                    {LED16_GPIO_Port, LED16_Pin},
                                                    {LED17_GPIO_Port, LED17_Pin},
                                                    {LED18_GPIO_Port, LED18_Pin}};

void setup()
{
    LL_PWR_EnableWakeUpPin(LL_PWR_WAKEUP_PIN4);
    LL_PWR_EnableInternWU();
    LL_PWR_SetWakeUpPinPolarityLow(LL_PWR_WAKEUP_PIN4);
}

void loop()
{
    for (auto i = 0; i < 2; i++)
        for (auto &led : leds)
        {
            LL_GPIO_TogglePin(led.first, led.second);
            LL_mDelay(50);
        }

    LL_LPM_EnableDeepSleep();
    LL_PWR_SetPowerMode(LL_PWR_MODE_STANDBY);
    LL_PWR_ClearFlag_WU();
    __WFI();
}