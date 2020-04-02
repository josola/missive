/*
 * Executes the program.
 * This software uses the MIT license.
 * Written by Jordan Sola 2019-2020
 */

#include "console_out_util.h"
#include "console_in_util.h"
#include "game_util.h"

int main()
{
    Game game;
    GameUtil gameUtil(game);

    ConsoleOutUtil::PrintWelcome();
    ConsoleOutUtil::PrintStartingPlayerPrompt();
    gameUtil.GetPlayerCount();

    /*
    BEGINNING OF ROUNDS --

        FIRST ROUND ONLY --

            Print welcome message. X
            Prompt for number of active players. X
            Acquire number of active players. X
            Set active player objects.
            Store number of original active players seperately so a new round can start with original count.
            Set winning token count.
            Prompt for player guess.
            Acquire player guess.
        
        FIRST ROUND AND ANY OTHER ROUND --

            Print round count.
            Prompt dealing starting hand.
            Set deck.
            Shuffle deck.
            Set up pile.

            DURING TWO PLAYER GAME --

                Move two cards from deck to face up pile.
                Print up pile.

            Set down pile.
            Move one card from the deck to the down pile.
            Print down pile.

        AFTER FIRST ROUND --

            Winner of first is set to current player.
            Reset winner status.
            Set players who were out last round to active.
            Prompt previous round winner goes first.

    BEGINNING OF PLAYER TURN --

        DECK IS EMPTY --

            PLAY CARD REQUIRES DRAWING FROM DECK --
                Draw card from face down pile.
                Resolve card effect.

        HANDMAID PROTECTION FROM PREVIOUS TURN --

            Remove handmaid protection.

        Print number of cards in deck.
        Print number of rival players. Does not include current player.

        UP PILE IS NOT EMPTY --

            Print up pile.

        Print rival players with Spy bonus.
        Print current player hand.
        Prompt current player to draw a card from deck.
        Get current player's draw input.
        Draw card from deck into current player hand.
        Print current player hand.
        Prompt current player to play card from their hand.
        Get current player's play card input.
        Play card.
        Discard play card into face up pile.

        DECK IS EMPTY --
        
            End round.
    
    ROUND END --

        Active players compare hand value.
        Player with highest hand value is assined as winner.
        Winner adds one token to their cache.
        
        ONE PLAYER HAS SPY BONUS --

            Player receives one bonus token. On top of any winnings.

        TWO PLAYERS HAVE SPY BONUS --

            Players do not receive spy bonus on top of winnings.

        Check winner has winning number of tokens.
        Check player with spy bonus has winning number of tokens.

        WINNER HAS WINNING NUMBER OF TOKENS --

            Game ends.

        PLAYER WITH SPY BONUS HAS WINNING NUMBER OF TOKENS --

            Game ends.

        Remove handmaid protection.
        Remove spy bonus.
        Empty player hands.

    GAME END --

        ONE PLAYER HAS WINNING NUMBER OF TOKENS --

            Print winning player prompt.

        TWO PLAYERS HAVE WINNINE NUMBER OF TOKENS --

            Print multiple winning player prompt.

        Prompt to press any key to exit.
        Get key input to exit.
    */
    return 0;

}