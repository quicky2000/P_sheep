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
#ifndef FSM_MOTOR_H
#define FSM_MOTOR_H

#include <string>

namespace FSM_base
{
  template <class T_SITUATION,class T_TRANSITION> class FSM_motor
  {
  public:
    // Methods to implement
    virtual const std::string & get_class_name(void)const=0;
    virtual T_SITUATION & run(const T_SITUATION & p_situation,
			      const T_TRANSITION & p_transition)=0;

    // Virtual destructor
    inline virtual ~FSM_motor(void){};
  };
}

#endif // FSM_MOTOR_H 
//EOF
