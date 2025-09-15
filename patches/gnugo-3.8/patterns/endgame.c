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

static struct patval endpat0[] = {
  {684,2},	{721,2},	{758,3},	{759,3}
};

static struct patval endpat1[] = {
  {684,2},	{721,2},	{758,3},	{759,3}
};

static struct patval endpat2[] = {
  {796,1},	{721,1},	{758,1},	{684,2},
  {759,2},	{722,2},	{685,3},	{795,3},
  {797,3},	{723,0},	{760,0},	{686,0}
};

static struct patval endpat3[] = {
  {796,1},	{721,1},	{758,1},	{684,2},
  {759,2},	{722,2},	{797,3},	{795,3},
  {686,0},	{723,0},	{760,0}
};

static struct patval endpat4[] = {
  {758,1},	{721,1},	{684,2},	{759,2},
  {722,2},	{686,0},	{723,0},	{760,0}
};

static struct patval endpat5[] = {
  {684,1},	{722,1},	{758,2},	{721,2},
  {795,0},	{759,0},	{796,0}
};

static struct patval endpat6[] = {
  {684,1},	{721,2}
};

static struct patval endpat7[] = {
  {832,1},	{795,1},	{721,2},	{758,2},
  {684,2},	{759,0},	{796,0},	{833,0}
};

static struct patval endpat8[] = {
  {684,1},	{611,2}
};

static struct patval endpat9[] = {
  {795,1},	{758,1},	{721,2},	{684,2},
  {759,0},	{796,0}
};

static struct patval endpat10[] = {
  {684,1},	{648,1},	{611,1},	{574,2},
  {575,0},	{612,0},	{649,0},	{686,0}
};

static struct patval endpat11[] = {
  {721,1},	{684,2},	{759,0}
};

static struct patval endpat12[] = {
  {721,1},	{684,2},	{759,0}
};

static struct patval endpat13[] = {
  {721,1},	{684,2},	{758,0},	{795,0},
  {759,0},	{796,0}
};

static struct patval endpat14[] = {
  {721,1},	{684,2},	{610,0},	{611,0},
  {759,0}
};

static struct patval endpat15[] = {
  {685,1},	{648,2},	{684,2}
};

static struct patval endpat16[] = {
  {721,1},	{684,2},	{648,2},	{759,0}
};

static struct patval endpat17[] = {
  {721,1},	{684,2}
};

static struct patval endpat18[] = {
  {721,1},	{684,2},	{795,2},	{758,0},
  {759,0},	{796,0}
};

static struct patval endpat19[] = {
  {684,1},	{721,1},	{648,2}
};

static struct patval endpat20[] = {
  {684,1},	{721,1},	{648,2}
};

static struct patval endpat21[] = {
  {758,1},	{721,1},	{684,2},	{722,2},
  {795,0},	{759,0},	{796,0}
};

static struct patval endpat22[] = {
  {758,1},	{721,1},	{684,2},	{722,2},
  {795,0},	{759,0},	{796,0}
};

static struct patval endpat23[] = {
  {684,1},	{648,2}
};

static struct patval endpat24[] = {
  {684,1},	{758,1},	{685,2},	{759,0}
};

static struct patval endpat25[] = {
  {684,1},	{685,2}
};

static struct patval endpat26[] = {
  {685,1},	{684,2}
};

static struct patval endpat27[] = {
  {685,1},	{684,2}
};

static struct patval endpat28[] = {
  {721,1},	{684,2},	{758,2},	{759,0}
};

static struct patval endpat29[] = {
  {722,1},	{684,2},	{685,2},	{723,3},
  {649,0},	{686,0}
};

static struct patval endpat30[] = {
  {648,1},	{684,1},	{685,2},	{721,2},
  {647,3},	{610,3},	{611,0},	{612,0},
  {649,0},	{686,0},	{723,0}
};

static struct patval endpat31[] = {
  {721,1},	{684,2}
};

static struct patval endpat32[] = {
  {721,1},	{684,2},	{759,0}
};

static struct patval endpat33[] = {
  {685,1},	{721,1},	{684,2},	{648,2},
  {649,0},	{686,0},	{723,0}
};

static struct patval endpat34[] = {
  {684,1},	{721,2},	{759,0}
};

static struct patval endpat35[] = {
  {684,1},	{721,2}
};

static struct patval endpat36[] = {
  {759,1},	{721,1},	{684,2},	{722,2}
};

static struct patval endpat37[] = {
  {684,1},	{721,2},	{685,2},	{759,2}
};

static struct patval endpat38[] = {
  {759,1},	{721,1},	{685,1},	{684,2}
};

static struct patval endpat39[] = {
  {684,1},	{722,1},	{759,2},	{721,2}
};

static struct patval endpat40[] = {
  {648,1},	{686,1},	{685,2},	{684,2},
  {649,0}
};

static struct patval endpat41[] = {
  {685,1},	{684,1},	{648,2},	{686,2},
  {649,0}
};

static struct patval endpat42[] = {
  {685,1},	{684,1},	{648,2},	{686,2},
  {722,2},	{649,0},	{723,0}
};

static struct patval endpat43[] = {
  {722,1},	{684,1},	{723,1},	{724,2},
  {686,2},	{685,2},	{647,3},	{649,0},
  {650,0},	{687,0}
};

static struct patval endpat44[] = {
  {722,1},	{723,1},	{685,1},	{648,2},
  {686,2},	{684,2},	{649,0}
};

static struct patval endpat45[] = {
  {759,1},	{721,2},	{684,2}
};

static struct patval endpat46[] = {
  {759,1},	{721,1},	{684,2},	{648,2},
  {722,2}
};

static struct patval endpat47[] = {
  {685,1},	{721,1},	{759,1},	{684,2},
  {648,2}
};

static struct patval endpat48[] = {
  {684,2},	{609,0},	{610,0}
};

static struct patval endpat49[] = {
  {722,1},	{648,1},	{684,2},	{611,0},
  {612,0},	{649,0},	{686,0},	{723,0}
};

static struct patval endpat50[] = {
  {722,1},	{684,2},	{723,3},	{649,0},
  {686,0}
};

static struct patval endpat51[] = {
  {684,1},	{686,2},	{649,0}
};

static struct patval endpat52[] = {
  {684,1},	{795,2},	{757,3},	{720,3},
  {758,0},	{759,0},	{796,0}
};

static struct patval endpat53[] = {
  {758,1},	{759,1},	{684,2}
};

static struct patval endpat54[] = {
  {684,1},	{721,1},	{722,2},	{685,2},
  {758,0},	{759,0},	{686,0},	{723,0},
  {760,0}
};

static struct patval endpat55[] = {
  {723,1},	{722,1},	{684,2},	{685,2},
  {759,0},	{649,0},	{686,0},	{760,0},
  {650,0},	{687,0},	{724,0},	{761,0}
};

static struct patval endpat56[] = {
  {722,1},	{684,2},	{685,2},	{721,3},
  {758,0},	{759,0},	{686,0},	{723,0},
  {760,0}
};

static struct patval endpat57[] = {
  {758,1},	{684,1},	{759,2},	{685,2}
};

static struct patval endpat58[] = {
  {685,1},	{759,1},	{684,2},	{758,2}
};

static struct patval endpat59[] = {
  {684,1},	{612,1},	{721,2},	{685,2},
  {648,2},	{759,0},	{649,0},	{686,0},
  {723,0},	{760,0}
};

static struct patval endpat60[] = {
  {684,1},	{648,1},	{649,2},	{722,2},
  {612,2},	{686,0},	{723,0},	{613,0},
  {650,0},	{687,0},	{724,0}
};

static struct patval endpat61[] = {
  {722,1},	{723,1},	{758,1},	{684,2},
  {797,4},	{796,4},	{759,0},	{760,0}
};

static struct patval endpat62[] = {
  {685,1},	{684,2},	{758,0},	{759,0}
};

static struct patval endpat63[] = {
  {684,2},	{722,2}
};

static struct patval endpat64[] = {
  {723,1},	{721,1},	{759,1},	{684,2},
  {722,2},	{648,2},	{686,2}
};

static struct patval endpat65[] = {
  {685,1},	{721,1},	{759,1},	{723,1},
  {684,2},	{648,2},	{686,2}
};

static struct patval endpat66[] = {
  {758,1},	{684,2},	{757,0},	{759,0}
};

static struct patval endpat67[] = {
  {684,1},	{611,2},	{686,2},	{649,0}
};

static struct patval endpat68[] = {
  {684,1},	{611,2},	{686,2},	{612,3},
  {649,0}
};

static struct patval endpat69[] = {
  {684,1},	{722,2}
};

static struct patval endpat70[] = {
  {684,1},	{685,2}
};

static struct patval endpat71[] = {
  {684,1},	{758,2}
};

static struct patval endpat72[] = {
  {684,1},	{758,1},	{760,2},	{686,2},
  {759,0},	{723,0}
};

static struct patval endpat73[] = {
  {684,1},	{758,1},	{760,2},	{686,2},
  {759,0},	{723,0}
};

