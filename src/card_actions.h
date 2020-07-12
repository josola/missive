//===-- card_actions.h - Card action definitions -------*- C++ -*-===//
//
// This software uses the MIT license.
// See https://mit-license.org/ for license information.
//
//===----------------------------------------------------------------------===//
///
/// This file determines the capabilities of a card action.
///
//===----------------------------------------------------------------------===//

#ifndef CARD_ACTIONS_h
#define CARD_ACTIONS_h

class GameState;
class InputCheck;
class Player;
class Deck;

// supporting functions
const bool CheckCard(const int card);
void FixCard(int card);
void SanitizeCard(int target, const int originator);
const bool CheckTarget(const int input, const GameState &state);
void FixTarget(int input, const GameState &state);
void SanitizeTarget(int target, const GameState &state, const int card, Player &aggressor);
Player *GetTarget(Player &aggressor, GameState &state, const int card);
const bool CheckCharacter(const char input, const char target);
void FixCharacter(char input, const char target);
void SanitizeCharacter(char input, const char target);

// actions
void Spy(Player &player);
void Guard(GameState &state, Player &aggressor, Deck &deck);
void Priest(GameState &state, Player &aggressor);
void Baron(GameState &state, Player &aggressor, Deck &deck);
void Handmaid(Player &player);
void Prince(GameState &state, Player &player, Deck &deck);
void Chancellor(Deck &deck, Player &player);
void King(GameState &state, Player &aggressor);
void Countess(Player &player);
void Princess(Player &player, Deck &deck);

#endif // !CARD_ACTIONS_h