/*
 * Copyright (C) 2006-2013 Christopho, Solarus - http://www.solarus-games.org
 * 
 * Solarus is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 * 
 * Solarus is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License along
 * with this program. If not, see <http://www.gnu.org/licenses/>.
 */
#ifndef SOLARUS_HERO_FREEZED_STATE_H
#define SOLARUS_HERO_FREEZED_STATE_H

#include "hero/State.h"

/**
 * \brief The state "Freezed" of the hero.
 */
class Hero::FreezedState: public Hero::State {

  public:

    FreezedState(Hero& hero);
    ~FreezedState();

    void start(const State* previous_state);
};

#endif