static struct patval endpat74[] = {
  {649,1},	{684,1},	{723,2},	{686,0}
};

static struct patval endpat75[] = {
  {684,1},	{721,1},	{686,1},	{760,2},
  {759,0},	{723,0}
};

static struct patval endpat76[] = {
  {649,1},	{684,1},	{722,2}
};

static struct patval endpat77[] = {
  {722,1},	{684,2},	{649,2}
};

static struct patval endpat78[] = {
  {684,1},	{723,1},	{721,2},	{686,3}
};

static struct patval endpat79[] = {
  {721,1},	{684,2},	{723,2},	{686,4}
};

static struct patval endpat80[] = {
  {758,1},	{684,1},	{759,2},	{685,2}
};

static struct patval endpat81[] = {
  {722,1},	{684,2},	{758,2}
};

static struct patval endpat82[] = {
  {722,1},	{758,2},	{684,2},	{757,3}
};

static struct patval endpat83[] = {
  {722,1},	{758,2},	{684,2},	{757,3},
  {683,3}
};

static struct patval endpat84[] = {
  {721,1},	{684,2},	{648,2},	{722,2}
};

static struct patval endpat85[] = {
  {684,1},	{723,2},	{649,2},	{650,4},
  {724,4},	{687,4},	{686,0}
};

static struct patval endpat86[] = {
  {722,1},	{724,1},	{760,1},	{684,2},
  {761,2},	{687,3},	{759,3},	{723,0},
  {686,0}
};

static struct patval endpat87[] = {
  {611,1},	{721,1},	{684,2},	{649,2},
  {722,2},	{686,0},	{723,0}
};

static struct patval endpat88[] = {
  {685,1},	{759,1},	{758,2},	{684,2}
};

static struct patval endpat89[] = {
  {758,1},	{684,1},	{722,2},	{757,0}
};

static struct patval endpat90[] = {
  {721,1},	{684,2},	{686,2},	{723,0}
};

static struct patval endpat91[] = {
  {721,1},	{684,2},	{686,2},	{723,0}
};

static struct patval endpat92[] = {
  {684,1},	{759,1},	{758,1},	{685,2}
};

static struct patval endpat93[] = {
  {684,1},	{758,1},	{723,2}
};

static struct patval endpat94[] = {
  {684,1},	{758,1},	{723,2},	{685,2},
  {759,4}
};

static struct patval endpat95[] = {
  {723,1},	{684,2},	{758,2},	{685,2},
  {721,2},	{759,2}
};

static struct patval endpat96[] = {
  {684,1},	{760,1},	{722,2},	{758,0},
  {759,0}
};

static struct patval endpat97[] = {
  {684,1},	{722,1},	{758,2}
};

static struct patval endpat98[] = {
  {611,1},	{649,1},	{684,2},	{612,0}
};

static struct patval endpat99[] = {
  {758,1},	{722,2},	{684,2}
};

static struct patval endpat100[] = {
  {684,1},	{611,2},	{649,2},	{612,0}
};

static struct patval endpat101[] = {
  {684,1},	{611,2},	{649,2},	{612,0}
};

static struct pattern endpat[103];

static int
autohelperendpat0(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  c = AFFINE_TRANSFORM(646, trans, move);

  return is_marginal_eye_space(move) && is_proper_eye_space(a) && is_proper_eye_space(b) && !play_attack_defend_n(OTHER_COLOR(color), 1, 1, move, c);
}

static int
autohelperendpat1(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  c = AFFINE_TRANSFORM(646, trans, move);

  return  is_marginal_eye_space(move) && is_proper_eye_space(a) && is_proper_eye_space(b) && play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, a, c) && !play_attack_defend_n(OTHER_COLOR(color), 1, 1, move, c);
}

static int
autohelperendpat2(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);

  return play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, b);
}

static int
autohelperendpat3(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(759, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);
  d = AFFINE_TRANSFORM(721, trans, move);

  return is_marginal_eye_space(a) && is_proper_eye_space(b) && is_proper_eye_space(c) && play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, d);
}

static int
autohelperendpat4(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(759, trans, move);
  b = AFFINE_TRANSFORM(795, trans, move);
  c = AFFINE_TRANSFORM(796, trans, move);

  return somewhere(OTHER_COLOR(color), 1, 2, b, c) && play_attack_defend_n(color, 1, 1, a, a) && !play_attack_defend_n(color, 1, 3, move, NO_MOVE, a, a);
}

static int
autohelperendpat5(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return is_marginal_eye_space(move);
}

static int
autohelperendpat6(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);
  b = AFFINE_TRANSFORM(719, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);
  d = AFFINE_TRANSFORM(721, trans, move);
  e = AFFINE_TRANSFORM(645, trans, move);

  return somewhere(color, 0, 5, a, b, c, d, e);
}

static int
autohelperendpat7(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(758, trans, move);

  return  is_proper_eye_space(a) && !play_attack_defend_n(color, 1, 1, move, move) && play_attack_defend_n(color, 1, 5, b, move, a, c, move, a) && play_attack_defend_n(OTHER_COLOR(color), 1, 3, move, a, b, a);
}

static int
autohelperendpat8(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return is_proper_eye_space(a) && safe_move(move, color);
}

static int
autohelperendpat9(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);

  return is_proper_eye_space(a) && is_proper_eye_space(b);
}

static int
autohelperendpat10(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)==3;
}

static int
autohelperendpat11(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return is_proper_eye_space(a);
}

static int
autohelperendpat12(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);

  return is_proper_eye_space(a) && is_proper_eye_space(b);
}

static int
autohelperendpat13(int trans, int move, int color, int action)
{
  int a, b, c, E;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);
  E = AFFINE_TRANSFORM(683, trans, move);

  return is_proper_eye_space(a) && is_proper_eye_space(b) && play_attack_defend2_n(color, 1, 3, move, a, c, a, E);
}

static int
autohelperendpat14(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);
  d = AFFINE_TRANSFORM(646, trans, move);

  return is_proper_eye_space(a) && is_proper_eye_space(b) && play_attack_defend2_n(OTHER_COLOR(color), 1, 3, c, b, move, b, d)&& !play_attack_defend_n(OTHER_COLOR(color), 1, 3, c, b, move, move);
}

static int
autohelperendpat15(int trans, int move, int color, int action)
{
  int B;
  UNUSED(color);
  UNUSED(action);

  B = AFFINE_TRANSFORM(686, trans, move);

  return  DEFEND_MACRO(B) && !play_attack_defend_n(color, 0, 1, move, B) && safe_move(move, OTHER_COLOR(color));
}

static int
autohelperendpat16(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);

  return  is_proper_eye_space(b) && play_attack_defend_n(color, 1, 3, move, b, a, a) && play_attack_defend_n(color, 0, 2, a, move, a);
}

static int
autohelperendpat18(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(757, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);

  return (dragon[a].status == ALIVE) && (dragon[b].status == DEAD) && play_attack_defend_n(color, 0, 3, move, c, d, b);
}

static int
autohelperendpat19(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return is_marginal_eye_space(move) && is_proper_eye_space(a) && max_eye_value(a) > 0;
}

static int
autohelperendpat20(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);

  a = AFFINE_TRANSFORM(647, trans, move);

  if (!action)
    return is_marginal_eye_space(a) && is_proper_eye_space(move) && max_eye_value(move) > 0&& (safe_move(move, color) || play_attack_defend_n(color, 1, 2, move, a, a));
  if (!safe_move(move, color)) register_known_safe_move(move);

  return 0;
}

static int
autohelperendpat21(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return is_marginal_eye_space(move) && is_marginal_eye_space(a);
}

static int
autohelperendpat22(int trans, int move, int color, int action)
{
  int a, b, c, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);
  D = AFFINE_TRANSFORM(646, trans, move);

  return is_marginal_eye_space(move) && is_marginal_eye_space(a) && is_marginal_eye_space(c)&& (play_attack_defend_n(color, 1, 3, move, a, b, a) || play_attack_defend_n(color, 1, 3, move, a, b, D));
}

static int
autohelperendpat23(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);
  C = AFFINE_TRANSFORM(683, trans, move);

  return is_marginal_eye_space(move) && is_proper_eye_space(a)&& (!play_attack_defend_n(color, 0, 3, move, a, b, a) || !play_attack_defend_n(color, 0, 3, move, a, b, C));
}

static int
autohelperendpat24(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);

  return is_marginal_eye_space(move) && is_proper_eye_space(a) && is_proper_eye_space(b);
}

static int
autohelperendpat26(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return is_marginal_eye_space(move) && is_proper_eye_space(a) && play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperendpat27(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);

  return is_eye_space(move) && is_proper_eye_space(a) && play_attack_defend2_n(color, 0, 2, move, a, move, b);
}

static int
autohelperendpat31(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return is_marginal_eye_space(move);
}

static int
autohelperendpat32(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return is_marginal_eye_space(move) && is_proper_eye_space(a);
}

