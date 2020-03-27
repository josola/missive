/*
 * Executes the program.
 * This software uses the MIT license.
 * Written by Jordan Sola 2020
 */

#include "console.h"
#include "game_manager.h"

int main()
{
    Console console;
    GameState state;
    GameController gameController(state, console);
    if (state.GetRoundCount() == 1)
    {
        console.PrintWelcomeMessage();
        gameController.ReceivePlayerCount(console.ReceiveNumInput());
        state.SetStartingPlayerCount(state.GetPlayerCount());
        state.SetPlayerContainer(state.GetPlayerCount());
        state.SetWinningTokenCount(gameController.GenerateWinningTokenCount(state.GetPlayerCount()));
        console.PrintBeginningPlayerPrompt(state.GetPlayerCount());
    }
    else
    {
        /* code */
    }
    
    return 0;
}