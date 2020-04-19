#pragma once
#include "Randomiser.h"
#include <thread>
#include <chrono>
#include "Team.h"
#include "Dice.h"
class Game
{
private:

	Game() {};
	Team Players[2];
	static Game Instance;
	int time_to_win=0;
    int goals_to_win = 2;
	bool game_mode = 0;
	bool win_condition = 0;
    int time=2;
	bool possesion = 0;
	~Game() {};
public:
	static Game& Get();
	Game( const Game&) = delete;
	void timer();
    void coin_toss();
	void switch_possesion();
	int get_remainder(bool,int);
	bool tackle(int,int,int);
	void set_time_to_win(int);
	void set_goals_to_win(int);
	void set_game_mode(bool);
	void set_win_condition(bool);
	bool get_possesion();
	Team& getPlayers(int);
	int get_time_to_win();
	int get_goals_to_win();
	bool GameOver();
    bool GetWinCondition();
};



