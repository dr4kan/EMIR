/*
###############################################################################
# Emir: EmiR: Evolutionary minimization forR                                  #
# Copyright (C) 2021 Davide Pagano & Lorenzo Sostero                          #
#                                                                             #
# This program is free software: you can redistribute it and/or modify        #
# it under the terms of the GNU General Public License as published by        #
# the Free Software Foundation, either version 3 of the License, or           #
# any later version.                                                          #
#                                                                             #
# This program is distributed in the hope that it will be useful, but         #
# WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY  #
# or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License    #
# for more details: <https://www.gnu.org/licenses/>.                          #
###############################################################################
*/


#ifndef EmiR_GSA_algorithm_h
#define EmiR_GSA_algorithm_h

#include "../Base/Algorithm.h"
#include "GSAConfig.h"
#include "GSAPopulation.h"

class GSA_algorithm : public Algorithm {
public:
  GSA_algorithm(Function, S4);

  void setSeed(uint64_t);

  void minimize();

private:

  GSAConfig m_algo_config;
  GSAPopulation m_population;
};

#endif
