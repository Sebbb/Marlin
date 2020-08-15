/**
 * Marlin 3D Printer Firmware
 * Copyright (c) 2020 MarlinFirmware [https://github.com/MarlinFirmware/Marlin]
 *
 * Based on Sprinter and grbl.
 * Copyright (c) 2011 Camiel Gubbels / Erik van der Zalm
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 *
 */
#pragma once

// R25 = 100 kOhm, beta25 = 4100 K, 4.7 kOhm pull-up, Hisens thermistor
const temp_entry_t temptable_13[] PROGMEM = {
  { OV( 180  ), 130 }, // better hard switch off here
  { OV( 200  ), 125 },
  { OV( 270  ), 120 },
  { OV( 400  ), 110 },
  { OV( 520  ), 100 },
  { OV( 590  ), 93 },
  { OV( 660  ), 85 },
  { OV( 735  ), 75 },
  { OV( 770  ), 70 },
  { OV( 795  ), 66 },
  { OV( 825  ), 61 },
  { OV( 855  ), 55 },
  { OV( 880  ), 50 },
  { OV( 895  ), 47 },
  { OV( 939  ), 37 },
  { OV(986.03), 20 },
  { OV(1008.7),  0 }
};