static int
autohelperendpat33(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return is_marginal_eye_space(move);
}

static int
autohelperendpat34(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return is_marginal_eye_space(move) && is_proper_eye_space(a);
}

static int
autohelperendpat36(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return !(dragon[a].status == DEAD);
}

static int
autohelperendpat37(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return !(dragon[a].status == DEAD);
}

static int
autohelperendpat38(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return !(dragon[A].status == DEAD);
}

static int
autohelperendpat39(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return !(dragon[A].status == DEAD);
}

static int
autohelperendpat44(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return (dragon[A].status == ALIVE);
}

static int
autohelperendpat45(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);

  a = AFFINE_TRANSFORM(646, trans, move);

  if (!action)
    return play_attack_defend_n(OTHER_COLOR(color), 1, 1, move, a) && !play_attack_defend_n(color, 1, 1, move, a);
  prevent_attack_threat_helper(move, a);

  return 0;
}

static int
autohelperendpat46(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return !(dragon[a].status == DEAD);
}

static int
autohelperendpat47(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return !(dragon[A].status == DEAD);
}

static int
autohelperendpat48(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return !(whose_moyo(OPPOSITE_INFLUENCE(color), move) == color);
}

static int
autohelperendpat49(int trans, int move, int color, int action)
{
  int a, A;
  UNUSED(color);

  a = AFFINE_TRANSFORM(610, trans, move);
  A = AFFINE_TRANSFORM(647, trans, move);

  if (!action)
    return  play_attack_defend_n(color, 1, 2, move, a, A) && !play_attack_defend_n(color, 1, 2, a, move, A);
   add_replacement_move(a, move, color);

  return 0;
}

static int
autohelperendpat51(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);

  return is_proper_eye_space(a) && is_proper_eye_space(b);
}

static int
autohelperendpat52(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(611, trans, move);

  return is_proper_eye_space(a) && is_proper_eye_space(b);
}

static int
autohelperendpat53(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);

  return is_marginal_eye_space(a);
}

static int
autohelperendpat55(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(645, trans, move);

  return (whose_moyo(OPPOSITE_INFLUENCE(color), a) == OTHER_COLOR(color)) && (whose_moyo(OPPOSITE_INFLUENCE(color), b) == color);
}

static int
autohelperendpat56(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperendpat57(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return is_marginal_eye_space(move) && is_proper_eye_space(a);
}

static int
autohelperendpat58(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return is_marginal_eye_space(move) && is_proper_eye_space(a);
}

static int
autohelperendpat59(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);

  return !safe_move(a, color);
}

static int
autohelperendpat60(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);

  return countlib(a)>3;
}

static int
autohelperendpat61(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(722, trans, move);
  A = AFFINE_TRANSFORM(685, trans, move);

  return countlib(A)==3 && is_proper_eye_space(b);
}

static int
autohelperendpat62(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return is_marginal_eye_space(move) && is_proper_eye_space(a) && play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperendpat63(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);

  return is_proper_eye_space(c) && (whose_territory(OPPOSITE_INFLUENCE(color), c) == color) && !play_attack_defend_n(color, 1, 1, move, move)&& !play_attack_defend_n(OTHER_COLOR(color), 1, 1, move, move) && play_attack_defend2_n(OTHER_COLOR(color), 1, 1, move, a, b);
}

static int
autohelperendpat64(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return !(dragon[a].status == DEAD);
}

static int
autohelperendpat65(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return !(dragon[A].status == DEAD);
}

static int
autohelperendpat67(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);

  return is_marginal_eye_space(move) && is_proper_eye_space(a) && (!is_halfeye(half_eye,a) || false_eye_territory[a]);
}

static int
autohelperendpat68(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  return is_marginal_eye_space(move) && is_proper_eye_space(a) && is_proper_eye_space(b);
}

static int
autohelperendpat70(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return is_marginal_eye_space(move) && max_eye_value(move)>0&& !safe_move(a, color) && !obvious_false_eye(a, OTHER_COLOR(color));
}

static int
autohelperendpat72(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);

  return is_proper_eye_space(a) || is_proper_eye_space(b);
}

static int
autohelperendpat73(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);

  return is_proper_eye_space(a) && is_proper_eye_space(b);
}

static int
autohelperendpat74(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return is_marginal_eye_space(move) && is_proper_eye_space(a);
}

static int
autohelperendpat75(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return is_marginal_eye_space(move) && is_proper_eye_space(a);
}

static int
autohelperendpat76(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return is_marginal_eye_space(move) && is_proper_eye_space(a) && accuratelib(move, color, MAX_LIBERTIES, NULL)>2;
}

static int
autohelperendpat77(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return is_marginal_eye_space(move) && is_proper_eye_space(a) && max_eye_value(a)>0 && accuratelib(move, OTHER_COLOR(color), MAX_LIBERTIES, NULL)>2;
}

static int
autohelperendpat78(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return is_marginal_eye_space(move) && is_proper_eye_space(a) && max_eye_value(a)>0 && accuratelib(move, color, MAX_LIBERTIES, NULL)>2;
}

static int
autohelperendpat79(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return is_marginal_eye_space(move) && is_proper_eye_space(a) && max_eye_value(a)>0;
}

static int
autohelperendpat80(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);

  return is_marginal_eye_space(move) && is_proper_eye_space(b) && max_eye_value(b)>0 && play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperendpat81(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return is_marginal_eye_space(move) && is_proper_eye_space(a) && max_eye_value(a)>0;
}

static int
autohelperendpat82(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);

  return is_marginal_eye_space(move) && is_proper_eye_space(a) && is_proper_eye_space(b);
}

static int
autohelperendpat83(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);
  c = AFFINE_TRANSFORM(646, trans, move);

  return is_marginal_eye_space(move) && is_proper_eye_space(a) && is_proper_eye_space(b) && is_proper_eye_space(c);
}

static int
autohelperendpat84(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);

  return is_proper_eye_space(a) && countlib(b)==2 && !(whose_territory(OPPOSITE_INFLUENCE(color), move) == color);
}

static int
autohelperendpat86(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  return is_proper_eye_space(a) && is_proper_eye_space(b);
}

static int
autohelperendpat87(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(722, trans, move);
  A = AFFINE_TRANSFORM(758, trans, move);

  return  (whose_moyo(OPPOSITE_INFLUENCE(color), b) == color) && countlib(A)==2;
}

static int
autohelperendpat89(int trans, int move, int color, int action)
{
  int b, A, C;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(647, trans, move);
  C = AFFINE_TRANSFORM(721, trans, move);

  return  (whose_moyo(OPPOSITE_INFLUENCE(color), b) == OTHER_COLOR(color)) && play_break_through_n(color, 2, move, b, A, b, C) == WIN;
}

static int
autohelperendpat90(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return is_proper_eye_space(A) && play_attack_defend_n(color, 1, 2, move, B, B);
}

static int
autohelperendpat92(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);

  a = AFFINE_TRANSFORM(685, trans, move);
  B = AFFINE_TRANSFORM(647, trans, move);

  if (!action)
    return play_attack_defend2_n(color, 1, 2, move, a, a, B);
  if (!safe_move(move, color)) register_known_safe_move(move);

  return 0;
}

static int
autohelperendpat97(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);

  return is_halfeye(half_eye,a) && max_eye_value(a)>0 && !false_eye_territory[a] && !dragon_weak(b);
}

static int
autohelperendpat98(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);

  return is_halfeye(half_eye,a) && max_eye_value(a)>0 && !false_eye_territory[a] && !dragon_weak(b);
}

static int
autohelperendpat99(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);

  return is_halfeye(half_eye,a) && max_eye_value(a)>0 && !false_eye_territory[a];
}

static int
autohelperendpat100(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);

  return is_halfeye(half_eye,a) && max_eye_value(a)>0 && !false_eye_territory[a];
}

static int
autohelperendpat101(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return is_halfeye(half_eye,a) && max_eye_value(a)>0 && !false_eye_territory[a]&& play_attack_defend_n(color, 1, 2, move, b, b) == WIN;
}

