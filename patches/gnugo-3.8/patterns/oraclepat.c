/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 * This is GNU Go, a Go program. Contact gnugo@gnu.org, or see       *
 * http://www.gnu.org/software/gnugo/ for more information.          *
 *                                                                   *
 * Copyright 1999, 2000, 2001, 2002, 2003, 2004, 2005, 2006, 2007,   *
 * 2008 and 2009 by the Free Software Foundation.                    *
 *                                                                   *
 * This program is free software; you can redistribute it and/or     *
 * modify it under the terms of the GNU General Public License as    *
 * published by the Free Software Foundation - version 3 or          *
 * (at your option) any later version.                               *
 *                                                                   *
 * This program is distributed in the hope that it will be useful,   *
 * but WITHOUT ANY WARRANTY; without even the implied warranty of    *
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the     *
 * GNU General Public License in file COPYING for more details.      *
 *                                                                   *
 * You should have received a copy of the GNU General Public         *
 * License along with this program; if not, write to the Free        *
 * Software Foundation, Inc., 51 Franklin Street, Fifth Floor,       *
 * Boston, MA 02111, USA.                                            *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <stdio.h> /* for NULL */
#include "liberty.h"
#include "patterns.h"

static struct patval oracle0[] = {
  {685,1},	{648,1},	{611,2},	{684,2},
  {534,0},	{719,0},	{571,0},	{535,0},
  {572,0},	{609,0},	{646,0},	{683,0},
  {720,0},	{757,0},	{536,0},	{573,0},
  {610,0},	{647,0},	{756,0},	{721,0},
  {758,0},	{537,0},	{574,0},	{608,0},
  {645,0},	{682,0},	{722,0},	{759,0},
  {538,0},	{575,0},	{612,0},	{649,0},
  {686,0},	{723,0},	{760,0}
};

static struct patval oracle1[] = {
  {721,1},	{648,1},	{684,1},	{722,2},
  {685,2},	{645,0},	{793,0},	{572,0},
  {609,0},	{646,0},	{683,0},	{720,0},
  {757,0},	{794,0},	{573,0},	{610,0},
  {647,0},	{682,0},	{719,0},	{758,0},
  {795,0},	{574,0},	{611,0},	{756,0},
  {571,0},	{608,0},	{759,0},	{796,0},
  {575,0},	{612,0},	{649,0},	{686,0},
  {723,0},	{760,0},	{797,0},	{576,0},
  {613,0},	{650,0},	{687,0},	{724,0},
  {761,0},	{798,0}
};

static struct patval oracle2[] = {
  {722,1},	{685,1},	{649,1},	{684,2},
  {648,2},	{721,2},	{756,0},	{571,0},
  {609,0},	{646,0},	{683,0},	{720,0},
  {757,0},	{794,0},	{573,0},	{610,0},
  {647,0},	{608,0},	{793,0},	{758,0},
  {795,0},	{574,0},	{611,0},	{572,0},
  {682,0},	{719,0},	{759,0},	{796,0},
  {575,0},	{612,0},	{645,0},	{686,0},
  {723,0},	{760,0},	{797,0},	{576,0},
  {613,0},	{650,0},	{687,0},	{724,0},
  {761,0},	{798,0},	{577,0},	{614,0},
  {651,0},	{688,0},	{725,0},	{762,0},
  {799,0}
};

static struct patval oracle3[] = {
  {722,1},	{685,1},	{649,1},	{684,2},
  {648,2},	{721,2},	{756,0},	{571,0},
  {609,0},	{646,0},	{683,0},	{720,0},
  {757,0},	{794,0},	{573,0},	{610,0},
  {647,0},	{608,0},	{793,0},	{758,0},
  {795,0},	{574,0},	{611,0},	{572,0},
  {682,0},	{719,0},	{759,0},	{796,0},
  {575,0},	{612,0},	{645,0},	{686,0},
  {723,0},	{760,0},	{797,0},	{576,0},
  {613,0},	{650,0},	{687,0},	{724,0},
  {761,0},	{798,0},	{577,0},	{614,0},
  {651,0},	{688,0},	{725,0},	{762,0},
  {799,0}
};

static struct pattern oracle[5];

static int
autohelperoracle2(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, g, H;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(572, trans, move);
  b = AFFINE_TRANSFORM(536, trans, move);
  c = AFFINE_TRANSFORM(571, trans, move);
  d = AFFINE_TRANSFORM(537, trans, move);
  e = AFFINE_TRANSFORM(575, trans, move);
  f = AFFINE_TRANSFORM(538, trans, move);
  g = AFFINE_TRANSFORM(683, trans, move);
  H = AFFINE_TRANSFORM(610, trans, move);

  return  play_attack_defend_n(color, 1, 8, move, a, b, c, d, e, f, g, H);
}

static struct pattern oracle[] = {
  {oracle0,35,8, "O1",-2,-4,2,2,4,6,0x9,647,
    { 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff},
    { 0x0010a000, 0x80900000, 0x29100000, 0x00180804, 0x00908040, 0xa0100000, 0x08180000, 0x00102900}
   , 0x0,10.000000,NULL,0,NULL,NULL,0,0.000000},
  {oracle1,42,8, "O2",-2,-3,3,3,5,6,0x9,649,
    { 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff},
    { 0x00289400, 0x80606000, 0x58a00000, 0x24240800, 0x60608000, 0x94280000, 0x08242400, 0x00a05800}
   , 0x0,10.000000,NULL,0,NULL,NULL,3,0.000000},
  {oracle2,49,8, "O3",-2,-3,4,3,6,6,0x9,759,
    { 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff},
    { 0x00146880, 0x40909000, 0xa4500000, 0x18180600, 0x90904000, 0x68140000, 0x06181800, 0x0050a408}
   , 0x0,10.000000,NULL,1,NULL,autohelperoracle2,0,1.000000},
  {oracle3,49,8, "O4",-2,-3,4,3,6,6,0x9,758,
    { 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff},
    { 0x00146880, 0x40909000, 0xa4500000, 0x18180600, 0x90904000, 0x68140000, 0x06181800, 0x0050a408}
   , 0x0,10.000000,NULL,0,NULL,NULL,0,0.000000},
  {NULL, 0,0,NULL,0,0,0,0,0,0,0,0,{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},0,0.0,NULL,0,NULL,NULL,0,0.0}
};

struct pattern_db oracle_db = {
  -1,
  0,
  oracle
 , NULL
};
