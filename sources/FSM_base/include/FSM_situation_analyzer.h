/*    This file is part of FSM_framework
      The aim of this software is to provided generic facilities for FSM analyzis
      Copyright (C) 2013  Julien Thevenon ( julien_thevenon at yahoo.fr )

      This program is free software: you can redistribute it and/or modify
      it under the terms of the GNU General Public License as published by
      the Free Software Foundation, either version 3 of the License, or
      (at your option) any later version.

      This program is distributed in the hope that it will be useful,
      but WITHOUT ANY WARRANTY; without even the implied warranty of
      MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
      GNU General Public License for more details.

      You should have received a copy of the GNU General Public License
      along with this program.  If not, see <http://www.gnu.org/licenses/>
*/
#ifndef FSM_SITUATION_ANALYZER
#define FSM_SITUATION_ANALYZER

#include <vector>
#include <string>
#include <assert.h>

namespace FSM_base
{
  template <class T_SITUATION,class T_TRANSITION> class FSM_situation_analyzer
  {
  public:
    // Methods to implement
    virtual const std::string & get_class_name(void)const=0;
    
    void compute_transitions(T_SITUATION & p_situation);

    // Virtual destructor
    virtual ~FSM_situation_analyzer(void);

  private:
    virtual std::vector<const T_TRANSITION *> & get_transitions(T_SITUATION & p_situation)=0;

  };
}

#include "FSM_situation_analyzer.hpp"

#endif // FSM_SITUATION_ANALYZER 
//EOF
