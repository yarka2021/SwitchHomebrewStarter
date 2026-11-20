#include <switch.h>
#include <stdio.h>

int main(int argc, char* argv[])
{
    consoleInit(NULL);

    padConfigureInput(1, HidNpadStyleSet_NpadStandard);
    PadState pad;
    padInitializeDefault(&pad);

    printf("Switch Homebrew Starter\\n");
    printf("------------------------\\n");
    printf("Neutral starter application.\\n");
    printf("Press PLUS to exit.\\n");

    while (appletMainLoop())
    {
        padUpdate(&pad);
        const u64 buttons = padGetButtonsDown(&pad);

        if (buttons & HidNpadButton_Plus)
            break;

        consoleUpdate(NULL);
    }

    consoleExit(NULL);
    return 0;
}