static struct pattern_attribute attributes[] = {
#ifdef HAVE_TRANSPARENT_UNIONS
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=2.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {FOLLOWUP,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=0.100000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=2.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=0.750000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=2.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=2.000000}},
  {FOLLOWUP,{.value=7.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {REVERSE_FOLLOWUP,{.value=6.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_VALUE,{.value=0.500000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {FOLLOWUP,{.value=5.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {REVERSE_FOLLOWUP,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {REVERSE_FOLLOWUP,{.value=2.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=2.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=2.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=2.000000}},
  {REVERSE_FOLLOWUP,{.value=5.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=2.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=2.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=3.000000}},
  {REVERSE_FOLLOWUP,{.value=5.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=0.500000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_VALUE,{.value=1.500000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=0.100000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=0.600000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=0.600000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=0.500000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=0.500000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=0.100000}},
  {FOLLOWUP,{.value=0.500000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=0.100000}},
  {REVERSE_FOLLOWUP,{.value=0.500000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=0.500000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=3.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=0.100000}},
  {REVERSE_FOLLOWUP,{.value=2.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=0.600000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=0.500000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=3.000000}},
  {FOLLOWUP,{.value=5.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=2.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=2.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=0.100000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=0.100000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=3.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=8.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {REVERSE_FOLLOWUP,{.value=2.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {FOLLOWUP,{.value=2.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {REVERSE_FOLLOWUP,{.value=4.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {REVERSE_FOLLOWUP,{.value=4.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {REVERSE_FOLLOWUP,{.value=3.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=0.600000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=0.500000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {REVERSE_FOLLOWUP,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {REVERSE_FOLLOWUP,{.value=2.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=0.100000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=0.100000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=2.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {REVERSE_FOLLOWUP,{.value=2.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {REVERSE_FOLLOWUP,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {REVERSE_FOLLOWUP,{.value=2.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {REVERSE_FOLLOWUP,{.value=3.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {REVERSE_FOLLOWUP,{.value=2.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=2.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=4.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=3.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=0.100000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MAX_TERRITORY,{.value=0.100000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {MIN_TERRITORY,{.value=1.000000}},
  {LAST_ATTRIBUTE,{.offset=0}}
#else
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,2.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {FOLLOWUP,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,0.100000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,2.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,0.750000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,2.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,2.000000,0},
  {FOLLOWUP,7.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {REVERSE_FOLLOWUP,6.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_VALUE,0.500000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {FOLLOWUP,5.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {REVERSE_FOLLOWUP,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {REVERSE_FOLLOWUP,2.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,2.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,2.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,2.000000,0},
  {REVERSE_FOLLOWUP,5.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,2.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,2.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,3.000000,0},
  {REVERSE_FOLLOWUP,5.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,0.500000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_VALUE,1.500000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,0.100000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,0.600000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,0.600000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,0.500000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,0.500000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,0.100000,0},
  {FOLLOWUP,0.500000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,0.100000,0},
  {REVERSE_FOLLOWUP,0.500000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,0.500000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,3.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,0.100000,0},
  {REVERSE_FOLLOWUP,2.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,0.600000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,0.500000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,3.000000,0},
  {FOLLOWUP,5.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,2.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,2.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,0.100000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,0.100000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,3.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,8.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {REVERSE_FOLLOWUP,2.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {FOLLOWUP,2.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {REVERSE_FOLLOWUP,4.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {REVERSE_FOLLOWUP,4.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {REVERSE_FOLLOWUP,3.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,0.600000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,0.500000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {REVERSE_FOLLOWUP,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {REVERSE_FOLLOWUP,2.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,0.100000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,0.100000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,2.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {REVERSE_FOLLOWUP,2.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {REVERSE_FOLLOWUP,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {REVERSE_FOLLOWUP,2.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {REVERSE_FOLLOWUP,3.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {REVERSE_FOLLOWUP,2.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,2.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,4.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,3.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,0.100000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MAX_TERRITORY,0.100000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0},
  {MIN_TERRITORY,1.000000,0},
  {LAST_ATTRIBUTE,0.0,0}
#endif
};

static struct pattern endpat[] = {
  {endpat0,4,8, "EE1",0,-1,1,2,1,3,0x2,722,
    { 0x003dfd00, 0xc0f0f050, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfd3d0000, 0x0c3c3c14, 0x00f0fc00},
    { 0x00140000, 0x00101000, 0x00500000, 0x10100000, 0x10100000, 0x00140000, 0x00101000, 0x00500000}
   , 0x1005,0.000000,attributes+0,1,NULL,autohelperendpat0,0,0.235600},
  {endpat1,4,8, "EE1a",0,-1,1,2,1,3,0x2,722,
    { 0x003dfd00, 0xc0f0f050, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfd3d0000, 0x0c3c3c14, 0x00f0fc00},
    { 0x00140000, 0x00101000, 0x00500000, 0x10100000, 0x10100000, 0x00140000, 0x00101000, 0x00500000}
   , 0x1005,0.000000,attributes+1,1,NULL,autohelperendpat1,0,0.365200},
  {endpat2,12,8, "EE2",0,0,2,3,2,3,0x2,686,
    { 0x003f1f3f, 0x0070f0f0, 0xd0f00000, 0x3f370000, 0xf0700000, 0x1f3f0000, 0x00373f3f, 0x00f0d0f0},
    { 0x001a0500, 0x00106060, 0x40900000, 0x24100000, 0x60100000, 0x051a0000, 0x00102424, 0x00904000}
   , 0x5,0.000000,attributes+3,1,NULL,autohelperendpat2,0,1.000000},
  {endpat3,11,8, "EE2b",0,0,2,3,2,3,0x2,685,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x001a0500, 0x00106060, 0x40900000, 0x24100000, 0x60100000, 0x051a0000, 0x00102424, 0x00904000}
   , 0x5,0.000000,attributes+5,1,NULL,autohelperendpat3,0,0.235600},
  {endpat4,8,8, "EE2c",0,0,2,3,2,3,0x2,685,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x001a0500, 0x00106060, 0x40900000, 0x24100000, 0x60100000, 0x051a0000, 0x00102424, 0x00904000}
   , 0x5,0.000000,attributes+7,1,NULL,autohelperendpat4,0,0.970000},
  {endpat5,7,8, "EE4",0,0,1,3,1,3,0x2,759,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00250800, 0x00209010, 0x80600000, 0x18200000, 0x90200000, 0x08250000, 0x00201810, 0x00608000}
   , 0x1005,0.000000,attributes+9,1,NULL,autohelperendpat5,3,0.010000},
  {endpat6,2,8, "EE5",-1,0,1,2,2,2,0x2,722,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00240000, 0x00201000, 0x00600000, 0x10200000, 0x10200000, 0x00240000, 0x00201000, 0x00600000}
   , 0x1005,0.000000,attributes+12,1,NULL,autohelperendpat6,3,0.010000},
  {endpat7,8,8, "EE6",0,-1,1,4,1,5,0x2,759,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00150000, 0x00101010, 0x00500000, 0x10100000, 0x10100000, 0x00150000, 0x00101010, 0x00500000}
   , 0x1005,0.000000,attributes+14,1,NULL,autohelperendpat7,0,1.186000},
  {endpat8,2,8, "EE7",0,-2,1,1,1,3,0x2,685,
    { 0x00f0fc00, 0xf0f0c000, 0xff3c0000, 0x0c3c3c0c, 0xc0f0f0c0, 0xfcf00000, 0x3c3c0c00, 0x003cff00},
    { 0x00200000, 0x00200000, 0x01200000, 0x00200004, 0x00200040, 0x00200000, 0x00200000, 0x00200100}
   , 0x1015,0.000000,attributes+16,1,NULL,autohelperendpat8,3,0.610000},
  {endpat9,6,8, "EE101",0,0,1,3,1,3,0x2,759,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00160000, 0x00101020, 0x00500000, 0x10100000, 0x10100000, 0x00160000, 0x00101020, 0x00500000}
   , 0x1005,0.000000,attributes+18,1,NULL,autohelperendpat9,0,0.016000},
  {endpat10,8,8, "EE102",0,-3,2,1,2,4,0x2,612,
    { 0x0030fcf0, 0xc0f0c000, 0xff300000, 0x0c3f0f0f, 0xc0f0c0c0, 0xfc300000, 0x0f3f0c00, 0x0030ff3f},
    { 0x00208000, 0x80200000, 0x0a200000, 0x00200808, 0x00208080, 0x80200000, 0x08200000, 0x00200a00}
   , 0x1005,0.000000,attributes+20,1,NULL,autohelperendpat10,3,0.010000},
  {endpat11,3,8, "EE103",0,-1,1,2,1,3,0x2,722,
    { 0x003c3f00, 0x00f0f0c0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3c0000, 0x003c3c0c, 0x00f0f000},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x1005,0.000000,attributes+0,1,NULL,autohelperendpat11,0,0.010000},
  {endpat12,3,8, "EE104",0,-1,1,2,1,3,0x2,722,
    { 0x003cff00, 0xc0f0f0c0, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xff3c0000, 0x0c3c3c0c, 0x00f0fc00},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x1005,0.000000,attributes+0,1,NULL,autohelperendpat12,0,0.016000},
  {endpat13,6,8, "EE105",0,-1,1,3,1,4,0x2,722,
    { 0x003fff00, 0xc0f0f0f0, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xff3f0000, 0x0c3c3c3c, 0x00f0fc00},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x1005,0.000000,attributes+0,1,NULL,autohelperendpat13,0,1.096000},
  {endpat14,5,8, "EE106",0,-2,1,2,1,4,0x2,722,
    { 0x00fcff00, 0xf0f0f0c0, 0xffff0000, 0x3c3c3c3c, 0xf0f0f0f0, 0xfffc0000, 0x3c3c3c0c, 0x00ffff00},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x1005,0.000000,attributes+23,1,NULL,autohelperendpat14,0,1.312000},
  {endpat15,3,8, "EE107",-1,-1,1,0,2,1,0x9,683,
    { 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00, 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00},
    { 0x00106000, 0x40900000, 0x24100000, 0x00180400, 0x00904000, 0x60100000, 0x04180000, 0x00102400}
   , 0x4001,0.000000,attributes+0,1,NULL,autohelperendpat15,0,1.960000},
  {endpat16,4,8, "EE108",0,-1,1,2,1,3,0x2,722,
    { 0x003cff00, 0xc0f0f0c0, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xff3c0000, 0x0c3c3c0c, 0x00f0fc00},
    { 0x00184000, 0x40102000, 0x04900000, 0x20100400, 0x20104000, 0x40180000, 0x04102000, 0x00900400}
   , 0x1015,0.000000,attributes+25,1,NULL,autohelperendpat16,0,0.970000},
  {endpat17,2,8, "EE109",0,0,1,1,1,1,0x2,722,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x1005,0.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {endpat18,6,8, "EE110",0,0,1,3,1,3,0x2,722,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x1004,0.000000,attributes+27,1,NULL,autohelperendpat18,0,0.376000},
  {endpat19,3,8, "EE201",0,-1,1,1,1,2,0x2,685,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00284000, 0x40202000, 0x04a00000, 0x20200400, 0x20204000, 0x40280000, 0x04202000, 0x00a00400}
   , 0x1005,0.000000,attributes+29,1,NULL,autohelperendpat19,3,0.019600},
  {endpat20,3,8, "EE201b",0,-1,1,1,1,2,0x2,722,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00284000, 0x40202000, 0x04a00000, 0x20200400, 0x20204000, 0x40280000, 0x04202000, 0x00a00400}
   , 0x1015,0.000000,attributes+0,3,NULL,autohelperendpat20,3,0.365200},
  {endpat21,7,8, "EE202",0,0,1,3,1,3,0x2,759,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x001a0400, 0x00106020, 0x40900000, 0x24100000, 0x60100000, 0x041a0000, 0x00102420, 0x00904000}
   , 0x1005,0.000000,attributes+31,1,NULL,autohelperendpat21,0,0.016000},
  {endpat22,7,8, "EE203",0,0,1,3,1,3,0x2,759,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x001a0400, 0x00106020, 0x40900000, 0x24100000, 0x60100000, 0x041a0000, 0x00102420, 0x00904000}
   , 0x1005,0.000000,attributes+34,1,NULL,autohelperendpat22,0,0.365200},
  {endpat23,2,8, "EE204",0,-1,1,1,1,2,0x2,685,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400}
   , 0x1005,0.000000,attributes+37,1,NULL,autohelperendpat23,3,0.592000},
  {endpat24,4,8, "EE205",0,0,1,2,1,2,0x2,722,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00221000, 0x00600020, 0x10200000, 0x00240000, 0x00600000, 0x10220000, 0x00240020, 0x00201000}
   , 0x1005,0.000000,attributes+39,1,NULL,autohelperendpat24,3,0.019600},
  {endpat25,2,8, "EE206",0,0,1,1,1,1,0x2,722,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00201000, 0x00600000, 0x10200000, 0x00240000, 0x00600000, 0x10200000, 0x00240000, 0x00201000}
   , 0x1005,0.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {endpat26,2,8, "EE301",0,0,1,1,1,1,0x2,722,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x1005,0.000000,attributes+41,1,NULL,autohelperendpat26,0,0.376000},
  {endpat27,2,8, "EE302",0,0,1,1,1,1,0x2,722,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x1005,0.000000,attributes+43,1,NULL,autohelperendpat27,0,1.096000},
  {endpat28,4,4, "EE303",0,0,1,2,1,2,0x2,722,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00190000, 0x00102010, 0x00900000, 0x20100000, 0x20100000, 0x00190000, 0x00102010, 0x00900000}
   , 0x1005,0.000000,attributes+46,0,NULL,NULL,0,0.000000},
  {endpat29,6,8, "EE401",0,-1,2,1,2,2,0xa,686,
    { 0x00f0fcf4, 0xf0f0c000, 0xfc3c0000, 0x0d3f3f00, 0xc0f0f000, 0xfcf00000, 0x3f3f0d00, 0x003cfc7c},
    { 0x00101800, 0x00508000, 0x90100000, 0x08140000, 0x80500000, 0x18100000, 0x00140800, 0x00109000}
   , 0x9025,0.000000,attributes+48,0,NULL,NULL,0,0.000000},
  {endpat30,11,8, "EE402",0,-2,2,1,2,3,0xa,649,
    { 0x007cfcfc, 0xd0f0f000, 0xfff50000, 0x3f3f1f1f, 0xf0f0d0d0, 0xfc7c0000, 0x1f3f3f00, 0x00f5ffff},
    { 0x00249000, 0x80601000, 0x18600000, 0x10240800, 0x10608000, 0x90240000, 0x08241000, 0x00601800}
   , 0x9005,0.000000,attributes+50,0,NULL,NULL,3,0.000000},
  {endpat31,2,8, "EE403",0,0,1,1,1,1,0xa,722,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x1005,0.000000,attributes+53,1,NULL,autohelperendpat31,0,0.010000},
  {endpat32,3,8, "EE404",0,0,1,2,1,2,0xa,722,
    { 0x003c3f00, 0x00f0f0c0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3c0000, 0x003c3c0c, 0x00f0f000},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x1015,0.000000,attributes+55,1,NULL,autohelperendpat32,0,0.016000},
  {endpat33,7,8, "EE404b",0,-1,2,1,2,2,0xa,686,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00186000, 0x40902000, 0x24900000, 0x20180400, 0x20904000, 0x60180000, 0x04182000, 0x00902400}
   , 0x1015,0.000000,attributes+57,1,NULL,autohelperendpat33,0,0.010000},
  {endpat34,3,8, "EE405",0,0,1,2,1,2,0xa,722,
    { 0x003c3f00, 0x00f0f0c0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3c0000, 0x003c3c0c, 0x00f0f000},
    { 0x00240000, 0x00201000, 0x00600000, 0x10200000, 0x10200000, 0x00240000, 0x00201000, 0x00600000}
   , 0x1005,0.000000,attributes+59,1,NULL,autohelperendpat34,3,0.016000},
  {endpat35,2,8, "EE406",0,0,1,1,1,1,0xa,722,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00240000, 0x00201000, 0x00600000, 0x10200000, 0x10200000, 0x00240000, 0x00201000, 0x00600000}
   , 0x1005,0.000000,attributes+61,0,NULL,NULL,3,0.000000},
  {endpat36,4,8, "EE407",0,0,1,2,1,2,0xa,685,
    { 0x003c3f00, 0x00f0f0c0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3c0000, 0x003c3c0c, 0x00f0f000},
    { 0x00180600, 0x00106080, 0x40900000, 0x24100000, 0x60100000, 0x06180000, 0x00102408, 0x00904000}
   , 0x4,0.000000,attributes+63,1,NULL,autohelperendpat36,0,0.010000},
  {endpat37,4,8, "EE408",0,0,1,2,1,2,0xa,722,
    { 0x003c3f00, 0x00f0f0c0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3c0000, 0x003c3c0c, 0x00f0f000},
    { 0x00241100, 0x00601040, 0x10600000, 0x10240000, 0x10600000, 0x11240000, 0x00241004, 0x00601000}
   , 0x4,0.000000,attributes+65,1,NULL,autohelperendpat37,3,0.010000},
  {endpat38,4,8, "EE409",0,0,1,2,1,2,0xa,722,
    { 0x003c3f00, 0x00f0f0c0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3c0000, 0x003c3c0c, 0x00f0f000},
    { 0x00182200, 0x00902080, 0x20900000, 0x20180000, 0x20900000, 0x22180000, 0x00182008, 0x00902000}
   , 0x11,0.000000,attributes+67,1,NULL,autohelperendpat38,0,0.010000},
  {endpat39,4,8, "EE410",0,0,1,2,1,2,0xa,685,
    { 0x003c3f00, 0x00f0f0c0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3c0000, 0x003c3c0c, 0x00f0f000},
    { 0x00240900, 0x00209040, 0x80600000, 0x18200000, 0x90200000, 0x09240000, 0x00201804, 0x00608000}
   , 0x11,0.000000,attributes+69,1,NULL,autohelperendpat39,3,0.010000},
  {endpat40,5,8, "EE411",0,-1,2,0,2,1,0xa,647,
    { 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c},
    { 0x00109020, 0x80500000, 0x18100000, 0x00160800, 0x00508000, 0x90100000, 0x08160000, 0x00101820}
   , 0x5,0.000000,attributes+71,0,NULL,NULL,0,0.000000},
  {endpat41,5,8, "EE412",0,-1,2,0,2,1,0xa,649,
    { 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c},
    { 0x00206010, 0x40a00000, 0x24200000, 0x00290400, 0x00a04000, 0x60200000, 0x04290000, 0x00202410}
   , 0x5,0.000000,attributes+74,0,NULL,NULL,3,0.000000},
  {endpat42,7,8, "EE413",0,-1,2,1,2,2,0xa,723,
    { 0x00f0fcfc, 0xf0f0c000, 0xfc3c0000, 0x0f3f3f00, 0xc0f0f000, 0xfcf00000, 0x3f3f0f00, 0x003cfcfc},
    { 0x00206410, 0x40a04000, 0x64200000, 0x04290400, 0x40a04000, 0x64200000, 0x04290400, 0x00206410}
   , 0x5,0.000000,attributes+77,0,NULL,NULL,3,0.000000},
  {endpat43,10,8, "EE414",0,-1,3,1,3,2,0xa,648,
    { 0x0070fcfc, 0xd0f0c000, 0xfc340000, 0x0f3f1f00, 0xc0f0d000, 0xfc700000, 0x1f3f0f00, 0x0034fcfc},
    { 0x00201818, 0x00608000, 0x90200000, 0x0a250000, 0x80600000, 0x18200000, 0x00250a00, 0x00209090}
   , 0x9005,0.000000,attributes+79,0,NULL,NULL,3,0.000000},
  {endpat44,7,8, "EE415",0,-1,2,1,2,2,0xa,647,
    { 0x00f0fcfc, 0xf0f0c000, 0xfc3c0000, 0x0f3f3f00, 0xc0f0f000, 0xfcf00000, 0x3f3f0f00, 0x003cfcfc},
    { 0x00106818, 0x40908000, 0xa4100000, 0x0a190400, 0x80904000, 0x68100000, 0x04190a00, 0x0010a490}
   , 0x4,0.000000,attributes+81,1,NULL,autohelperendpat44,0,0.010000},
  {endpat45,3,8, "EE416",0,-1,1,2,1,3,0xa,722,
    { 0x00fcff00, 0xf0f0f0c0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfffc0000, 0x3c3c3c0c, 0x00fcfc00},
    { 0x00140200, 0x00101080, 0x00500000, 0x10100000, 0x10100000, 0x02140000, 0x00101008, 0x00500000}
   , 0x1005,0.000000,attributes+0,3,NULL,autohelperendpat45,0,1.600000},
  {endpat46,5,8, "EE501",0,-1,1,2,1,3,0x2,685,
    { 0x003cff00, 0xc0f0f0c0, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xff3c0000, 0x0c3c3c0c, 0x00f0fc00},
    { 0x00184600, 0x40106080, 0x44900000, 0x24100400, 0x60104000, 0x46180000, 0x04102408, 0x00904400}
   , 0x4,0.000000,attributes+84,1,NULL,autohelperendpat46,0,0.010000},
  {endpat47,5,8, "EE502",0,-1,1,2,1,3,0x2,722,
    { 0x003cff00, 0xc0f0f0c0, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xff3c0000, 0x0c3c3c0c, 0x00f0fc00},
    { 0x00186200, 0x40902080, 0x24900000, 0x20180400, 0x20904000, 0x62180000, 0x04182008, 0x00902400}
   , 0x11,0.000000,attributes+86,1,NULL,autohelperendpat47,0,0.010000},
  {endpat48,3,8, "EE504",-1,-2,0,0,1,2,0x2,610,
    { 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0, 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x1001,0.000000,attributes+0,1,NULL,autohelperendpat48,0,0.010000},
  {endpat49,8,8, "EE601",0,-2,2,1,2,3,0x2,685,
    { 0x0030fcfc, 0xc0f0c000, 0xff300000, 0x0f3f0f0f, 0xc0f0c0c0, 0xfc300000, 0x0f3f0f00, 0x0030ffff},
    { 0x00108800, 0x80108000, 0x88100000, 0x08100800, 0x80108000, 0x88100000, 0x08100800, 0x00108800}
   , 0x5,0.000000,attributes+88,3,NULL,autohelperendpat49,0,1.600000},
  {endpat50,5,8, "EE801",0,-1,2,1,2,2,0x8,685,
    { 0x00f0fcf4, 0xf0f0c000, 0xfc3c0000, 0x0d3f3f00, 0xc0f0f000, 0xfcf00000, 0x3f3f0d00, 0x003cfc7c},
    { 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x80100000, 0x08100000, 0x00100800, 0x00108000}
   , 0x1005,0.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {endpat51,3,8, "EE802",0,-1,2,0,2,1,0x8,685,
    { 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c},
    { 0x00200010, 0x00200000, 0x00200000, 0x00210000, 0x00200000, 0x00200000, 0x00210000, 0x00200010}
   , 0x1005,0.000000,attributes+91,1,NULL,autohelperendpat51,3,0.016000},
  {endpat52,7,8, "EE803",-1,0,1,3,2,3,0x2,758,
    { 0x053f3f00, 0x00f0f4f4, 0xf0f04000, 0x7c3c0000, 0xf4f00000, 0x3f3f0500, 0x003c7c7c, 0x40f0f000},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x1005,0.000000,attributes+93,1,NULL,autohelperendpat52,3,0.016000},
  {endpat53,3,8, "EE804",0,0,1,2,1,2,0x2,721,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00120200, 0x001000a0, 0x00100000, 0x00100000, 0x00100000, 0x02120000, 0x00100028, 0x00100000}
   , 0x1005,0.000000,attributes+95,1,NULL,autohelperendpat53,0,0.010000},
  {endpat54,9,8, "EE805",0,0,2,2,2,2,0x2,759,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00281400, 0x00606000, 0x50a00000, 0x24240000, 0x60600000, 0x14280000, 0x00242400, 0x00a05000}
   , 0x1005,0.000000,attributes+97,0,NULL,NULL,3,0.000000},
  {endpat55,12,8, "EE806",0,-1,3,2,3,3,0xa,686,
    { 0x00f0ffff, 0xf0f0c0c0, 0xfc3c0000, 0x0f3f3f00, 0xc0f0f000, 0xfff00000, 0x3f3f0f0f, 0x003cfcfc},
    { 0x00101808, 0x00508000, 0x90100000, 0x0a140000, 0x80500000, 0x18100000, 0x00140a00, 0x00109080}
   , 0x1005,0.000000,attributes+99,1,NULL,autohelperendpat55,0,0.016000},
  {endpat56,9,8, "EE851",0,0,2,2,2,2,0x2,759,
    { 0x00373f3f, 0x00f0d0f0, 0xf0700000, 0x1f3f0000, 0xd0f00000, 0x3f370000, 0x003f1f3f, 0x0070f0f0},
    { 0x00101800, 0x00508000, 0x90100000, 0x08140000, 0x80500000, 0x18100000, 0x00140800, 0x00109000}
   , 0x1005,0.000000,attributes+101,1,NULL,autohelperendpat56,0,1.000000},
  {endpat57,4,4, "EE901",-1,0,1,2,2,2,0x2,721,
    { 0x0c3f3f00, 0x00f0fcf0, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0c00, 0x003cfc3c, 0xc0f0f000},
    { 0x00221100, 0x00600060, 0x10200000, 0x00240000, 0x00600000, 0x11220000, 0x00240024, 0x00201000}
   , 0x1005,0.000000,attributes+103,1,NULL,autohelperendpat57,3,0.016000},
  {endpat58,4,4, "EE902",-1,0,1,2,2,2,0x2,721,
    { 0x0c3f3f00, 0x00f0fcf0, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0c00, 0x003cfc3c, 0xc0f0f000},
    { 0x00112200, 0x00900090, 0x20100000, 0x00180000, 0x00900000, 0x22110000, 0x00180018, 0x00102000}
   , 0x1005,0.000000,attributes+106,1,NULL,autohelperendpat58,0,0.016000},
  {endpat59,10,8, "EE903",0,-2,2,2,2,4,0x2,722,
    { 0x003cffff, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f03, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0f, 0x00f0fcff},
    { 0x00245000, 0x40601000, 0x14600000, 0x10240402, 0x10604000, 0x50240000, 0x04241000, 0x00601402}
   , 0x1005,0.000000,attributes+0,1,NULL,autohelperendpat59,3,1.000000},
  {endpat60,11,8, "EE1002",0,-2,3,1,3,3,0x2,685,
    { 0x0030fcfc, 0xc0f0c000, 0xfc300000, 0x0f3f0f03, 0xc0f0c000, 0xfc300000, 0x0f3f0f00, 0x0030fcff},
    { 0x00208440, 0x80204000, 0x48200000, 0x04200901, 0x40208000, 0x84200000, 0x09200400, 0x00204805}
   , 0x1005,0.000000,attributes+109,1,NULL,autohelperendpat60,3,0.010000},
  {endpat61,8,8, "EE1003",0,0,2,3,2,3,0x2,721,
    { 0x003f0f0f, 0x0030f0f0, 0xc0f00000, 0x3f300000, 0xf0300000, 0x0f3f0000, 0x00303f3f, 0x00f0c0c0},
    { 0x00120808, 0x00108020, 0x80100000, 0x0a100000, 0x80100000, 0x08120000, 0x00100a20, 0x00108080}
   , 0x1005,0.000000,attributes+112,1,NULL,autohelperendpat61,0,0.016000},
  {endpat62,4,8, "EF101",0,0,1,2,1,2,0x2,722,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x5,0.000000,attributes+114,1,NULL,autohelperendpat62,0,0.376000},
  {endpat63,2,8, "EF102",0,0,1,1,1,1,0x0,685,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00100400, 0x00104000, 0x40100000, 0x04100000, 0x40100000, 0x04100000, 0x00100400, 0x00104000}
   , 0x1,0.000000,attributes+116,1,NULL,autohelperendpat63,0,0.980800},
  {endpat64,7,4, "CE1",0,-1,2,2,2,3,0x0,685,
    { 0x003cff3c, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xff3c0000, 0x0c3f3f0c, 0x00f0fcf0},
    { 0x00184618, 0x40106080, 0x44900000, 0x26110400, 0x60104000, 0x46180000, 0x04112608, 0x00904490}
   , 0x4,0.000000,attributes+118,1,NULL,autohelperendpat64,0,0.010000},
  {endpat65,7,4, "CE2",0,-1,2,2,2,3,0x0,722,
    { 0x003cff3c, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xff3c0000, 0x0c3f3f0c, 0x00f0fcf0},
    { 0x00186218, 0x40902080, 0x24900000, 0x22190400, 0x20904000, 0x62180000, 0x04192208, 0x00902490}
   , 0x11,0.000000,attributes+120,1,NULL,autohelperendpat65,0,0.010000},
  {endpat66,4,4, "CE3",-1,0,1,2,2,2,0x0,721,
    { 0x3f3f3f00, 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc, 0xf0f0f000},
    { 0x00120000, 0x00100020, 0x00100000, 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100000}
   , 0x1005,0.000000,attributes+122,0,NULL,NULL,0,0.000000},
  {endpat67,4,8, "CE4a",0,-2,2,0,2,2,0x0,648,
    { 0x0030f0f0, 0xc0f00000, 0x3f300000, 0x003f0f0c, 0x00f0c0c0, 0xf0300000, 0x0f3f0000, 0x00303f3c},
    { 0x00200010, 0x00200000, 0x01200000, 0x00210004, 0x00200040, 0x00200000, 0x00210000, 0x00200110}
   , 0x1005,0.000000,attributes+124,1,NULL,autohelperendpat67,3,0.019600},
  {endpat68,5,8, "CE4b",0,-2,2,0,2,2,0x0,648,
    { 0x0030f0f0, 0xc0f00000, 0x3f300000, 0x003f0f0d, 0x00f0c0c0, 0xf0300000, 0x0f3f0000, 0x00303f3d},
    { 0x00200010, 0x00200000, 0x01200000, 0x00210004, 0x00200040, 0x00200000, 0x00210000, 0x00200110}
   , 0x1005,0.000000,attributes+127,1,NULL,autohelperendpat68,3,0.019600},
  {endpat69,2,8, "CE6",0,0,1,1,1,1,0x0,685,
    { 0x00303c00, 0x00f0c000, 0xf0300000, 0x0c3c0000, 0xc0f00000, 0x3c300000, 0x003c0c00, 0x0030f000},
    { 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200400, 0x00204000}
   , 0x1005,0.000000,attributes+130,0,NULL,NULL,3,0.000000},
  {endpat70,2,8, "CE9",0,-1,1,0,1,1,0x0,648,
    { 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00},
    { 0x00201000, 0x00600000, 0x10200000, 0x00240000, 0x00600000, 0x10200000, 0x00240000, 0x00201000}
   , 0x1025,0.000000,attributes+132,1,NULL,autohelperendpat70,3,0.378160},
  {endpat71,2,4, "CE12",0,0,0,2,0,2,0x0,721,
    { 0x003f0000, 0x00303030, 0x00f00000, 0x30300000, 0x30300000, 0x003f0000, 0x00303030, 0x00f00000},
    { 0x00210000, 0x00200010, 0x00200000, 0x00200000, 0x00200000, 0x00210000, 0x00200010, 0x00200000}
   , 0x1005,0.000000,attributes+134,0,NULL,NULL,3,0.000000},
  {endpat72,6,4, "CE13",0,0,2,2,2,2,0x0,722,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00220011, 0x00200020, 0x00200000, 0x00210000, 0x00200000, 0x00220000, 0x00210021, 0x00200010}
   , 0x1005,0.000000,attributes+136,1,NULL,autohelperendpat72,3,0.016000},
  {endpat73,6,4, "CE14",0,0,2,2,2,2,0x0,722,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00220011, 0x00200020, 0x00200000, 0x00210000, 0x00200000, 0x00220000, 0x00210021, 0x00200010}
   , 0x1005,0.000000,attributes+138,1,NULL,autohelperendpat73,3,0.016000},
  {endpat74,4,8, "CE15",0,-1,2,1,2,2,0x0,685,
    { 0x00f0fcfc, 0xf0f0c000, 0xfc3c0000, 0x0f3f3f00, 0xc0f0f000, 0xfcf00000, 0x3f3f0f00, 0x003cfcfc},
    { 0x00200084, 0x00200000, 0x00200000, 0x01200200, 0x00200000, 0x00200000, 0x02200100, 0x00200048}
   , 0x1005,0.000000,attributes+140,1,NULL,autohelperendpat74,3,0.016000},
  {endpat75,6,8, "CE15b",0,0,2,2,2,2,0x0,722,
    { 0x003c3f3f, 0x00f0f0c0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3c0000, 0x003f3f0f, 0x00f0f0f0},
    { 0x00280021, 0x00202000, 0x00a00000, 0x20220000, 0x20200000, 0x00280000, 0x00222001, 0x00a00020}
   , 0x1005,0.000000,attributes+142,1,NULL,autohelperendpat75,3,0.016000},
  {endpat76,3,8, "CE16",0,-1,2,1,2,2,0x0,685,
    { 0x00f0fcc0, 0xf0f0c000, 0xfc3c0000, 0x0c3c3f00, 0xc0f0f000, 0xfcf00000, 0x3f3c0c00, 0x003cfc0c},
    { 0x00200480, 0x00204000, 0x40200000, 0x04200200, 0x40200000, 0x04200000, 0x02200400, 0x00204008}
   , 0x1005,0.000000,attributes+144,1,NULL,autohelperendpat76,3,0.034000},
  {endpat77,3,8, "CE16b",0,-1,2,1,2,2,0x0,685,
    { 0x00f0fcc0, 0xf0f0c000, 0xfc3c0000, 0x0c3c3f00, 0xc0f0f000, 0xfcf00000, 0x3f3c0c00, 0x003cfc0c},
    { 0x00100840, 0x00108000, 0x80100000, 0x08100100, 0x80100000, 0x08100000, 0x01100800, 0x00108004}
   , 0x1005,0.000000,attributes+146,1,NULL,autohelperendpat77,0,0.030400},
  {endpat78,4,8, "CE17",0,0,2,1,2,1,0x0,722,
    { 0x003c3c1c, 0x00f0f000, 0xf0f00000, 0x3f3d0000, 0xf0f00000, 0x3c3c0000, 0x003d3f00, 0x00f0f0d0},
    { 0x00240008, 0x00201000, 0x00600000, 0x12200000, 0x10200000, 0x00240000, 0x00201200, 0x00600080}
   , 0x1005,0.000000,attributes+149,1,NULL,autohelperendpat78,3,0.030400},
  {endpat79,4,8, "CE18",0,0,2,1,2,1,0x0,722,
    { 0x003c3c2c, 0x00f0f000, 0xf0f00000, 0x3f3e0000, 0xf0f00000, 0x3c3c0000, 0x003e3f00, 0x00f0f0e0},
    { 0x00180004, 0x00102000, 0x00900000, 0x21100000, 0x20100000, 0x00180000, 0x00102100, 0x00900040}
   , 0x1005,0.000000,attributes+151,1,NULL,autohelperendpat79,0,0.019600},
  {endpat80,4,4, "CE19",-1,0,1,2,2,2,0x0,721,
    { 0x0c3f3f00, 0x00f0fcf0, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0c00, 0x003cfc3c, 0xc0f0f000},
    { 0x00221100, 0x00600060, 0x10200000, 0x00240000, 0x00600000, 0x11220000, 0x00240024, 0x00201000}
   , 0x1005,0.000000,attributes+153,1,NULL,autohelperendpat80,3,0.235600},
  {endpat81,3,4, "CE20a",-1,0,1,2,2,2,0x0,721,
    { 0x0c3f0c00, 0x0030fc30, 0xc0f0c000, 0xfc300000, 0xfc300000, 0x0c3f0c00, 0x0030fc30, 0xc0f0c000},
    { 0x00110800, 0x00108010, 0x80100000, 0x08100000, 0x80100000, 0x08110000, 0x00100810, 0x00108000}
   , 0x1025,0.000000,attributes+155,1,NULL,autohelperendpat81,0,0.019600},
  {endpat82,4,8, "CE20b",-1,0,1,2,2,2,0x0,721,
    { 0x0d3f0c00, 0x0030fc34, 0xc0f0c000, 0xfc300000, 0xfc300000, 0x0c3f0d00, 0x0030fc70, 0xc0f0c000},
    { 0x00110800, 0x00108010, 0x80100000, 0x08100000, 0x80100000, 0x08110000, 0x00100810, 0x00108000}
   , 0x1025,0.000000,attributes+158,1,NULL,autohelperendpat82,0,0.019600},
  {endpat83,5,4, "CE20c",-1,0,1,2,2,2,0x0,721,
    { 0x1d3f0c00, 0x0034fc34, 0xc0f0d000, 0xfc700000, 0xfc340000, 0x0c3f1d00, 0x0070fc70, 0xd0f0c000},
    { 0x00110800, 0x00108010, 0x80100000, 0x08100000, 0x80100000, 0x08110000, 0x00100810, 0x00108000}
   , 0x1025,0.000000,attributes+161,1,NULL,autohelperendpat83,0,0.021760},
  {endpat84,4,8, "CE21",0,-1,1,1,1,2,0x0,647,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00184400, 0x40106000, 0x44900000, 0x24100400, 0x60104000, 0x44180000, 0x04102400, 0x00904400}
   , 0x1025,0.000000,attributes+164,1,NULL,autohelperendpat84,0,0.019600},
  {endpat85,7,4, "CE22",0,-1,3,1,3,2,0x0,685,
    { 0x0030fcfc, 0xc0f0c000, 0xfc300000, 0x0f3f0f00, 0xc0f0c000, 0xfc300000, 0x0f3f0f00, 0x0030fcfc},
    { 0x00200044, 0x00200000, 0x00200000, 0x01200100, 0x00200000, 0x00200000, 0x01200100, 0x00200044}
   , 0x1005,0.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {endpat86,9,8, "CE23",0,0,3,2,3,2,0x0,685,
    { 0x00303d3f, 0x00f0c040, 0xf0300000, 0x0f3f0000, 0xc0f00000, 0x3d300000, 0x003f0f07, 0x0030f0f0},
    { 0x00100802, 0x00108000, 0x80100000, 0x08100000, 0x80100000, 0x08100000, 0x00100802, 0x00108000}
   , 0x1005,0.000000,attributes+167,1,NULL,autohelperendpat86,0,0.016000},
  {endpat87,7,8, "CE24",0,-2,2,1,2,3,0x0,648,
    { 0x003cfcfc, 0xc0f0f000, 0xfff00000, 0x3f3f0f0c, 0xf0f0c0c0, 0xfc3c0000, 0x0f3f3f00, 0x00f0fffc},
    { 0x00180440, 0x00106000, 0x42900000, 0x24100108, 0x60100080, 0x04180000, 0x01102400, 0x00904204}
   , 0x4,0.000000,attributes+169,1,NULL,autohelperendpat87,0,0.016000},
  {endpat88,4,4, "CE26",0,0,1,2,1,2,0x0,721,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00112200, 0x00900090, 0x20100000, 0x00180000, 0x00900000, 0x22110000, 0x00180018, 0x00102000}
   , 0x1005,0.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {endpat89,4,4, "CE27",-1,0,1,2,2,2,0x0,721,
    { 0x3f3f0c00, 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0, 0xf0f0c000},
    { 0x00220400, 0x00204020, 0x40200000, 0x04200000, 0x40200000, 0x04220000, 0x00200420, 0x00204000}
   , 0x0,0.000000,attributes+171,1,NULL,autohelperendpat89,3,3.010000},
  {endpat90,4,8, "CE28",0,0,2,1,2,1,0x0,722,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00180010, 0x00102000, 0x00900000, 0x20110000, 0x20100000, 0x00180000, 0x00112000, 0x00900010}
   , 0x1025,0.000000,attributes+173,1,NULL,autohelperendpat90,0,0.610000},
  {endpat91,4,8, "CE28b",0,0,2,1,2,1,0x0,722,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00180010, 0x00102000, 0x00900000, 0x20110000, 0x20100000, 0x00180000, 0x00112000, 0x00900010}
   , 0x1025,0.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {endpat92,4,8, "CE29",0,0,1,2,1,2,0x0,721,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00221200, 0x006000a0, 0x10200000, 0x00240000, 0x00600000, 0x12220000, 0x00240028, 0x00201000}
   , 0x1015,0.000000,attributes+0,3,NULL,autohelperendpat92,3,3.000000},
  {endpat93,3,4, "CE31",0,0,2,2,2,2,0x0,722,
    { 0x003f0c0c, 0x0030f030, 0xc0f00000, 0x3f300000, 0xf0300000, 0x0c3f0000, 0x00303f30, 0x00f0c0c0},
    { 0x00220004, 0x00200020, 0x00200000, 0x01200000, 0x00200000, 0x00220000, 0x00200120, 0x00200040}
   , 0x1005,0.000000,attributes+175,0,NULL,NULL,3,0.000000},
  {endpat94,5,8, "CE32",0,0,2,2,2,2,0x0,721,
    { 0x003f3e0c, 0x00f0f0b0, 0xf0f00000, 0x3f3c0000, 0xf0f00000, 0x3e3f0000, 0x003c3f38, 0x00f0f0c0},
    { 0x00221004, 0x00600020, 0x10200000, 0x01240000, 0x00600000, 0x10220000, 0x00240120, 0x00201040}
   , 0x1005,0.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {endpat95,6,8, "CE33",0,0,2,2,2,2,0x0,722,
    { 0x003f3f0c, 0x00f0f0f0, 0xf0f00000, 0x3f3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3f3c, 0x00f0f0c0},
    { 0x00151108, 0x00501050, 0x10500000, 0x12140000, 0x10500000, 0x11150000, 0x00141214, 0x00501080}
   , 0x5,0.000000,attributes+177,0,NULL,NULL,0,0.000000},
  {endpat96,5,4, "CE34",0,0,2,2,2,2,0x0,758,
    { 0x003f0f03, 0x0030f0f0, 0xc0f00000, 0x3c300000, 0xf0300000, 0x0f3f0000, 0x00303c3f, 0x00f0c000},
    { 0x00200402, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200402, 0x00204000}
   , 0x1005,0.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {endpat97,3,8, "EY1",0,0,1,2,1,2,0x0,721,
    { 0x003f3c00, 0x00f0f030, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3f0000, 0x003c3c30, 0x00f0f000},
    { 0x00210800, 0x00208010, 0x80200000, 0x08200000, 0x80200000, 0x08210000, 0x00200810, 0x00208000}
   , 0x1025,0.000000,attributes+179,1,NULL,autohelperendpat97,3,0.018160},
  {endpat98,4,4, "EY2",0,-2,2,0,2,2,0x0,648,
    { 0x00f0f0c0, 0xf0f00000, 0x3f3c0000, 0x003c3f0f, 0x00f0f0c0, 0xf0f00000, 0x3f3c0000, 0x003c3f0f},
    { 0x00100080, 0x00100000, 0x02100000, 0x00100208, 0x00100080, 0x00100000, 0x02100000, 0x00100208}
   , 0x1025,0.000000,attributes+181,1,NULL,autohelperendpat98,0,0.018160},
  {endpat99,3,8, "EY3",0,0,1,2,1,2,0x0,721,
    { 0x003f3c00, 0x00f0f030, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3f0000, 0x003c3c30, 0x00f0f000},
    { 0x00120400, 0x00104020, 0x40100000, 0x04100000, 0x40100000, 0x04120000, 0x00100420, 0x00104000}
   , 0x1025,0.000000,attributes+183,1,NULL,autohelperendpat99,0,0.016000},
  {endpat100,4,4, "EY4",0,-2,2,0,2,2,0x0,648,
    { 0x00f0f0c0, 0xf0f00000, 0x3f3c0000, 0x003c3f0f, 0x00f0f0c0, 0xf0f00000, 0x3f3c0000, 0x003c3f0f},
    { 0x00200040, 0x00200000, 0x01200000, 0x00200104, 0x00200040, 0x00200000, 0x01200000, 0x00200104}
   , 0x1025,0.000000,attributes+185,1,NULL,autohelperendpat100,3,0.016000},
  {endpat101,4,8, "EY5",0,-2,2,0,2,2,0x0,685,
    { 0x00f0f0c0, 0xf0f00000, 0x3f3c0000, 0x003c3f0f, 0x00f0f0c0, 0xf0f00000, 0x3f3c0000, 0x003c3f0f},
    { 0x00200040, 0x00200000, 0x01200000, 0x00200104, 0x00200040, 0x00200000, 0x01200000, 0x00200104}
   , 0x1025,0.000000,attributes+187,1,NULL,autohelperendpat101,3,0.232000},
  {NULL, 0,0,NULL,0,0,0,0,0,0,0,0,{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},0,0.0,NULL,0,NULL,NULL,0,0.0}
};

struct pattern_db endpat_db = {
  -1,
  0,
  endpat
 , NULL
};
