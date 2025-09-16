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

static struct patval owl_defendpat0[] = {
  {684,2},	{685,2}
};

static struct patval owl_defendpat1[] = {
  {684,2},	{647,4}
};

static struct patval owl_defendpat2[] = {
  {648,2}
};

static struct patval owl_defendpat3[] = {
  {684,2},	{683,4}
};

static struct patval owl_defendpat4[] = {
  {684,2}
};

static struct patval owl_defendpat5[] = {
  {684,2},	{685,2}
};

static struct patval owl_defendpat6[] = {
  {685,2},	{648,2}
};

static struct patval owl_defendpat7[] = {
  {685,2},	{683,2},	{648,2}
};

static struct patval owl_defendpat8[] = {
  {757,2},	{684,2}
};

static struct patval owl_defendpat9[] = {
  {684,2},	{757,2},	{683,2}
};

static struct patval owl_defendpat10[] = {
  {684,2},	{723,2},	{722,2},	{758,4}
};

static struct patval owl_defendpat11[] = {
  {684,2},	{648,2},	{611,2}
};

static struct patval owl_defendpat12[] = {
  {758,2}
};

static struct patval owl_defendpat13[] = {
  {757,2},	{684,2}
};

static struct patval owl_defendpat14[] = {
  {684,2},	{757,2}
};

static struct patval owl_defendpat15[] = {
  {684,2},	{759,2},	{796,2},	{758,4}
};

static struct patval owl_defendpat16[] = {
  {648,2}
};

static struct patval owl_defendpat17[] = {
  {684,2},	{833,4},	{870,4},	{685,4},
  {871,4},	{683,4}
};

static struct patval owl_defendpat18[] = {
  {684,2}
};

static struct patval owl_defendpat19[] = {
  {686,2}
};

static struct patval owl_defendpat20[] = {
  {649,2},	{760,4}
};

static struct patval owl_defendpat21[] = {
  {684,2},	{649,2}
};

static struct patval owl_defendpat22[] = {
  {684,2},	{759,2},	{611,4}
};

static struct patval owl_defendpat23[] = {
  {684,2},	{722,2}
};

static struct patval owl_defendpat24[] = {
  {720,2},	{757,2},	{684,2}
};

static struct patval owl_defendpat25[] = {
  {684,2},	{648,4}
};

static struct patval owl_defendpat26[] = {
  {832,2}
};

static struct patval owl_defendpat27[] = {
  {684,2},	{647,2}
};

static struct patval owl_defendpat28[] = {
  {684,2},	{686,2},	{649,2},	{683,4}
};

static struct patval owl_defendpat29[] = {
  {647,2},	{684,2},	{759,4},	{758,4},
  {760,4}
};

static struct patval owl_defendpat30[] = {
  {759,2},	{682,4},	{719,4},	{685,4}
};

static struct patval owl_defendpat31[] = {
  {684,2},	{718,2},	{793,4},	{792,4},
  {755,4},	{756,4}
};

static struct patval owl_defendpat32[] = {
  {610,2},	{720,2},	{574,4},	{759,4},
  {758,4},	{756,4},	{757,4},	{573,4}
};

static struct patval owl_defendpat33[] = {
  {647,2},	{684,2}
};

static struct patval owl_defendpat34[] = {
  {684,2},	{647,2}
};

static struct patval owl_defendpat35[] = {
  {684,2},	{647,2}
};

static struct patval owl_defendpat36[] = {
  {648,2}
};

static struct patval owl_defendpat37[] = {
  {684,2}
};

static struct patval owl_defendpat38[] = {
  {684,2},	{648,2}
};

static struct patval owl_defendpat39[] = {
  {684,2},	{647,4}
};

static struct patval owl_defendpat40[] = {
  {684,2},	{649,4},	{648,4}
};

static struct patval owl_defendpat41[] = {
  {687,2},	{650,4}
};

static struct patval owl_defendpat42[] = {
  {757,2},	{720,2}
};

static struct patval owl_defendpat43[] = {
  {757,2},	{720,2}
};

static struct patval owl_defendpat44[] = {
  {684,2},	{758,4},	{759,4}
};

static struct patval owl_defendpat45[] = {
  {721,2},	{684,2},	{759,2}
};

static struct patval owl_defendpat46[] = {
  {684,2},	{757,2},	{720,2}
};

static struct patval owl_defendpat47[] = {
  {684,2},	{648,2},	{646,2},	{759,4}
};

static struct patval owl_defendpat48[] = {
  {684,2}
};

static struct patval owl_defendpat49[] = {
  {684,2},	{647,4}
};

static struct patval owl_defendpat50[] = {
  {758,2},	{721,2}
};

static struct patval owl_defendpat51[] = {
  {722,2},	{684,2}
};

static struct patval owl_defendpat52[] = {
  {684,2},	{683,4}
};

static struct patval owl_defendpat53[] = {
  {684,2}
};

static struct patval owl_defendpat54[] = {
  {684,2},	{683,2},	{794,2}
};

static struct patval owl_defendpat55[] = {
  {684,2},	{683,2},	{796,4}
};

static struct patval owl_defendpat56[] = {
  {684,2},	{759,2},	{796,2},	{758,4}
};

static struct patval owl_defendpat57[] = {
  {684,2},	{647,4},	{720,4},	{683,4}
};

static struct patval owl_defendpat58[] = {
  {684,2},	{720,4},	{683,4}
};

static struct patval owl_defendpat59[] = {
  {684,2},	{685,2},	{683,4},	{720,4}
};

static struct patval owl_defendpat60[] = {
  {685,2},	{648,2}
};

static struct patval owl_defendpat61[] = {
  {757,2},	{684,2},	{611,4},	{610,4}
};

static struct patval owl_defendpat62[] = {
  {684,2},	{683,4},	{720,4}
};

static struct patval owl_defendpat63[] = {
  {684,2},	{610,2},	{573,2},	{685,2}
};

static struct patval owl_defendpat64[] = {
  {649,2},	{721,2},	{686,4},	{648,4}
};

static struct patval owl_defendpat65[] = {
  {646,2},	{722,2},	{721,2},	{723,4}
};

static struct patval owl_defendpat66[] = {
  {648,2},	{647,2},	{720,2},	{722,2},
  {649,4}
};

static struct patval owl_defendpat67[] = {
  {647,2},	{685,2},	{645,4},	{646,4},
  {682,4}
};

static struct patval owl_defendpat68[] = {
  {721,2},	{684,2},	{759,4}
};

static struct patval owl_defendpat69[] = {
  {684,2},	{759,4},	{757,4},	{758,4},
  {683,4},	{720,4}
};

static struct patval owl_defendpat70[] = {
  {720,2},	{684,2},	{758,2},	{722,2}
};

static struct patval owl_defendpat71[] = {
  {684,2},	{647,4},	{610,4},	{574,4},
  {611,4},	{612,4},	{649,4},	{573,4},
  {575,4}
};

static struct patval owl_defendpat72[] = {
  {685,2},	{722,4}
};

static struct patval owl_defendpat73[] = {
  {684,2}
};

static struct patval owl_defendpat74[] = {
  {684,2},	{721,2}
};

static struct patval owl_defendpat75[] = {
  {722,2}
};

static struct patval owl_defendpat76[] = {
  {683,2},	{684,2}
};

static struct patval owl_defendpat77[] = {
  {648,2},	{647,2}
};

static struct patval owl_defendpat78[] = {
  {759,2}
};

static struct patval owl_defendpat79[] = {
  {687,2},	{650,4}
};

static struct patval owl_defendpat80[] = {
  {685,2},	{759,2}
};

static struct patval owl_defendpat81[] = {
  {684,2},	{686,4}
};

static struct patval owl_defendpat82[] = {
  {648,2},	{723,4},	{722,4},	{721,4}
};

static struct patval owl_defendpat83[] = {
  {648,2},	{723,4},	{722,4},	{721,4}
};

static struct patval owl_defendpat84[] = {
  {648,2}
};

static struct patval owl_defendpat85[] = {
  {684,2},	{720,2},	{648,4},	{685,4},
  {682,4}
};

static struct patval owl_defendpat86[] = {
  {684,2},	{720,2},	{648,4},	{685,4},
  {682,4}
};

static struct patval owl_defendpat87[] = {
  {647,2},	{722,2}
};

static struct patval owl_defendpat88[] = {
  {684,2}
};

static struct patval owl_defendpat89[] = {
  {647,2},	{610,2},	{685,2}
};

static struct patval owl_defendpat90[] = {
  {647,2},	{648,2},	{684,2},	{723,4},
  {686,4},	{649,4}
};

static struct patval owl_defendpat91[] = {
  {684,2},	{686,2}
};

static struct patval owl_defendpat92[] = {
  {648,2},	{647,2}
};

static struct patval owl_defendpat93[] = {
  {646,2},	{683,2},	{647,2},	{685,2},
  {720,4}
};

static struct patval owl_defendpat94[] = {
  {647,2},	{685,2},	{648,4}
};

static struct patval owl_defendpat95[] = {
  {684,2},	{646,2},	{720,4},	{610,4}
};

static struct patval owl_defendpat96[] = {
  {684,2}
};

static struct patval owl_defendpat97[] = {
  {684,2}
};

static struct patval owl_defendpat98[] = {
  {684,2}
};

static struct patval owl_defendpat99[] = {
  {722,2},	{686,2}
};

static struct patval owl_defendpat100[] = {
  {649,2},	{686,4}
};

static struct patval owl_defendpat101[] = {
  {684,2},	{648,4},	{647,4}
};

static struct patval owl_defendpat102[] = {
  {721,2},	{684,2},	{647,4},	{610,4}
};

static struct patval owl_defendpat103[] = {
  {722,2},	{759,2},	{684,2}
};

static struct patval owl_defendpat104[] = {
  {684,2},	{720,2},	{646,4},	{683,4}
};

static struct patval owl_defendpat105[] = {
  {684,2},	{647,4}
};

static struct patval owl_defendpat106[] = {
  {720,2},	{757,2},	{684,2}
};

static struct patval owl_defendpat107[] = {
  {757,2},	{684,2},	{758,2}
};

static struct patval owl_defendpat108[] = {
  {722,2},	{647,2},	{684,2}
};

static struct patval owl_defendpat109[] = {
  {649,2},	{685,2},	{684,2},	{683,2},
  {609,4}
};

static struct patval owl_defendpat110[] = {
  {684,2},	{722,2}
};

static struct patval owl_defendpat111[] = {
  {684,2},	{647,2},	{722,2}
};

static struct patval owl_defendpat112[] = {
  {684,2},	{722,2}
};

static struct patval owl_defendpat113[] = {
  {647,2},	{684,2},	{757,4}
};

static struct patval owl_defendpat114[] = {
  {758,2},	{684,2},	{647,2},	{757,4}
};

static struct patval owl_defendpat115[] = {
  {648,2},	{684,2}
};

static struct patval owl_defendpat116[] = {
  {721,2},	{647,2},	{685,2}
};

static struct patval owl_defendpat117[] = {
  {721,2},	{720,2},	{685,2},	{649,2},
  {646,4}
};

static struct patval owl_defendpat118[] = {
  {684,2},	{720,2}
};

static struct patval owl_defendpat119[] = {
  {684,2},	{720,2},	{796,4},	{795,4},
  {794,4},	{797,4}
};

static struct patval owl_defendpat120[] = {
  {723,2},	{722,2},	{684,2},	{649,4}
};

static struct patval owl_defendpat121[] = {
  {684,2},	{611,2},	{647,2},	{722,2}
};

static struct patval owl_defendpat122[] = {
  {722,2},	{758,2},	{684,2},	{759,4},
  {757,4}
};

static struct patval owl_defendpat123[] = {
  {758,2},	{684,2},	{722,2},	{759,4},
  {757,4}
};

static struct patval owl_defendpat124[] = {
  {722,2},	{723,2},	{684,2},	{686,2}
};

static struct patval owl_defendpat125[] = {
  {722,2},	{686,2},	{684,2}
};

static struct patval owl_defendpat126[] = {
  {684,2},	{721,2},	{647,4}
};

static struct patval owl_defendpat127[] = {
  {721,2},	{758,2},	{684,2},	{647,2},
  {610,2}
};

static struct patval owl_defendpat128[] = {
  {686,2},	{611,2},	{722,2},	{684,2},
  {721,4},	{647,4}
};

static struct patval owl_defendpat129[] = {
  {722,2},	{684,2},	{686,2}
};

static struct patval owl_defendpat130[] = {
  {721,2},	{647,2}
};

static struct patval owl_defendpat131[] = {
  {721,2},	{684,2},	{647,4}
};

static struct patval owl_defendpat132[] = {
  {684,2},	{683,4},	{682,4}
};

static struct patval owl_defendpat133[] = {
  {684,2},	{686,2}
};

static struct patval owl_defendpat134[] = {
  {758,2},	{720,2},	{684,2},	{722,2},
  {647,2},	{683,4},	{610,4}
};

static struct patval owl_defendpat135[] = {
  {686,2},	{721,2},	{684,2},	{648,2},
  {649,4}
};

static struct patval owl_defendpat136[] = {
  {683,2},	{646,2},	{758,2},	{759,2},
  {720,2},	{611,2},	{610,2}
};

static struct patval owl_defendpat137[] = {
  {684,2},	{683,2},	{723,2},	{760,2},
  {756,2},	{685,2},	{719,2}
};

static struct patval owl_defendpat138[] = {
  {686,2},	{684,2},	{722,2},	{647,4},
  {721,4}
};

static struct patval owl_defendpat139[] = {
  {684,2},	{721,2},	{759,2},	{723,2},
  {758,4},	{611,4},	{647,4},	{610,4}
};

static struct patval owl_defendpat140[] = {
  {648,2},	{723,2},	{686,2},	{684,2},
  {647,4}
};

static struct patval owl_defendpat141[] = {
  {758,2},	{684,2},	{720,2},	{722,2},
  {646,4},	{759,4}
};

static struct patval owl_defendpat142[] = {
  {722,2},	{720,2},	{758,2},	{684,2},
  {683,4},	{796,4}
};

static struct patval owl_defendpat143[] = {
  {758,2},	{722,2},	{684,2},	{720,2},
  {759,4},	{646,4},	{796,4}
};

static struct patval owl_defendpat144[] = {
  {684,2},	{722,2},	{758,2},	{720,2},
  {759,4}
};

static struct patval owl_defendpat145[] = {
  {721,2},	{683,2},	{685,2},	{722,4}
};

static struct patval owl_defendpat146[] = {
  {720,2},	{758,2},	{722,2},	{684,2},
  {759,2},	{683,4}
};

static struct patval owl_defendpat147[] = {
  {682,2},	{648,2},	{720,2},	{646,2},
  {684,2},	{647,4}
};

static struct patval owl_defendpat148[] = {
  {683,2},	{647,2},	{721,2},	{758,4}
};

static struct patval owl_defendpat149[] = {
  {757,2},	{722,2},	{684,2},	{720,2}
};

static struct patval owl_defendpat150[] = {
  {757,2},	{758,2},	{684,2},	{759,4}
};

static struct patval owl_defendpat151[] = {
  {684,2},	{720,2},	{646,4}
};

static struct patval owl_defendpat152[] = {
  {647,2},	{684,2}
};

static struct patval owl_defendpat153[] = {
  {720,2},	{684,2},	{759,2},	{758,2}
};

static struct patval owl_defendpat154[] = {
  {684,2},	{721,2},	{686,2}
};

static struct patval owl_defendpat155[] = {
  {684,2},	{648,2},	{647,2},	{649,2},
  {650,2}
};

static struct patval owl_defendpat156[] = {
  {647,2},	{722,2}
};

static struct patval owl_defendpat157[] = {
  {648,2},	{649,2},	{647,2},	{646,2},
  {722,2}
};

static struct patval owl_defendpat158[] = {
  {683,2},	{721,2},	{647,2},	{648,2},
  {646,2}
};

static struct patval owl_defendpat159[] = {
  {650,2},	{649,2},	{683,2},	{647,2},
  {687,2},	{684,2},	{648,4}
};

static struct patval owl_defendpat160[] = {
  {647,2}
};

static struct patval owl_defendpat161[] = {
  {684,2},	{647,2},	{722,2},	{612,2},
  {723,2},	{611,2}
};

static struct patval owl_defendpat162[] = {
  {721,2},	{684,2},	{758,2}
};

static struct patval owl_defendpat163[] = {
  {684,2},	{722,2}
};

static struct patval owl_defendpat164[] = {
  {684,2},	{648,2},	{722,2},	{683,4},
  {721,4}
};

static struct patval owl_defendpat165[] = {
  {684,2},	{647,4}
};

static struct patval owl_defendpat166[] = {
  {684,2},	{722,2},	{573,4}
};

static struct patval owl_defendpat167[] = {
  {683,2},	{758,2},	{720,2}
};

static struct patval owl_defendpat168[] = {
  {684,2},	{648,4}
};

static struct patval owl_defendpat169[] = {
  {684,2},	{648,2},	{683,2},	{647,4},
  {720,4}
};

static struct patval owl_defendpat170[] = {
  {720,2},	{757,2},	{647,2},	{684,2},
  {648,4}
};

static struct patval owl_defendpat171[] = {
  {759,2},	{721,2},	{684,2},	{760,2},
  {758,4},	{647,4}
};

static struct patval owl_defendpat172[] = {
  {684,2},	{647,2}
};

static struct patval owl_defendpat173[] = {
  {686,2},	{722,2},	{684,2},	{723,4},
  {721,4}
};

static struct patval owl_defendpat174[] = {
  {722,2},	{684,2},	{686,2}
};

static struct patval owl_defendpat175[] = {
  {684,2},	{722,2},	{686,2}
};

static struct patval owl_defendpat176[] = {
  {684,2},	{722,2},	{648,4},	{686,4}
};

static struct patval owl_defendpat177[] = {
  {684,2},	{722,2},	{648,4},	{721,4}
};

static struct patval owl_defendpat178[] = {
  {722,2},	{684,2},	{721,4}
};

static struct patval owl_defendpat179[] = {
  {684,2},	{759,4}
};

static struct patval owl_defendpat180[] = {
  {684,2},	{722,2},	{648,4},	{686,4}
};

static struct patval owl_defendpat181[] = {
  {684,2},	{759,2},	{758,2},	{685,2},
  {760,4},	{686,4}
};

static struct patval owl_defendpat182[] = {
  {723,2},	{684,2},	{721,2},	{686,2},
  {610,2},	{609,4},	{646,4},	{647,4}
};

static struct patval owl_defendpat183[] = {
  {647,2},	{722,2},	{648,2},	{721,2},
  {720,4}
};

static struct patval owl_defendpat184[] = {
  {721,2},	{722,2},	{648,2},	{684,2},
  {649,2}
};

static struct patval owl_defendpat185[] = {
  {684,2}
};

static struct patval owl_defendpat186[] = {
  {722,2}
};

static struct patval owl_defendpat187[] = {
  {723,2},	{684,2},	{721,2},	{686,2},
  {759,2}
};

static struct patval owl_defendpat188[] = {
  {684,2},	{649,2},	{722,2},	{686,2},
  {611,2}
};

static struct patval owl_defendpat189[] = {
  {684,2}
};

static struct patval owl_defendpat190[] = {
  {684,2},	{720,2}
};

static struct patval owl_defendpat191[] = {
  {722,2},	{684,2},	{686,2},	{723,4}
};

static struct patval owl_defendpat192[] = {
  {649,2},	{650,2},	{684,2},	{723,2},
  {722,4},	{687,4}
};

static struct patval owl_defendpat193[] = {
  {721,2},	{646,2},	{683,2},	{685,2},
  {720,4}
};

static struct patval owl_defendpat194[] = {
  {684,2},	{758,2},	{686,2},	{759,2}
};

static struct patval owl_defendpat195[] = {
  {684,2},	{722,2},	{610,4},	{611,4}
};

static struct patval owl_defendpat196[] = {
  {649,2},	{647,2},	{723,2},	{684,2},
  {648,4},	{686,4}
};

static struct patval owl_defendpat197[] = {
  {648,2},	{722,2},	{686,2},	{684,2}
};

static struct patval owl_defendpat198[] = {
  {684,2},	{721,2},	{756,2},	{757,2},
  {755,4},	{647,4}
};

static struct patval owl_defendpat199[] = {
  {684,2}
};

static struct patval owl_defendpat200[] = {
  {684,2}
};

static struct patval owl_defendpat201[] = {
  {684,2},	{721,4}
};

static struct patval owl_defendpat202[] = {
  {684,2}
};

static struct patval owl_defendpat203[] = {
  {647,2},	{684,2},	{721,2}
};

static struct patval owl_defendpat204[] = {
  {684,2},	{647,2}
};

static struct patval owl_defendpat205[] = {
  {721,2},	{758,2},	{684,2}
};

static struct patval owl_defendpat206[] = {
  {759,2},	{684,2},	{721,2},	{647,4},
  {760,4}
};

static struct patval owl_defendpat207[] = {
  {685,2},	{684,2},	{683,4},	{686,4},
  {760,4},	{723,4}
};

static struct patval owl_defendpat208[] = {
  {611,2},	{684,2},	{612,4},	{721,4}
};

static struct patval owl_defendpat209[] = {
  {758,2},	{721,2}
};

static struct patval owl_defendpat210[] = {
  {758,2},	{721,2}
};

static struct patval owl_defendpat211[] = {
  {758,2},	{721,2},	{759,2}
};

static struct patval owl_defendpat212[] = {
  {758,2},	{721,2},	{759,2}
};

static struct patval owl_defendpat213[] = {
  {684,2},	{610,4},	{647,4}
};

static struct patval owl_defendpat214[] = {
  {683,2},	{684,2},	{757,4},	{758,4},
  {647,4},	{720,4}
};

static struct patval owl_defendpat215[] = {
  {684,2},	{648,2},	{686,4},	{649,4}
};

static struct patval owl_defendpat216[] = {
  {722,2},	{684,2},	{646,4},	{683,4}
};

static struct patval owl_defendpat217[] = {
  {684,2}
};

static struct patval owl_defendpat218[] = {
  {647,2},	{683,2},	{649,2},	{684,2},
  {648,2}
};

static struct patval owl_defendpat219[] = {
  {685,2},	{720,2},	{683,2},	{648,2},
  {684,2}
};

static struct patval owl_defendpat220[] = {
  {646,2},	{682,2},	{719,2}
};

static struct patval owl_defendpat221[] = {
  {646,2},	{682,2},	{719,2}
};

static struct patval owl_defendpat222[] = {
  {646,2},	{684,2},	{721,2}
};

static struct patval owl_defendpat223[] = {
  {646,2},	{684,2},	{721,2}
};

static struct patval owl_defendpat224[] = {
  {722,2},	{684,2},	{647,2},	{649,4},
  {648,4}
};

static struct patval owl_defendpat225[] = {
  {684,2},	{648,2},	{646,4},	{683,4}
};

static struct patval owl_defendpat226[] = {
  {684,2},	{648,2},	{720,2},	{646,4}
};

static struct patval owl_defendpat227[] = {
  {684,2},	{720,2},	{648,2},	{758,4},
  {757,4},	{649,4},	{686,4}
};

static struct patval owl_defendpat228[] = {
  {684,2},	{758,2},	{683,2},	{647,2},
  {757,4}
};

static struct patval owl_defendpat229[] = {
  {723,2},	{757,2},	{758,2},	{686,2},
  {759,2},	{647,2},	{649,2}
};

static struct patval owl_defendpat230[] = {
  {719,2},	{682,2},	{756,2},	{759,2},
  {757,2},	{647,2},	{645,2},	{758,2}
};

static struct patval owl_defendpat231[] = {
  {720,2},	{684,2},	{760,2},	{758,2},
  {648,2},	{646,2},	{683,2},	{759,2}
};

static struct patval owl_defendpat232[] = {
  {646,2},	{684,2},	{720,4},	{683,4}
};

static struct patval owl_defendpat233[] = {
  {684,2},	{611,4},	{609,4},	{610,4},
  {646,4}
};

static struct patval owl_defendpat234[] = {
  {647,2},	{722,2},	{684,2},	{759,2},
  {797,4}
};

static struct patval owl_defendpat235[] = {
  {685,2},	{684,2},	{611,4},	{610,4},
  {648,4}
};

static struct patval owl_defendpat236[] = {
  {719,2},	{682,2},	{684,2},	{646,2}
};

static struct patval owl_defendpat237[] = {
  {611,2},	{720,2},	{684,2},	{646,2},
  {610,2},	{683,4}
};

static struct patval owl_defendpat238[] = {
  {760,2},	{759,2},	{721,2},	{683,2},
  {648,2},	{646,2},	{758,4},	{720,4}
};

static struct patval owl_defendpat239[] = {
  {684,2},	{720,2},	{647,4}
};

static struct patval owl_defendpat240[] = {
  {719,2},	{683,2},	{685,2},	{757,2},
  {684,2},	{686,4}
};

static struct patval owl_defendpat241[] = {
  {683,2},	{719,2},	{757,2},	{684,2},
  {685,2}
};

static struct patval owl_defendpat242[] = {
  {647,2}
};

static struct patval owl_defendpat243[] = {
  {684,2}
};

static struct patval owl_defendpat244[] = {
  {719,2},	{611,2},	{646,2},	{682,4},
  {610,4}
};

static struct patval owl_defendpat245[] = {
  {686,2},	{648,2},	{647,2},	{722,2}
};

static struct patval owl_defendpat246[] = {
  {683,2},	{720,2},	{722,2},	{721,2},
  {759,4},	{760,4}
};

static struct patval owl_defendpat247[] = {
  {759,2},	{685,2},	{720,2},	{645,2},
  {682,2},	{721,2},	{758,2}
};

static struct patval owl_defendpat248[] = {
  {684,2},	{682,2},	{683,2}
};

static struct patval owl_defendpat249[] = {
  {720,2},	{647,2},	{684,2}
};

static struct patval owl_defendpat250[] = {
  {647,2},	{684,2},	{721,2},	{758,2},
  {610,2},	{760,2},	{759,2}
};

static struct patval owl_defendpat251[] = {
  {721,2},	{684,2}
};

static struct patval owl_defendpat252[] = {
  {683,2},	{759,2},	{758,2},	{646,2},
  {757,4}
};

static struct patval owl_defendpat253[] = {
  {683,2},	{759,2},	{758,2},	{647,2},
  {646,2},	{757,4}
};

static struct patval owl_defendpat254[] = {
  {759,2},	{758,2},	{647,2},	{683,2},
  {646,2},	{757,4}
};

static struct patval owl_defendpat255[] = {
  {646,2},	{684,2},	{611,4}
};

static struct patval owl_defendpat256[] = {
  {684,2}
};

static struct patval owl_defendpat257[] = {
  {684,2}
};

static struct patval owl_defendpat258[] = {
  {684,2}
};

static struct patval owl_defendpat259[] = {
  {721,2}
};

static struct patval owl_defendpat260[] = {
  {683,2},	{646,2},	{649,2}
};

static struct patval owl_defendpat261[] = {
  {683,2},	{646,2},	{649,2}
};

static struct patval owl_defendpat262[] = {
  {649,2},	{611,2},	{683,2},	{646,2},
  {610,2}
};

static struct patval owl_defendpat263[] = {
  {684,2}
};

static struct patval owl_defendpat264[] = {
  {647,2},	{645,4}
};

static struct patval owl_defendpat265[] = {
  {647,2},	{645,4}
};

static struct patval owl_defendpat266[] = {
  {608,4},	{644,4},	{682,4},	{719,4},
  {607,4},	{645,4}
};

static struct patval owl_defendpat267[] = {
  {722,2},	{684,2}
};

static struct patval owl_defendpat268[] = {
  {684,2}
};

static struct patval owl_defendpat269[] = {
  {722,2},	{684,2}
};

static struct patval owl_defendpat270[] = {
  {722,2},	{757,2},	{684,2},	{720,2},
  {794,4}
};

static struct patval owl_defendpat271[] = {
  {722,2},	{684,2}
};

static struct patval owl_defendpat272[] = {
  {684,2},	{722,2},	{647,4},	{646,4}
};

static struct patval owl_defendpat273[] = {
  {685,2},	{723,2},	{684,2}
};

static struct patval owl_defendpat274[] = {
  {685,2},	{684,2},	{723,2},	{759,4},
  {758,4},	{757,4},	{760,4},	{683,4}
};

static struct patval owl_defendpat275[] = {
  {722,2},	{684,2}
};

static struct patval owl_defendpat276[] = {
  {647,2},	{721,2}
};

static struct patval owl_defendpat277[] = {
  {647,2},	{721,2}
};

static struct patval owl_defendpat278[] = {
  {647,2},	{721,2}
};

static struct patval owl_defendpat279[] = {
  {685,2}
};

static struct patval owl_defendpat280[] = {
  {685,2}
};

static struct patval owl_defendpat281[] = {
  {648,2}
};

static struct patval owl_defendpat282[] = {
  {648,2}
};

static struct patval owl_defendpat283[] = {
  {648,2}
};

static struct patval owl_defendpat284[] = {
  {720,2},	{647,2},	{683,2}
};

static struct patval owl_defendpat285[] = {
  {684,2},	{687,2},	{648,4},	{649,4}
};

static struct patval owl_defendpat286[] = {
  {685,2},	{648,2},	{758,4},	{720,4},
  {759,4}
};

static struct patval owl_defendpat287[] = {
  {647,2},	{759,2}
};

static struct patval owl_defendpat288[] = {
  {722,2},	{684,2}
};

static struct patval owl_defendpat289[] = {
  {685,2},	{758,2},	{722,2}
};

static struct patval owl_defendpat290[] = {
  {758,2},	{647,2},	{685,2},	{722,2}
};

static struct patval owl_defendpat291[] = {
  {648,2}
};

static struct patval owl_defendpat292[] = {
  {721,2},	{683,2},	{720,2}
};

static struct patval owl_defendpat293[] = {
  {720,2},	{645,2},	{683,2},	{758,2},
  {757,4}
};

static struct patval owl_defendpat294[] = {
  {647,2},	{683,2},	{758,2},	{720,2},
  {757,4}
};

static struct patval owl_defendpat295[] = {
  {685,2},	{610,2},	{648,2},	{721,2},
  {646,2},	{611,4}
};

static struct patval owl_defendpat296[] = {
  {685,2},	{648,2},	{721,2},	{646,2},
  {645,2},	{610,2},	{611,4}
};

static struct patval owl_defendpat297[] = {
  {685,2},	{686,2},	{648,2},	{609,4}
};

static struct patval owl_defendpat298[] = {
  {647,2},	{683,2},	{646,4}
};

static struct patval owl_defendpat299[] = {
  {646,2},	{683,2}
};

static struct patval owl_defendpat300[] = {
  {758,2},	{720,2},	{757,2}
};

static struct patval owl_defendpat301[] = {
  {685,2},	{647,2},	{683,2},	{759,4},
  {757,4},	{758,4}
};

static struct patval owl_defendpat302[] = {
  {649,2},	{612,4},	{720,4}
};

static struct patval owl_defendpat303[] = {
  {722,2},	{760,4},	{723,4},	{646,4}
};

static struct patval owl_defendpat304[] = {
  {684,2},	{721,2},	{646,4},	{760,4},
  {683,4}
};

static struct patval owl_defendpat305[] = {
  {686,2},	{797,4},	{720,4},	{757,4},
  {794,4},	{796,4},	{723,4},	{683,4},
  {795,4}
};

static struct patval owl_defendpat306[] = {
  {684,2},	{647,2},	{724,4},	{761,4},
  {759,4},	{758,4},	{687,4},	{650,4},
  {760,4}
};

static struct patval owl_defendpat307[] = {
  {647,2},	{650,4},	{760,4},	{761,4},
  {687,4},	{759,4},	{758,4},	{724,4}
};

static struct patval owl_defendpat308[] = {
  {684,2}
};

static struct patval owl_defendpat309[] = {
  {648,2},	{684,2},	{647,2},	{757,4},
  {646,4}
};

static struct patval owl_defendpat310[] = {
  {647,2},	{721,2}
};

static struct patval owl_defendpat311[] = {
  {722,2},	{721,2},	{611,4},	{610,4},
  {646,4},	{612,4}
};

static struct patval owl_defendpat312[] = {
  {721,2}
};

static struct patval owl_defendpat313[] = {
  {647,2},	{686,2},	{683,2},	{646,4}
};

static struct patval owl_defendpat314[] = {
  {683,2},	{646,2},	{721,2},	{609,4}
};

static struct patval owl_defendpat315[] = {
  {684,2},	{648,2},	{723,2},	{686,2},
  {760,4}
};

static struct patval owl_defendpat316[] = {
  {684,2},	{646,2},	{722,2}
};

static struct patval owl_defendpat317[] = {
  {647,2},	{722,2}
};

static struct patval owl_defendpat318[] = {
  {686,2},	{720,2},	{721,2}
};

static struct patval owl_defendpat319[] = {
  {648,2},	{686,2},	{649,4},	{758,4}
};

static struct patval owl_defendpat320[] = {
  {648,2},	{723,2},	{647,2}
};

static struct patval owl_defendpat321[] = {
  {684,2}
};

static struct patval owl_defendpat322[] = {
  {721,2},	{611,4},	{612,4},	{650,4},
  {687,4}
};

static struct patval owl_defendpat323[] = {
  {685,2}
};

static struct patval owl_defendpat324[] = {
  {685,2},	{721,2}
};

static struct patval owl_defendpat325[] = {
  {721,2}
};

static struct patval owl_defendpat326[] = {
  {722,2},	{721,2}
};

static struct patval owl_defendpat327[] = {
  {684,2},	{722,2}
};

static struct patval owl_defendpat328[] = {
  {757,2},	{758,2},	{684,2},	{722,2},
  {759,4}
};

static struct patval owl_defendpat329[] = {
  {647,2},	{721,2}
};

static struct patval owl_defendpat330[] = {
  {647,2},	{721,2}
};

static struct patval owl_defendpat331[] = {
  {648,2},	{685,2}
};

static struct patval owl_defendpat332[] = {
  {684,2},	{722,2},	{723,4},	{686,4},
  {721,4},	{649,4}
};

static struct patval owl_defendpat333[] = {
  {684,2},	{722,2},	{686,4},	{723,4},
  {721,4}
};

static struct patval owl_defendpat334[] = {
  {684,2},	{685,2},	{682,4},	{719,4}
};

static struct patval owl_defendpat335[] = {
  {684,2},	{721,2}
};

static struct patval owl_defendpat336[] = {
  {721,2},	{684,2},	{647,4}
};

static struct patval owl_defendpat337[] = {
  {684,2},	{686,2}
};

static struct patval owl_defendpat338[] = {
  {685,2},	{683,2},	{721,2},	{722,4},
  {720,4}
};

static struct patval owl_defendpat339[] = {
  {646,4}
};

static struct patval owl_defendpat340[] = {
  {723,2},	{684,2}
};

static struct patval owl_defendpat341[] = {
  {723,2},	{684,2}
};

static struct patval owl_defendpat342[] = {
  {759,2},	{648,2}
};

static struct patval owl_defendpat343[] = {
  {759,2},	{648,2},	{723,4},	{721,4}
};

static struct patval owl_defendpat344[] = {
  {647,2},	{722,2}
};

static struct patval owl_defendpat345[] = {
  {722,2},	{757,4},	{683,4},	{797,4},
  {720,4},	{795,4},	{794,4},	{796,4}
};

static struct patval owl_defendpat346[] = {
  {722,2},	{793,4},	{830,4},	{719,4},
  {756,4},	{832,4},	{834,4},	{831,4},
  {682,4},	{833,4}
};

static struct patval owl_defendpat347[] = {
  {684,2},	{722,2},	{612,4},	{609,4},
  {610,4},	{611,4}
};

static struct patval owl_defendpat348[] = {
  {686,2},	{648,2},	{609,4},	{646,4}
};

static struct patval owl_defendpat349[] = {
  {684,2},	{648,2},	{756,4},	{719,4},
  {757,4}
};

static struct patval owl_defendpat350[] = {
  {684,2},	{720,4},	{757,4},	{794,4},
  {683,4},	{795,4}
};

static struct patval owl_defendpat351[] = {
  {684,2},	{683,4},	{720,4},	{832,4},
  {831,4}
};

static struct patval owl_defendpat352[] = {
  {832,2},	{684,2},	{719,4},	{683,4},
  {756,4},	{793,4},	{831,4}
};

static struct patval owl_defendpat353[] = {
  {722,2},	{719,4},	{757,4},	{794,4},
  {720,4},	{793,4},	{758,4},	{795,4},
  {756,4}
};

static struct patval owl_defendpat354[] = {
  {684,2},	{794,4},	{757,4},	{796,4},
  {759,4},	{760,4},	{797,4},	{795,4},
  {723,4}
};

static struct patval owl_defendpat355[] = {
  {721,2},	{725,4},	{762,4},	{688,4},
  {611,4},	{651,4},	{614,4},	{613,4},
  {612,4}
};

static struct patval owl_defendpat356[] = {
  {721,2},	{684,2}
};

static struct patval owl_defendpat357[] = {
  {686,2},	{684,2},	{647,4},	{649,4}
};

static struct patval owl_defendpat358[] = {
  {684,2},	{686,2},	{649,4},	{647,4},
  {797,4},	{796,4}
};

static struct patval owl_defendpat359[] = {
  {684,2},	{722,2}
};

static struct patval owl_defendpat360[] = {
  {684,2},	{722,2}
};

static struct patval owl_defendpat361[] = {
  {684,2},	{650,4},	{724,4},	{687,4}
};

static struct patval owl_defendpat362[] = {
  {684,2}
};

static struct patval owl_defendpat363[] = {
  {684,2},	{683,4},	{645,4},	{682,4},
  {719,4},	{721,4},	{646,4},	{647,4},
  {720,4}
};

static struct patval owl_defendpat364[] = {
  {684,2},	{686,2}
};

static struct patval owl_defendpat365[] = {
  {684,2},	{686,2}
};

static struct patval owl_defendpat366[] = {
  {684,2},	{686,2}
};

static struct patval owl_defendpat367[] = {
  {684,2},	{686,2},	{723,2}
};

static struct patval owl_defendpat368[] = {
  {684,2},	{686,2},	{723,2}
};

static struct patval owl_defendpat369[] = {
  {685,2},	{722,2},	{683,2}
};

static struct patval owl_defendpat370[] = {
  {684,2},	{686,2}
};

static struct patval owl_defendpat371[] = {
  {684,2},	{722,2}
};

static struct patval owl_defendpat372[] = {
  {684,2},	{686,2},	{723,2}
};

static struct patval owl_defendpat373[] = {
  {685,2},	{722,2},	{683,2}
};

static struct patval owl_defendpat374[] = {
  {684,2},	{686,2}
};

static struct patval owl_defendpat375[] = {
  {684,2},	{721,4},	{647,4}
};

static struct patval owl_defendpat376[] = {
  {684,2},	{687,4},	{724,4},	{761,4},
  {650,4}
};

static struct patval owl_defendpat377[] = {
  {684,2},	{647,2},	{758,4},	{757,4},
  {759,4},	{760,4}
};

static struct patval owl_defendpat378[] = {
  {683,2},	{722,2},	{684,2},	{723,4},
  {760,4},	{649,4},	{686,4}
};

static struct patval owl_defendpat379[] = {
  {684,2},	{722,2},	{683,2},	{723,4},
  {649,4},	{686,4}
};

static struct patval owl_defendpat380[] = {
  {683,2},	{686,2},	{684,2},	{648,2}
};

static struct patval owl_defendpat381[] = {
  {721,2},	{685,2},	{647,2},	{720,4},
  {646,4}
};

static struct patval owl_defendpat382[] = {
  {649,2},	{685,2},	{721,2},	{609,4},
  {646,4},	{610,4}
};

static struct patval owl_defendpat383[] = {
  {685,2},	{683,2},	{721,2},	{646,4},
  {722,4}
};

static struct patval owl_defendpat384[] = {
  {684,2},	{721,2},	{724,4},	{687,4},
  {650,4},	{761,4}
};

static struct patval owl_defendpat385[] = {
  {647,2},	{648,2},	{721,2},	{759,4},
  {757,4},	{758,4},	{760,4}
};

static struct patval owl_defendpat386[] = {
  {648,2},	{722,2},	{647,4},	{649,4}
};

static struct patval owl_defendpat387[] = {
  {758,2},	{647,2},	{646,4}
};

static struct patval owl_defendpat388[] = {
  {684,2},	{687,4},	{724,4},	{650,4}
};

static struct patval owl_defendpat389[] = {
  {722,2},	{721,2},	{720,4}
};

static struct patval owl_defendpat390[] = {
  {758,2},	{649,4},	{724,4},	{648,4},
  {687,4},	{650,4}
};

static struct patval owl_defendpat391[] = {
  {758,2},	{687,4},	{721,4},	{724,4},
  {649,4},	{648,4},	{650,4},	{759,4}
};

static struct patval owl_defendpat392[] = {
  {758,2},	{649,4},	{687,4},	{759,4},
  {648,4},	{650,4},	{724,4},	{721,4}
};

static struct patval owl_defendpat393[] = {
  {758,2},	{649,4},	{687,4},	{724,4},
  {648,4},	{650,4}
};

static struct patval owl_defendpat394[] = {
  {684,2},	{683,4},	{650,4},	{720,4},
  {687,4}
};

static struct patval owl_defendpat395[] = {
  {647,2},	{721,2}
};

static struct patval owl_defendpat396[] = {
  {684,2},	{687,4},	{724,4},	{761,4},
  {650,4}
};

static struct patval owl_defendpat397[] = {
  {646,2},	{684,2}
};

static struct patval owl_defendpat398[] = {
  {684,2},	{723,2}
};

static struct patval owl_defendpat399[] = {
  {684,2},	{723,2}
};

static struct patval owl_defendpat400[] = {
  {684,2},	{723,2}
};

static struct patval owl_defendpat401[] = {
  {684,2},	{760,2}
};

static struct patval owl_defendpat402[] = {
  {685,2},	{683,2}
};

static struct patval owl_defendpat403[] = {
  {684,2},	{723,4}
};

static struct patval owl_defendpat404[] = {
  {722,2},	{684,2},	{682,2}
};

static struct patval owl_defendpat405[] = {
  {683,2}
};

static struct patval owl_defendpat406[] = {
  {684,2},	{683,2},	{685,2}
};

static struct patval owl_defendpat407[] = {
  {647,2},	{758,2},	{685,2}
};

static struct patval owl_defendpat408[] = {
  {684,2},	{721,4},	{647,4}
};

static struct patval owl_defendpat409[] = {
  {684,2},	{721,4},	{647,4}
};

static struct patval owl_defendpat410[] = {
  {684,2},	{685,4}
};

static struct patval owl_defendpat411[] = {
  {647,2},	{611,2},	{721,2},	{612,2},
  {613,4},	{761,4},	{758,4}
};

static struct patval owl_defendpat412[] = {
  {684,2},	{796,2},	{685,2}
};

static struct patval owl_defendpat413[] = {
  {685,2},	{723,2},	{686,4}
};

static struct patval owl_defendpat414[] = {
  {684,2},	{686,2}
};

static struct patval owl_defendpat415[] = {
  {684,2},	{759,4}
};

static struct patval owl_defendpat416[] = {
  {684,2}
};

static struct patval owl_defendpat417[] = {
  {684,2},	{685,4}
};

static struct patval owl_defendpat418[] = {
  {685,2},	{686,2},	{610,2},	{609,4}
};

static struct patval owl_defendpat419[] = {
  {683,2},	{758,2},	{721,2}
};

static struct patval owl_defendpat420[] = {
  {684,2},	{647,2},	{722,2},	{720,2}
};

static struct patval owl_defendpat421[] = {
  {720,2},	{758,2},	{722,2},	{759,2},
  {610,4},	{646,4}
};

static struct patval owl_defendpat422[] = {
  {684,2},	{685,2}
};

static struct patval owl_defendpat423[] = {
  {685,2},	{649,2},	{686,4}
};

static struct patval owl_defendpat424[] = {
  {759,2},	{648,4},	{649,4}
};

static struct patval owl_defendpat425[] = {
  {684,2},	{687,2},	{647,4},	{721,4}
};

static struct patval owl_defendpat426[] = {
  {721,2},	{648,2}
};

static struct patval owl_defendpat427[] = {
  {683,2},	{686,4}
};

static struct patval owl_defendpat428[] = {
  {685,2},	{721,4},	{573,4},	{536,4}
};

static struct patval owl_defendpat429[] = {
  {685,2},	{647,2},	{757,2}
};

static struct patval owl_defendpat430[] = {
  {648,2},	{758,2},	{721,4}
};

static struct patval owl_defendpat431[] = {
  {721,2},	{685,2},	{574,4},	{573,4}
};

static struct patval owl_defendpat432[] = {
  {684,2}
};

static struct patval owl_defendpat433[] = {
  {684,2}
};

static struct patval owl_defendpat434[] = {
  {684,2}
};

static struct patval owl_defendpat435[] = {
  {647,2},	{722,2}
};

static struct patval owl_defendpat436[] = {
  {721,2},	{648,2}
};

static struct patval owl_defendpat437[] = {
  {684,2},	{721,4}
};

static struct patval owl_defendpat438[] = {
  {684,2},	{760,2}
};

static struct patval owl_defendpat439[] = {
  {611,2},	{722,2}
};

static struct patval owl_defendpat440[] = {
  {647,2},	{759,2},	{648,4}
};

static struct patval owl_defendpat441[] = {
  {647,2},	{759,2},	{648,4}
};

static struct patval owl_defendpat442[] = {
  {685,2},	{719,4},	{646,4},	{722,4}
};

static struct patval owl_defendpat443[] = {
  {685,2},	{647,2},	{719,4},	{646,4},
  {722,4}
};

static struct patval owl_defendpat444[] = {
  {647,2},	{758,2}
};

static struct patval owl_defendpat445[] = {
  {647,2},	{793,2},	{646,4}
};

static struct patval owl_defendpat446[] = {
  {648,2},	{684,2},	{758,2}
};

static struct patval owl_defendpat447[] = {
  {721,2},	{646,2}
};

static struct patval owl_defendpat448[] = {
  {722,2},	{684,2},	{610,2}
};

static struct patval owl_defendpat449[] = {
  {722,2},	{684,2},	{610,2}
};

static struct patval owl_defendpat450[] = {
  {758,2},	{648,2},	{684,2}
};

static struct patval owl_defendpat451[] = {
  {722,2},	{758,2},	{684,2}
};

static struct patval owl_defendpat452[] = {
  {722,2},	{758,2},	{684,2}
};

static struct patval owl_defendpat453[] = {
  {722,2},	{758,2},	{684,2}
};

static struct patval owl_defendpat454[] = {
  {648,2},	{684,2}
};

static struct patval owl_defendpat455[] = {
  {648,2},	{684,2}
};

static struct patval owl_defendpat456[] = {
  {646,2},	{683,2},	{721,2}
};

static struct patval owl_defendpat457[] = {
  {646,2},	{721,2},	{683,2},	{720,4}
};

static struct patval owl_defendpat458[] = {
  {646,2},	{685,2},	{683,2},	{720,4}
};

static struct patval owl_defendpat459[] = {
  {646,2},	{721,2},	{683,2},	{720,4}
};

static struct patval owl_defendpat460[] = {
  {682,2},	{646,2},	{684,2}
};

static struct patval owl_defendpat461[] = {
  {611,2},	{647,2},	{721,2},	{685,2}
};

static struct patval owl_defendpat462[] = {
  {721,2},	{685,2},	{647,2}
};

static struct patval owl_defendpat463[] = {
  {646,2},	{611,2},	{610,2},	{683,2},
  {684,2},	{720,4}
};

static struct patval owl_defendpat464[] = {
  {647,2},	{685,2}
};

static struct patval owl_defendpat465[] = {
  {647,2},	{685,2},	{648,4}
};

static struct patval owl_defendpat466[] = {
  {720,2},	{684,2},	{647,2},	{722,2}
};

static struct patval owl_defendpat467[] = {
  {684,2},	{647,2},	{720,2}
};

static struct patval owl_defendpat468[] = {
  {685,2},	{721,2},	{684,2},	{648,2},
  {611,4},	{612,4},	{756,4},	{719,4}
};

static struct patval owl_defendpat469[] = {
  {722,2}
};

static struct patval owl_defendpat470[] = {
  {686,2}
};

static struct patval owl_defendpat471[] = {
  {722,2}
};

static struct patval owl_defendpat472[] = {
  {686,2}
};

static struct patval owl_defendpat473[] = {
  {758,2},	{684,2},	{720,2},	{722,2},
  {759,4}
};

static struct patval owl_defendpat474[] = {
  {758,2},	{720,2},	{684,2},	{722,2},
  {759,4}
};

static struct patval owl_defendpat475[] = {
  {647,2}
};

static struct patval owl_defendpat476[] = {
  {721,2},	{723,2},	{685,2},	{647,2},
  {758,2},	{649,2}
};

static struct patval owl_defendpat477[] = {
  {683,2},	{649,2},	{684,2},	{720,2},
  {685,2},	{648,2}
};

static struct patval owl_defendpat478[] = {
  {684,2},	{722,2},	{721,4},	{683,4},
  {648,4}
};

static struct patval owl_defendpat479[] = {
  {685,2}
};

static struct patval owl_defendpat480[] = {
  {685,2}
};

static struct patval owl_defendpat481[] = {
  {646,2},	{647,2}
};

static struct patval owl_defendpat482[] = {
  {684,2},	{723,2},	{760,2},	{686,2}
};

static struct patval owl_defendpat483[] = {
  {684,2},	{723,2},	{686,2},	{649,2},
  {760,4}
};

static struct patval owl_defendpat484[] = {
  {684,2},	{648,2}
};

static struct patval owl_defendpat485[] = {
  {647,2},	{684,2}
};

static struct patval owl_defendpat486[] = {
  {722,2},	{684,2},	{720,2},	{758,2},
  {757,4}
};

static struct patval owl_defendpat487[] = {
  {684,2},	{683,2}
};

static struct pattern owl_defendpat[489];

static int
autohelperowl_defendpat0(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);

  return  play_attack_defend_n(color, 1, 4, move, a, b, c, c);
}

static int
autohelperowl_defendpat8(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);

  return ATTACK_MACRO(a) && !play_attack_defend_n(color, 1, 1, move, a);
}

static int
autohelperowl_defendpat9(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(573, trans, move);

  return ATTACK_MACRO(a) && !play_attack_defend_n(color, 1, 1, move, a);
}

static int
autohelperowl_defendpat20(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return  !play_attack_defend_n(color, 0, 3, move, a, b, a);
}

static int
autohelperowl_defendpat21(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);

  return countlib(a) >= 4;
}

static int
autohelperowl_defendpat22(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(796, trans, move);

  return countlib(a) >= 4;
}

static int
autohelperowl_defendpat23(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);

  return countlib(a)>1;
}

static int
autohelperowl_defendpat27(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_defendpat29(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);

  return play_attack_defend_n(color, 1, 3, move, a, b, c) && !ATTACK_MACRO(c);
}

static int
autohelperowl_defendpat30(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(645, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_defendpat37(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(682, trans, move);

  return !somewhere(OTHER_COLOR(color), 0, 1, A) || !DEFEND_MACRO(A);
}

static int
autohelperowl_defendpat43(int trans, int move, int color, int action)
{
  int B;
  UNUSED(color);
  UNUSED(action);

  B = AFFINE_TRANSFORM(646, trans, move);

  return  play_attack_defend_n(color, 1, 1, move, B);
}

static int
autohelperowl_defendpat48(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(682, trans, move);

  return play_attack_defend2_n(color, 1, 4, move, a, b, c, a, c);
}

static int
autohelperowl_defendpat52(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(611, trans, move);

  return  play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_defendpat53(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(648, trans, move);

  return  !play_attack_defend_n(color, 0, 1, move, A);
}

static int
autohelperowl_defendpat57(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(572, trans, move);
  b = AFFINE_TRANSFORM(609, trans, move);
  c = AFFINE_TRANSFORM(573, trans, move);

  return  somewhere(color, 0, 3, a, b, c);
}

static int
autohelperowl_defendpat61(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(757, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return play_attack_defend_n(OTHER_COLOR(color), 1, 2, a, b, c) && !play_attack_defend_n(color, 1, 3, move, a, b, c);
}

static int
autohelperowl_defendpat64(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(611, trans, move);

  return owl_goal_dragon(a) && owl_escape_value(b)>0;
}

static int
autohelperowl_defendpat65(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);

  return owl_goal_dragon(a) && !play_attack_defend_n(color, 1, 1, move, a);
}

static int
autohelperowl_defendpat66(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(573, trans, move);

  return owl_goal_dragon(a) && !play_attack_defend_n(color, 1, 1, move, a);
}

static int
autohelperowl_defendpat67(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);

  return owl_eyespace(a);
}

static int
autohelperowl_defendpat68(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(794, trans, move);

  return play_connect_n(color, 1, 2, move, a, move, b);
}

static int
autohelperowl_defendpat69(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(610, trans, move);
  d = AFFINE_TRANSFORM(572, trans, move);
  e = AFFINE_TRANSFORM(573, trans, move);

  return  safe_move(move, color) || ((owl_escape_value(c) > 0 || owl_escape_value(d) >0 || owl_escape_value(e)>0)  && play_attack_defend_n(color, 1, 3, move, a, b, a));
}

static int
autohelperowl_defendpat70(int trans, int move, int color, int action)
{
  int a, b, c, d, e, F;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(537, trans, move);
  d = AFFINE_TRANSFORM(574, trans, move);
  e = AFFINE_TRANSFORM(648, trans, move);
  F = AFFINE_TRANSFORM(685, trans, move);

  return countlib(F)>=3 && owl_topological_eye(a, board[b])<=2 && !play_attack_defend_n(OTHER_COLOR(color), 1, 3, c, d, e, c);
}

static int
autohelperowl_defendpat72(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  C = AFFINE_TRANSFORM(721, trans, move);

  return play_connect_n(color, 0, 2, move, a, a, C) && play_connect_n(color, 0, 2, move, b, b, C);
}

static int
autohelperowl_defendpat73(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(686, trans, move);

  return owl_escape_value(a) > 1;
}

static int
autohelperowl_defendpat74(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);

  return owl_escape_value(a) > 1;
}

static int
autohelperowl_defendpat77(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return  does_attack(move, a);
}

static int
autohelperowl_defendpat79(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(686, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);

  return play_attack_defend2_n(color, 1, 4, move, a, b, c, a, c) && play_attack_defend2_n(color, 1, 4, move, b, a, d, b, d);
}

static int
autohelperowl_defendpat80(int trans, int move, int color, int action)
{
  int b, c, D;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(610, trans, move);
  D = AFFINE_TRANSFORM(611, trans, move);

  return  play_attack_defend_n(color, 1, 4, move, NO_MOVE, c, b, D);
}

static int
autohelperowl_defendpat81(int trans, int move, int color, int action)
{
  int b, c;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, b, b) && play_attack_defend_n(color, 1, 2, move, c, c) && safe_move(move, OTHER_COLOR(color));
}

static int
autohelperowl_defendpat82(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend_n(color, 1, 1, move, b) && play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_defendpat83(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, a, a) && !obvious_false_eye(a, color);
}

static int
autohelperowl_defendpat84(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, a) && play_attack_defend_n(color, 1, 2, move, b, b);
}

static int
autohelperowl_defendpat85(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);

  return  countlib(a)>1 && safe_move(b, OTHER_COLOR(color)) && play_attack_defend_n(color, 1, 2, move, b, b);
}

static int
autohelperowl_defendpat86(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);

  return  countlib(a)>2 && countlib(c)>2 && safe_move(b, OTHER_COLOR(color)) && play_attack_defend_n(color, 1, 2, move, b, b);
}

static int
autohelperowl_defendpat87(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_defendpat90(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_defendpat91(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_defendpat92(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(646, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);

  return does_attack(move, A) && does_defend(move, b);
}

static int
autohelperowl_defendpat93(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);

  return  does_attack(move, A);
}

static int
autohelperowl_defendpat94(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(610, trans, move);

  return  countlib(A)>1;
}

static int
autohelperowl_defendpat96(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);

  return !ATTACK_MACRO(A);
}

static int
autohelperowl_defendpat97(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)==1;
}

static int
autohelperowl_defendpat101(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(645, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);

  return  somewhere(color, 0, 2, b, c)||!play_attack_defend_n(color, 0, 5, move, a, b, c, d, c);
}

static int
autohelperowl_defendpat108(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(719, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, a, a) && !play_attack_defend2_n(OTHER_COLOR(color), 1, 1, a, a, c) && play_attack_defend_n(color, 1, 3, move, b, a, b);
}

static int
autohelperowl_defendpat109(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(649, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);

  return owl_proper_eye(a)&& play_attack_defend_n(color, 1, 3, move, b, c, b);
}

static int
autohelperowl_defendpat110(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(686, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);

  return  countlib(a)>1 && safe_move(b, OTHER_COLOR(color)) && !obvious_false_eye(b, color) && play_attack_defend_n(color, 1, 2, move, b, b) && does_attack(b, c);
}

static int
autohelperowl_defendpat111(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);
  d = AFFINE_TRANSFORM(646, trans, move);

  return  countlib(a)>1 && safe_move(b, OTHER_COLOR(color)) && play_attack_defend_n(color, 1, 3, move, d, b, d) && play_attack_defend_n(OTHER_COLOR(color), 0, 1, b, c) != WIN;
}

static int
autohelperowl_defendpat112(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);
  d = AFFINE_TRANSFORM(646, trans, move);

  return  countlib(a)>1 && safe_move(b, OTHER_COLOR(color)) && play_attack_defend_n(color, 1, 2, move, b, b) && does_attack(b, c) && play_attack_defend_n(color, 1, 2, move, d, d);
}

static int
autohelperowl_defendpat113(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);

  return does_defend(move, a);
}

static int
autohelperowl_defendpat114(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);

  return does_defend(move, a);
}

static int
autohelperowl_defendpat115(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);

  return does_defend(move, a);
}

static int
autohelperowl_defendpat116(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);

  return does_defend(move, a);
}

static int
autohelperowl_defendpat117(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(756, trans, move);

  return  !play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_defendpat120(int trans, int move, int color, int action)
{
  int c, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(759, trans, move);
  A = AFFINE_TRANSFORM(720, trans, move);
  B = AFFINE_TRANSFORM(758, trans, move);

  return countlib(A)>1 && countlib(B)>1 && countlib(c)==2;
}

static int
autohelperowl_defendpat121(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);

  return !play_attack_defend_n(color, 0, 3, move, a, b, a);
}

static int
autohelperowl_defendpat124(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, a) && play_attack_defend_n(color, 1, 2, move, b, b);
}

static int
autohelperowl_defendpat125(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(759, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, a) && play_attack_defend_n(color, 1, 2, move, b, b) && play_attack_defend_n(color, 1, 2, move, c, c);
}

static int
autohelperowl_defendpat126(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(647, trans, move);
  A = AFFINE_TRANSFORM(720, trans, move);

  return (!obvious_false_eye(b, color) || play_attack_defend_n(color, 1, 1, move, A))&& !play_attack_defend_n(OTHER_COLOR(color), 1, 1, move, A);
}

static int
autohelperowl_defendpat127(int trans, int move, int color, int action)
{
  int b, A, C;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(647, trans, move);
  A = AFFINE_TRANSFORM(610, trans, move);
  C = AFFINE_TRANSFORM(573, trans, move);

  return  !play_attack_defend_n(color, 0, 3, move, A, b, C);
}

static int
autohelperowl_defendpat129(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);

  return countlib(a) == 1 && !obvious_false_eye(b, color) && !obvious_false_eye(c, color);
}

static int
autohelperowl_defendpat130(int trans, int move, int color, int action)
{
  int A, B, C;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);
  C = AFFINE_TRANSFORM(647, trans, move);

  return countlib(A)==1 && countlib(B)==1 && countlib(C)==2;
}

static int
autohelperowl_defendpat131(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return does_attack(move, A);
}

static int
autohelperowl_defendpat132(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return owl_eyespace(a) && does_attack(move, B);
}

static int
autohelperowl_defendpat134(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(832, trans, move);

  return accuratelib(a, color, MAX_LIBERTIES, NULL)==1;
}

static int
autohelperowl_defendpat135(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(685, trans, move);

  return countlib(A) == 2;
}

static int
autohelperowl_defendpat138(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(685, trans, move);

  return play_attack_defend_n(color, 0, 1, move, A) != WIN;
}

static int
autohelperowl_defendpat140(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(649, trans, move);

  return countlib(A)==2 && play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, b, b);
}

static int
autohelperowl_defendpat141(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return accuratelib(move, OTHER_COLOR(color), MAX_LIBERTIES, NULL)>1;
}

static int
autohelperowl_defendpat142(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return accuratelib(move, OTHER_COLOR(color), MAX_LIBERTIES, NULL)>1;
}

static int
autohelperowl_defendpat143(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)<=2;
}

static int
autohelperowl_defendpat144(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(795, trans, move);

  return countlib(A)<=2;
}

static int
autohelperowl_defendpat146(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(795, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return countlib(a)==2 && countlib(B)==3;
}

static int
autohelperowl_defendpat148(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(686, trans, move);
  A = AFFINE_TRANSFORM(758, trans, move);

  return !ATTACK_MACRO(A) && play_attack_defend_n(color, 1, 2, move, b, b);
}

static int
autohelperowl_defendpat149(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(609, trans, move);

  return  !somewhere(OTHER_COLOR(color), 0, 1, a) || !somewhere(OTHER_COLOR(color), 0, 1, b);
}

static int
autohelperowl_defendpat151(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  return countlib(a)==1 && !obvious_false_eye(b, color);
}

static int
autohelperowl_defendpat153(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(646, trans, move);

  return  play_attack_defend_n(color, 0, 1, move, A)  && play_attack_defend_n(color, 1, 2, move, B, A);
}

static int
autohelperowl_defendpat154(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(685, trans, move);

  return  !play_attack_defend_n(OTHER_COLOR(color), 1, 1, move, move) && play_attack_defend_n(color, 1, 2, move, A, A);
}

static int
autohelperowl_defendpat156(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return  DEFEND_MACRO(A) && play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_defendpat157(int trans, int move, int color, int action)
{
  int A, B, C;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(686, trans, move);
  C = AFFINE_TRANSFORM(648, trans, move);

  return  play_attack_defend_n(color, 1, 1, move, C) && play_attack_defend_n(color, 0, 2, move, A, move) && play_attack_defend_n(color, 0, 2, move, B, move);
}

static int
autohelperowl_defendpat158(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return  play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_defendpat160(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);

  return  countlib(A) < 4 && play_attack_defend_n(color, 1, 1, move, B);
}

static int
autohelperowl_defendpat161(int trans, int move, int color, int action)
{
  int a, c, e, B, D, F;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);
  e = AFFINE_TRANSFORM(685, trans, move);
  B = AFFINE_TRANSFORM(646, trans, move);
  D = AFFINE_TRANSFORM(611, trans, move);
  F = AFFINE_TRANSFORM(647, trans, move);

  return  !play_attack_defend_n(color, 0, 7, move, a, B, c, D, e, F, a);
}

static int
autohelperowl_defendpat162(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return  play_attack_defend_n(color, 1, 3, move, a, B, a);
}

static int
autohelperowl_defendpat163(int trans, int move, int color, int action)
{
  int b, d, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(720, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);
  A = AFFINE_TRANSFORM(721, trans, move);

  return  is_ko_point(b) && owl_topological_eye(move, board[A]) > 2 && !obvious_false_eye(d, color);
}

static int
autohelperowl_defendpat165(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(611, trans, move);

  return !play_attack_defend_n(color, 0, 1, move, A);
}

static int
autohelperowl_defendpat166(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return !obvious_false_eye(a, color) && !play_attack_defend_n(color, 1, 2, b, move, move);
}

static int
autohelperowl_defendpat167(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return !obvious_false_eye(a, color) || !obvious_false_eye(b, color);
}

static int
autohelperowl_defendpat168(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  C = AFFINE_TRANSFORM(721, trans, move);

  return !obvious_false_eye(a, color)&& play_attack_defend_n(color, 1, 2, move, b, C) && !ATTACK_MACRO(C);
}

static int
autohelperowl_defendpat172(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);

  return owl_proper_eye(a) && does_attack(move, B) && !obvious_false_eye(B, color);
}

static int
autohelperowl_defendpat174(int trans, int move, int color, int action)
{
  int a, b, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(759, trans, move);
  B = AFFINE_TRANSFORM(722, trans, move);

  return  (owl_topological_eye(a, board[B])>=2) && (owl_topological_eye(b, board[B])==2);
}

static int
autohelperowl_defendpat175(int trans, int move, int color, int action)
{
  int a, b, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return  (owl_topological_eye(a, board[B])==2) && ((owl_topological_eye(b, board[B])==2) || (owl_topological_eye(b, board[B])==3));
}

static int
autohelperowl_defendpat176(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return owl_topological_eye(a, board[B])==3 && does_attack(move, B);
}

static int
autohelperowl_defendpat177(int trans, int move, int color, int action)
{
  int a, b, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(682, trans, move);

  return  owl_topological_eye(a, board[B])==3 && safe_move(b, OTHER_COLOR(color)) && safe_move(move, OTHER_COLOR(color)) && play_attack_defend_n(color, 1, 2, move, b, b);
}

static int
autohelperowl_defendpat178(int trans, int move, int color, int action)
{
  int b, c;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(757, trans, move);

  return  (safe_move(b, OTHER_COLOR(color)) || safe_move(move, OTHER_COLOR(color))) && play_attack_defend_n(color, 1, 2, move, b, b) && (somewhere(color, 0, 1, c) || !safe_move(c, OTHER_COLOR(color)));
}

static int
autohelperowl_defendpat179(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return  does_attack(move, a);
}

static int
autohelperowl_defendpat180(int trans, int move, int color, int action)
{
  int a, b, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);
  B = AFFINE_TRANSFORM(647, trans, move);

  return  countlib(a)==2 && owl_topological_eye(b, board[B])==3;
}

static int
autohelperowl_defendpat181(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);

  return  play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_defendpat182(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return  play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_defendpat183(int trans, int move, int color, int action)
{
  int a, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);

  return accuratelib(a, color, MAX_LIBERTIES, NULL)<=2 && does_attack(move, A);
}

static int
autohelperowl_defendpat184(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return !owl_big_eyespace(a) && !obvious_false_eye(a, color);
}

static int
autohelperowl_defendpat185(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return countlib(A)==1 && countstones(A)>=3;
}

static int
autohelperowl_defendpat186(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)==1 && countstones(A)>=3;
}

static int
autohelperowl_defendpat187(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  B = AFFINE_TRANSFORM(795, trans, move);

  return owl_topological_eye(a, board[B])==3;
}

static int
autohelperowl_defendpat189(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return  countlib(a)==2 && accuratelib(move, OTHER_COLOR(color), MAX_LIBERTIES, NULL)>1 && owl_big_eyespace(move);
}

static int
autohelperowl_defendpat190(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);

  return accuratelib(a, OTHER_COLOR(color), MAX_LIBERTIES, NULL)>1 && owl_big_eyespace(a) && play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_defendpat191(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(719, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return countlib(a)==2 && countlib(B)==3 && owl_big_eyespace(move);
}

static int
autohelperowl_defendpat192(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);

  return owl_eyespace(a) && !owl_big_eyespace(a);
}

static int
autohelperowl_defendpat193(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(720, trans, move);

  return !play_attack_defend_n(color, 0, 1, move, A);
}

static int
autohelperowl_defendpat195(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return owl_proper_eye(a);
}

static int
autohelperowl_defendpat197(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(648, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);

  return !obvious_false_eye(b, color) && play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_defendpat203(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return !obvious_false_eye(a, color);
}

static int
autohelperowl_defendpat204(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);

  return countlib(a) > 2;
}

static int
autohelperowl_defendpat209(int trans, int move, int color, int action)
{
  int a, b, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);

  return ATTACK_MACRO(A) && !play_attack_defend_n(color, 0, 3, move, a, b, A);
}

static int
autohelperowl_defendpat210(int trans, int move, int color, int action)
{
  int a, b, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);

  return ATTACK_MACRO(A) && play_attack_defend_n(color, 0, 3, move, a, b, A) != WIN;
}

static int
autohelperowl_defendpat211(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return does_attack(move, A);
}

static int
autohelperowl_defendpat212(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_defendpat213(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);

  return !play_attack_defend_n(color, 0, 2, move, a, a);
}

static int
autohelperowl_defendpat221(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(609, trans, move);

  return ATTACK_MACRO(a) && ! play_attack_defend_n(color, 1, 1, move, a);
}

static int
autohelperowl_defendpat222(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return play_attack_defend_n(color, 0, 1, move, A) != WIN;
}

static int
autohelperowl_defendpat223(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(608, trans, move);

  return countlib(a) == 2;
}

static int
autohelperowl_defendpat226(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(645, trans, move);

  return !play_attack_defend_n(color, 0, 1, move, A);
}

static int
autohelperowl_defendpat228(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(611, trans, move);

  return countlib(A)==1;
}

static int
autohelperowl_defendpat232(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  B = AFFINE_TRANSFORM(647, trans, move);

  return !play_attack_defend_n(color, 1, 1, move, a) && play_attack_defend_n(color, 1, 1, move, B);
}

static int
autohelperowl_defendpat233(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_defendpat236(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(755, trans, move);

  return countlib(a)==2;
}

static int
autohelperowl_defendpat237(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(573, trans, move);

  return countlib(a)==2;
}

static int
autohelperowl_defendpat239(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return play_attack_defend_n(color, 0, 1, move, A) != WIN;
}

static int
autohelperowl_defendpat243(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, A, A);
}

static int
autohelperowl_defendpat245(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(685, trans, move);

  return play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_defendpat246(int trans, int move, int color, int action)
{
  int b, c, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(682, trans, move);
  A = AFFINE_TRANSFORM(720, trans, move);

  return does_attack(move, A) && play_attack_defend_n(OTHER_COLOR(color), 1, 3, b, move, c, A);
}

static int
autohelperowl_defendpat251(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);

  return owl_proper_eye(a) && owl_proper_eye(b) && owl_big_eyespace(a);
}

static int
autohelperowl_defendpat252(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return countlib(a)==2;
}

static int
autohelperowl_defendpat255(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);

  return play_attack_defend_n(color, 1, 1, move, a)!=WIN;
}

static int
autohelperowl_defendpat256(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return  does_attack(move, A);
}

static int
autohelperowl_defendpat257(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(720, trans, move);

  return  does_attack(move, A);
}

static int
autohelperowl_defendpat258(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return  does_attack(move, A);
}

static int
autohelperowl_defendpat259(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return  does_attack(move, A);
}

static int
autohelperowl_defendpat262(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_defendpat263(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return countlib(a)==1 && owl_eyespace(move) && accuratelib(move, color, MAX_LIBERTIES, NULL) > 0;
}

static int
autohelperowl_defendpat265(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(686, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return play_attack_defend_n(OTHER_COLOR(color), 1, 3, a, move, b, b);
}

static int
autohelperowl_defendpat266(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);

  return  somewhere(color, 0, 4, a, b, c, d);
}

static int
autohelperowl_defendpat267(int trans, int move, int color, int action)
{
  int a, B, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  B = AFFINE_TRANSFORM(647, trans, move);
  C = AFFINE_TRANSFORM(685, trans, move);

  return  (countstones(B) > 1 && countstones(C) > 1)  && safe_move(move, OTHER_COLOR(color)) && !play_attack_defend_n(OTHER_COLOR(color), 1, 1, move, a);
}

static int
autohelperowl_defendpat268(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return  countlib(A) == 1 && countstones(A) > 2;
}

static int
autohelperowl_defendpat269(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);

  return !ATTACK_MACRO(a) || (countstones(a)<=2 && does_attack(move, a));
}

static int
autohelperowl_defendpat271(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);

  return  !ATTACK_MACRO(a) && accuratelib(move, OTHER_COLOR(color), MAX_LIBERTIES, NULL) > 1;
}

static int
autohelperowl_defendpat272(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(686, trans, move);
  c = AFFINE_TRANSFORM(649, trans, move);

  return countlib(b)>1 && play_attack_defend_n(color, 1, 2, move, a, a) && !play_attack_defend2_n(OTHER_COLOR(color), 1, 3, move, NO_MOVE, a, a, c);
}

static int
autohelperowl_defendpat273(int trans, int move, int color, int action)
{
  int a, b, c, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(686, trans, move);
  c = AFFINE_TRANSFORM(649, trans, move);
  D = AFFINE_TRANSFORM(722, trans, move);

  return (countlib(b)>1 && play_attack_defend_n(color, 1, 2, move, a, a) && !play_attack_defend2_n(OTHER_COLOR(color), 1, 3, move, NO_MOVE, a, a, c))&& (!somewhere(OTHER_COLOR(color), 0, 1, D) || play_attack_defend_n(color, 1, 2, move, a, D))&& (!is_legal(D, OTHER_COLOR(color)) || play_attack_defend_n(color, 1, 2, move, D, D));
}

static int
autohelperowl_defendpat276(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);
  C = AFFINE_TRANSFORM(683, trans, move);

  return countlib(a)>1 && countlib(b)>1 && !ATTACK_MACRO(C);
}

static int
autohelperowl_defendpat277(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);

  return (owl_escape_value(a)>0 || owl_escape_value(b)>0) && countlib(a)>1 && countlib(b)>1;
}

static int
autohelperowl_defendpat278(int trans, int move, int color, int action)
{
  int b, c, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A) == 2 && countlib(b)>1 && countlib(c)>1 && !ATTACK_MACRO(A) && !play_connect_n(color, 0, 1, move, b, c);
}

static int
autohelperowl_defendpat279(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return vital_chain(A) && vital_chain(B) && !is_ko_point(move) && !play_attack_defend2_n(color, 0, 1, move, A, B);
}

static int
autohelperowl_defendpat280(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return vital_chain(A)>1 && vital_chain(B)>1 && !play_attack_defend2_n(color, 0, 1, move, A, B);
}

static int
autohelperowl_defendpat281(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);

  return  play_break_through_n(color, 2, move, a, b, a, c) == WIN;
}

static int
autohelperowl_defendpat282(int trans, int move, int color, int action)
{
  int c, d, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(720, trans, move);
  d = AFFINE_TRANSFORM(722, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return (countlib(A)<=3 && accuratelib(c, color, MAX_LIBERTIES, NULL)>2) || (countlib(B)<=3 && accuratelib(d, color, MAX_LIBERTIES, NULL)>2);
}

static int
autohelperowl_defendpat284(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(610, trans, move);

  return play_attack_defend2_n(color, 1, 2, move, a, B, a);
}

static int
autohelperowl_defendpat285(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);

  return  does_attack(move, a);
}

static int
autohelperowl_defendpat287(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, a, B);
}

static int
autohelperowl_defendpat289(int trans, int move, int color, int action)
{
  int a, e, f, B, C, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);
  e = AFFINE_TRANSFORM(796, trans, move);
  f = AFFINE_TRANSFORM(648, trans, move);
  B = AFFINE_TRANSFORM(794, trans, move);
  C = AFFINE_TRANSFORM(758, trans, move);
  D = AFFINE_TRANSFORM(685, trans, move);

  return  !play_attack_defend2_n(color, 0, 3, move, f, a, B, C) && play_attack_defend_n(color, 1, 1, move, D) && !safe_move(e, OTHER_COLOR(color));
}

static int
autohelperowl_defendpat290(int trans, int move, int color, int action)
{
  int a, B, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(686, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);
  C = AFFINE_TRANSFORM(685, trans, move);

  return owl_goal_dragon(a) && !play_attack_defend2_n(color, 0, 1, move, B, C);
}

static int
autohelperowl_defendpat291(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return  play_attack_defend_n(color, 1, 1, move, A) && play_attack_defend_n(color, 1, 1, move, B);
}

static int
autohelperowl_defendpat292(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, a, B);
}

static int
autohelperowl_defendpat293(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, g, h, i;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(759, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);
  d = AFFINE_TRANSFORM(760, trans, move);
  e = AFFINE_TRANSFORM(797, trans, move);
  f = AFFINE_TRANSFORM(723, trans, move);
  g = AFFINE_TRANSFORM(685, trans, move);
  h = AFFINE_TRANSFORM(720, trans, move);
  i = AFFINE_TRANSFORM(795, trans, move);

  return owl_goal_dragon(h) && countlib(i)>1 && play_attack_defend_n(color, 1, 8, move, a, b, c, d, e, f, g, e);
}

static int
autohelperowl_defendpat294(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, g;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);
  d = AFFINE_TRANSFORM(648, trans, move);
  e = AFFINE_TRANSFORM(610, trans, move);
  f = AFFINE_TRANSFORM(645, trans, move);
  g = AFFINE_TRANSFORM(720, trans, move);

  return owl_goal_dragon(f) && countlib(g)>1 && play_attack_defend_n(color, 1, 6, move, a, b, c, d, e, c);
}

static int
autohelperowl_defendpat295(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(759, trans, move);
  d = AFFINE_TRANSFORM(724, trans, move);
  e = AFFINE_TRANSFORM(649, trans, move);

  return owl_goal_dragon(d) && countlib(e)>1 && play_attack_defend_n(color, 1, 4, move, a, b, c, a);
}

static int
autohelperowl_defendpat296(int trans, int move, int color, int action)
{
  int a, c, d, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(687, trans, move);
  d = AFFINE_TRANSFORM(612, trans, move);
  B = AFFINE_TRANSFORM(611, trans, move);

  return owl_goal_dragon(c) && countlib(d)>1 && play_attack_defend_n(color, 1, 2, move, a, B);
}

static int
autohelperowl_defendpat298(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_defendpat299(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, B);
}

static int
autohelperowl_defendpat300(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(760, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, B) && countstones(B) > 2;
}

static int
autohelperowl_defendpat302(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(681, trans, move);
  b = AFFINE_TRANSFORM(795, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_defendpat303(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(718, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_defendpat307(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend2_n(color, 1, 2, move, a, a, B);
}

static int
autohelperowl_defendpat308(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return play_attack_defend_n(color, 1, 1, move, A) || play_attack_defend_n(color, 1, 1, move, B);
}

static int
autohelperowl_defendpat309(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  B = AFFINE_TRANSFORM(647, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, B);
}

static int
autohelperowl_defendpat310(int trans, int move, int color, int action)
{
  int c, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(646, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return countlib(A)==2 && owl_escape_value(c)>0 && !play_attack_defend2_n(color, 0, 1, move, A, B);
}

static int
autohelperowl_defendpat311(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  c = AFFINE_TRANSFORM(609, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_defendpat312(int trans, int move, int color, int action)
{
  int b, c, A, B;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return countlib(c)>1 && play_attack_defend_n(color, 1, 1, move, A) && play_attack_defend_n(color, 1, 2, move, b, B);
}

static int
autohelperowl_defendpat313(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);

  return countlib(a)>1;
}

static int
autohelperowl_defendpat316(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  return  !safe_move(a, OTHER_COLOR(color)) && countlib(b)>1;
}

static int
autohelperowl_defendpat317(int trans, int move, int color, int action)
{
  int a, b, C, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  C = AFFINE_TRANSFORM(647, trans, move);
  D = AFFINE_TRANSFORM(683, trans, move);

  return owl_goal_dragon(a) && owl_escape_value(b)>0&& play_attack_defend_n(color, 1, 1, move, C) && play_attack_defend_n(color, 1, 1, move, D);
}

static int
autohelperowl_defendpat318(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return  play_attack_defend2_n(color, 1, 1, move, A, B);
}

static int
autohelperowl_defendpat319(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_defendpat321(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);

  return  owl_escape_value(a)>0 && play_attack_defend_n(color, 1, 2, move, a, B);
}

static int
autohelperowl_defendpat322(int trans, int move, int color, int action)
{
  int a, c, d, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(611, trans, move);
  d = AFFINE_TRANSFORM(649, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return countlib(B)<=4 && owl_escape_value(c) + owl_escape_value(d) > 0&& play_attack_defend2_n(color, 1, 2, move, a, a, B);
}

static int
autohelperowl_defendpat323(int trans, int move, int color, int action)
{
  int d, e, f, A, B, C;
  UNUSED(color);
  UNUSED(action);

  d = AFFINE_TRANSFORM(722, trans, move);
  e = AFFINE_TRANSFORM(609, trans, move);
  f = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(611, trans, move);
  B = AFFINE_TRANSFORM(647, trans, move);
  C = AFFINE_TRANSFORM(685, trans, move);

  return  countlib(C) == 2 && (owl_escape_value(e) > 0 || vital_chain(A)) && (owl_escape_value(f) > 0 || vital_chain(C)) && accuratelib(move, color, MAX_LIBERTIES, NULL) > 1 && play_attack_defend2_n(color, 1, 2, move, d, B, A);
}

static int
autohelperowl_defendpat324(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);

  return  (owl_escape_value(move) > 0) && !play_attack_defend2_n(color, 0, 1, move, a, b);
}

static int
autohelperowl_defendpat325(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);
  d = AFFINE_TRANSFORM(685, trans, move);

  return (owl_escape_value(b) > 0 || owl_escape_value(c) > 0 || owl_escape_value(d) > 0)&& play_attack_defend_n(color, 1, 1, move, a);
}

static int
autohelperowl_defendpat326(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return  countlib(a) == 2 || play_attack_defend_n(color, 1, 1, move, a);
}

static int
autohelperowl_defendpat327(int trans, int move, int color, int action)
{
  int A, B, C;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(759, trans, move);
  C = AFFINE_TRANSFORM(720, trans, move);

  return  does_defend(move, A) && !play_attack_defend_n(color, 1, 1, move, B) && !same_string(B, C) && vital_chain(B) && vital_chain(C) && (play_attack_defend_n(color, 1, 1, move, B) || play_attack_defend_n(color, 1, 1, move, C)) && !play_connect_n(color, 1, 1, move, B, C);
}

static int
autohelperowl_defendpat328(int trans, int move, int color, int action)
{
  int c, d, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(758, trans, move);
  d = AFFINE_TRANSFORM(723, trans, move);
  A = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(648, trans, move);

  return countlib(A)==2 && countlib(c)>1 && countlib(d)>1 && play_attack_defend_n(color, 1, 1, move, B);
}

static int
autohelperowl_defendpat329(int trans, int move, int color, int action)
{
  int b, c, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);
  A = AFFINE_TRANSFORM(721, trans, move);

  return  countlib(A) == 1 && (owl_escape_value(b) > 0 || owl_escape_value(c) > 0);
}

static int
autohelperowl_defendpat330(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return  countlib(A) == 1;
}

static int
autohelperowl_defendpat332(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return  countlib(A)==2;
}

static int
autohelperowl_defendpat333(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return  countlib(A)==2 && !play_attack_defend2_n(color, 0, 1, move, A, B);
}

static int
autohelperowl_defendpat334(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(685, trans, move);
  B = AFFINE_TRANSFORM(646, trans, move);

  return countlib(A) <= 2 && (somewhere(color, 0, 1, B) || !ATTACK_MACRO(A) || DEFEND_MACRO(A));
}

static int
autohelperowl_defendpat335(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(721, trans, move);
  A = AFFINE_TRANSFORM(646, trans, move);

  return !ATTACK_MACRO(A) && play_attack_defend_n(color, 1, 1, move, A) && !obvious_false_eye(b, color);
}

static int
autohelperowl_defendpat336(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(721, trans, move);
  A = AFFINE_TRANSFORM(647, trans, move);

  return countstones(A)>=3 && !ATTACK_MACRO(A) && play_attack_defend_n(color, 1, 1, move, A) && !obvious_false_eye(b, color);
}

static int
autohelperowl_defendpat337(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_defendpat338(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(685, trans, move);

  return  play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_defendpat339(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, a) && play_attack_defend_n(color, 1, 2, move, b, b);
}

static int
autohelperowl_defendpat340(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(646, trans, move);

  return owl_escape_value(c)>0 && play_attack_defend2_n(color, 1, 2, move, a, a, b);
}

static int
autohelperowl_defendpat341(int trans, int move, int color, int action)
{
  int a, c, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return owl_escape_value(c)>0 && play_attack_defend2_n(color, 1, 2, move, a, a, B);
}

static int
autohelperowl_defendpat342(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, g;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);
  d = AFFINE_TRANSFORM(759, trans, move);
  e = AFFINE_TRANSFORM(685, trans, move);
  f = AFFINE_TRANSFORM(647, trans, move);
  g = AFFINE_TRANSFORM(758, trans, move);

  return (!owl_goal_dragon(f) || !owl_goal_dragon(g))&& (play_attack_defend_n(color, 1, 6, move, a, b, c, d, e, e) || play_attack_defend_n(color, 1, 6, move, a, b, c, e, d, d));
}

static int
autohelperowl_defendpat343(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);

  return (!owl_goal_dragon(a) || !owl_goal_dragon(b))&& !play_connect_n(color, 0, 1, move, a, b);
}

static int
autohelperowl_defendpat344(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(685, trans, move);
  e = AFFINE_TRANSFORM(722, trans, move);

  return !(somewhere(color, 0, 1, d) && somewhere(color, 0, 1, e))&& (!owl_goal_dragon(b) || !owl_goal_dragon(c)) && play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_defendpat345(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_defendpat346(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(719, trans, move);
  b = AFFINE_TRANSFORM(756, trans, move);
  c = AFFINE_TRANSFORM(757, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_defendpat347(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(646, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_defendpat348(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) > 0;
}

static int
autohelperowl_defendpat349(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(a) > 0;
}

static int
autohelperowl_defendpat350(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) > 0;
}

static int
autohelperowl_defendpat351(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) > 0;
}

static int
autohelperowl_defendpat352(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(759, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) > 0;
}

static int
autohelperowl_defendpat353(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);
  b = AFFINE_TRANSFORM(719, trans, move);
  c = AFFINE_TRANSFORM(757, trans, move);
  d = AFFINE_TRANSFORM(645, trans, move);
  e = AFFINE_TRANSFORM(646, trans, move);

  return (!somewhere(OTHER_COLOR(color), 0, 1, e) && !somewhere(OTHER_COLOR(color), 0, 1, d) && (owl_escape_value(a) > 0))|| owl_escape_value(b) > 0|| owl_escape_value(c) > 0;
}

static int
autohelperowl_defendpat354(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(759, trans, move);
  c = AFFINE_TRANSFORM(723, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_defendpat355(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(650, trans, move);
  b = AFFINE_TRANSFORM(613, trans, move);
  c = AFFINE_TRANSFORM(575, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_defendpat356(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) > 0;
}

static int
autohelperowl_defendpat357(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return owl_escape_value(move) > 0;
}

static int
autohelperowl_defendpat358(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return  owl_escape_value(a) > 0 || owl_escape_value(b) > 0;
}

static int
autohelperowl_defendpat359(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);

  return !owl_goal_dragon(a);
}

static int
autohelperowl_defendpat360(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);

  return owl_strong_dragon(a);
}

static int
autohelperowl_defendpat361(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(686, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_defendpat362(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(723, trans, move);
  b = AFFINE_TRANSFORM(760, trans, move);
  c = AFFINE_TRANSFORM(759, trans, move);
  d = AFFINE_TRANSFORM(686, trans, move);
  e = AFFINE_TRANSFORM(758, trans, move);

  return owl_escape_value(a) > 0 || owl_escape_value(b) > 0|| owl_escape_value(c) > 0 || owl_escape_value(d) > 0|| owl_escape_value(e) > 0;
}

static int
autohelperowl_defendpat364(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  return !owl_goal_dragon(a) || !owl_goal_dragon(b);
}

static int
autohelperowl_defendpat365(int trans, int move, int color, int action)
{
  int c, d, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(720, trans, move);
  d = AFFINE_TRANSFORM(721, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return  (!owl_goal_dragon(A) || !owl_goal_dragon(B)) && !play_attack_defend2_n(OTHER_COLOR(color), 1, 3, move, d, c, c, move);
}

static int
autohelperowl_defendpat366(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  return owl_strong_dragon(a) || owl_strong_dragon(b);
}

static int
autohelperowl_defendpat367(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(686, trans, move);

  return !owl_goal_dragon(a) || !owl_goal_dragon(b);
}

static int
autohelperowl_defendpat368(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(686, trans, move);

  return owl_strong_dragon(a) || owl_strong_dragon(b);
}

static int
autohelperowl_defendpat369(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  C = AFFINE_TRANSFORM(647, trans, move);

  return (!owl_goal_dragon(a) || !owl_goal_dragon(b)) && countlib(C) <= 2 && countlib(a) > 1;
}

static int
autohelperowl_defendpat370(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_defendpat371(int trans, int move, int color, int action)
{
  int d, A, B, C;
  UNUSED(color);
  UNUSED(action);

  d = AFFINE_TRANSFORM(647, trans, move);
  A = AFFINE_TRANSFORM(682, trans, move);
  B = AFFINE_TRANSFORM(645, trans, move);
  C = AFFINE_TRANSFORM(646, trans, move);

  return (owl_escape_value(A) > 0 || owl_escape_value(B) > 0 || owl_escape_value(C) > 0)&& play_attack_defend_n(color, 1, 1, move, d);
}

static int
autohelperowl_defendpat372(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(686, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_defendpat373(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  C = AFFINE_TRANSFORM(647, trans, move);

  return (owl_escape_value(a)>0 || owl_escape_value(b)>0) && countlib(C) <= 2 && countlib(a) > 1;
}

static int
autohelperowl_defendpat374(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_defendpat376(int trans, int move, int color, int action)
{
  int a, b, c, d, f, E;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(648, trans, move);
  f = AFFINE_TRANSFORM(686, trans, move);
  E = AFFINE_TRANSFORM(647, trans, move);

  return owl_escape_value(f)>0 && !play_attack_defend2_n(color, 0, 5, move, a, b, c, d, a, E);
}

static int
autohelperowl_defendpat377(int trans, int move, int color, int action)
{
  int a, b, e, C, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);
  e = AFFINE_TRANSFORM(720, trans, move);
  C = AFFINE_TRANSFORM(645, trans, move);
  D = AFFINE_TRANSFORM(683, trans, move);

  return owl_escape_value(e)>0 && !play_attack_defend2_n(color, 0, 3, move, a, b, C, D);
}

static int
autohelperowl_defendpat378(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(649, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_defendpat379(int trans, int move, int color, int action)
{
  int c, d, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(722, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return owl_escape_value(c)>0 && owl_goal_dragon(d) && !play_attack_defend2_n(color, 0, 1, move, A, B);
}

static int
autohelperowl_defendpat380(int trans, int move, int color, int action)
{
  int c, d;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(648, trans, move);
  d = AFFINE_TRANSFORM(646, trans, move);

  return owl_escape_value(c)>0 && owl_goal_dragon(d);
}

static int
autohelperowl_defendpat381(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return owl_escape_value(move)>0;
}

static int
autohelperowl_defendpat382(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return owl_escape_value(a)>0 && owl_goal_dragon(b) && countlib(b)>1;
}

static int
autohelperowl_defendpat383(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return  owl_escape_value(a)>0;
}

static int
autohelperowl_defendpat384(int trans, int move, int color, int action)
{
  int a, b, c, d, f, E;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);
  d = AFFINE_TRANSFORM(610, trans, move);
  f = AFFINE_TRANSFORM(648, trans, move);
  E = AFFINE_TRANSFORM(609, trans, move);

  return owl_escape_value(f)>0 && !play_attack_defend2_n(color, 0, 5, move, a, b, c, d, c, E);
}

static int
autohelperowl_defendpat385(int trans, int move, int color, int action)
{
  int a, b, d, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  d = AFFINE_TRANSFORM(758, trans, move);
  C = AFFINE_TRANSFORM(685, trans, move);

  return owl_escape_value(d)>0 && !play_attack_defend2_n(color, 0, 3, move, a, b, a, C);
}

static int
autohelperowl_defendpat386(int trans, int move, int color, int action)
{
  int d;
  UNUSED(color);
  UNUSED(action);

  d = AFFINE_TRANSFORM(647, trans, move);

  return owl_escape_value(d)>0;
}

static int
autohelperowl_defendpat387(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(610, trans, move);
  d = AFFINE_TRANSFORM(721, trans, move);

  return (owl_escape_value(c)>0 || owl_escape_value(d)>0) && play_attack_defend_n(color, 1, 2, move, a, a)&& !play_attack_defend2_n(color, 1, 3, move, b, a, move, a) && !play_attack_defend2_n(color, 1, 3, move, b, a, c, a);
}

static int
autohelperowl_defendpat388(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(686, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_defendpat390(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(649, trans, move);
  b = AFFINE_TRANSFORM(611, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) > 0;
}

static int
autohelperowl_defendpat391(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(649, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) > 0;
}

static int
autohelperowl_defendpat392(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  c = AFFINE_TRANSFORM(682, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);

  return somewhere(color, 0, 2, c, d) && (owl_escape_value(a) + owl_escape_value(b) > 0);
}

static int
autohelperowl_defendpat393(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) > 0;
}

static int
autohelperowl_defendpat394(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(686, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_defendpat395(int trans, int move, int color, int action)
{
  int a, b, c, e, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(646, trans, move);
  e = AFFINE_TRANSFORM(720, trans, move);
  D = AFFINE_TRANSFORM(683, trans, move);

  return countlib(D)==2 && countlib(c)>1 && countlib(e)>1&& (owl_escape_value(c)>0 || owl_escape_value(e)>0)&& !play_connect_n(color, 0, 3, move, b, a, c, e);
}

static int
autohelperowl_defendpat396(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(649, trans, move);
  b = AFFINE_TRANSFORM(686, trans, move);
  c = AFFINE_TRANSFORM(723, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_defendpat397(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(610, trans, move);

  return !play_attack_defend_n(color, 0, 1, move, A);
}

static int
autohelperowl_defendpat398(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_defendpat399(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  return owl_strong_dragon(a) || owl_strong_dragon(b);
}

static int
autohelperowl_defendpat400(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  return (owl_strong_dragon(a) || owl_strong_dragon(b)) && !play_connect_n(color, 0, 1, move, a, b);
}

static int
autohelperowl_defendpat401(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return owl_strong_dragon(a) || owl_strong_dragon(b);
}

static int
autohelperowl_defendpat402(int trans, int move, int color, int action)
{
  int b, c, d, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(686, trans, move);
  d = AFFINE_TRANSFORM(649, trans, move);
  A = AFFINE_TRANSFORM(647, trans, move);

  return countlib(A) == 1&& (owl_escape_value(b) + owl_escape_value(c) + owl_escape_value(d)) > 0;
}

static int
autohelperowl_defendpat403(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_defendpat404(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);
  d = AFFINE_TRANSFORM(682, trans, move);

  return !owl_goal_dragon(a) && play_attack_defend2_n(OTHER_COLOR(color), 1, 3, b, c, d, b, d);
}

static int
autohelperowl_defendpat406(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_defendpat407(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(609, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);

  return countlib(a)>1 && countlib(b)>1;
}

static int
autohelperowl_defendpat408(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);
  d = AFFINE_TRANSFORM(682, trans, move);

  return  (owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0) && !play_connect_n(color, 0, 1, move, d, move);
}

static int
autohelperowl_defendpat409(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);
  d = AFFINE_TRANSFORM(682, trans, move);

  return  (owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0) && play_connect_n(color, 0, 1, move, d, move);
}

static int
autohelperowl_defendpat410(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(573, trans, move);

  return  (owl_escape_value(a) + owl_escape_value(move) + owl_escape_value(b) > 0) && !play_connect_n(color, 0, 1, move, c, move);
}

static int
autohelperowl_defendpat411(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(760, trans, move);
  b = AFFINE_TRANSFORM(759, trans, move);
  c = AFFINE_TRANSFORM(758, trans, move);

  return  owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_defendpat412(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(609, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);
  d = AFFINE_TRANSFORM(646, trans, move);
  e = AFFINE_TRANSFORM(683, trans, move);

  return (owl_escape_value(a) > 0 || owl_escape_value(b) > 0)&& play_attack_defend2_n(color, 1, 4, move, c, d, e, c, e);
}

static int
autohelperowl_defendpat413(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);
  b = AFFINE_TRANSFORM(719, trans, move);
  c = AFFINE_TRANSFORM(682, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_defendpat414(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_defendpat415(int trans, int move, int color, int action)
{
  int A, B, C;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);
  C = AFFINE_TRANSFORM(685, trans, move);

  return !same_string(A, B) && (countlib(A) <= 4 || countlib(B) <= 4 || countlib(C) <= 4);
}

static int
autohelperowl_defendpat416(int trans, int move, int color, int action)
{
  int A, B, C;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);
  C = AFFINE_TRANSFORM(685, trans, move);

  return !same_string(A, B) && (countlib(A) <= 4 || countlib(B) <= 4 || countlib(C) <= 4)&& !play_connect_n(color, 1, 1, move, A, C);
}

static int
autohelperowl_defendpat421(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);

  return owl_goal_dragon(a);
}

static int
autohelperowl_defendpat423(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(686, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);

  return countlib(a)>1 && owl_escape_value(b)>0;
}

static int
autohelperowl_defendpat424(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_defendpat425(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_defendpat426(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return owl_escape_value(a)>0 && !ATTACK_MACRO(B);
}

static int
autohelperowl_defendpat427(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return owl_escape_value(a)>0 && does_attack(move, B);
}

static int
autohelperowl_defendpat428(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(572, trans, move);
  b = AFFINE_TRANSFORM(609, trans, move);

  return somewhere(color, 0, 2, a, b) && owl_escape_value(a) + owl_escape_value(b) > 0;
}

static int
autohelperowl_defendpat429(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return  DEFEND_MACRO(A);
}

static int
autohelperowl_defendpat430(int trans, int move, int color, int action)
{
  int a, b, c, d, E;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(757, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);
  E = AFFINE_TRANSFORM(683, trans, move);

  return  (owl_escape_value(a) > 0 || owl_escape_value(b) > 0) && ((somewhere(color, 0, 1, d) && play_attack_defend2_n(color, 1, 2, move, c, c, E))     || (!somewhere(color, 0, 1, d) && !play_attack_defend2_n(color, 0, 3, move, c, d, c, E)));
}

static int
autohelperowl_defendpat431(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return DEFEND_MACRO(A);
}

static int
autohelperowl_defendpat432(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(647, trans, move);

  return  vital_chain(A) && vital_chain(B) && play_attack_defend2_n(color, 1, 1, move, A, B) && !play_connect_n(color, 1, 1, move, A, B);
}

static int
autohelperowl_defendpat433(int trans, int move, int color, int action)
{
  int d, e, A, B, C;
  UNUSED(color);
  UNUSED(action);

  d = AFFINE_TRANSFORM(721, trans, move);
  e = AFFINE_TRANSFORM(647, trans, move);
  A = AFFINE_TRANSFORM(648, trans, move);
  B = AFFINE_TRANSFORM(610, trans, move);
  C = AFFINE_TRANSFORM(611, trans, move);

  return  (owl_escape_value(A) > 0 || owl_escape_value(B) > 0 || owl_escape_value(C) > 0) && !ATTACK_MACRO(d) && play_attack_defend_n(color, 1, 2, move, A, d) && play_attack_defend_n(color, 1, 2, move, e, d);
}

static int
autohelperowl_defendpat434(int trans, int move, int color, int action)
{
  int A, B, C;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(722, trans, move);
  C = AFFINE_TRANSFORM(685, trans, move);

  return  owl_escape_value(A) + owl_escape_value(B) + owl_escape_value(C) > 3;
}

static int
autohelperowl_defendpat435(int trans, int move, int color, int action)
{
  int a, B, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(646, trans, move);
  C = AFFINE_TRANSFORM(683, trans, move);

  return  (owl_escape_value(B) > 0 || owl_escape_value(a) > 0) && play_attack_defend2_n(color, 1, 2, move, a, a, C);
}

static int
autohelperowl_defendpat436(int trans, int move, int color, int action)
{
  int c, d, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(720, trans, move);
  B = AFFINE_TRANSFORM(647, trans, move);

  return  (owl_escape_value(A) > 0 || owl_escape_value(B) > 0) && play_attack_defend_n(color, 1, 2, move, c, d);
}

static int
autohelperowl_defendpat437(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  B = AFFINE_TRANSFORM(682, trans, move);

  return (owl_escape_value(a) > 0) && !play_connect_n(color, 0, 1, move, move, B);
}

static int
autohelperowl_defendpat438(int trans, int move, int color, int action)
{
  int c, d, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(685, trans, move);
  d = AFFINE_TRANSFORM(721, trans, move);
  A = AFFINE_TRANSFORM(646, trans, move);
  B = AFFINE_TRANSFORM(722, trans, move);

  return  (owl_escape_value(A) > 0 || owl_escape_value(B) > 0) && (!somewhere(OTHER_COLOR(color), 0, 1, c) || play_attack_defend2_n(color, 1, 2, move, d, c, d));
}

static int
autohelperowl_defendpat439(int trans, int move, int color, int action)
{
  int c, d, e, f, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(647, trans, move);
  d = AFFINE_TRANSFORM(646, trans, move);
  e = AFFINE_TRANSFORM(683, trans, move);
  f = AFFINE_TRANSFORM(609, trans, move);
  A = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(610, trans, move);

  return  (owl_escape_value(A) > 0 || owl_escape_value(B) > 0) && (play_attack_defend_n(color, 1, 4, move, c, d, f, e) && play_attack_defend_n(color, 1, 4, move, c, d, f, f));
}

static int
autohelperowl_defendpat440(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);

  return owl_strong_dragon(a) || owl_strong_dragon(b);
}

static int
autohelperowl_defendpat441(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_defendpat442(int trans, int move, int color, int action)
{
  int a, c, d, e, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(756, trans, move);
  d = AFFINE_TRANSFORM(719, trans, move);
  e = AFFINE_TRANSFORM(793, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return (owl_escape_value(c)>0 || owl_escape_value(d)>0 || owl_escape_value(e)>0)&& countlib(B)==2 && accuratelib(move, color, MAX_LIBERTIES, NULL)>=2 && !play_attack_defend_n(color, 1, 1, move, a);
}

static int
autohelperowl_defendpat443(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);
  c = AFFINE_TRANSFORM(645, trans, move);
  d = AFFINE_TRANSFORM(719, trans, move);

  return (owl_escape_value(b)>0 || owl_escape_value(c)>0 || owl_escape_value(d)>0)&& !play_attack_defend_n(color, 1, 1, move, a);
}

static int
autohelperowl_defendpat444(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(757, trans, move);

  return (owl_strong_dragon(a) || owl_strong_dragon(b)) && !play_connect_n(color, 0, 1, move, a, b);
}

static int
autohelperowl_defendpat445(int trans, int move, int color, int action)
{
  int a, b, c, d, A, B, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(758, trans, move);
  d = AFFINE_TRANSFORM(757, trans, move);
  A = AFFINE_TRANSFORM(648, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);
  C = AFFINE_TRANSFORM(794, trans, move);

  return  owl_escape_value(d) > 0 && play_attack_defend2_n(color, 1, 5, move, a, b, c, d, B, c) && play_connect_n(color, 1, 6, move, a, b, c, d, NO_MOVE, A, C);
}

static int
autohelperowl_defendpat446(int trans, int move, int color, int action)
{
  int a, b, d, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  d = AFFINE_TRANSFORM(611, trans, move);
  C = AFFINE_TRANSFORM(648, trans, move);

  return owl_escape_value(a) > 0 && play_attack_defend2_n(color, 1, 2, move, b, C, b)&& !play_connect_n(OTHER_COLOR(color), 1, 1, move, a, d);
}

static int
autohelperowl_defendpat447(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return countlib(A) == 2;
}

static int
autohelperowl_defendpat448(int trans, int move, int color, int action)
{
  int a, A, B, C, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);
  A = AFFINE_TRANSFORM(646, trans, move);
  B = AFFINE_TRANSFORM(758, trans, move);
  C = AFFINE_TRANSFORM(720, trans, move);
  D = AFFINE_TRANSFORM(721, trans, move);

  return  (owl_escape_value(A) > 0 || owl_escape_value(B) > 0) && play_connect_n(OTHER_COLOR(color), 0, 0, A, C) && play_attack_defend_n(color, 1, 2, move, a, D);
}

static int
autohelperowl_defendpat449(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(573, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return  (owl_escape_value(A) > 0 || owl_escape_value(B) > 0) && safe_move(move, OTHER_COLOR(color)) && !play_connect_n(color, 0, 1, move, A, B);
}

static int
autohelperowl_defendpat450(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);

  return (owl_escape_value(a) > 0 || owl_escape_value(b) > 0)&& play_connect_n(color, 0, 1, move, a, b) != WIN;
}

static int
autohelperowl_defendpat451(int trans, int move, int color, int action)
{
  int A, B, C;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(610, trans, move);
  B = AFFINE_TRANSFORM(648, trans, move);
  C = AFFINE_TRANSFORM(646, trans, move);

  return countlib(A)>1 && countlib(B)>1 && countlib(C)>1;
}

static int
autohelperowl_defendpat452(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return countlib(A)==1;
}

static int
autohelperowl_defendpat453(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(611, trans, move);
  B = AFFINE_TRANSFORM(649, trans, move);

  return  (countlib(A)>1) && (countlib(B)>1);
}

static int
autohelperowl_defendpat454(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(609, trans, move);
  B = AFFINE_TRANSFORM(646, trans, move);

  return  (is_legal(move, color) && owl_topological_eye(a, board[B])==3) || (!is_legal(move, color) && owl_topological_eye(a, board[B])==2);
}

static int
autohelperowl_defendpat456(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend_n(color, 0, 1, move, A) != WIN;
}

static int
autohelperowl_defendpat457(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend_n(color, 0, 1, move, A) != WIN;
}

static int
autohelperowl_defendpat458(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return play_attack_defend_n(color, 0, 1, move, A) != WIN;
}

static int
autohelperowl_defendpat464(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return ATTACK_MACRO(A) != 0;
}

static int
autohelperowl_defendpat465(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return play_attack_defend_n(color, 0, 1, move, A) != WIN;
}

static int
autohelperowl_defendpat467(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(756, trans, move);

  return countlib(a) > 1;
}

static int
autohelperowl_defendpat469(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)==1 && finish_ko_helper(A);
}

static int
autohelperowl_defendpat470(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)==1 && finish_ko_helper(A);
}

static int
autohelperowl_defendpat471(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)==2 && accuratelib(move, color, MAX_LIBERTIES, NULL)>1 && squeeze_ko_helper(A);
}

static int
autohelperowl_defendpat472(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)==2 && accuratelib(move, color, MAX_LIBERTIES, NULL)>1 && squeeze_ko_helper(A);
}

static int
autohelperowl_defendpat473(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(795, trans, move);

  return ATTACK_MACRO(A);
}

static int
autohelperowl_defendpat474(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(795, trans, move);

  return !safe_move(a, OTHER_COLOR(color));
}

static int
autohelperowl_defendpat475(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend_n(OTHER_COLOR(color), 0, 1, move, a) != WIN && play_attack_defend_n(color, 1, 1, move, a) == 0;
}

static int
autohelperowl_defendpat476(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);

  return countlib(A)==1;
}

static int
autohelperowl_defendpat479(int trans, int move, int color, int action)
{
  int a, b, c, d, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(645, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);
  c = AFFINE_TRANSFORM(719, trans, move);
  d = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(646, trans, move);

  return  somewhere(color, 0, 3, a, b, c) && vital_chain(A) && !play_attack_defend_n(color, 0, 3, move, NO_MOVE, d, A);
}

static int
autohelperowl_defendpat480(int trans, int move, int color, int action)
{
  int a, b, c, d, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(645, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);
  c = AFFINE_TRANSFORM(719, trans, move);
  d = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);

  return  somewhere(color, 0, 3, a, b, c) && vital_chain(B) && !play_attack_defend_n(color, 0, 3, move, NO_MOVE, d, B);
}

static int
autohelperowl_defendpat481(int trans, int move, int color, int action)
{
  int b, A, B;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(719, trans, move);
  A = AFFINE_TRANSFORM(645, trans, move);
  B = AFFINE_TRANSFORM(682, trans, move);

  return  countlib(A) >= 3 && countlib(B) == 3 && accuratelib(b, color, MAX_LIBERTIES, NULL) > 2;
}

static int
autohelperowl_defendpat484(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);

  return  somewhere(color, 0, 1, b) || (somewhere(OTHER_COLOR(color), 0, 1, b) ? !play_attack_defend_n(color, 0, 1, move, b) : !play_attack_defend_n(color, 0, 2, move, b, b));
}

static int
autohelperowl_defendpat485(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);

  return  somewhere(color, 0, 1, b) || (somewhere(OTHER_COLOR(color), 0, 1, b) ? !play_attack_defend_n(color, 0, 1, move, b) : !play_attack_defend_n(color, 0, 2, move, b, b));
}

static int
autohelperowl_defendpat487(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(609, trans, move);
  B = AFFINE_TRANSFORM(682, trans, move);

  return  owl_proper_eye(a) && !ATTACK_MACRO(B);
}

static struct pattern_attribute attributes[] = {
#ifdef HAVE_TRANSPARENT_UNIONS
  {LAST_ATTRIBUTE,{.offset=0}},
  {THREATENS_TO_CAPTURE,{.offset=646}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {THREATENS_TO_CAPTURE,{.offset=720}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {THREATENS_TO_CAPTURE,{.offset=645}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {THREATENS_EYE,{.offset=685}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {THREATENS_EYE,{.offset=648}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {THREATENS_EYE,{.offset=648}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {THREATENS_EYE,{.offset=647}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {THREATENS_EYE,{.offset=609}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {REVERSE_SENTE,{.offset=609}},
  {LAST_ATTRIBUTE,{.offset=0}}
#else
  {LAST_ATTRIBUTE,0.0,0},
  {THREATENS_TO_CAPTURE,0.0,646},
  {LAST_ATTRIBUTE,0.0,0},
  {THREATENS_TO_CAPTURE,0.0,720},
  {LAST_ATTRIBUTE,0.0,0},
  {THREATENS_TO_CAPTURE,0.0,645},
  {LAST_ATTRIBUTE,0.0,0},
  {THREATENS_EYE,0.0,685},
  {LAST_ATTRIBUTE,0.0,0},
  {THREATENS_EYE,0.0,648},
  {LAST_ATTRIBUTE,0.0,0},
  {THREATENS_EYE,0.0,648},
  {LAST_ATTRIBUTE,0.0,0},
  {THREATENS_EYE,0.0,647},
  {LAST_ATTRIBUTE,0.0,0},
  {THREATENS_EYE,0.0,609},
  {LAST_ATTRIBUTE,0.0,0},
  {REVERSE_SENTE,0.0,609},
  {LAST_ATTRIBUTE,0.0,0}
#endif
};

static struct pattern owl_defendpat[] = {
  {owl_defendpat0,2,8, "D1",-2,0,2,3,4,3,0x2,759,
    { 0x3f3f3f0f, 0x00ffffff, 0xf0f0f0f0, 0xfffc0000, 0xffff0000, 0x3f3f3f3f, 0x00fcffff, 0xf0f0f0c0},
    { 0x00101008, 0x00500000, 0x10100000, 0x02140000, 0x00500000, 0x10100000, 0x00140200, 0x00101080}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat0,0,1.000000},
  {owl_defendpat1,2,8, "D2",-2,-2,2,1,4,3,0x2,720,
    { 0xffbfffff, 0xefffffff, 0xfcf8fcfc, 0xffffef00, 0xffffef00, 0xffbfffff, 0xefffffff, 0xfcf8fcfc},
    { 0x20100000, 0x00180000, 0x00102000, 0x00900000, 0x00180000, 0x00102000, 0x00900000, 0x20100000}
   , 0x0,55.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat2,1,8, "D3",0,-2,4,1,4,3,0x2,685,
    { 0x003fffff, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3f0000, 0x0f3f3f3f, 0x00f0fcfc},
    { 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400}
   , 0x0,77.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat3,2,8, "D4",-1,-1,3,2,4,3,0x2,685,
    { 0xecfcfcfc, 0xfcf8fc00, 0xffffef00, 0xffbfffff, 0xfcf8fcfc, 0xfcfcec00, 0xffbfff00, 0xefffffff},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x0,83.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat4,1,8, "D100",-1,-1,2,2,3,3,0x2,721,
    { 0x3c3fffff, 0xc0fcfcf0, 0xfcf0f000, 0xffff0f00, 0xfcfcc000, 0xff3f3c00, 0x0fffff3f, 0xf0f0fcfc},
    { 0x28100000, 0x00180800, 0x0010a000, 0x80900000, 0x08180000, 0x00102800, 0x00908000, 0xa0100000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat5,2,8, "D101",-1,-1,3,3,4,4,0x2,645,
    { 0xf4fcf000, 0xffff3400, 0x3fff7f3f, 0x70fcfcfc, 0x34ffffff, 0xf0fcf4f0, 0xfcfc7000, 0x7fff3f00},
    { 0x00181000, 0x00502000, 0x10900000, 0x20140000, 0x20500000, 0x10180000, 0x00142000, 0x00901000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat6,2,8, "D102",-1,-1,2,2,3,3,0x2,721,
    { 0x1cffffff, 0xf0f4fcf0, 0xfcfcd000, 0xff7f3f00, 0xfcf4f000, 0xffff1c00, 0x3f7fff3f, 0xd0fcfcfc},
    { 0x00a05000, 0x60600000, 0x14280000, 0x00242400, 0x00606000, 0x50a00000, 0x24240000, 0x00281400}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat7,3,8, "D103",-1,-1,2,2,3,3,0x2,721,
    { 0x3cffffff, 0xf0fcfcf0, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xffff3c00, 0x3fffff3f, 0xf0fcfcfc},
    { 0x10a05000, 0x60640000, 0x14281000, 0x00642400, 0x00646000, 0x50a01000, 0x24640000, 0x10281400}
   , 0x0,85.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat8,2,8, "D104",-1,-1,1,2,2,3,0x2,720,
    { 0x0fffff00, 0xf0f0fcfc, 0xfcfcc000, 0xfc3c3c00, 0xfcf0f000, 0xffff0f00, 0x3c3cfcfc, 0xc0fcfc00},
    { 0x01900000, 0x20100004, 0x00180000, 0x00102000, 0x00102000, 0x00900100, 0x20100040, 0x00180000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat8,0,1.600000},
  {owl_defendpat9,3,8, "D104b",-1,-1,1,3,2,4,0x2,794,
    { 0x3fffff00, 0xf0fcfcfc, 0xfcfcf000, 0xfcfc3c00, 0xfcfcf000, 0xffff3f00, 0x3cfcfcfc, 0xf0fcfc00},
    { 0x11900000, 0x20140004, 0x00181000, 0x00502000, 0x00142000, 0x00901100, 0x20500040, 0x10180000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_defendpat9,0,1.600000},
  {owl_defendpat10,4,8, "D105",-2,-1,1,2,3,3,0x8,720,
    { 0xfcfefcfc, 0xfcfcfc20, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfcfefc00, 0xffffff20, 0xfcfcfcfc},
    { 0x00180404, 0x00106000, 0x40900000, 0x25100000, 0x60100000, 0x04180000, 0x00102500, 0x00904040}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat11,3,8, "D106",0,-2,3,2,3,4,0x2,722,
    { 0x00ffffff, 0xf0f0f0f0, 0xfffc0000, 0x3f3f3f0f, 0xf0f0f0c0, 0xffff0000, 0x3f3f3f3f, 0x00fcffff},
    { 0x00924000, 0x60100020, 0x05180000, 0x00102404, 0x00106040, 0x40920000, 0x24100020, 0x00180500}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat12,1,8, "D107",-1,-1,3,2,4,3,0x2,685,
    { 0x3dffffff, 0xf0fcfcf4, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xffff3d00, 0x3fffff7f, 0xf0fcfcfc},
    { 0x00210000, 0x00200010, 0x00200000, 0x00200000, 0x00200000, 0x00210000, 0x00200010, 0x00200000}
   , 0x200,70.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat13,2,8, "D108",-2,-1,2,2,4,3,0x2,721,
    { 0xffffffff, 0xfcfffffd, 0xfcfcfcf0, 0xffffff00, 0xfffffc00, 0xffffff3d, 0xffffffff, 0xfcfcfcfc},
    { 0x21900000, 0x20180004, 0x00182000, 0x00902000, 0x00182000, 0x00902100, 0x20900040, 0x20180000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat14,2,8, "D109",-2,-1,2,2,4,3,0x2,647,
    { 0xffffffff, 0xfcfffffd, 0xfcfcfcf0, 0xffffff00, 0xfffffc00, 0xffffff3d, 0xffffffff, 0xfcfcfcfc},
    { 0x21100000, 0x00180004, 0x00102000, 0x00900000, 0x00180000, 0x00102100, 0x00900040, 0x20100000}
   , 0x800,95.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat15,4,8, "D110",-1,-3,2,3,3,6,0x2,610,
    { 0xfffeffff, 0xfcfcfcec, 0xffffff00, 0xffffffff, 0xfcfcfcfc, 0xfffeff00, 0xffffffef, 0xffffffff},
    { 0x02100100, 0x00100048, 0x00100000, 0x00100000, 0x00100000, 0x01100200, 0x00100084, 0x00100000}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat16,1,8, "D111",0,-1,3,1,3,2,0x2,685,
    { 0x007cfcfc, 0xd0f0f000, 0xfcf40000, 0x3f3f1f00, 0xf0f0d000, 0xfc7c0000, 0x1f3f3f00, 0x00f4fcfc},
    { 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400}
   , 0x0,79.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat17,6,8, "D112",-1,0,2,5,3,5,0x2,795,
    { 0x2f3f2f3f, 0x00b8fcfc, 0xe0f0e000, 0xffbb0000, 0xfcb80000, 0x2f3f2f00, 0x00bbffff, 0xe0f0e0f0},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat18,1,8, "D113",-1,-2,2,2,3,4,0x2,647,
    { 0xf4ffffff, 0xfcfcf4f0, 0xffff7f00, 0x7fffffff, 0xf4fcfcfc, 0xfffff400, 0xffff7f3f, 0x7fffffff},
    { 0x20120000, 0x00180020, 0x00102000, 0x00900000, 0x00180000, 0x00122000, 0x00900020, 0x20100000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat19,1,8, "D114",-1,0,2,2,3,2,0x2,685,
    { 0x00ffffff, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xffff0000, 0x3f3f3f3f, 0x00fcfcfc},
    { 0x00200090, 0x00200000, 0x00200000, 0x00210200, 0x00200000, 0x00200000, 0x02210000, 0x00200018}
   , 0x0,77.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat20,2,8, "D115",0,-1,3,2,3,3,0x2,722,
    { 0x003c3ffe, 0x00f0f0c0, 0xf0f00000, 0x3f3f0300, 0xf0f00000, 0x3f3c0000, 0x033f3f0e, 0x00f0f0fc},
    { 0x00200040, 0x00200000, 0x00200000, 0x00200100, 0x00200000, 0x00200000, 0x01200000, 0x00200004}
   , 0x0,76.000000,attributes+0,1,NULL,autohelperowl_defendpat20,3,1.000000},
  {owl_defendpat21,2,8, "D116",-1,-2,1,0,2,2,0x2,648,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00900040, 0x20100000, 0x00180000, 0x00102100, 0x00102000, 0x00900000, 0x21100000, 0x00180004}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat21,0,0.010000},
  {owl_defendpat22,3,8, "D117",0,-2,2,2,2,4,0x2,647,
    { 0x00ffffff, 0xf0f0f0f0, 0xfefc0000, 0x3f3f3f08, 0xf0f0f080, 0xffff0000, 0x3f3f3f3f, 0x00fcfefc},
    { 0x00120100, 0x00100060, 0x00100000, 0x00100000, 0x00100000, 0x01120000, 0x00100024, 0x00100000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_defendpat22,0,0.010000},
  {owl_defendpat23,2,8, "D118",0,-1,3,2,3,3,0x2,648,
    { 0x00f0fcfc, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0f, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f00, 0x003cffff},
    { 0x00900400, 0x20104000, 0x40180000, 0x04102000, 0x40102000, 0x04900000, 0x20100400, 0x00184000}
   , 0x0,81.000000,attributes+0,1,NULL,autohelperowl_defendpat23,0,0.010000},
  {owl_defendpat24,3,8, "D119",-1,-2,2,2,3,4,0x2,647,
    { 0x3fffffff, 0xf0fcfcfc, 0xfffff000, 0xffff3f3f, 0xfcfcf0f0, 0xffff3f00, 0x3fffffff, 0xf0ffffff},
    { 0x25100000, 0x00180404, 0x00106000, 0x40900000, 0x04180000, 0x00102500, 0x00904040, 0x60100000}
   , 0x0,81.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat25,2,8, "D120",-1,-1,3,4,4,5,0x2,759,
    { 0x053fbfff, 0x80f0f4f4, 0xf8f04000, 0x7f3f0b00, 0xf4f08000, 0xbf3f0500, 0x0b3f7f7f, 0x40f0f8fc},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,82.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat26,1,8, "D121",-1,-4,2,1,3,5,0x2,758,
    { 0xffffffff, 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xffffff00, 0xffffffff, 0xfcfcfcfc},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,40.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat27,2,8, "D122",-2,-1,2,3,4,4,0x2,720,
    { 0xffffffff, 0xfcfcffff, 0xfcfcfcc0, 0xffffff00, 0xfffcfc00, 0xffffff0f, 0xffffffff, 0xfcfcfcfc},
    { 0xa0500000, 0x18180000, 0x00142800, 0x00909000, 0x00181800, 0x0050a000, 0x90900000, 0x28140000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_defendpat27,0,1.000000},
  {owl_defendpat28,4,8, "D123",-2,-1,1,3,3,4,0x2,648,
    { 0x203cfcfc, 0xc0f8f000, 0xfdf02000, 0x3fbf0f04, 0xf0f8c040, 0xfc3c2000, 0x0fbf3f00, 0x20f0fdfc},
    { 0x00100050, 0x00100000, 0x00100000, 0x00110100, 0x00100000, 0x00100000, 0x01110000, 0x00100014}
   , 0x0,65.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat29,5,8, "D124",-1,-2,2,1,3,3,0x2,721,
    { 0xfcfe7efe, 0x7cfcfca0, 0xf4fcfc00, 0xfffff700, 0xfcfc7c00, 0x7efefc00, 0xf7ffff2a, 0xfcfcf4fc},
    { 0x08502000, 0x10900800, 0x20148000, 0x80181000, 0x08901000, 0x20500800, 0x10188000, 0x80142000}
   , 0x0,81.000000,attributes+0,1,NULL,autohelperowl_defendpat29,0,1.600000},
  {owl_defendpat30,4,8, "D125",-2,-1,2,2,4,3,0x2,721,
    { 0xffffefff, 0xfcbefefc, 0xecfcfca0, 0xfffbff00, 0xfebefc00, 0xefffff28, 0xfffbffff, 0xfcfcecfc},
    { 0x02200100, 0x00200048, 0x00200000, 0x00200000, 0x00200000, 0x01200200, 0x00200084, 0x00200000}
   , 0x0,77.000000,attributes+0,1,NULL,autohelperowl_defendpat30,3,0.016000},
  {owl_defendpat31,6,8, "D126",-3,-2,2,3,5,5,0xa,758,
    { 0xffffffff, 0xfffffffe, 0xffffffff, 0xffffffff, 0xffffffff, 0xfffffffe, 0xffffffff, 0xffffffff},
    { 0x08100000, 0x02120800, 0x00108028, 0x80100000, 0x08120200, 0x001008a0, 0x00108000, 0x80100000}
   , 0x0,85.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat32,8,8, "D127",-2,-3,1,2,3,5,0x2,683,
    { 0xfefefe00, 0xfcffffaa, 0xfffffff0, 0xfcfcfcfc, 0xfffffcfc, 0xfefefe3e, 0xfcfcfca8, 0xffffff00},
    { 0x04200000, 0x00200400, 0x00214000, 0x40200010, 0x04200010, 0x00200400, 0x00204000, 0x40210000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat33,2,8, "D200",-1,-1,2,3,3,4,0x2,759,
    { 0x3cffffff, 0xf0fcfcf0, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xffff3c00, 0x3fffff3f, 0xf0fcfcfc},
    { 0x28500000, 0x10180800, 0x0014a000, 0x80901000, 0x08181000, 0x00502800, 0x10908000, 0xa0140000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat34,2,8, "D201",-1,-1,2,3,3,4,0x2,759,
    { 0x3cffffff, 0xf0fcfcf0, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xffff3c00, 0x3fffff3f, 0xf0fcfcfc},
    { 0x28500000, 0x10180800, 0x0014a000, 0x80901000, 0x08181000, 0x00502800, 0x10908000, 0xa0140000}
   , 0x0,81.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat35,2,8, "D202",-1,-1,2,2,3,3,0x2,722,
    { 0x3fffffff, 0xf0fcfcfc, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xffff3f00, 0x3fffffff, 0xf0fcfcfc},
    { 0x20580000, 0x10182000, 0x00942000, 0x20901000, 0x20181000, 0x00582000, 0x10902000, 0x20940000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat36,1,8, "D203",0,-1,2,2,2,3,0x2,685,
    { 0x00ffffff, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xffff0000, 0x3f3f3f3f, 0x00fcfcfc},
    { 0x00a04000, 0x60200000, 0x04280000, 0x00202400, 0x00206000, 0x40a00000, 0x24200000, 0x00280400}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat37,1,8, "D204",-1,-1,1,2,2,3,0x2,685,
    { 0x003cf43c, 0xc0f07000, 0x7cf00000, 0x373f0c00, 0x70f0c000, 0xf43c0000, 0x0c3f3700, 0x00f07cf0},
    { 0x00108000, 0x80100000, 0x08100000, 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x00100800}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_defendpat37,0,0.610000},
  {owl_defendpat38,2,8, "D205",-1,-1,2,1,3,2,0x2,722,
    { 0x303cfcfc, 0xc0fcf000, 0xfcf03000, 0x3fff0f00, 0xf0fcc000, 0xfc3c3000, 0x0fff3f00, 0x30f0fcfc},
    { 0x20184000, 0x40182000, 0x04902000, 0x20900400, 0x20184000, 0x40182000, 0x04902000, 0x20900400}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat39,2,8, "D206",-1,-1,1,3,2,4,0x2,721,
    { 0x37bc3f00, 0x20fcf4cc, 0xf0f87000, 0x7cfc2000, 0xf4fc2000, 0x3fbc3700, 0x20fc7ccc, 0x70f8f000},
    { 0x22100000, 0x00180008, 0x00102000, 0x00900000, 0x00180000, 0x00102200, 0x00900080, 0x20100000}
   , 0x0,65.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat40,3,8, "D207",0,-1,2,2,2,3,0x2,722,
    { 0x003fbdbf, 0x80f0f070, 0xf8f00000, 0x3f3f0a00, 0xf0f08000, 0xbd3f0000, 0x0a3f3f37, 0x00f0f8f8},
    { 0x00120000, 0x00100020, 0x00100000, 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100000}
   , 0x0,66.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat41,2,8, "D208",-1,0,2,3,3,3,0x2,722,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,65.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat42,2,8, "D209",-1,0,1,2,2,2,0x2,721,
    { 0x0f3f3f00, 0x00f0fcfc, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0f00, 0x003cfcfc, 0xc0f0f000},
    { 0x05200000, 0x00200404, 0x00204000, 0x40200000, 0x04200000, 0x00200500, 0x00204040, 0x40200000}
   , 0x20,70.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat43,2,8, "D209a",-1,0,1,2,2,2,0x2,722,
    { 0x0f3f3f00, 0x00f0fcfc, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0f00, 0x003cfcfc, 0xc0f0f000},
    { 0x05200000, 0x00200404, 0x00204000, 0x40200000, 0x04200000, 0x00200500, 0x00204040, 0x40200000}
   , 0x20,35.000000,attributes+0,1,NULL,autohelperowl_defendpat43,3,1.000000},
  {owl_defendpat44,3,8, "D209b",0,-1,2,2,2,3,0x2,685,
    { 0x003efeff, 0xc0f0f0a0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xfe3e0000, 0x0f3f3f2b, 0x00f0fcfc},
    { 0x00108000, 0x80100000, 0x08100000, 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x00100800}
   , 0x20,70.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat45,3,8, "D210",0,-1,2,2,2,3,0x2,685,
    { 0x003cffff, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0f, 0x00f0fcfc},
    { 0x00148100, 0x80101040, 0x08500000, 0x10100800, 0x10108000, 0x81140000, 0x08101004, 0x00500800}
   , 0x0,70.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat46,3,8, "D211",-2,-1,2,1,4,2,0x8,647,
    { 0x7fffff00, 0xf4fcfcfc, 0xfffdf400, 0xfcfc7c1c, 0xfcfcf4d0, 0xffff7f00, 0x7cfcfcfc, 0xf4fdff00},
    { 0x25100000, 0x00180404, 0x00106000, 0x40900000, 0x04180000, 0x00102500, 0x00904040, 0x60100000}
   , 0x0,71.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat47,4,8, "D212",-1,-3,1,2,2,5,0x2,722,
    { 0xc0fcfe00, 0xfcf0f080, 0xffff0c00, 0x3c3cfc3c, 0xf0f0fcf0, 0xfefcc000, 0xfc3c3c08, 0x0cffff00},
    { 0x40186000, 0x44902000, 0x26900400, 0x20184408, 0x20904480, 0x60184000, 0x44182000, 0x04902600}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat48,1,8, "D213",-1,0,2,3,3,3,0x2,723,
    { 0x003f3fff, 0x00f0f0f0, 0xf0f00000, 0x3f3f0300, 0xf0f00000, 0x3f3f0000, 0x033f3f3f, 0x00f0f0fc},
    { 0x00100080, 0x00100000, 0x00100000, 0x00100200, 0x00100000, 0x00100000, 0x02100000, 0x00100008}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_defendpat48,0,3.000000},
  {owl_defendpat49,2,8, "D214",0,-1,2,1,2,2,0x2,685,
    { 0x00b4fcfc, 0xe0f0d000, 0xfc780000, 0x1f3f2f00, 0xd0f0e000, 0xfcb40000, 0x2f3f1f00, 0x0078fcfc},
    { 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x80100000, 0x08100000, 0x00100800, 0x00108000}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat50,2,8, "D215",-2,-1,2,2,4,3,0x2,685,
    { 0xffffffff, 0xfcfcffff, 0xfcfcfcc0, 0xffffff00, 0xfffcfc00, 0xffffff0f, 0xffffffff, 0xfcfcfcfc},
    { 0x0a250000, 0x00201818, 0x00608000, 0x90200000, 0x18200000, 0x00250a00, 0x00209090, 0x80600000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat51,2,8, "D216",0,-1,2,2,2,3,0x2,648,
    { 0x00fcfcfc, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0f, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0x00fcffff},
    { 0x00100400, 0x00104000, 0x40100000, 0x04100000, 0x40100000, 0x04100000, 0x00100400, 0x00104000}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat52,2,8, "D217",-1,0,1,3,2,3,0x2,758,
    { 0x2f3f1700, 0x00787cfc, 0x50f0e000, 0xf4b40000, 0x7c780000, 0x173f2f00, 0x00b4f4fc, 0xe0f05000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_defendpat52,0,1.000000},
  {owl_defendpat53,1,8, "D217a",-1,0,1,3,2,3,0x2,758,
    { 0x0f3f3700, 0x00f07cfc, 0x70f0c000, 0xf43c0000, 0x7cf00000, 0x373f0f00, 0x003cf4fc, 0xc0f07000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat53,0,1.000000},
  {owl_defendpat54,3,8, "D217b",-1,0,1,3,2,3,0x2,758,
    { 0x3f3f3f00, 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc, 0xf0f0f000},
    { 0x12100000, 0x00140008, 0x00101000, 0x00500000, 0x00140000, 0x00101200, 0x00500080, 0x10100000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat55,3,8, "D217c",-1,0,1,3,2,3,0x2,758,
    { 0x3f3f3700, 0x00fc7cfc, 0x70f0f000, 0xf4fc0000, 0x7cfc0000, 0x373f3f00, 0x00fcf4fc, 0xf0f07000},
    { 0x12100000, 0x00140008, 0x00101000, 0x00500000, 0x00140000, 0x00101200, 0x00500080, 0x10100000}
   , 0x10,10.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat56,4,8, "D218",-1,-3,2,3,3,6,0x2,611,
    { 0xfffeffff, 0xfcfcfcec, 0xfffffd00, 0xffffff7f, 0xfcfcfcf4, 0xfffeff00, 0xffffffef, 0xfdffffff},
    { 0x02100100, 0x00100048, 0x00100000, 0x00100000, 0x00100000, 0x01100200, 0x00100084, 0x00100000}
   , 0x0,70.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat57,4,8, "D220",-1,-1,1,3,2,4,0x2,758,
    { 0x2bbfff00, 0xe0f8f8fc, 0xfcf8a000, 0xbcbc2c00, 0xf8f8e000, 0xffbf2b00, 0x2cbcbcfc, 0xa0f8fc00},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,40.000000,attributes+0,1,NULL,autohelperowl_defendpat57,0,0.010000},
  {owl_defendpat58,3,8, "D221",-1,0,1,3,2,3,0x2,758,
    { 0x283f3f00, 0x00f8f8f0, 0xf0f0a000, 0xbcbc0000, 0xf8f80000, 0x3f3f2800, 0x00bcbc3c, 0xa0f0f000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat59,4,8, "D221b",-1,0,1,3,2,3,0x2,758,
    { 0x283f3f00, 0x00f8f8f0, 0xf0f0a000, 0xbcbc0000, 0xf8f80000, 0x3f3f2800, 0x00bcbc3c, 0xa0f0f000},
    { 0x00101000, 0x00500000, 0x10100000, 0x00140000, 0x00500000, 0x10100000, 0x00140000, 0x00101000}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat60,2,8, "D222",-1,-1,2,2,3,3,0x2,722,
    { 0x007cfff7, 0xd0f0f0c0, 0xfcf40000, 0x3d3f1f00, 0xf0f0d000, 0xff7c0000, 0x1f3f3d0f, 0x00f4fc7c},
    { 0x00205000, 0x40600000, 0x14200000, 0x00240400, 0x00604000, 0x50200000, 0x04240000, 0x00201400}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat61,4,8, "D223",-1,-2,1,2,2,4,0x2,647,
    { 0xffffff00, 0xfcfcfcfc, 0xfefefc00, 0xfcfcfc28, 0xfcfcfca0, 0xffffff00, 0xfcfcfcfc, 0xfcfefe00},
    { 0xa1100000, 0x08180004, 0x00102800, 0x00908000, 0x00180800, 0x0010a100, 0x80900040, 0x28100000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_defendpat61,0,1.600000},
  {owl_defendpat62,3,8, "D224",-1,-1,1,2,2,3,0x2,685,
    { 0x283c7cfc, 0x40f8f800, 0xf4f0a000, 0xbfbf0700, 0xf8f84000, 0x7c3c2800, 0x07bfbf00, 0xa0f0f4fc},
    { 0x00100080, 0x00100000, 0x00100000, 0x00100200, 0x00100000, 0x00100000, 0x02100000, 0x00100008}
   , 0x0,30.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat63,4,8, "D225",-1,-1,2,3,3,4,0x2,648,
    { 0xc0fcfcfc, 0xfcf0f000, 0xffff0c00, 0x3f3fff3f, 0xf0f0fcf0, 0xfcfcc000, 0xff3f3f00, 0x0cffffff},
    { 0x80101820, 0x08508000, 0x90110800, 0x08168010, 0x80500810, 0x18108000, 0x80160800, 0x08119020}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat64,4,8, "D226",-1,0,2,2,3,2,0x2,722,
    { 0x003fbfef, 0x80f0f0f0, 0xf8f00000, 0x3f3e0b00, 0xf0f08000, 0xbf3f0000, 0x0b3e3f3f, 0x00f0f8ec},
    { 0x00240048, 0x00201000, 0x00600000, 0x12200100, 0x10200000, 0x00240000, 0x01201200, 0x00600084}
   , 0x2000,45.000000,attributes+0,1,NULL,autohelperowl_defendpat64,3,0.016000},
  {owl_defendpat65,4,8, "D227",-1,-1,2,2,3,3,0x2,648,
    { 0xfcfcfcf8, 0xfcfcfc00, 0xffffff00, 0xfeffffff, 0xfcfcfcfc, 0xfcfcfc00, 0xfffffe00, 0xffffffbf},
    { 0x48240400, 0x04205800, 0x40608400, 0x94204000, 0x58200400, 0x04244800, 0x40209400, 0x84604000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat65,3,0.610000},
  {owl_defendpat66,5,8, "D228",-1,-1,2,2,3,3,0x2,758,
    { 0xffffffbf, 0xfcfcfcfc, 0xfcfcfc00, 0xfffffe00, 0xfcfcfc00, 0xffffff00, 0xfeffffff, 0xfcfcfcf8},
    { 0x84684400, 0x58206400, 0x44a44800, 0x64209400, 0x64205800, 0x44688400, 0x94206400, 0x48a44400}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat66,3,0.610000},
  {owl_defendpat67,5,8, "D229",-1,-1,1,2,2,3,0x2,683,
    { 0xbcfcfc00, 0xfafeff00, 0xfcfcf8e8, 0xfcfcbc00, 0xfffefa00, 0xfcfcbcac, 0xbcfcfc00, 0xf8fcfc00},
    { 0x00609000, 0x90600000, 0x18240000, 0x00241800, 0x00609000, 0x90600000, 0x18240000, 0x00241800}
   , 0x0,76.000000,attributes+0,1,NULL,autohelperowl_defendpat67,3,0.010000},
  {owl_defendpat68,3,8, "D230",0,-2,2,4,2,6,0x2,574,
    { 0x00fcfefc, 0xf0f0f080, 0xffff0000, 0x3f3f3f3f, 0xf0f0f0f0, 0xfefc0000, 0x3f3f3f08, 0x00ffffff},
    { 0x00140000, 0x00101000, 0x00500000, 0x10100000, 0x10100000, 0x00140000, 0x00101000, 0x00500000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_defendpat68,0,10.000000},
  {owl_defendpat69,6,8, "D231",-2,-2,2,1,4,3,0x1,723,
    { 0x2a3efeff, 0xc0f8f8a8, 0xfcf0a000, 0xbfbf0f00, 0xf8f8c000, 0xfe3e2a00, 0x0fbfbfab, 0xa0f0fcfc},
    { 0x00100020, 0x00100000, 0x00100000, 0x00120000, 0x00100000, 0x00100000, 0x00120000, 0x00100020}
   , 0x2810,70.000000,attributes+0,1,NULL,autohelperowl_defendpat69,0,1.141360},
  {owl_defendpat70,4,8, "D232",-1,-1,1,3,2,4,0x2,795,
    { 0x0cffff00, 0xf0f0fcf0, 0xfcfcc000, 0xfc3c3c00, 0xfcf0f000, 0xffff0c00, 0x3c3cfc3c, 0xc0fcfc00},
    { 0x04910400, 0x20104410, 0x40184000, 0x44102000, 0x44102000, 0x04910400, 0x20104410, 0x40184000}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_defendpat70,0,0.376000},
  {owl_defendpat71,9,8, "D233",0,-3,2,1,2,4,0x2,685,
    { 0x00b0fcbc, 0xe0f0c000, 0xfe3a0000, 0x0f3f2e2a, 0xc0f0e0a0, 0xfcb00000, 0x2e3f0f00, 0x003afefa},
    { 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x80100000, 0x08100000, 0x00100800, 0x00108000}
   , 0x20,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat72,2,8, "D234",-1,-3,1,1,2,4,0x2,647,
    { 0xd0f0f800, 0xfcf48000, 0xbf3f1f00, 0x087cfcfc, 0x80f4fcfc, 0xf8f0d000, 0xfc7c0800, 0x1f3fbf00},
    { 0x00201000, 0x00600000, 0x10200000, 0x00240000, 0x00600000, 0x10200000, 0x00240000, 0x00201000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat72,3,16.000000},
  {owl_defendpat73,1,8, "D300",-1,0,1,4,2,4,0x0,685,
    { 0x007cfcfc, 0xd0f0f000, 0xfcf40000, 0x3f3f1f00, 0xf0f0d000, 0xfc7c0000, 0x1f3f3f00, 0x00f4fcfc},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x2000,80.000000,attributes+0,1,NULL,autohelperowl_defendpat73,0,0.010000},
  {owl_defendpat74,2,8, "D301",-1,0,1,3,2,3,0x0,686,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00940000, 0x20101000, 0x00580000, 0x10102000, 0x10102000, 0x00940000, 0x20101000, 0x00580000}
   , 0x2000,80.000000,attributes+0,1,NULL,autohelperowl_defendpat74,0,0.010000},
  {owl_defendpat75,1,8, "D302",0,-1,2,2,2,3,0x0,685,
    { 0x00fcfcf0, 0xf0f0f000, 0xfffc0000, 0x3c3f3f0c, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3c00, 0x00fcff3c},
    { 0x00280400, 0x00206000, 0x40a00000, 0x24200000, 0x60200000, 0x04280000, 0x00202400, 0x00a04000}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat76,2,8, "D303",-1,-1,2,2,3,3,0x0,722,
    { 0xf0fcff3c, 0xfcfcf0c0, 0xfcfc3c00, 0x3ffffc00, 0xf0fcfc00, 0xfffcf000, 0xfcff3f0c, 0x3cfcfcf0},
    { 0x90902000, 0x28940000, 0x20181800, 0x0058a000, 0x00942800, 0x20909000, 0xa0580000, 0x18182000}
   , 0x800,70.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat77,2,8, "D304",-1,0,1,2,2,2,0x0,721,
    { 0x00fcfc0c, 0xf0f0f000, 0xfcfc0000, 0x3f3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3f00, 0x00fcfcc0},
    { 0x00604000, 0x50200000, 0x04240000, 0x00201400, 0x00205000, 0x40600000, 0x14200000, 0x00240400}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat77,3,1.000000},
  {owl_defendpat78,1,8, "D305",-1,-2,2,1,3,3,0x0,685,
    { 0x30ffffff, 0xf0fcf0f0, 0xfcfc3000, 0x3fff3f00, 0xf0fcf000, 0xffff3000, 0x3fff3f3f, 0x30fcfcfc},
    { 0x00200100, 0x00200040, 0x00200000, 0x00200000, 0x00200000, 0x01200000, 0x00200004, 0x00200000}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat79,2,8, "D306",-1,0,2,3,3,3,0x0,722,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat79,3,4.800000},
  {owl_defendpat80,2,8, "D307",-1,-2,1,2,2,4,0x0,721,
    { 0x30ffff00, 0xf0fcf0f0, 0xfcff3000, 0x3cfc3c30, 0xf0fcf030, 0xffff3000, 0x3cfc3c3c, 0x30fffc00},
    { 0x00209100, 0x80600040, 0x18200000, 0x00240800, 0x00608000, 0x91200000, 0x08240004, 0x00201800}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat80,3,1.000000},
  {owl_defendpat81,2,8, "D308",0,-2,1,0,1,2,0x0,722,
    { 0x003c3c2c, 0x00f0f000, 0xf0f00000, 0x3f3e0000, 0xf0f00000, 0x3c3c0000, 0x003e3f00, 0x00f0f0e0},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x830,77.000000,attributes+0,1,NULL,autohelperowl_defendpat81,0,1.960000},
  {owl_defendpat82,4,8, "D309",-1,0,1,2,2,2,0x0,685,
    { 0x0038f838, 0xc0f0a000, 0xbcb00000, 0x2a3f0c00, 0xa0f0c000, 0xf8380000, 0x0c3f2a00, 0x00b0bcb0},
    { 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat82,3,1.600000},
  {owl_defendpat83,4,8, "D309a",-1,0,1,2,2,2,0x0,685,
    { 0x0038f838, 0xc0f0a000, 0xbcb00000, 0x2a3f0c00, 0xa0f0c000, 0xf8380000, 0x0c3f2a00, 0x00b0bcb0},
    { 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400}
   , 0x800,60.000000,attributes+0,1,NULL,autohelperowl_defendpat83,3,1.006000},
  {owl_defendpat84,1,8, "D309b",-1,0,2,2,3,2,0x0,722,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400}
   , 0x0,61.000000,attributes+0,1,NULL,autohelperowl_defendpat84,3,1.600000},
  {owl_defendpat85,5,8, "D310a",-2,-1,1,1,3,2,0x0,646,
    { 0xfcfca000, 0xbcbe3c00, 0x28fcfc20, 0xf0f8f800, 0x3cbebc00, 0xa0fcfc20, 0xf8f8f000, 0xfcfc2800},
    { 0x04180000, 0x00102400, 0x00904000, 0x60100000, 0x24100000, 0x00180400, 0x00106000, 0x40900000}
   , 0x0,55.000000,attributes+0,1,NULL,autohelperowl_defendpat85,0,0.970000},
  {owl_defendpat86,5,8, "D310b",-2,-1,1,1,3,2,0x0,646,
    { 0xfcfca000, 0xbcbe3c00, 0x28fcfc20, 0xf0f8f800, 0x3cbebc00, 0xa0fcfc20, 0xf8f8f000, 0xfcfc2800},
    { 0x04180000, 0x00102400, 0x00904000, 0x60100000, 0x24100000, 0x00180400, 0x00106000, 0x40900000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat86,0,0.592000},
  {owl_defendpat87,2,8, "D311",0,-1,2,1,2,2,0x0,685,
    { 0x00f0fcc0, 0xf0f0c000, 0xfc3c0000, 0x0c3c3f00, 0xc0f0f000, 0xfcf00000, 0x3f3c0c00, 0x003cfc0c},
    { 0x00600400, 0x10204000, 0x40240000, 0x04201000, 0x40201000, 0x04600000, 0x10200400, 0x00244000}
   , 0x20,60.000000,attributes+0,1,NULL,autohelperowl_defendpat87,3,1.000000},
  {owl_defendpat88,1,8, "D313",-1,-2,2,0,3,2,0x0,685,
    { 0x00fffffc, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xffff0000, 0x3f3f3f3c, 0x00fcfcfc},
    { 0x00920200, 0x201000a0, 0x00180000, 0x00102000, 0x00102000, 0x02920000, 0x20100028, 0x00180000}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat89,3,8, "D314",-1,-2,2,2,3,4,0x0,722,
    { 0xf0ffffff, 0xfcfcf0f0, 0xffff3f00, 0x3fffffff, 0xf0fcfcfc, 0xfffff000, 0xffff3f3f, 0x3fffffff},
    { 0x80681000, 0x18602000, 0x10a50a00, 0x20249090, 0x20601818, 0x10688000, 0x90242000, 0x0aa51000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat90,6,8, "D315",-1,0,1,2,2,2,0x0,722,
    { 0x00fcfca8, 0xf0f0f000, 0xfcfc0000, 0x3e3e3e00, 0xf0f0f000, 0xfcfc0000, 0x3e3e3e00, 0x00fcfca8},
    { 0x00584000, 0x50102000, 0x04940000, 0x20101400, 0x20105000, 0x40580000, 0x14102000, 0x00940400}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_defendpat90,0,1.000000},
  {owl_defendpat91,2,8, "D316",-1,0,1,2,2,2,0x0,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00108010, 0x80100000, 0x08100000, 0x00110800, 0x00108000, 0x80100000, 0x08110000, 0x00100810}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat91,0,1.000000},
  {owl_defendpat92,2,8, "D317",-1,0,1,2,2,2,0x0,685,
    { 0x00fcfc0c, 0xf0f0f000, 0xfcfc0000, 0x3f3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3f00, 0x00fcfcc0},
    { 0x00604000, 0x50200000, 0x04240000, 0x00201400, 0x00205000, 0x40600000, 0x14200000, 0x00240400}
   , 0x0,95.000000,attributes+0,1,NULL,autohelperowl_defendpat92,3,1.600000},
  {owl_defendpat93,5,8, "D318",-1,-1,1,2,2,3,0x0,722,
    { 0xf8fcfc7c, 0xfcfcf800, 0xfcfcbc00, 0xbffffd00, 0xf8fcfc00, 0xfcfcf800, 0xfdffbf00, 0xbcfcfcf4},
    { 0x50609020, 0x94640000, 0x18241400, 0x00665800, 0x00649400, 0x90605000, 0x58660000, 0x14241820}
   , 0x0,82.000000,attributes+0,1,NULL,autohelperowl_defendpat93,3,1.000000},
  {owl_defendpat94,3,8, "D319",-1,-2,1,1,2,3,0x0,721,
    { 0xffffbf00, 0xbcfcfcfc, 0xf8fcfc00, 0xfcfcf800, 0xfcfcbc00, 0xbfffff00, 0xf8fcfcfc, 0xfcfcf800},
    { 0x80601200, 0x18600080, 0x10240800, 0x00249000, 0x00601800, 0x12608000, 0x90240008, 0x08241000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_defendpat94,3,0.010000},
  {owl_defendpat95,4,8, "D320",-2,-1,1,2,3,3,0x0,686,
    { 0xf8fcfcfc, 0xfcfcf800, 0xfcfebc00, 0xbfffff20, 0xf8fcfc20, 0xfcfcf800, 0xffffbf00, 0xbcfefcfc},
    { 0x40180000, 0x04102000, 0x00900400, 0x20104000, 0x20100400, 0x00184000, 0x40102000, 0x04900000}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat96,1,8, "D400",-1,0,1,1,2,1,0x5,685,
    { 0x00fc7c00, 0x70f0f000, 0xf4fc0000, 0x3c3c3400, 0xf0f07000, 0x7cfc0000, 0x343c3c00, 0x00fcf400},
    { 0x00900000, 0x20100000, 0x00180000, 0x00102000, 0x00102000, 0x00900000, 0x20100000, 0x00180000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_defendpat96,0,1.000000},
  {owl_defendpat97,1,8, "D401",-1,0,1,1,2,1,0x5,648,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00900000, 0x20100000, 0x00180000, 0x00102000, 0x00102000, 0x00900000, 0x20100000, 0x00180000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_defendpat97,0,0.010000},
  {owl_defendpat98,1,8, "D402",0,-2,3,2,3,4,0x6,719,
    { 0x3f3f3f3f, 0x00ffffff, 0xf0f0f0f0, 0xffff0000, 0xffff0000, 0x3f3f3f3f, 0x00ffffff, 0xf0f0f0f0},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat99,2,8, "D403",-2,-1,1,2,3,3,0xa,721,
    { 0xfffffdf0, 0xfcfcfc7c, 0xfcfcfc00, 0xfcffff00, 0xfcfcfc00, 0xfdffff00, 0xfffffcf4, 0xfcfcfc3c},
    { 0x00200410, 0x00204000, 0x40200000, 0x04210000, 0x40200000, 0x04200000, 0x00210400, 0x00204010}
   , 0x0,70.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat100,2,8, "D404",-1,0,3,3,4,3,0x6,722,
    { 0x003fffef, 0xc0f0f0f0, 0xfcf00000, 0x3f3e0f00, 0xf0f0c000, 0xff3f0000, 0x0f3e3f3f, 0x00f0fcec},
    { 0x00200040, 0x00200000, 0x00200000, 0x00200100, 0x00200000, 0x00200000, 0x01200000, 0x00200004}
   , 0x0,90.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat101,3,8, "D405",0,-1,4,2,4,3,0x6,686,
    { 0x00b0bcfc, 0xa0f0c000, 0xfb3b0000, 0x0f3f2b3f, 0xc0f0a0f0, 0xbcb00000, 0x2b3f0f00, 0x003bfbff},
    { 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x80100000, 0x08100000, 0x00100800, 0x00108000}
   , 0x0,90.000000,attributes+0,1,NULL,autohelperowl_defendpat101,0,0.610000},
  {owl_defendpat102,4,8, "D406",0,-2,3,2,3,4,0xa,723,
    { 0x00bcfcfd, 0xe0f0f000, 0xfffa0000, 0x3f3f2f2f, 0xf0f0e0e0, 0xfcbc0000, 0x2f3f3f01, 0x00faffff},
    { 0x00140000, 0x00101000, 0x00500000, 0x10100000, 0x10100000, 0x00140000, 0x00101000, 0x00500000}
   , 0x0,70.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat103,3,8, "D407",-1,-2,2,2,3,4,0xa,647,
    { 0xf0fcffff, 0xfcfcf0c0, 0xffff3f00, 0x3fffffff, 0xf0fcfcfc, 0xfffcf000, 0xffff3f0f, 0x3fffffff},
    { 0x20180500, 0x00186040, 0x40902000, 0x24900000, 0x60180000, 0x05182000, 0x00902404, 0x20904000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat104,4,8, "D408",-1,-1,1,2,2,3,0xa,721,
    { 0xacffff00, 0xf8f8fcf0, 0xfcfce800, 0xfcbcbc00, 0xfcf8f800, 0xffffac00, 0xbcbcfc3c, 0xe8fcfc00},
    { 0x04120000, 0x00100420, 0x00104000, 0x40100000, 0x04100000, 0x00120400, 0x00104020, 0x40100000}
   , 0x0,30.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat105,2,8, "D409",0,-1,3,3,3,4,0x6,722,
    { 0x00bfffff, 0xe0f0f0f0, 0xfcf80000, 0x3f3f2f00, 0xf0f0e000, 0xffbf0000, 0x2f3f3f3f, 0x00f8fcfc},
    { 0x00120000, 0x00100020, 0x00100000, 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100000}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat106,3,8, "D500",-1,-1,1,2,2,3,0x2,685,
    { 0x7fffff00, 0xf4fcfcfc, 0xfcfcf400, 0xfcfc7c00, 0xfcfcf400, 0xffff7f00, 0x7cfcfcfc, 0xf4fcfc00},
    { 0x25900000, 0x20180404, 0x00186000, 0x40902000, 0x04182000, 0x00902500, 0x20904040, 0x60180000}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat107,3,8, "D502",-1,-1,1,2,2,3,0x2,685,
    { 0x3fffff00, 0xf0fcfcfc, 0xfcfcf000, 0xfcfc3c00, 0xfcfcf000, 0xffff3f00, 0x3cfcfcfc, 0xf0fcfc00},
    { 0x21910000, 0x20180014, 0x00182000, 0x00902000, 0x00182000, 0x00912100, 0x20900050, 0x20180000}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat108,3,8, "D503",-1,-2,1,0,2,2,0x8,686,
    { 0x00fcfcf0, 0xf0f0f000, 0xfcfc0000, 0x3c3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3c00, 0x00fcfc3c},
    { 0x00580400, 0x10106000, 0x40940000, 0x24101000, 0x60101000, 0x04580000, 0x10102400, 0x00944000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_defendpat108,0,3.160000},
  {owl_defendpat109,5,8, "D503b",-1,-2,2,0,3,2,0x8,647,
    { 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3e00, 0x00ffffbc, 0x00fcfcf8, 0xf0f0f000, 0xffff0000, 0x3e3f3f3c},
    { 0x10101060, 0x00540000, 0x10101000, 0x00560100, 0x00540000, 0x10101000, 0x01560000, 0x10101024}
   , 0x10,45.000000,attributes+0,1,NULL,autohelperowl_defendpat109,0,0.610000},
  {owl_defendpat110,2,8, "D504",-1,-2,0,1,1,3,0x0,720,
    { 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000},
    { 0x00102400, 0x00904000, 0x60100000, 0x04180000, 0x40900000, 0x24100000, 0x00180400, 0x00106000}
   , 0x0,85.000000,attributes+0,1,NULL,autohelperowl_defendpat110,0,0.959200},
  {owl_defendpat111,3,8, "D505",0,-1,2,1,2,2,0x2,686,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00580400, 0x10106000, 0x40940000, 0x24101000, 0x60101000, 0x04580000, 0x10102400, 0x00944000}
   , 0x0,85.000000,attributes+0,1,NULL,autohelperowl_defendpat111,0,1.186000},
  {owl_defendpat112,2,8, "D506",0,-1,2,1,2,2,0x2,686,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00180400, 0x00106000, 0x40900000, 0x24100000, 0x60100000, 0x04180000, 0x00102400, 0x00904000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat112,0,1.315600},
  {owl_defendpat113,3,8, "D507",-1,-2,1,2,2,4,0x2,721,
    { 0xfeffff00, 0xfcfcfcf8, 0xfcfffc00, 0xfcfcfc30, 0xfcfcfc30, 0xfffffe00, 0xfcfcfcbc, 0xfcfffc00},
    { 0xa0500000, 0x18180000, 0x00162800, 0x00909020, 0x00181820, 0x0050a000, 0x90900000, 0x28160000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_defendpat113,0,1.000000},
  {owl_defendpat114,4,8, "D508",-1,-2,1,2,2,4,0x2,720,
    { 0xfeffff00, 0xfcfcfcf8, 0xfcfffc00, 0xfcfcfc30, 0xfcfcfc30, 0xfffffe00, 0xfcfcfcbc, 0xfcfffc00},
    { 0xa0510000, 0x18180010, 0x00162800, 0x00909020, 0x00181820, 0x0051a000, 0x90900010, 0x28160000}
   , 0x0,90.000000,attributes+0,1,NULL,autohelperowl_defendpat114,0,1.000000},
  {owl_defendpat115,2,8, "D509",0,-1,1,1,1,2,0x2,722,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00186000, 0x40902000, 0x24900000, 0x20180400, 0x20904000, 0x60180000, 0x04182000, 0x00902400}
   , 0x0,90.000000,attributes+0,1,NULL,autohelperowl_defendpat115,0,1.000000},
  {owl_defendpat116,3,8, "D510",-1,-1,1,1,2,2,0x0,683,
    { 0x30fcf000, 0xf0fc3000, 0x3cfc3000, 0x30fc3c00, 0x30fcf000, 0xf0fc3000, 0x3cfc3000, 0x30fc3c00},
    { 0x00649000, 0x90601000, 0x18640000, 0x10241800, 0x10609000, 0x90640000, 0x18241000, 0x00641800}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat116,3,1.000000},
  {owl_defendpat117,5,8, "D511",-1,-1,2,1,3,2,0x0,648,
    { 0xbcfcfcf4, 0xf8fcfc00, 0xfcfcf800, 0xfdffbf00, 0xfcfcf800, 0xfcfcbc00, 0xbffffd00, 0xf8fcfc7c},
    { 0x04241860, 0x00609400, 0x90604000, 0x58260100, 0x94600000, 0x18240400, 0x01265800, 0x40609024}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat117,3,1.000000},
  {owl_defendpat118,2,8, "D512",-2,-2,2,2,4,4,0x2,682,
    { 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff},
    { 0x24900000, 0x20180400, 0x00186200, 0x40902080, 0x04182008, 0x00902400, 0x20904000, 0x62180000}
   , 0x0,85.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat119,6,8, "D513",-2,-1,2,3,4,4,0x2,721,
    { 0xffffffff, 0xfcfcffff, 0xfcfcfcc0, 0xffffff00, 0xfffcfc00, 0xffffff0f, 0xffffffff, 0xfcfcfcfc},
    { 0xa4900000, 0x28180400, 0x00186800, 0x4090a000, 0x04182800, 0x0090a400, 0xa0904000, 0x68180000}
   , 0x0,85.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat120,4,8, "D514",-1,-1,1,2,2,3,0x0,647,
    { 0x30fcfcbc, 0xf0fcf000, 0xfcfc3000, 0x3fff3e00, 0xf0fcf000, 0xfcfc3000, 0x3eff3f00, 0x30fcfcf8},
    { 0x20180404, 0x00186000, 0x40902000, 0x25900000, 0x60180000, 0x04182000, 0x00902500, 0x20904040}
   , 0x0,76.000000,attributes+0,1,NULL,autohelperowl_defendpat120,0,0.019600},
  {owl_defendpat121,4,8, "D515",0,-2,2,2,2,4,0x2,649,
    { 0x00fcffff, 0xf0f0f0c0, 0xfffc0000, 0x3f3f3f0f, 0xf0f0f0c0, 0xfffc0000, 0x3f3f3f0f, 0x00fcffff},
    { 0x00580600, 0x10106080, 0x41940000, 0x24101004, 0x60101040, 0x06580000, 0x10102408, 0x00944100}
   , 0x0,61.000000,attributes+0,1,NULL,autohelperowl_defendpat121,0,1.000000},
  {owl_defendpat122,5,8, "D600",-1,-2,1,1,2,3,0x2,720,
    { 0xfef73e00, 0x3cfcdcb8, 0xf07cfc00, 0xdcfcf000, 0xdcfc3c00, 0x3ef7fe00, 0xf0fcdcb8, 0xfc7cf000},
    { 0x00912400, 0x20904010, 0x60180000, 0x04182000, 0x40902000, 0x24910000, 0x20180410, 0x00186000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat123,5,8, "D600a",-1,-2,1,2,2,4,0x2,683,
    { 0xfef73e00, 0x3cfcdcb8, 0xf07cff00, 0xdcfcf0c0, 0xdcfc3c0c, 0x3ef7fe00, 0xf0fcdcb8, 0xff7cf000},
    { 0x00912400, 0x20904010, 0x60180200, 0x04182080, 0x40902008, 0x24910000, 0x20180410, 0x02186000}
   , 0x0,81.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat124,4,8, "D602",-1,0,1,2,2,2,0x2,648,
    { 0x00f0fcfc, 0xf0f0c000, 0xfc3c0000, 0x0f3f3f00, 0xc0f0f000, 0xfcf00000, 0x3f3f0f00, 0x003cfcfc},
    { 0x00100414, 0x00104000, 0x40100000, 0x05110000, 0x40100000, 0x04100000, 0x00110500, 0x00104050}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat124,0,1.600000},
  {owl_defendpat125,3,8, "D603",-1,0,1,2,2,2,0x2,648,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00180410, 0x00106000, 0x40900000, 0x24110000, 0x60100000, 0x04180000, 0x00112400, 0x00904010}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat125,0,1.960000},
  {owl_defendpat126,3,8, "D604",0,-1,1,2,1,3,0x2,722,
    { 0x00bf3d00, 0x20f0f070, 0xf0f80000, 0x3c3c2000, 0xf0f02000, 0x3dbf0000, 0x203c3c34, 0x00f8f000},
    { 0x00160000, 0x00101020, 0x00500000, 0x10100000, 0x10100000, 0x00160000, 0x00101020, 0x00500000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat126,0,0.970000},
  {owl_defendpat127,5,8, "D604a",0,-2,1,3,1,5,0x2,759,
    { 0x00ffff00, 0xf0f0f0f0, 0xffff0000, 0x3c3c3c3c, 0xf0f0f0f0, 0xffff0000, 0x3c3c3c3c, 0x00ffff00},
    { 0x00558000, 0x90101010, 0x0a550000, 0x10101818, 0x10109090, 0x80550000, 0x18101010, 0x00550a00}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat127,0,1.000000},
  {owl_defendpat128,6,8, "D605",0,-1,2,2,2,3,0x2,648,
    { 0x00b8fcfc, 0xe0f0e000, 0xffb80000, 0x2f3f2f0f, 0xe0f0e0c0, 0xfcb80000, 0x2f3f2f00, 0x00b8ffff},
    { 0x00100418, 0x00104000, 0x41100000, 0x06110004, 0x40100040, 0x04100000, 0x00110600, 0x00104190}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat129,3,8, "D606",-1,0,1,2,2,2,0x2,648,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00180418, 0x00106000, 0x40900000, 0x26110000, 0x60100000, 0x04180000, 0x00112600, 0x00904090}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat129,0,0.019600},
  {owl_defendpat130,2,8, "D607",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00648800, 0x90209000, 0x88640000, 0x18201800, 0x90209000, 0x88640000, 0x18201800, 0x00648800}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_defendpat130,3,0.019600},
  {owl_defendpat131,3,8, "D608",0,-1,1,2,1,3,0x2,722,
    { 0x00bfff00, 0xe0f0f0f0, 0xfcf80000, 0x3c3c2c00, 0xf0f0e000, 0xffbf0000, 0x2c3c3c3c, 0x00f8fc00},
    { 0x00162000, 0x00901020, 0x20500000, 0x10180000, 0x10900000, 0x20160000, 0x00181020, 0x00502000}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat131,0,1.000000},
  {owl_defendpat132,3,8, "D608b",0,-2,1,2,1,4,0x2,721,
    { 0x2c3c3c3c, 0x00faff00, 0xf0f0e0e0, 0xffbf0000, 0xfffa0000, 0x3c3c2c2c, 0x00bfff00, 0xe0f0f0f0},
    { 0x08100020, 0x00100800, 0x00108000, 0x80120000, 0x08100000, 0x00100800, 0x00128000, 0x80100020}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat132,0,0.610000},
  {owl_defendpat133,2,8, "D609",-1,0,1,2,2,2,0x2,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00108010, 0x80100000, 0x08100000, 0x00110800, 0x00108000, 0x80100000, 0x08110000, 0x00100810}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat134,7,8, "D610",-1,-2,1,2,2,4,0x2,611,
    { 0x2fffff00, 0xf0f8fcfc, 0xfffee000, 0xfcbc3c2c, 0xfcf8f0e0, 0xffff2f00, 0x3cbcfcfc, 0xe0feff00},
    { 0x0651a400, 0x90904418, 0x68144000, 0x44181800, 0x44909000, 0xa4510600, 0x18184490, 0x40146800}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_defendpat134,0,0.050000},
  {owl_defendpat135,5,8, "D611",-1,-1,1,2,2,3,0x2,722,
    { 0x7cfcfcbc, 0xf4fcfc00, 0xfcfcf400, 0xffff7e00, 0xfcfcf400, 0xfcfc7c00, 0x7effff00, 0xf4fcfcf8},
    { 0x20944018, 0x60181000, 0x04582000, 0x12912400, 0x10186000, 0x40942000, 0x24911200, 0x20580490}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_defendpat135,0,0.010000},
  {owl_defendpat136,7,8, "D612",-1,-2,1,2,2,4,0x2,685,
    { 0xfcffff00, 0xfcfcfcf0, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfcf0, 0xfffffc00, 0xfcfcfc3c, 0xfcffff00},
    { 0x54210100, 0x04240450, 0x01215400, 0x40604014, 0x04240450, 0x01215400, 0x40604014, 0x54210100}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat137,7,8, "D613",0,-2,2,2,2,4,0x2,721,
    { 0x3f3f3f0f, 0x00fcffff, 0xf0f0f0c0, 0xfffc0000, 0xfffc0000, 0x3f3f3f0f, 0x00fcffff, 0xf0f0f0c0},
    { 0x10121005, 0x00540121, 0x10101040, 0x01540000, 0x01540000, 0x10121005, 0x00540121, 0x10101040}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat138,5,8, "D614",0,-1,2,1,2,2,0x2,648,
    { 0x00b8fcfc, 0xe0f0e000, 0xfcb80000, 0x2f3f2f00, 0xe0f0e000, 0xfcb80000, 0x2f3f2f00, 0x00b8fcfc},
    { 0x00100498, 0x00104000, 0x40100000, 0x06110200, 0x40100000, 0x04100000, 0x02110600, 0x00104098}
   , 0x0,30.000000,attributes+0,1,NULL,autohelperowl_defendpat138,0,1.000000},
  {owl_defendpat139,8,8, "D614b",0,-2,2,2,2,4,0x2,649,
    { 0x00beffff, 0xe0f0f0e0, 0xfefa0000, 0x3f3f2f2b, 0xf0f0e0a0, 0xffbe0000, 0x2f3f3f2f, 0x00fafeff},
    { 0x00140126, 0x00101040, 0x00500000, 0x11120000, 0x10100000, 0x01140000, 0x00121106, 0x00500060}
   , 0x0,31.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat140,5,8, "D615",-1,-2,1,1,2,3,0x2,721,
    { 0x0cbcfcfc, 0xe0f0fc00, 0xfcf8c000, 0xff3f2f00, 0xfcf0e000, 0xfcbc0c00, 0x2f3fff00, 0xc0f8fcfc},
    { 0x00104094, 0x40100000, 0x04100000, 0x01110600, 0x00104000, 0x40100000, 0x06110100, 0x00100458}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat140,0,0.610000},
  {owl_defendpat141,6,8, "D616",-1,-2,1,2,2,4,0x2,757,
    { 0xbfff3e00, 0x38fcfcbc, 0xf0fcfb00, 0xfcfcb0c0, 0xfcfc380c, 0x3effbf00, 0xb0fcfcf8, 0xfbfcf000},
    { 0x04912400, 0x20904410, 0x60184200, 0x44182080, 0x44902008, 0x24910400, 0x20184410, 0x42186000}
   , 0x0,25.000000,attributes+0,1,NULL,autohelperowl_defendpat141,0,0.050000},
  {owl_defendpat142,6,8, "D616a",-1,-2,1,4,2,6,0x2,685,
    { 0x2fffff00, 0xf0f8fcfc, 0xfffce000, 0xfcbc3c0c, 0xfcf8f0c0, 0xffff2f00, 0x3cbcfcfc, 0xe0fcff00},
    { 0x06118400, 0x80104418, 0x48104000, 0x44100800, 0x44108000, 0x84110600, 0x08104490, 0x40104800}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_defendpat142,0,0.050000},
  {owl_defendpat143,7,8, "D617",-1,-3,1,2,2,5,0x2,795,
    { 0xbfff3e00, 0x38fcfcbc, 0xf0fcfb00, 0xfcfcb0c0, 0xfcfc380c, 0x3effbf00, 0xb0fcfcf8, 0xfbfcf000},
    { 0x06912400, 0x20904418, 0x60184200, 0x44182080, 0x44902008, 0x24910600, 0x20184490, 0x42186000}
   , 0x0,25.000000,attributes+0,1,NULL,autohelperowl_defendpat143,0,0.010000},
  {owl_defendpat144,5,8, "D618",-1,-2,1,2,2,4,0x2,646,
    { 0xffff3e00, 0x3cfcfcbc, 0xf0fcff00, 0xfcfcf0c0, 0xfcfc3c0c, 0x3effff00, 0xf0fcfcf8, 0xfffcf000},
    { 0x26912400, 0x20984418, 0x60186200, 0x44982080, 0x44982008, 0x24912600, 0x20984490, 0x62186000}
   , 0x0,25.000000,attributes+0,1,NULL,autohelperowl_defendpat144,0,0.010000},
  {owl_defendpat145,4,8, "D619",-1,-1,1,1,2,2,0x2,647,
    { 0xfcfcf800, 0xfcfcbc00, 0xbcfcfc00, 0xf8fcfc00, 0xbcfcfc00, 0xf8fcfc00, 0xfcfcf800, 0xfcfcbc00},
    { 0x90249000, 0x88641000, 0x18601800, 0x10648800, 0x10648800, 0x90249000, 0x88641000, 0x18601800}
   , 0x0,39.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat146,6,8, "D620",-1,-2,1,1,2,3,0x2,647,
    { 0x2fffff00, 0xf0f8fcfc, 0xfcfce000, 0xfcbc3c00, 0xfcf8f000, 0xffff2f00, 0x3cbcfcfc, 0xe0fcfc00},
    { 0x06118500, 0x80104458, 0x48104000, 0x44100800, 0x44108000, 0x85110600, 0x08104494, 0x40104800}
   , 0x0,72.000000,attributes+0,1,NULL,autohelperowl_defendpat146,0,0.016000},
  {owl_defendpat147,6,8, "D621",-2,-1,1,2,3,3,0x2,721,
    { 0xfcbffc00, 0xecfffc30, 0xfcf8fc30, 0xfcfcec00, 0xfcffec00, 0xfcbffc30, 0xecfcfc30, 0xfcf8fc00},
    { 0x44124000, 0x44110420, 0x04104410, 0x40104400, 0x04114400, 0x40124410, 0x44104020, 0x44100400}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat148,4,8, "D622",-1,-1,1,2,2,3,0x2,646,
    { 0xfcfeff00, 0xfcfcfce0, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfffefc00, 0xfcfcfc2c, 0xfcfcfc00},
    { 0x18640000, 0x10241800, 0x00649000, 0x90601000, 0x18241000, 0x00641800, 0x10609000, 0x90640000}
   , 0x20,45.000000,attributes+0,1,NULL,autohelperowl_defendpat148,3,1.600000},
  {owl_defendpat149,4,8, "D623",-1,-2,1,3,2,5,0x2,758,
    { 0xdfffdf00, 0xfc74fcfc, 0xdffcdc00, 0xfc74fc0c, 0xfc74fcc0, 0xdfffdf00, 0xfc74fcfc, 0xdcfcdf00},
    { 0x85900400, 0x28104404, 0x40184800, 0x4410a000, 0x44102800, 0x04908500, 0xa0104440, 0x48184000}
   , 0x10,95.000000,attributes+0,1,NULL,autohelperowl_defendpat149,0,0.016000},
  {owl_defendpat150,4,8, "D624",-1,-2,1,1,2,3,0x2,685,
    { 0x0fff3600, 0x30f07cbc, 0x70fcc000, 0xf43c3000, 0x7cf03000, 0x36ff0f00, 0x303cf4f8, 0xc0fc7000},
    { 0x01910000, 0x20100014, 0x00180000, 0x00102000, 0x00102000, 0x00910100, 0x20100050, 0x00180000}
   , 0x0,40.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat151,3,8, "D625",-1,-1,0,1,1,2,0x2,683,
    { 0xbcfc0000, 0x383c3c00, 0x00fcf800, 0xf0f0b000, 0x3c3c3800, 0x00fcbc00, 0xb0f0f000, 0xf8fc0000},
    { 0x04180000, 0x00102400, 0x00904000, 0x60100000, 0x24100000, 0x00180400, 0x00106000, 0x40900000}
   , 0x20,45.000000,attributes+0,1,NULL,autohelperowl_defendpat151,0,0.016000},
  {owl_defendpat152,2,8, "D626",0,-1,1,2,1,3,0x6,648,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00580200, 0x10102080, 0x00940000, 0x20101000, 0x20101000, 0x02580000, 0x10102008, 0x00940000}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat153,4,8, "D627",-1,0,2,2,3,2,0x8,723,
    { 0x3f3f3f3f, 0x00fcfcfc, 0xf0f0f000, 0xffff0000, 0xfcfc0000, 0x3f3f3f00, 0x00ffffff, 0xf0f0f0f0},
    { 0x06110120, 0x00100458, 0x00104000, 0x40120000, 0x04100000, 0x01110600, 0x00124094, 0x40100020}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_defendpat153,0,1.600000},
  {owl_defendpat154,3,8, "D628",0,0,2,1,2,1,0x8,722,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00140010, 0x00101000, 0x00500000, 0x10110000, 0x10100000, 0x00140000, 0x00111000, 0x00500010}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_defendpat154,0,1.600000},
  {owl_defendpat155,5,8, "D629",-1,-1,4,1,5,2,0x8,722,
    { 0x34fcfcfc, 0xf0fcf400, 0xfcfc7000, 0x7fff3f00, 0xf4fcf000, 0xfcfc3400, 0x3fff7f00, 0x70fcfcfc},
    { 0x20504040, 0x50180000, 0x04142000, 0x00901500, 0x00185000, 0x40502000, 0x15900000, 0x20140404}
   , 0x10,65.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat156,2,8, "D630",-1,-1,1,1,2,2,0x2,685,
    { 0x00f0fc00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0x003cfc00},
    { 0x00600400, 0x10204000, 0x40240000, 0x04201000, 0x40201000, 0x04600000, 0x10200400, 0x00244000}
   , 0x800,65.000000,attributes+0,1,NULL,autohelperowl_defendpat156,3,1.600000},
  {owl_defendpat157,5,8, "D631",-1,-1,1,2,2,3,0x2,721,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfcfc},
    { 0x40606440, 0x54a04000, 0x64240400, 0x04285500, 0x40a05400, 0x64604000, 0x55280400, 0x04246404}
   , 0x10,75.000000,attributes+0,1,NULL,autohelperowl_defendpat157,3,1.960000},
  {owl_defendpat158,5,8, "D632",-1,-1,1,2,2,3,0x2,759,
    { 0xfcffff00, 0xfcfcfcf0, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfc00},
    { 0x58666000, 0x54a41820, 0x24649400, 0x90685400, 0x18a45400, 0x60665800, 0x54689020, 0x94642400}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat158,3,1.000000},
  {owl_defendpat159,7,8, "D633",-1,-3,1,1,2,4,0x2,722,
    { 0x3cfcbcfc, 0xb0fcfc00, 0xf8fcf000, 0xffff3b00, 0xfcfcb000, 0xbcfc3c00, 0x3bffff00, 0xf0fcf8fc},
    { 0x10500040, 0x10140000, 0x00141000, 0x00501100, 0x00141000, 0x00501000, 0x11500000, 0x10140004}
   , 0x0,65.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat160,1,8, "D634",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00680000, 0x10202000, 0x00a40000, 0x20201000, 0x20201000, 0x00680000, 0x10202000, 0x00a40000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_defendpat160,3,0.610000},
  {owl_defendpat161,6,8, "D635",0,-1,3,2,3,3,0x2,686,
    { 0x00f0fcfc, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0f, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f00, 0x003cffff},
    { 0x00500404, 0x10104000, 0x41140000, 0x05101005, 0x40101040, 0x04500000, 0x10100500, 0x00144141}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat161,0,1.000000},
  {owl_defendpat162,3,8, "D636",0,-2,1,2,1,4,0x2,648,
    { 0x00ffff00, 0xf0f0f0f0, 0xffff0000, 0x3c3c3c3c, 0xf0f0f0f0, 0xffff0000, 0x3c3c3c3c, 0x00ffff00},
    { 0x00150000, 0x00101010, 0x00520000, 0x10100020, 0x10100020, 0x00150000, 0x00101010, 0x00520000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat162,0,1.000000},
  {owl_defendpat163,2,8, "D637",-1,-1,0,1,1,2,0x0,685,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00180400, 0x00106000, 0x40900000, 0x24100000, 0x60100000, 0x04180000, 0x00102400, 0x00904000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat163,0,0.019600},
  {owl_defendpat164,5,8, "D638",-1,-1,1,2,2,3,0x2,610,
    { 0xe0f8fc00, 0xfcf8e000, 0xffbf2d00, 0x2cbcfc7c, 0xe0f8fcf4, 0xfcf8e000, 0xfcbc2c00, 0x2dbfff00},
    { 0x00904400, 0x60104000, 0x44180000, 0x04102400, 0x40106000, 0x44900000, 0x24100400, 0x00184400}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat165,2,8, "D639",0,-1,1,2,1,3,0x2,721,
    { 0x00bfff00, 0xe0f0f0f0, 0xfcf80000, 0x3c3c2c00, 0xf0f0e000, 0xffbf0000, 0x2c3c3c3c, 0x00f8fc00},
    { 0x0012a000, 0x80900020, 0x28100000, 0x00180800, 0x00908000, 0xa0120000, 0x08180020, 0x00102800}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat165,0,1.000000},
  {owl_defendpat166,3,8, "D640",0,-1,1,3,1,4,0x2,647,
    { 0x00f0fc00, 0xf0f0c000, 0xff3f0000, 0x0c3c3c3c, 0xc0f0f0f0, 0xfcf00000, 0x3c3c0c00, 0x003fff00},
    { 0x00100400, 0x00104000, 0x40100000, 0x04100000, 0x40100000, 0x04100000, 0x00100400, 0x00104000}
   , 0x0,56.000000,attributes+0,1,NULL,autohelperowl_defendpat166,0,0.610000},
  {owl_defendpat167,3,8, "D641",-1,-2,1,2,2,4,0x2,721,
    { 0xffffff00, 0xfcfcfcfc, 0xfffffd00, 0xfcfcfc7c, 0xfcfcfcf4, 0xffffff00, 0xfcfcfcfc, 0xfdffff00},
    { 0x94210000, 0x08240410, 0x00205800, 0x40608000, 0x04240800, 0x00219400, 0x80604010, 0x58200000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat167,3,0.016000},
  {owl_defendpat168,2,8, "D642",0,-2,1,1,1,3,0x2,721,
    { 0x003fbc00, 0x80f0f030, 0xf8f00000, 0x3c3c0800, 0xf0f08000, 0xbc3f0000, 0x083c3c30, 0x00f0f800},
    { 0x00120000, 0x00100020, 0x00100000, 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_defendpat168,0,0.970000},
  {owl_defendpat169,5,8, "D643",-1,-1,1,1,2,2,0x2,722,
    { 0x38bcfc00, 0xe0fcf800, 0xfcf8b000, 0xbcfc2c00, 0xf8fce000, 0xfcbc3800, 0x2cfcbc00, 0xb0f8fc00},
    { 0x10104000, 0x40140000, 0x04101000, 0x00500400, 0x00144000, 0x40101000, 0x04500000, 0x10100400}
   , 0x0,40.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat170,5,8, "D643b",-1,-1,1,2,2,3,0x2,722,
    { 0x0fffbf00, 0xb0f0fcfc, 0xf8fcc000, 0xfc3c3800, 0xfcf0b000, 0xbfff0f00, 0x383cfcfc, 0xc0fcf800},
    { 0x05500000, 0x10100404, 0x00144000, 0x40101000, 0x04101000, 0x00500500, 0x10104040, 0x40140000}
   , 0x0,40.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat171,6,8, "D644",0,-1,2,2,2,3,0x2,685,
    { 0x00beffff, 0xe0f0f0e0, 0xfcf80000, 0x3f3f2f00, 0xf0f0e000, 0xffbe0000, 0x2f3f3f2f, 0x00f8fcfc},
    { 0x00140181, 0x00101040, 0x00500000, 0x10100200, 0x10100000, 0x01140000, 0x02101005, 0x00500008}
   , 0x0,30.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat172,2,8, "D645",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00580000, 0x10102000, 0x00940000, 0x20101000, 0x20101000, 0x00580000, 0x10102000, 0x00940000}
   , 0x0,96.000000,attributes+0,1,NULL,autohelperowl_defendpat172,0,0.613600},
  {owl_defendpat173,5,4, "D700",-1,0,1,2,2,2,0x0,648,
    { 0x00f8fcf8, 0xf0f0e000, 0xfcbc0000, 0x2e3f3f00, 0xe0f0f000, 0xfcf80000, 0x3f3f2e00, 0x00bcfcbc},
    { 0x00100410, 0x00104000, 0x40100000, 0x04110000, 0x40100000, 0x04100000, 0x00110400, 0x00104010}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat174,3,8, "D701",-1,0,1,2,2,2,0x0,648,
    { 0x0030fc3c, 0xc0f0c000, 0xfc300000, 0x0f3f0c00, 0xc0f0c000, 0xfc300000, 0x0c3f0f00, 0x0030fcf0},
    { 0x00100410, 0x00104000, 0x40100000, 0x04110000, 0x40100000, 0x04100000, 0x00110400, 0x00104010}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_defendpat174,0,0.016000},
  {owl_defendpat175,3,8, "D702",-1,0,1,2,2,2,0x0,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00108410, 0x80104000, 0x48100000, 0x04110800, 0x40108000, 0x84100000, 0x08110400, 0x00104810}
   , 0x20,70.000000,attributes+0,1,NULL,autohelperowl_defendpat175,0,0.019600},
  {owl_defendpat176,4,8, "D703",0,-1,2,1,2,2,0x0,721,
    { 0x003cbc20, 0x80f0f000, 0xf8f00000, 0x3c3e0800, 0xf0f08000, 0xbc3c0000, 0x083e3c00, 0x00f0f820},
    { 0x00100400, 0x00104000, 0x40100000, 0x04100000, 0x40100000, 0x04100000, 0x00100400, 0x00104000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_defendpat176,0,0.610000},
  {owl_defendpat177,4,8, "D704",-1,0,1,2,2,2,0x0,686,
    { 0x0038bc3c, 0x80f0e000, 0xf8b00000, 0x2f3f0800, 0xe0f08000, 0xbc380000, 0x083f2f00, 0x00b0f8f0},
    { 0x00100400, 0x00104000, 0x40100000, 0x04100000, 0x40100000, 0x04100000, 0x00100400, 0x00104000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat177,0,1.186000},
  {owl_defendpat178,3,8, "D704b",0,-1,1,2,1,3,0x2,648,
    { 0x00f8fc00, 0xf0f0e000, 0xfcbc0000, 0x2c3c3c00, 0xe0f0f000, 0xfcf80000, 0x3c3c2c00, 0x00bcfc00},
    { 0x00100400, 0x00104000, 0x40100000, 0x04100000, 0x40100000, 0x04100000, 0x00100400, 0x00104000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat178,0,2.091760},
  {owl_defendpat179,2,8, "D705",0,0,1,2,1,2,0x2,722,
    { 0x003f3e00, 0x00f0f0b0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3e3f0000, 0x003c3c38, 0x00f0f000},
    { 0x00122000, 0x00900020, 0x20100000, 0x00180000, 0x00900000, 0x20120000, 0x00180020, 0x00102000}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_defendpat179,0,1.000000},
  {owl_defendpat180,4,8, "D706",0,-1,2,1,2,2,0x0,721,
    { 0x003cbc20, 0x80f0f000, 0xf8f00000, 0x3c3e0800, 0xf0f08000, 0xbc3c0000, 0x083e3c00, 0x00f0f820},
    { 0x00100400, 0x00104000, 0x40100000, 0x04100000, 0x40100000, 0x04100000, 0x00100400, 0x00104000}
   , 0x20,35.000000,attributes+0,1,NULL,autohelperowl_defendpat180,0,0.016000},
  {owl_defendpat181,6,8, "D707",-1,0,2,2,3,2,0x0,721,
    { 0x3c3f3f22, 0x00fcfcf0, 0xf0f0f000, 0xfcfe0000, 0xfcfc0000, 0x3f3f3c00, 0x00fefc3e, 0xf0f0f020},
    { 0x28111100, 0x00580850, 0x1010a000, 0x80940000, 0x08580000, 0x11112800, 0x00948014, 0xa0101000}
   , 0x0,77.000000,attributes+0,1,NULL,autohelperowl_defendpat181,0,1.000000},
  {owl_defendpat182,8,8, "D708",-2,-2,2,1,4,3,0x0,722,
    { 0x80bcff3c, 0xe8f0f0c0, 0xfcfb0a00, 0x3f3facb0, 0xf0f0e838, 0xffbc8000, 0xac3f3f0c, 0x0afbfcf0},
    { 0x00140214, 0x00101080, 0x00510000, 0x11110010, 0x10100010, 0x02140000, 0x00111108, 0x00510050}
   , 0x0,77.000000,attributes+0,1,NULL,autohelperowl_defendpat182,0,1.000000},
  {owl_defendpat183,5,8, "D709",-1,-1,1,2,2,3,0x0,685,
    { 0x38fcfc74, 0xf0fcf800, 0xfcfcb000, 0xbdff3d00, 0xf8fcf000, 0xfcfc3800, 0x3dffbd00, 0xb0fcfc74},
    { 0x00644400, 0x50205000, 0x44640000, 0x14201400, 0x50205000, 0x44640000, 0x14201400, 0x00644400}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat183,3,0.650000},
  {owl_defendpat184,5,8, "D710",-1,0,1,2,2,2,0x0,723,
    { 0x003cfcfc, 0xc0f0f000, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xfc3c0000, 0x0f3f3f00, 0x00f0fcfc},
    { 0x00144440, 0x40105000, 0x44500000, 0x14100500, 0x50104000, 0x44140000, 0x05101400, 0x00504404}
   , 0x0,30.000000,attributes+0,1,NULL,autohelperowl_defendpat184,0,0.016000},
  {owl_defendpat185,1,8, "D711",0,0,1,1,1,1,0x0,722,
    { 0x00303c00, 0x00f0c000, 0xf0300000, 0x0c3c0000, 0xc0f00000, 0x3c300000, 0x003c0c00, 0x0030f000},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x0,25.000000,attributes+0,1,NULL,autohelperowl_defendpat185,0,0.016000},
  {owl_defendpat186,1,8, "D712",-1,0,0,1,1,1,0x0,685,
    { 0x00303c00, 0x00f0c000, 0xf0300000, 0x0c3c0000, 0xc0f00000, 0x3c300000, 0x003c0c00, 0x0030f000},
    { 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200400, 0x00204000}
   , 0x0,25.000000,attributes+0,1,NULL,autohelperowl_defendpat186,3,0.016000},
  {owl_defendpat187,5,4, "D713",0,-1,2,2,2,3,0x0,648,
    { 0x00fcfffc, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0c, 0x00fcfcfc},
    { 0x00140114, 0x00101040, 0x00500000, 0x11110000, 0x10100000, 0x01140000, 0x00111104, 0x00500050}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat187,0,0.010000},
  {owl_defendpat188,5,8, "D714",0,-1,2,2,2,3,0x0,647,
    { 0x00f0fcfc, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0c, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f00, 0x003cfffc},
    { 0x00100450, 0x00104000, 0x41100000, 0x04110104, 0x40100040, 0x04100000, 0x01110400, 0x00104114}
   , 0x20,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat189,1,4, "D715",0,0,0,1,0,1,0x0,685,
    { 0x00303000, 0x00f00000, 0x30300000, 0x003c0000, 0x00f00000, 0x30300000, 0x003c0000, 0x00303000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat189,0,0.043600},
  {owl_defendpat190,2,8, "D715b",-1,-1,0,1,1,2,0x2,646,
    { 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000, 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000, 0xfcfc0000},
    { 0x04180000, 0x00102400, 0x00904000, 0x60100000, 0x24100000, 0x00180400, 0x00106000, 0x40900000}
   , 0x0,36.000000,attributes+0,1,NULL,autohelperowl_defendpat190,0,0.416000},
  {owl_defendpat191,4,8, "D715c",-1,0,1,2,2,2,0x0,649,
    { 0x00fcfcf8, 0xf0f0f000, 0xfcfc0000, 0x3e3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3e00, 0x00fcfcbc},
    { 0x00188410, 0x80106000, 0x48900000, 0x24110800, 0x60108000, 0x84180000, 0x08112400, 0x00904810}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_defendpat191,0,0.019600},
  {owl_defendpat192,6,8, "D716",-1,0,1,3,2,3,0x0,648,
    { 0x0030f8fc, 0xc0f08000, 0xbc300000, 0x0b3f0f00, 0x80f0c000, 0xf8300000, 0x0f3f0b00, 0x0030bcfc},
    { 0x00100044, 0x00100000, 0x00100000, 0x01100100, 0x00100000, 0x00100000, 0x01100100, 0x00100044}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_defendpat192,0,0.016000},
  {owl_defendpat193,5,8, "D717",-1,-1,1,2,2,3,0x0,648,
    { 0xf8fcfc54, 0xfcfcf800, 0xfcfcbc00, 0xbdfdfd00, 0xf8fcfc00, 0xfcfcf800, 0xfdfdbd00, 0xbcfcfc54},
    { 0x50241800, 0x04649000, 0x90601400, 0x18644000, 0x90640400, 0x18245000, 0x40641800, 0x14609000}
   , 0x0,81.000000,attributes+0,1,NULL,autohelperowl_defendpat193,3,1.000000},
  {owl_defendpat194,4,8, "D718",-1,0,2,2,3,2,0x0,685,
    { 0x003fff3f, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xff3f0000, 0x0c3f3f3f, 0x00f0fcf0},
    { 0x00118110, 0x80100050, 0x08100000, 0x00110800, 0x00108000, 0x81110000, 0x08110014, 0x00100810}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat195,4,8, "D720",0,-1,1,2,1,3,0x0,648,
    { 0x00f0fc00, 0xf0f0c000, 0xfe3e0000, 0x0c3c3c28, 0xc0f0f0a0, 0xfcf00000, 0x3c3c0c00, 0x003efe00},
    { 0x00100400, 0x00104000, 0x40100000, 0x04100000, 0x40100000, 0x04100000, 0x00100400, 0x00104000}
   , 0x0,55.000000,attributes+0,1,NULL,autohelperowl_defendpat195,0,0.010000},
  {owl_defendpat196,6,8, "D721",-1,-2,1,0,2,2,0x0,722,
    { 0x00fcbcec, 0xb0f0f000, 0xf8fc0000, 0x3f3e3b00, 0xf0f0b000, 0xbcfc0000, 0x3b3e3f00, 0x00fcf8ec},
    { 0x00580044, 0x10102000, 0x00940000, 0x21101100, 0x20101000, 0x00580000, 0x11102100, 0x00940044}
   , 0x0,55.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat197,4,8, "D722",-1,-2,1,1,2,3,0x0,721,
    { 0x0c3cfc30, 0xc0f0fc00, 0xfcf0c000, 0xfc3f0c00, 0xfcf0c000, 0xfc3c0c00, 0x0c3ffc00, 0xc0f0fc30},
    { 0x08104410, 0x40104800, 0x44108000, 0x84110400, 0x48104000, 0x44100800, 0x04118400, 0x80104410}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat197,0,0.610000},
  {owl_defendpat198,6,8, "D723",-3,-1,0,2,3,3,0x0,682,
    { 0xffbf0000, 0x2f3f3f3f, 0x00f8fcfc, 0xf0f0e000, 0x3f3f2f00, 0x00bfffff, 0xe0f0f0f0, 0xfcf80000},
    { 0x01160000, 0x00101025, 0x00500000, 0x10100000, 0x10100000, 0x00160101, 0x00101060, 0x00500000}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat199,1,8, "D800",0,0,3,3,3,3,0x6,722,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat200,1,8, "D801",0,-1,1,1,1,2,0x6,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00900000, 0x20100000, 0x00180000, 0x00102000, 0x00102000, 0x00900000, 0x20100000, 0x00180000}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat201,2,8, "D802",0,0,1,2,1,2,0x6,722,
    { 0x003b3f00, 0x00f0e0f0, 0xf0b00000, 0x2c3c0000, 0xe0f00000, 0x3f3b0000, 0x003c2c3c, 0x00b0f000},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat202,1,8, "D803",0,-1,1,1,1,2,0x6,721,
    { 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000},
    { 0x08100000, 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x00100800, 0x00108000, 0x80100000}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat203,3,8, "D804",0,-1,1,1,1,2,0x6,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00540000, 0x10101000, 0x00540000, 0x10101000, 0x10101000, 0x00540000, 0x10101000, 0x00540000}
   , 0x0,25.000000,attributes+0,1,NULL,autohelperowl_defendpat203,0,0.010000},
  {owl_defendpat204,2,8, "D804a",0,-1,1,1,1,2,0xa,685,
    { 0x00f0fc00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0x003cfc00},
    { 0x00500800, 0x10108000, 0x80140000, 0x08101000, 0x80101000, 0x08500000, 0x10100800, 0x00148000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat204,0,0.010000},
  {owl_defendpat205,3,8, "D804b",0,-1,1,2,1,3,0x6,685,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00958000, 0xa0101010, 0x08580000, 0x10102800, 0x1010a000, 0x80950000, 0x28101010, 0x00580800}
   , 0x0,26.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat206,5,8, "D805",0,-1,2,2,2,3,0xa,686,
    { 0x00bcfffe, 0xe0f0f0c0, 0xfcf80000, 0x3f3f2f00, 0xf0f0e000, 0xffbc0000, 0x2f3f3f0e, 0x00f8fcfc},
    { 0x00140100, 0x00101040, 0x00500000, 0x10100000, 0x10100000, 0x01140000, 0x00101004, 0x00500000}
   , 0x0,98.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat207,6,8, "D805a",0,-1,2,2,2,3,0xa,758,
    { 0x2f3f3f2a, 0x00f8fcfc, 0xf0f0e000, 0xfebe0000, 0xfcf80000, 0x3f3f2f00, 0x00befefe, 0xe0f0f0a0},
    { 0x00101000, 0x00500000, 0x10100000, 0x00140000, 0x00500000, 0x10100000, 0x00140000, 0x00101000}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat208,4,8, "D805b",0,-1,2,2,2,3,0xa,685,
    { 0x00f8fcfc, 0xf0f0e000, 0xffbc0000, 0x2f3f3f0e, 0xe0f0f0c0, 0xfcf80000, 0x3f3f2f00, 0x00bcfffe},
    { 0x00100000, 0x00100000, 0x01100000, 0x00100004, 0x00100040, 0x00100000, 0x00100000, 0x00100100}
   , 0x0,30.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat209,2,8, "D806",0,-1,1,2,1,3,0xa,685,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00250000, 0x00201010, 0x00600000, 0x10200000, 0x10200000, 0x00250000, 0x00201010, 0x00600000}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_defendpat209,3,1.600000},
  {owl_defendpat210,2,8, "D807",0,-1,1,2,1,3,0xa,685,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00250000, 0x00201010, 0x00600000, 0x10200000, 0x10200000, 0x00250000, 0x00201010, 0x00600000}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_defendpat210,3,1.600000},
  {owl_defendpat211,3,8, "D808",0,-1,1,2,1,3,0xa,685,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00250100, 0x00201050, 0x00600000, 0x10200000, 0x10200000, 0x01250000, 0x00201014, 0x00600000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat211,3,1.000000},
  {owl_defendpat212,3,8, "D809",0,-1,1,2,1,3,0xa,685,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00250100, 0x00201050, 0x00600000, 0x10200000, 0x10200000, 0x01250000, 0x00201014, 0x00600000}
   , 0x0,25.000000,attributes+0,1,NULL,autohelperowl_defendpat212,3,1.000000},
  {owl_defendpat213,3,8, "D810",0,-2,1,2,1,4,0xa,722,
    { 0x00bfff00, 0xe0f0f0f0, 0xfffa0000, 0x3c3c2c2c, 0xf0f0e0e0, 0xffbf0000, 0x2c3c3c3c, 0x00faff00},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x0,55.000000,attributes+0,1,NULL,autohelperowl_defendpat213,0,1.000000},
  {owl_defendpat214,6,8, "D811",-1,-2,1,1,2,3,0xa,722,
    { 0x3abeff00, 0xe0fcf8e8, 0xfcf8b000, 0xbcfc2c00, 0xf8fce000, 0xffbe3a00, 0x2cfcbcac, 0xb0f8fc00},
    { 0x10100000, 0x00140000, 0x00101000, 0x00500000, 0x00140000, 0x00101000, 0x00500000, 0x10100000}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat215,4,8, "D811a",-1,-2,1,1,2,3,0xa,722,
    { 0x003cfcac, 0xc0f0f000, 0xfcf00000, 0x3f3e0e00, 0xf0f0c000, 0xfc3c0000, 0x0e3e3f00, 0x00f0fce8},
    { 0x00104000, 0x40100000, 0x04100000, 0x00100400, 0x00104000, 0x40100000, 0x04100000, 0x00100400}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat216,4,8, "D812",-1,-1,1,1,2,2,0xa,648,
    { 0xa0fcfc00, 0xf8f8f000, 0xfcfc2800, 0x3cbcbc00, 0xf0f8f800, 0xfcfca000, 0xbcbc3c00, 0x28fcfc00},
    { 0x00182400, 0x00906000, 0x60900000, 0x24180000, 0x60900000, 0x24180000, 0x00182400, 0x00906000}
   , 0x0,70.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat217,1,8, "D813",0,-1,1,1,1,2,0xa,685,
    { 0x00fc3c00, 0x30f0f000, 0xf0fc0000, 0x3c3c3000, 0xf0f03000, 0x3cfc0000, 0x303c3c00, 0x00fcf000},
    { 0x00900000, 0x20100000, 0x00180000, 0x00102000, 0x00102000, 0x00900000, 0x20100000, 0x00180000}
   , 0x0,30.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat218,5,8, "D814",-1,-1,3,1,4,2,0xa,686,
    { 0x3cfcfcfc, 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00, 0xf0fcfcfc},
    { 0x10504040, 0x50140000, 0x04141000, 0x00501500, 0x00145000, 0x40501000, 0x15500000, 0x10140404}
   , 0x0,85.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat219,5,8, "D815",-1,-2,2,1,3,3,0xa,759,
    { 0x3f3fffff, 0xc0fcfcfc, 0xfcf0f000, 0xffff0f00, 0xfcfcc000, 0xff3f3f00, 0x0fffffff, 0xf0f0fcfc},
    { 0x14105000, 0x40540400, 0x14105000, 0x40540400, 0x04544000, 0x50101400, 0x04544000, 0x50101400}
   , 0x0,85.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat220,3,8, "D816",-1,0,2,2,3,2,0xa,721,
    { 0xffff0000, 0x3f3f3f3f, 0x00fcfcfc, 0xf0f0f000, 0x3f3f3f00, 0x00ffffff, 0xf0f0f0f0, 0xfcfc0000},
    { 0x40200000, 0x06210100, 0x00200458, 0x00204000, 0x01210600, 0x00204094, 0x40200000, 0x04200000}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat221,3,8, "D817",-1,0,2,2,3,2,0xa,721,
    { 0xffff0000, 0x3f3f3f3f, 0x00fcfcfc, 0xf0f0f000, 0x3f3f3f00, 0x00ffffff, 0xf0f0f0f0, 0xfcfc0000},
    { 0x40200000, 0x06210100, 0x00200458, 0x00204000, 0x01210600, 0x00204094, 0x40200000, 0x04200000}
   , 0x10,45.000000,attributes+0,1,NULL,autohelperowl_defendpat221,3,1.600000},
  {owl_defendpat222,3,8, "D818",-1,-1,1,1,2,2,0xa,648,
    { 0xc0fcfc00, 0xfcf0f000, 0xfcfc0c00, 0x3c3cfc00, 0xf0f0fc00, 0xfcfcc000, 0xfc3c3c00, 0x0cfcfc00},
    { 0x40142000, 0x04901000, 0x20500400, 0x10184000, 0x10900400, 0x20144000, 0x40181000, 0x04502000}
   , 0x10,75.000000,attributes+0,1,NULL,autohelperowl_defendpat222,0,1.000000},
  {owl_defendpat223,3,8, "D818b",-1,-1,1,1,2,2,0xa,722,
    { 0xc0fcfc00, 0xfcf0f000, 0xfcfc0c00, 0x3c3cfc00, 0xf0f0fc00, 0xfcfcc000, 0xfc3c3c00, 0x0cfcfc00},
    { 0x40142000, 0x04901000, 0x20500400, 0x10184000, 0x10900400, 0x20144000, 0x40181000, 0x04502000}
   , 0x10,76.000000,attributes+0,1,NULL,autohelperowl_defendpat223,0,0.010000},
  {owl_defendpat224,5,8, "D819",-1,-2,1,0,2,2,0xa,686,
    { 0x00fcbcbc, 0xb0f0f000, 0xf8fc0000, 0x3f3f3a00, 0xf0f0b000, 0xbcfc0000, 0x3a3f3f00, 0x00fcf8f8},
    { 0x00500400, 0x10104000, 0x40140000, 0x04101000, 0x40101000, 0x04500000, 0x10100400, 0x00144000}
   , 0x0,30.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat225,4,8, "D820",-1,-1,1,2,2,3,0xa,722,
    { 0xa0fcff00, 0xf8f8f0c0, 0xfcfc2800, 0x3cbcbc00, 0xf0f8f800, 0xfffca000, 0xbcbc3c0c, 0x28fcfc00},
    { 0x00186200, 0x40902080, 0x24900000, 0x20180400, 0x20904000, 0x62180000, 0x04182008, 0x00902400}
   , 0x10,40.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat226,4,8, "D820b",-1,-1,1,2,2,3,0xa,722,
    { 0xbcfcff00, 0xf8fcfcc0, 0xfcfcf800, 0xfcfcbc00, 0xfcfcf800, 0xfffcbc00, 0xbcfcfc0c, 0xf8fcfc00},
    { 0x24186200, 0x40982480, 0x24906000, 0x60980400, 0x24984000, 0x62182400, 0x04986008, 0x60902400}
   , 0x10,40.000000,attributes+0,1,NULL,autohelperowl_defendpat226,0,1.000000},
  {owl_defendpat227,7,8, "D821",-1,-2,2,1,3,3,0xa,722,
    { 0x0e3effaf, 0xc0f0fce8, 0xfcf0c000, 0xff3e0e00, 0xfcf0c000, 0xff3e0e00, 0x0e3effaf, 0xc0f0fce8},
    { 0x04104000, 0x40100400, 0x04104000, 0x40100400, 0x04104000, 0x40100400, 0x04104000, 0x40100400}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat228,5,8, "D822",-1,-2,1,1,2,3,0xa,721,
    { 0x3effff00, 0xf0fcfcf8, 0xfcfcf000, 0xfcfc3c00, 0xfcfcf000, 0xffff3e00, 0x3cfcfcbc, 0xf0fcfc00},
    { 0x10518800, 0x90148010, 0x88141000, 0x08501800, 0x80149000, 0x88511000, 0x18500810, 0x10148800}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_defendpat228,0,0.010000},
  {owl_defendpat229,7,8, "D823a",-2,-1,1,2,3,3,0xa,685,
    { 0xd7fffffc, 0xfcf4f4fc, 0xfcfc5c00, 0x7f7fff00, 0xf4f4fc00, 0xffffd700, 0xff7f7ffc, 0x5cfcfcfc},
    { 0x01690154, 0x10202054, 0x00a40000, 0x21211100, 0x20201000, 0x01690100, 0x11212154, 0x00a40054}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat230,8,8, "D823b",-2,-1,1,2,3,3,0xa,646,
    { 0xd7fff700, 0xfff777ff, 0x7cfc5cfc, 0x747cfc00, 0x77f7ff00, 0xf7ffd7ff, 0xfc7c74fc, 0x5cfc7c00},
    { 0x01692100, 0x11a12155, 0x20a40054, 0x20281000, 0x21a11100, 0x21690155, 0x10282054, 0x00a42000}
   , 0x0,46.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat231,8,8, "D824",-1,-1,2,2,3,3,0xa,721,
    { 0xfcffffff, 0xfcfcfcf0, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfffffc00, 0xffffff3f, 0xfcfcfcfc},
    { 0x54116921, 0x44948450, 0xa4105400, 0x485a4400, 0x84944400, 0x69115400, 0x445a4815, 0x5410a420}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat232,4,8, "D825",-1,-1,2,1,3,2,0xa,722,
    { 0xe8fcfcfc, 0xfcf8f800, 0xfcfcac00, 0xbfbfff00, 0xf8f8fc00, 0xfcfce800, 0xffbfbf00, 0xacfcfcfc},
    { 0x40902000, 0x24900000, 0x20180400, 0x00186000, 0x00902400, 0x20904000, 0x60180000, 0x04182000}
   , 0x0,85.000000,attributes+0,1,NULL,autohelperowl_defendpat232,0,1.600000},
  {owl_defendpat233,5,8, "D826",-2,-1,0,1,2,2,0xa,648,
    { 0x80f0f000, 0xf8f00000, 0x3e3e0a00, 0x003cbca8, 0x00f0f8a8, 0xf0f08000, 0xbc3c0000, 0x0a3e3e00},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,25.000000,attributes+0,1,NULL,autohelperowl_defendpat233,0,1.000000},
  {owl_defendpat234,5,8, "D827",-1,-2,2,3,3,5,0xa,648,
    { 0xf0ffffff, 0xfcfcf0f0, 0xffff3f00, 0x3fffffff, 0xf0fcfcfc, 0xfffff000, 0xffff3f3f, 0x3fffffff},
    { 0xa05a0500, 0x18186060, 0x40942800, 0x24909000, 0x60181800, 0x055aa000, 0x90902424, 0x28944000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat235,5,8, "D828",-1,-2,1,1,2,3,0xa,646,
    { 0xfcfcb000, 0xbcfc3c00, 0x3afeff00, 0xf0fcf8e8, 0x3cfcbcac, 0xb0fcfc00, 0xf8fcf000, 0xfffe3a00},
    { 0x20181000, 0x00582000, 0x10902000, 0x20940000, 0x20580000, 0x10182000, 0x00942000, 0x20901000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat236,4,8, "D829",-2,-1,1,2,3,3,0xa,648,
    { 0xfcfcfc00, 0xfcffff00, 0xfffffcf0, 0xfcfcfc3c, 0xfffffcf0, 0xfcfcfc3c, 0xfcfcfc00, 0xfcffff00},
    { 0x40100000, 0x04110100, 0x00100450, 0x00104000, 0x01110400, 0x00104014, 0x40100000, 0x04100000}
   , 0x0,55.000000,attributes+0,1,NULL,autohelperowl_defendpat236,0,0.010000},
  {owl_defendpat237,6,8, "D830",-2,-1,1,1,3,2,0xa,722,
    { 0xecfcfc00, 0xfcf8fc00, 0xffffec00, 0xfcbcfc3c, 0xfcf8fcf0, 0xfcfcec00, 0xfcbcfc00, 0xecffff00},
    { 0x44102000, 0x04900400, 0x21114400, 0x40184014, 0x04900450, 0x20104400, 0x40184000, 0x44112100}
   , 0x0,55.000000,attributes+0,1,NULL,autohelperowl_defendpat237,0,0.010000},
  {owl_defendpat238,8,8, "D831",-1,-1,2,2,3,3,0xa,686,
    { 0xf8fefff7, 0xfcfcf8e0, 0xfcfcbc00, 0xbdffff00, 0xf8fcfc00, 0xfffef800, 0xffffbd2f, 0xbcfcfc7c},
    { 0x50246901, 0x44a49040, 0xa4601400, 0x18684400, 0x90a44400, 0x69245000, 0x44681805, 0x1460a400}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat239,3,8, "D832",-1,-1,1,1,2,2,0xa,722,
    { 0x0cbcfc00, 0xe0f0fc00, 0xfcf8c000, 0xfc3c2c00, 0xfcf0e000, 0xfcbc0c00, 0x2c3cfc00, 0xc0f8fc00},
    { 0x0410a000, 0x80900400, 0x28104000, 0x40180800, 0x04908000, 0xa0100400, 0x08184000, 0x40102800}
   , 0x10,35.000000,attributes+0,1,NULL,autohelperowl_defendpat239,0,1.000000},
  {owl_defendpat240,6,8, "D833",-2,0,2,2,4,2,0x6,759,
    { 0x3f3d3f2f, 0x00fcffdc, 0xf0f0f0c0, 0xfffe0000, 0xfffc0000, 0x3f3d3f0c, 0x00feffdf, 0xf0f0f0e0},
    { 0x11101000, 0x00540104, 0x10101040, 0x00540000, 0x01540000, 0x10101104, 0x00540040, 0x10101000}
   , 0x0,40.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat241,5,8, "D834",-2,0,2,2,4,2,0x6,722,
    { 0x3f3f3f3f, 0x00fcfffc, 0xf0f0f0c0, 0xffff0000, 0xfffc0000, 0x3f3f3f0c, 0x00ffffff, 0xf0f0f0f0},
    { 0x11101200, 0x00540184, 0x10101040, 0x00540000, 0x01540000, 0x12101104, 0x00540048, 0x10101000}
   , 0x0,40.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat242,1,8, "D835",-1,-1,2,1,3,2,0xa,683,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfcfc},
    { 0x00600000, 0x10200000, 0x00240000, 0x00201000, 0x00201000, 0x00600000, 0x10200000, 0x00240000}
   , 0x0,65.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat243,1,8, "D836",0,0,1,1,1,1,0xa,722,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat243,0,1.000000},
  {owl_defendpat244,5,8, "D837",-2,-2,2,2,4,4,0x6,722,
    { 0xffffffff, 0xfcfeffff, 0xfffefce0, 0xffffff2f, 0xfffefce0, 0xffffff2f, 0xffffffff, 0xfcfeffff},
    { 0x40200000, 0x04200100, 0x01200440, 0x00204004, 0x01200440, 0x00204004, 0x40200000, 0x04200100}
   , 0x0,55.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat245,4,8, "D838",-1,-1,2,1,3,2,0xa,683,
    { 0x3cfcfc3c, 0xf0fcfc00, 0xfcfcf000, 0xffff3c00, 0xfcfcf000, 0xfcfc3c00, 0x3cffff00, 0xf0fcfcf0},
    { 0x00606410, 0x50a04000, 0x64240000, 0x04291400, 0x40a05000, 0x64600000, 0x14290400, 0x00246410}
   , 0x0,55.000000,attributes+0,1,NULL,autohelperowl_defendpat245,3,1.000000},
  {owl_defendpat246,6,8, "D839",-2,-1,2,2,4,3,0xa,648,
    { 0xfcfcfefe, 0xfffffc80, 0xfcfcfc3c, 0xffffff00, 0xfcffff00, 0xfefcfcf0, 0xffffff0a, 0xfcfcfcfc},
    { 0x14242400, 0x00a65400, 0x60605020, 0x54680000, 0x54a60000, 0x24241420, 0x00685400, 0x50606000}
   , 0x0,88.000000,attributes+0,1,NULL,autohelperowl_defendpat246,3,1.600000},
  {owl_defendpat247,7,8, "D840",-2,-1,1,2,3,3,0xa,683,
    { 0xfcffff00, 0xfffffcf0, 0xfcfcfc3c, 0xfcfcfc00, 0xfcffff00, 0xfffffcf0, 0xfcfcfc3c, 0xfcfcfc00},
    { 0x04a51100, 0x21611450, 0x10684014, 0x50242000, 0x14612100, 0x11a50450, 0x20245014, 0x40681000}
   , 0x0,25.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat248,3,8, "D841",-2,-2,2,1,4,3,0xa,648,
    { 0xf0fcfcfc, 0xfffff000, 0xffff3f3f, 0x3fffffff, 0xf0ffffff, 0xfcfcf0f0, 0xffff3f00, 0x3fffffff},
    { 0x10180000, 0x00152000, 0x00901010, 0x20500000, 0x20150000, 0x00181010, 0x00502000, 0x10900000}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat249,3,8, "D842",-2,-2,2,2,4,4,0x6,722,
    { 0xffffffff, 0xfcfcffff, 0xfffffcc0, 0xffffff3f, 0xfffcfcf0, 0xffffff0f, 0xffffffff, 0xfcffffff},
    { 0xa4500000, 0x18180600, 0x00166880, 0x40909020, 0x06181820, 0x0050a408, 0x90904000, 0x68160000}
   , 0x0,76.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat250,7,8, "D843",0,-2,2,2,2,4,0xa,685,
    { 0x00ffffff, 0xf0f0f0f0, 0xffff0000, 0x3f3f3f3f, 0xf0f0f0f0, 0xffff0000, 0x3f3f3f3f, 0x00ffffff},
    { 0x00550181, 0x10101050, 0x00550000, 0x10101210, 0x10101010, 0x01550000, 0x12101015, 0x00550008}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat251,2,8, "D844",0,-1,1,1,1,2,0xa,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00140000, 0x00101000, 0x00500000, 0x10100000, 0x10100000, 0x00140000, 0x00101000, 0x00500000}
   , 0x0,40.000000,attributes+0,1,NULL,autohelperowl_defendpat251,0,0.019600},
  {owl_defendpat252,5,8, "D845",-1,-1,1,2,2,3,0xa,647,
    { 0xfeffff00, 0xfcfcfcf8, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfffffe00, 0xfcfcfcbc, 0xfcfcfc00},
    { 0x50210100, 0x04240050, 0x00201400, 0x00604000, 0x00240400, 0x01215000, 0x40600014, 0x14200000}
   , 0x10,35.000000,attributes+0,1,NULL,autohelperowl_defendpat252,3,0.010000},
  {owl_defendpat253,6,8, "D846",-1,-1,1,2,2,3,0xa,685,
    { 0xfeffff00, 0xfcfcfcf8, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfffffe00, 0xfcfcfcbc, 0xfcfcfc00},
    { 0x50610100, 0x14240050, 0x00241400, 0x00605000, 0x00241400, 0x01615000, 0x50600014, 0x14240000}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat254,6,8, "D847",-1,-1,1,2,2,3,0xa,721,
    { 0xfeffff00, 0xfcfcfcf8, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfffffe00, 0xfcfcfcbc, 0xfcfcfc00},
    { 0x50612100, 0x14a40050, 0x20241400, 0x00685000, 0x00a41400, 0x21615000, 0x50680014, 0x14242000}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat255,3,8, "D900",-1,-1,1,2,2,3,0x2,648,
    { 0xc0fcf400, 0xfcf07000, 0x7efc0c00, 0x343cfc08, 0x70f0fc80, 0xf4fcc000, 0xfc3c3400, 0x0cfc7e00},
    { 0x40182000, 0x04902000, 0x20900400, 0x20184000, 0x20900400, 0x20184000, 0x40182000, 0x04902000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat255,0,1.000000},
  {owl_defendpat256,1,8, "D902",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00188000, 0x80102000, 0x08900000, 0x20100800, 0x20108000, 0x80180000, 0x08102000, 0x00900800}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_defendpat256,0,1.000000},
  {owl_defendpat257,1,8, "D903",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00980000, 0x20102000, 0x00980000, 0x20102000, 0x20102000, 0x00980000, 0x20102000, 0x00980000}
   , 0x0,85.000000,attributes+0,1,NULL,autohelperowl_defendpat257,0,1.000000},
  {owl_defendpat258,1,8, "D904",0,-1,1,1,1,2,0x2,648,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00980000, 0x20102000, 0x00980000, 0x20102000, 0x20102000, 0x00980000, 0x20102000, 0x00980000}
   , 0x0,84.000000,attributes+0,1,NULL,autohelperowl_defendpat258,0,1.000000},
  {owl_defendpat259,1,8, "D905",0,-1,1,2,1,3,0x2,647,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00260000, 0x00201020, 0x00600000, 0x10200000, 0x10200000, 0x00260000, 0x00201020, 0x00600000}
   , 0x0,86.000000,attributes+0,1,NULL,autohelperowl_defendpat259,3,1.000000},
  {owl_defendpat260,3,8, "D906",-1,-2,1,2,2,4,0x2,720,
    { 0xfcfcfcfc, 0xfcffff00, 0xfcfcfcf0, 0xffffff00, 0xfffffc00, 0xfcfcfc3c, 0xffffff00, 0xfcfcfcfc},
    { 0x50200040, 0x04260000, 0x00201420, 0x00604100, 0x00260400, 0x00205020, 0x41600000, 0x14200004}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat261,3,8, "D907",-1,-2,1,2,2,4,0x2,685,
    { 0xfcfcfcfc, 0xfcffff00, 0xfcfcfcf0, 0xffffff00, 0xfffffc00, 0xfcfcfc3c, 0xffffff00, 0xfcfcfcfc},
    { 0x50200040, 0x04260000, 0x00201420, 0x00604100, 0x00260400, 0x00205020, 0x41600000, 0x14200004}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat262,5,8, "D908",-2,-2,1,2,3,4,0x2,685,
    { 0xfcfcfcfc, 0xfcffff00, 0xfffffcf0, 0xffffff3c, 0xfffffcf0, 0xfcfcfc3c, 0xffffff00, 0xfcfffffc},
    { 0x50200040, 0x04260000, 0x01211420, 0x00604114, 0x00260450, 0x00205020, 0x41600000, 0x14210104}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat262,3,1.000000},
  {owl_defendpat263,1,4, "D909",0,0,0,1,0,1,0x0,685,
    { 0x00303000, 0x00f00000, 0x30300000, 0x003c0000, 0x00f00000, 0x30300000, 0x003c0000, 0x00303000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,55.000000,attributes+0,1,NULL,autohelperowl_defendpat263,0,0.034000},
  {owl_defendpat264,2,8, "D910a",-1,-2,1,2,2,4,0x2,683,
    { 0xfcfcfcfc, 0xfeffff00, 0xfcfcfcf8, 0xffffff00, 0xfffffe00, 0xfcfcfcbc, 0xffffff00, 0xfcfcfcfc},
    { 0x00600080, 0x10200000, 0x00240000, 0x00201200, 0x00201000, 0x00600000, 0x12200000, 0x00240008}
   , 0x0,65.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat265,2,8, "D910b",-1,-2,1,2,2,4,0x2,683,
    { 0xfcfcfcfc, 0xfeffff00, 0xfcfcfcf8, 0xffffff00, 0xfffffe00, 0xfcfcfcbc, 0xffffff00, 0xfcfcfcfc},
    { 0x00600080, 0x10200000, 0x00240000, 0x00201200, 0x00201000, 0x00600000, 0x12200000, 0x00240008}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat265,3,1.000000},
  {owl_defendpat266,6,8, "D911",-3,-2,0,3,3,5,0x2,646,
    { 0xffff0000, 0x3e3e3e3c, 0x00ffffaa, 0xf0f0f0f0, 0x3e3e3e3e, 0x00ffffa8, 0xf0f0f0f0, 0xffff0000},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_defendpat266,3,0.010000},
  {owl_defendpat267,2,4, "D1000",0,0,1,1,1,1,0x0,721,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00102400, 0x00904000, 0x60100000, 0x04180000, 0x40900000, 0x24100000, 0x00180400, 0x00106000}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_defendpat267,0,0.592000},
  {owl_defendpat268,1,4, "D1000a",0,0,0,1,0,1,0x0,685,
    { 0x00303000, 0x00f00000, 0x30300000, 0x003c0000, 0x00f00000, 0x30300000, 0x003c0000, 0x00303000},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,95.000000,attributes+0,1,NULL,autohelperowl_defendpat268,0,0.016000},
  {owl_defendpat269,2,8, "D1001",-1,-1,0,1,1,2,0x0,685,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00188400, 0x80106000, 0x48900000, 0x24100800, 0x60108000, 0x84180000, 0x08102400, 0x00904800}
   , 0x20,70.000000,attributes+0,1,NULL,autohelperowl_defendpat269,0,1.366000},
  {owl_defendpat270,5,8, "D1001b",-1,-1,1,3,2,4,0x2,795,
    { 0x3fff7f00, 0x70fcfcfc, 0xf4fcf000, 0xfcfc3400, 0xfcfc7000, 0x7fff3f00, 0x34fcfcfc, 0xf0fcf400},
    { 0x25920400, 0x20184424, 0x40186000, 0x44902000, 0x44182000, 0x04922500, 0x20904460, 0x60184000}
   , 0x20,71.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat271,2,8, "D1002",-1,-1,0,1,1,2,0x0,685,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00188400, 0x80106000, 0x48900000, 0x24100800, 0x60108000, 0x84180000, 0x08102400, 0x00904800}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat271,0,1.030000},
  {owl_defendpat272,4,8, "D1003",-2,-2,1,1,3,3,0x0,720,
    { 0xbcbc3c00, 0x28fcfc00, 0xf0f8f800, 0xfcfca000, 0xfcfc2800, 0x3cbcbc00, 0xa0fcfc00, 0xf8f8f000},
    { 0x00102400, 0x00904000, 0x60100000, 0x04180000, 0x40900000, 0x24100000, 0x00180400, 0x00106000}
   , 0x0,55.000000,attributes+0,1,NULL,autohelperowl_defendpat272,0,1.690000},
  {owl_defendpat273,3,8, "D1004",-2,-1,0,2,2,3,0x0,721,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00101024, 0x00500000, 0x10100000, 0x01160000, 0x00500000, 0x10100000, 0x00160100, 0x00101060}
   , 0x20,69.000000,attributes+0,1,NULL,autohelperowl_defendpat273,0,1.872304},
  {owl_defendpat274,8,8, "D1004b",-2,-1,0,2,2,3,0x1,721,
    { 0x2e3e3e3e, 0x00f8fca8, 0xf0f0e000, 0xffbf0000, 0xfcf80000, 0x3e3e2e00, 0x00bfffaa, 0xe0f0f0f0},
    { 0x00101024, 0x00500000, 0x10100000, 0x01160000, 0x00500000, 0x10100000, 0x00160100, 0x00101060}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat275,2,8, "D1005",-1,-2,1,1,2,3,0x0,721,
    { 0xffff7f00, 0x7cfcfcfc, 0xf4fcfc00, 0xfcfcf400, 0xfcfc7c00, 0x7fffff00, 0xf4fcfcfc, 0xfcfcf400},
    { 0x00902400, 0x20904000, 0x60180000, 0x04182000, 0x40902000, 0x24900000, 0x20180400, 0x00186000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat276,2,4, "D1006",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00640000, 0x10201000, 0x00640000, 0x10201000, 0x10201000, 0x00640000, 0x10201000, 0x00640000}
   , 0x20,60.000000,attributes+0,1,NULL,autohelperowl_defendpat276,3,0.376000},
  {owl_defendpat277,2,4, "D1006b",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00640000, 0x10201000, 0x00640000, 0x10201000, 0x10201000, 0x00640000, 0x10201000, 0x00640000}
   , 0x2020,80.000000,attributes+0,1,NULL,autohelperowl_defendpat277,3,0.021760},
  {owl_defendpat278,2,4, "D1007",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00640000, 0x10201000, 0x00640000, 0x10201000, 0x10201000, 0x00640000, 0x10201000, 0x00640000}
   , 0x4000,90.000000,attributes+0,1,NULL,autohelperowl_defendpat278,3,1.531600},
  {owl_defendpat279,1,4, "D1100",0,0,1,1,1,1,0x0,721,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00201800, 0x00608000, 0x90200000, 0x08240000, 0x80600000, 0x18200000, 0x00240800, 0x00209000}
   , 0x800,88.000000,attributes+0,1,NULL,autohelperowl_defendpat279,3,0.731600},
  {owl_defendpat280,1,4, "D1100b",0,0,1,1,1,1,0x0,721,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00201800, 0x00608000, 0x90200000, 0x08240000, 0x80600000, 0x18200000, 0x00240800, 0x00209000}
   , 0x800,92.000000,attributes+0,1,NULL,autohelperowl_defendpat280,3,1.160000},
  {owl_defendpat281,1,4, "D1101",-1,0,1,2,2,2,0x0,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00204020, 0x40200000, 0x04200000, 0x00220400, 0x00204000, 0x40200000, 0x04220000, 0x00200420}
   , 0x0,95.000000,attributes+0,1,NULL,autohelperowl_defendpat281,3,5.000000},
  {owl_defendpat282,1,4, "D1102",-1,0,1,2,2,2,0x0,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00204020, 0x40200000, 0x04200000, 0x00220400, 0x00204000, 0x40200000, 0x04220000, 0x00200420}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat282,3,0.054400},
  {owl_defendpat283,1,4, "D1102a",-1,-1,1,3,2,4,0x0,685,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfcfc},
    { 0x00204020, 0x40200000, 0x04200000, 0x00220400, 0x00204000, 0x40200000, 0x04220000, 0x00200420}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat284,3,8, "D1103",-1,-1,2,2,3,3,0x2,758,
    { 0x3fff3fff, 0x30fcfcfc, 0xf0fcf000, 0xffff3300, 0xfcfc3000, 0x3fff3f00, 0x33ffffff, 0xf0fcf0fc},
    { 0x14680000, 0x10242400, 0x00a45000, 0x60601000, 0x24241000, 0x00681400, 0x10606000, 0x50a40000}
   , 0x0,85.000000,attributes+0,1,NULL,autohelperowl_defendpat284,3,3.000000},
  {owl_defendpat285,4,8, "D1104",-1,-1,2,3,3,4,0x2,723,
    { 0x3f3fbfbf, 0x80fcfcfc, 0xf8f0f000, 0xffff0a00, 0xfcfc8000, 0xbf3f3f00, 0x0affffff, 0xf0f0f8f8},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,100.000000,attributes+0,1,NULL,autohelperowl_defendpat285,0,1.000000},
  {owl_defendpat286,5,8, "D1105",-1,-1,2,2,3,3,0x2,721,
    { 0x083efeff, 0xc0f0f8a0, 0xfcf08000, 0xbf3f0f00, 0xf8f0c000, 0xfe3e0800, 0x0f3fbf2b, 0x80f0fcfc},
    { 0x00205800, 0x40608000, 0x94200000, 0x08240400, 0x80604000, 0x58200000, 0x04240800, 0x00209400}
   , 0x800,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat287,2,8, "D1106",-2,0,1,2,3,2,0x0,685,
    { 0x00fffffc, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xffff0000, 0x3f3f3f3c, 0x00fcfcfc},
    { 0x00600180, 0x10200040, 0x00240000, 0x00201200, 0x00201000, 0x01600000, 0x12200004, 0x00240008}
   , 0x0,77.000000,attributes+0,1,NULL,autohelperowl_defendpat287,3,1.000000},
  {owl_defendpat288,2,8, "D1107",0,-1,1,2,1,3,0x2,648,
    { 0x00fdff00, 0xf0f0f0d0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfffd0000, 0x3c3c3c1c, 0x00fcfc00},
    { 0x00982400, 0x20906000, 0x60980000, 0x24182000, 0x60902000, 0x24980000, 0x20182400, 0x00986000}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat289,3,8, "D1108",-1,-2,2,2,3,4,0x0,647,
    { 0xffffffff, 0xfcfcfcfc, 0xffffff00, 0xffffffff, 0xfcfcfcfc, 0xffffff00, 0xffffffff, 0xffffffff},
    { 0x02299400, 0x80606018, 0x58a00000, 0x24240800, 0x60608000, 0x94290200, 0x08242490, 0x00a05800}
   , 0x200,95.000000,attributes+0,1,NULL,autohelperowl_defendpat289,3,3.960000},
  {owl_defendpat290,4,8, "D1108b",-1,-2,2,2,3,4,0x0,720,
    { 0xffffffff, 0xfcfcfcfc, 0xffffff00, 0xffffffff, 0xfcfcfcfc, 0xffffff00, 0xffffffff, 0xffffffff},
    { 0x02699400, 0x90606018, 0x5aa40000, 0x24241808, 0x60609080, 0x94690200, 0x18242490, 0x00a45a00}
   , 0x200,95.000000,attributes+0,1,NULL,autohelperowl_defendpat290,3,1.810000},
  {owl_defendpat291,1,8, "D1109",-1,0,1,2,2,2,0x0,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00204820, 0x40208000, 0x84200000, 0x08220400, 0x80204000, 0x48200000, 0x04220800, 0x00208420}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_defendpat291,3,1.600000},
  {owl_defendpat292,3,8, "D1110",-1,-1,1,2,2,3,0x0,685,
    { 0xfcfcfc3c, 0xfcfcfc00, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcffff00, 0xfcfcfcf0},
    { 0x94240800, 0x08249400, 0x80605800, 0x58608000, 0x94240800, 0x08249400, 0x80605800, 0x58608000}
   , 0x800,75.000000,attributes+0,1,NULL,autohelperowl_defendpat292,3,1.000000},
  {owl_defendpat293,5,8, "D1111",-2,-2,2,2,4,4,0x0,647,
    { 0xfeffff3f, 0xfffcfcf8, 0xfcffff0c, 0xfffffcf0, 0xfcfcff3c, 0xfffffec0, 0xfcffffbf, 0xfffffcf0},
    { 0x94290200, 0x09242490, 0x00a05804, 0x60608000, 0x24240900, 0x02299440, 0x80606018, 0x58a00000}
   , 0x210,90.000000,attributes+0,1,NULL,autohelperowl_defendpat293,3,0.376000},
  {owl_defendpat294,5,8, "D1112",-1,-2,2,2,3,4,0x0,722,
    { 0x3effff3f, 0xf0fcfcf8, 0xfcfcf000, 0xffff3c00, 0xfcfcf000, 0xffff3e00, 0x3cffffbf, 0xf0fcfcf0},
    { 0x14690200, 0x10242490, 0x00a45000, 0x60601000, 0x24241000, 0x02691400, 0x10606018, 0x50a40000}
   , 0x200,90.000000,attributes+0,1,NULL,autohelperowl_defendpat294,3,0.376000},
  {owl_defendpat295,6,8, "D1113",-1,-2,2,2,3,4,0x0,645,
    { 0xfcfcf000, 0xffff3c00, 0x3effff3f, 0xf0fcfcf8, 0x3cffffbf, 0xf0fcfcf0, 0xfcfcf000, 0xffff3e00},
    { 0x60a45000, 0x64681000, 0x14692600, 0x10a46490, 0x10686418, 0x50a46000, 0x64a41000, 0x26691400}
   , 0x200,90.000000,attributes+0,1,NULL,autohelperowl_defendpat295,3,0.376000},
  {owl_defendpat296,7,8, "D1114",-1,-2,2,2,3,4,0x0,682,
    { 0xfcfcf000, 0xffff3c00, 0x3effff3f, 0xf0fcfcf8, 0x3cffffbf, 0xf0fcfcf0, 0xfcfcf000, 0xffff3e00},
    { 0x60a45000, 0x65681000, 0x14692606, 0x10a46490, 0x1068651a, 0x50a46040, 0x64a41000, 0x26691400}
   , 0x200,90.000000,attributes+0,1,NULL,autohelperowl_defendpat296,3,0.376000},
  {owl_defendpat297,4,8, "D1115",-2,-1,1,2,3,3,0x0,647,
    { 0xf0fcfcf0, 0xfcfcf000, 0xffff3e00, 0x3cffffbc, 0xf0fcfcf8, 0xfcfcf000, 0xffff3c00, 0x3effff3c},
    { 0x00205890, 0x40608000, 0x96200000, 0x08250608, 0x80604080, 0x58200000, 0x06250800, 0x00209618}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat298,3,8, "D1116",-1,-2,1,1,2,3,0x2,685,
    { 0xbcfcfcfc, 0xf8fcfc00, 0xfcfcf800, 0xffffbf00, 0xfcfcf800, 0xfcfcbc00, 0xbfffff00, 0xf8fcfcfc},
    { 0x18608080, 0x90240800, 0x08249000, 0x80601a00, 0x08249000, 0x80601800, 0x1a608000, 0x90240808}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat298,3,1.000000},
  {owl_defendpat299,2,8, "D1117",-2,-2,1,1,3,3,0x2,647,
    { 0xf4f4fcfc, 0xfcfcd400, 0xfd7f7c00, 0x5fffff37, 0xd4fcfc70, 0xfcf4f400, 0xffff5f00, 0x7c7ffdff},
    { 0x50200000, 0x04240000, 0x00221400, 0x00604020, 0x00240420, 0x00205000, 0x40600000, 0x14220000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat299,3,1.000000},
  {owl_defendpat300,3,8, "D1117a",-2,-1,1,2,3,3,0x2,683,
    { 0xfffff700, 0xfffd7ffc, 0x7cfcfcdc, 0xf4fcfc00, 0x7ffdff00, 0xf7ffffdc, 0xfcfcf4fc, 0xfcfc7c00},
    { 0x05290200, 0x00202694, 0x00a04080, 0x60200000, 0x26200000, 0x02290508, 0x00206058, 0x40a00000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat300,3,1.006000},
  {owl_defendpat301,6,8, "D1118",-2,-1,1,2,3,3,0x0,721,
    { 0x3efefe30, 0xf0fcfca8, 0xfcfcf000, 0xfcff3c00, 0xfcfcf000, 0xfefe3e00, 0x3cfffca8, 0xf0fcfc30},
    { 0x18601820, 0x10648800, 0x90249000, 0x88661000, 0x88641000, 0x18601800, 0x10668800, 0x90249020}
   , 0x0,85.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat302,3,8, "D1119",-2,-2,2,2,4,4,0x0,648,
    { 0xf8fcfcfc, 0xfcfcf800, 0xfcffbf00, 0xbffffff2, 0xf8fcfc3c, 0xfcfcf800, 0xffffbf00, 0xbffffcfe},
    { 0x00200060, 0x00200000, 0x00220000, 0x00220120, 0x00200020, 0x00200000, 0x01220000, 0x00220024}
   , 0x2000,70.000000,attributes+0,1,NULL,autohelperowl_defendpat302,3,0.016000},
  {owl_defendpat303,4,8, "D1120",-2,-2,2,2,4,4,0x0,685,
    { 0xbffffcfa, 0xf8fcfc3c, 0xfcfcf800, 0xfeffbf00, 0xfcfcf800, 0xfcffbf00, 0xbffffef2, 0xf8fcfcbc},
    { 0x00220420, 0x00204020, 0x40200000, 0x04220000, 0x40200000, 0x04220000, 0x00220420, 0x00204020}
   , 0x2000,81.000000,attributes+0,1,NULL,autohelperowl_defendpat303,3,0.016000},
  {owl_defendpat304,5,8, "D1120b",-1,-1,2,2,3,3,0x0,685,
    { 0xaf3ffffe, 0xc8f8fcfc, 0xfcf0e800, 0xffbf8f00, 0xfcf8c800, 0xff3faf00, 0x8fbffffe, 0xe8f0fcfc},
    { 0x08168800, 0x80109820, 0x88508000, 0x98100800, 0x98108000, 0x88160800, 0x08109820, 0x80508800}
   , 0x0,81.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat305,9,8, "D1121a",-2,0,1,3,3,3,0x0,722,
    { 0x2a3f3f3b, 0x00f8f8f8, 0xf0f0a000, 0xbebf0000, 0xf8f80000, 0x3f3f2a00, 0x00bfbebf, 0xa0f0f0b0},
    { 0x00200012, 0x00200000, 0x00200000, 0x00210000, 0x00200000, 0x00200000, 0x00210002, 0x00200010}
   , 0x0,70.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat306,9,8, "D1121b",0,-1,3,2,3,3,0x0,685,
    { 0x00fefefe, 0xf0f0f0a0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfefe0000, 0x3f3f3f2a, 0x00fcfcfc},
    { 0x00588080, 0x90102000, 0x08940000, 0x20101a00, 0x20109000, 0x80580000, 0x1a102000, 0x00940808}
   , 0x0,70.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat307,8,8, "D1121c",-1,0,2,3,3,3,0x0,685,
    { 0x00fefefe, 0xf0f0f0a0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfefe0000, 0x3f3f3f2a, 0x00fcfcfc},
    { 0x00680080, 0x10202000, 0x00a40000, 0x20201200, 0x20201000, 0x00680000, 0x12202000, 0x00a40008}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_defendpat307,3,3.000000},
  {owl_defendpat308,1,4, "D1122",0,-1,1,1,1,2,0x2,685,
    { 0x0030fc00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0x0030fc00},
    { 0x00108800, 0x80108000, 0x88100000, 0x08100800, 0x80108000, 0x88100000, 0x08100800, 0x00108800}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_defendpat308,0,1.600000},
  {owl_defendpat309,5,8, "D1123",-1,-1,2,2,3,3,0x0,720,
    { 0xbefffffc, 0xf8fcfcf8, 0xfcfcf800, 0xffffbf00, 0xfcfcf800, 0xffffbe00, 0xbfffffbc, 0xf8fcfcfc},
    { 0x20586080, 0x50982000, 0x24942000, 0x20981600, 0x20985000, 0x60582000, 0x16982000, 0x20942408}
   , 0x800,86.000000,attributes+0,1,NULL,autohelperowl_defendpat309,0,1.000000},
  {owl_defendpat310,2,8, "D1124",0,-1,1,1,1,2,0x0,685,
    { 0x00fc3c00, 0x30f0f000, 0xf0fc0000, 0x3c3c3000, 0xf0f03000, 0x3cfc0000, 0x303c3c00, 0x00fcf000},
    { 0x00640800, 0x10209000, 0x80640000, 0x18201000, 0x90201000, 0x08640000, 0x10201800, 0x00648000}
   , 0x2800,90.000000,attributes+0,1,NULL,autohelperowl_defendpat310,3,1.096000},
  {owl_defendpat311,6,8, "D1125",-2,-2,1,1,3,3,0x0,685,
    { 0xbcfcfcf0, 0xf8fcfc00, 0xfefef800, 0xfcffbf2a, 0xfcfcf8a0, 0xfcfcbc00, 0xbffffc00, 0xf8fefe3e},
    { 0x08240400, 0x00205800, 0x40608000, 0x94200000, 0x58200000, 0x04240800, 0x00209400, 0x80604000}
   , 0x2000,79.000000,attributes+0,1,NULL,autohelperowl_defendpat311,3,0.019600},
  {owl_defendpat312,1,8, "D1126",-1,0,1,2,2,2,0x0,685,
    { 0x00fcfc3c, 0xf0f0f000, 0xfcfc0000, 0x3f3f3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3f3f00, 0x00fcfcf0},
    { 0x00240800, 0x00209000, 0x80600000, 0x18200000, 0x90200000, 0x08240000, 0x00201800, 0x00608000}
   , 0x800,82.000000,attributes+0,1,NULL,autohelperowl_defendpat312,3,0.970000},
  {owl_defendpat313,4,8, "D1127",-2,-1,1,1,3,2,0x0,685,
    { 0xb0fcfcfc, 0xf8fcf000, 0xfcfc3800, 0x3fffbf00, 0xf0fcf800, 0xfcfcb000, 0xbfff3f00, 0x38fcfcfc},
    { 0x10608810, 0x90248000, 0x88241000, 0x08611800, 0x80249000, 0x88601000, 0x18610800, 0x10248810}
   , 0x800,35.000000,attributes+0,1,NULL,autohelperowl_defendpat313,3,0.010000},
  {owl_defendpat314,4,8, "D1128",-2,-2,1,1,3,3,0x0,685,
    { 0xf0fcfcf0, 0xfcfcf000, 0xffff3e00, 0x3cffffbf, 0xf0fcfcf8, 0xfcfcf000, 0xffff3c00, 0x3effff3f},
    { 0x50240800, 0x04249000, 0x80601400, 0x18604000, 0x90240400, 0x08245000, 0x40601800, 0x14608000}
   , 0x200,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat315,5,8, "D1129",-2,-1,1,2,3,3,0x0,759,
    { 0x3fffff3e, 0xf0fcfcfc, 0xfcfcf000, 0xffff3c00, 0xfcfcf000, 0xffff3f00, 0x3cfffffe, 0xf0fcfcf0},
    { 0x00906814, 0x60908000, 0xa4180000, 0x09192400, 0x80906000, 0x68900000, 0x24190900, 0x0018a450}
   , 0x200,77.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat316,3,8, "D1130",-1,-1,1,2,2,3,0x0,721,
    { 0xf0ff7c00, 0x7cfcf030, 0xf4fc3c00, 0x3cfcf400, 0xf0fc7c00, 0x7cfff000, 0xf4fc3c30, 0x3cfcf400},
    { 0x40922400, 0x24904020, 0x60180400, 0x04186000, 0x40902400, 0x24924000, 0x60180420, 0x04186000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat316,0,1.006000},
  {owl_defendpat317,2,8, "D1131",-1,0,1,1,2,1,0x0,685,
    { 0x00f0fc00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0x003cfc00},
    { 0x00608400, 0x90204000, 0x48240000, 0x04201800, 0x40209000, 0x84600000, 0x18200400, 0x00244800}
   , 0x2000,90.000000,attributes+0,1,NULL,autohelperowl_defendpat317,3,0.592000},
  {owl_defendpat318,3,8, "D1132",0,-1,1,2,1,3,0x0,685,
    { 0x0c3c3c3c, 0x00f0fc00, 0xf0f0c000, 0xff3f0000, 0xfcf00000, 0x3c3c0c00, 0x003fff00, 0xc0f0f0f0},
    { 0x04240810, 0x00209400, 0x80604000, 0x58210000, 0x94200000, 0x08240400, 0x00215800, 0x40608010}
   , 0x800,45.000000,attributes+0,1,NULL,autohelperowl_defendpat318,3,3.000000},
  {owl_defendpat319,4,8, "D1133",0,-1,2,2,2,3,0x2,722,
    { 0x003edfbf, 0xc070f0e0, 0xdcf00000, 0x3f370e00, 0xf070c000, 0xdf3e0000, 0x0e373f2f, 0x00f0dcf8},
    { 0x00204010, 0x40200000, 0x04200000, 0x00210400, 0x00204000, 0x40200000, 0x04210000, 0x00200410}
   , 0x2000,65.000000,attributes+0,1,NULL,autohelperowl_defendpat319,3,0.010000},
  {owl_defendpat320,3,8, "D1134",-2,-1,1,1,3,2,0x0,685,
    { 0x3cfcfcfc, 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00, 0xf0fcfcfc},
    { 0x006048a4, 0x50208000, 0x84240000, 0x09221600, 0x80205000, 0x48600000, 0x16220900, 0x00248468}
   , 0x800,5.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat321,1,8, "D1135",0,0,1,2,1,2,0x0,685,
    { 0x003c3c30, 0x00f0f000, 0xf0f00000, 0x3c3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3c00, 0x00f0f030},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x2000,35.000000,attributes+0,1,NULL,autohelperowl_defendpat321,0,0.610000},
  {owl_defendpat322,5,8, "D1137",-2,0,1,3,3,3,0x0,685,
    { 0x003cfcf0, 0xc0f0f000, 0xfef00000, 0x3c3f0f0a, 0xf0f0c080, 0xfc3c0000, 0x0f3f3c00, 0x00f0fe3e},
    { 0x00240000, 0x00201000, 0x00600000, 0x10200000, 0x10200000, 0x00240000, 0x00201000, 0x00600000}
   , 0x2200,65.000000,attributes+0,1,NULL,autohelperowl_defendpat322,3,0.667600},
  {owl_defendpat323,1,8, "D1138",-1,-1,1,2,2,3,0x0,721,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00209800, 0x80608000, 0x98200000, 0x08240800, 0x80608000, 0x98200000, 0x08240800, 0x00209800}
   , 0x2810,85.000000,attributes+0,1,NULL,autohelperowl_defendpat323,3,0.186496},
  {owl_defendpat324,2,8, "D1139",-1,0,1,1,2,1,0x0,648,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00241800, 0x00609000, 0x90600000, 0x18240000, 0x90600000, 0x18240000, 0x00241800, 0x00609000}
   , 0x2820,75.000000,attributes+0,1,NULL,autohelperowl_defendpat324,3,1.810000},
  {owl_defendpat325,1,8, "D1140",0,-1,2,1,2,2,0x0,685,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00240000, 0x00201000, 0x00600000, 0x10200000, 0x10200000, 0x00240000, 0x00201000, 0x00600000}
   , 0x2800,70.000000,attributes+0,1,NULL,autohelperowl_defendpat325,3,0.235600},
  {owl_defendpat326,2,8, "D1141",-2,-1,1,1,3,2,0x0,683,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfcfc},
    { 0x08248400, 0x80205800, 0x48608000, 0x94200800, 0x58208000, 0x84240800, 0x08209400, 0x80604800}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_defendpat326,3,0.610000},
  {owl_defendpat327,2,8, "D1142",-1,-1,1,1,2,2,0x0,647,
    { 0x30fc3c00, 0x30fcf000, 0xf0fc3000, 0x3cfc3000, 0xf0fc3000, 0x3cfc3000, 0x30fc3c00, 0x30fcf000},
    { 0x20182400, 0x00986000, 0x60902000, 0x24980000, 0x60980000, 0x24182000, 0x00982400, 0x20906000}
   , 0x800,30.000000,attributes+0,1,NULL,autohelperowl_defendpat327,0,2.025232},
  {owl_defendpat328,5,8, "D1143",-1,-1,1,2,2,3,0x2,683,
    { 0xfffffe00, 0xfcfcfcbc, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfeffff00, 0xfcfcfcf8, 0xfcfcfc00},
    { 0x09990400, 0x20106814, 0x40988000, 0xa4102000, 0x68102000, 0x04990900, 0x2010a450, 0x80984000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat328,0,0.235600},
  {owl_defendpat329,2,8, "D1144",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00640800, 0x10209000, 0x80640000, 0x18201000, 0x90201000, 0x08640000, 0x10201800, 0x00648000}
   , 0x0,82.000000,attributes+0,1,NULL,autohelperowl_defendpat329,3,0.019600},
  {owl_defendpat330,2,8, "D1144b",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00640800, 0x10209000, 0x80640000, 0x18201000, 0x90201000, 0x08640000, 0x10201800, 0x00648000}
   , 0x0,40.000000,attributes+0,1,NULL,autohelperowl_defendpat330,3,0.010000},
  {owl_defendpat331,2,8, "D1200",-1,-2,2,2,3,4,0x6,647,
    { 0xffffffff, 0xfcfcfcfc, 0xffffff00, 0xffffffff, 0xfcfcfcfc, 0xffffff00, 0xffffffff, 0xffffffff},
    { 0x80205800, 0x48608000, 0x94200800, 0x08248400, 0x80604800, 0x58208000, 0x84240800, 0x08209400}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat332,6,8, "D1201a",0,-1,2,1,2,2,0x0,648,
    { 0x00f8fca8, 0xf0f0e000, 0xfcbc0000, 0x2e3e3e00, 0xe0f0f000, 0xfcf80000, 0x3e3e2e00, 0x00bcfca8},
    { 0x00900400, 0x20104000, 0x40180000, 0x04102000, 0x40102000, 0x04900000, 0x20100400, 0x00184000}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat332,0,0.010000},
  {owl_defendpat333,5,8, "D1201b",0,-1,2,1,2,2,0x0,648,
    { 0x00f8fce8, 0xf0f0e000, 0xfcbc0000, 0x2e3e3f00, 0xe0f0f000, 0xfcf80000, 0x3f3e2e00, 0x00bcfcac},
    { 0x00900480, 0x20104000, 0x40180000, 0x04102200, 0x40102000, 0x04900000, 0x22100400, 0x00184008}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat333,0,1.810000},
  {owl_defendpat334,4,8, "D1202",-1,-2,1,1,2,3,0x2,720,
    { 0xfcfcf000, 0xfffe3e00, 0x3cfcfcac, 0xf0fcfc00, 0x3efeff00, 0xf0fcfce8, 0xfcfcf000, 0xfcfc3c00},
    { 0x00181000, 0x00502000, 0x10900000, 0x20140000, 0x20500000, 0x10180000, 0x00142000, 0x00901000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat334,0,0.592000},
  {owl_defendpat335,2,8, "D1203",0,-1,1,1,1,2,0x2,685,
    { 0x00fc7c00, 0x70f0f000, 0xf4fc0000, 0x3c3c3400, 0xf0f07000, 0x7cfc0000, 0x343c3c00, 0x00fcf400},
    { 0x00940000, 0x20101000, 0x00580000, 0x10102000, 0x10102000, 0x00940000, 0x20101000, 0x00580000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_defendpat335,0,1.603600},
  {owl_defendpat336,3,8, "D1204",0,-1,1,1,1,2,0x2,685,
    { 0x00bcfc00, 0xe0f0f000, 0xfcf80000, 0x3c3c2c00, 0xf0f0e000, 0xfcbc0000, 0x2c3c3c00, 0x00f8fc00},
    { 0x00148000, 0x80101000, 0x08500000, 0x10100800, 0x10108000, 0x80140000, 0x08101000, 0x00500800}
   , 0x0,85.000000,attributes+0,1,NULL,autohelperowl_defendpat336,0,0.972160},
  {owl_defendpat337,2,4, "D1205",-1,0,1,2,2,2,0x0,685,
    { 0x0030fc30, 0xc0f0c000, 0xfc300000, 0x0c3f0c00, 0xc0f0c000, 0xfc300000, 0x0c3f0c00, 0x0030fc30},
    { 0x00108810, 0x80108000, 0x88100000, 0x08110800, 0x80108000, 0x88100000, 0x08110800, 0x00108810}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat337,0,1.000000},
  {owl_defendpat338,5,8, "D1206",-1,-1,1,1,2,2,0x0,647,
    { 0x38fcf800, 0xf0fcb800, 0xbcfcb000, 0xb8fc3c00, 0xb8fcf000, 0xf8fc3800, 0x3cfcb800, 0xb0fcbc00},
    { 0x10249000, 0x80641000, 0x18601000, 0x10640800, 0x10648000, 0x90241000, 0x08641000, 0x10601800}
   , 0x0,40.000000,attributes+0,1,NULL,autohelperowl_defendpat338,3,1.000000},
  {owl_defendpat339,1,8, "D1207",-1,-1,1,2,2,3,0x2,721,
    { 0xbdffff00, 0xf8fcfcf4, 0xfcfcf800, 0xfcfcbc00, 0xfcfcf800, 0xffffbd00, 0xbcfcfc7c, 0xf8fcfc00},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x10,40.000000,attributes+0,1,NULL,autohelperowl_defendpat339,3,1.600000},
  {owl_defendpat340,2,8, "D1300",0,0,2,1,2,1,0x0,722,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00180024, 0x00102000, 0x00900000, 0x21120000, 0x20100000, 0x00180000, 0x00122100, 0x00900060}
   , 0x6000,90.000000,attributes+0,1,NULL,autohelperowl_defendpat340,0,1.810000},
  {owl_defendpat341,2,8, "D1300b",0,0,2,1,2,1,0x0,685,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00180024, 0x00102000, 0x00900000, 0x21120000, 0x20100000, 0x00180000, 0x00122100, 0x00900060}
   , 0x6000,89.000000,attributes+0,1,NULL,autohelperowl_defendpat341,0,1.810000},
  {owl_defendpat342,2,8, "D1301",0,-1,2,2,2,3,0x0,685,
    { 0x003cffff, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0f, 0x00f0fcfc},
    { 0x00204100, 0x40200040, 0x04200000, 0x00200400, 0x00204000, 0x41200000, 0x04200004, 0x00200400}
   , 0x4000,90.000000,attributes+0,1,NULL,autohelperowl_defendpat342,3,0.592000},
  {owl_defendpat343,4,8, "D1301b",0,-1,2,2,2,3,0x0,685,
    { 0x0038ffd8, 0xc0f0e0c0, 0xfcb00000, 0x2e3d0f00, 0xe0f0c000, 0xff380000, 0x0f3d2e0c, 0x00b0fc9c},
    { 0x00204100, 0x40200040, 0x04200000, 0x00200400, 0x00204000, 0x41200000, 0x04200004, 0x00200400}
   , 0x4000,90.000000,attributes+0,1,NULL,autohelperowl_defendpat343,3,3.616000},
  {owl_defendpat344,2,8, "D1302",0,-1,2,1,2,2,0x0,685,
    { 0x00f0fcc0, 0xf0f0c000, 0xfc3c0000, 0x0c3c3f00, 0xc0f0f000, 0xfcf00000, 0x3f3c0c00, 0x003cfc0c},
    { 0x00600400, 0x10204000, 0x40240000, 0x04201000, 0x40201000, 0x04600000, 0x10200400, 0x00244000}
   , 0x4000,80.000000,attributes+0,1,NULL,autohelperowl_defendpat344,3,0.151360},
  {owl_defendpat345,8,4, "D1303",-2,0,2,4,4,4,0x0,758,
    { 0x2a3f0f03, 0x0038f8f8, 0xc0f0a000, 0xbcb00000, 0xf8380000, 0x0f3f2a00, 0x00b0bcbf, 0xa0f0c000},
    { 0x00200402, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200402, 0x00204000}
   , 0x2000,80.000000,attributes+0,1,NULL,autohelperowl_defendpat345,3,0.019600},
  {owl_defendpat346,10,4, "D1304",-2,0,2,4,4,4,0x0,758,
    { 0x3f3f0f03, 0x003efefe, 0xc0f0f0a0, 0xfcf00000, 0xfe3e0000, 0x0f3f3f2a, 0x00f0fcff, 0xf0f0c000},
    { 0x00200402, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200402, 0x00204000}
   , 0x2000,80.000000,attributes+0,1,NULL,autohelperowl_defendpat346,3,0.019600},
  {owl_defendpat347,6,8, "D1305",-3,-2,1,1,4,3,0x0,647,
    { 0xdcfcfcf0, 0xfcf4fc00, 0xfefede00, 0xfc7fffaa, 0xfcf4fca8, 0xfcfcdc00, 0xff7ffc00, 0xdefefe3e},
    { 0x08100420, 0x00104800, 0x40108000, 0x84120000, 0x48100000, 0x04100800, 0x00128400, 0x80104020}
   , 0x2000,75.000000,attributes+0,1,NULL,autohelperowl_defendpat347,0,0.019600},
  {owl_defendpat348,4,8, "D1306",-1,-1,2,2,3,3,0x0,647,
    { 0x80f4fcf0, 0xf8f0d000, 0xff7f0a00, 0x1c3fbfbf, 0xd0f0f8f8, 0xfcf48000, 0xbf3f1c00, 0x0a7fff3f},
    { 0x00204810, 0x40208000, 0x84200000, 0x08210402, 0x80204000, 0x48200000, 0x04210800, 0x00208412}
   , 0x2000,79.000000,attributes+0,1,NULL,autohelperowl_defendpat348,3,0.016000},
  {owl_defendpat349,5,8, "D1307",-2,-2,1,2,3,4,0x0,720,
    { 0x3efcfc34, 0xf0fcfe0a, 0xfcfcf080, 0xfdff3c00, 0xfefcf000, 0xfcfc3e0a, 0x3cfffd80, 0xf0fcfc70},
    { 0x00104820, 0x40108000, 0x84100000, 0x08120400, 0x80104000, 0x48100000, 0x04120800, 0x00108420}
   , 0x2000,80.000000,attributes+0,1,NULL,autohelperowl_defendpat349,0,0.010000},
  {owl_defendpat350,6,8, "D1308",-1,0,2,4,3,4,0x2,758,
    { 0x2a3f3f3f, 0x00f8f8f8, 0xf0f0a000, 0xbfbf0000, 0xf8f80000, 0x3f3f2a00, 0x00bfbfbf, 0xa0f0f0f0},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x2000,75.000000,attributes+0,1,NULL,autohelperowl_defendpat350,0,0.016000},
  {owl_defendpat351,5,8, "D1309",-1,0,2,4,3,4,0x2,795,
    { 0x2b3f3f3f, 0x00f8f8fc, 0xf0f0a000, 0xbfbf0000, 0xf8f80000, 0x3f3f2b00, 0x00bfbfff, 0xa0f0f0f0},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x2000,81.000000,attributes+0,1,NULL,autohelperowl_defendpat351,0,0.016000},
  {owl_defendpat352,7,8, "D1309b",-2,0,2,4,4,4,0x2,757,
    { 0x2f3f3f3f, 0x00f8fefe, 0xf0f0e080, 0xffbf0000, 0xfef80000, 0x3f3f2f0a, 0x00bfffff, 0xe0f0f0f0},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x2000,82.000000,attributes+0,1,NULL,autohelperowl_defendpat352,0,0.016000},
  {owl_defendpat353,9,8, "D1310",-2,0,1,3,3,3,0x0,721,
    { 0x0a3e0f00, 0x0030faea, 0xc0f08080, 0xbc300000, 0xfa300000, 0x0f3e0a0a, 0x0030bcac, 0x80f0c000},
    { 0x00200600, 0x00204080, 0x40200000, 0x04200000, 0x40200000, 0x06200000, 0x00200408, 0x00204000}
   , 0x2000,80.000000,attributes+0,1,NULL,autohelperowl_defendpat353,3,0.023056},
  {owl_defendpat354,9,8, "D1311",-3,-1,0,2,3,3,0x0,721,
    { 0x1e3f3e0a, 0x00f4fcb8, 0xf0f0d000, 0xfe7c0000, 0xfcf40000, 0x3e3f1e00, 0x007cfeba, 0xd0f0f080},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x2000,80.000000,attributes+0,1,NULL,autohelperowl_defendpat354,0,0.019600},
  {owl_defendpat355,9,8, "D1312",-4,-2,0,2,4,4,0x0,722,
    { 0x003cffff, 0xc0f0f0c0, 0xfef00000, 0x3f3f0f0a, 0xf0f0c080, 0xff3c0000, 0x0f3f3f0f, 0x00f0fefe},
    { 0x00240200, 0x00201080, 0x00600000, 0x10200000, 0x10200000, 0x02240000, 0x00201008, 0x00600000}
   , 0x2000,80.000000,attributes+0,1,NULL,autohelperowl_defendpat355,3,0.019600},
  {owl_defendpat356,2,8, "D1313",-1,0,2,3,3,3,0x0,686,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00140000, 0x00101000, 0x00500000, 0x10100000, 0x10100000, 0x00140000, 0x00101000, 0x00500000}
   , 0x2000,55.000000,attributes+0,1,NULL,autohelperowl_defendpat356,0,0.016000},
  {owl_defendpat357,4,8, "D1314",-1,-2,4,1,5,3,0x0,796,
    { 0x3fbfffbf, 0xe0fcfcfc, 0xfcf8f000, 0xffff2e00, 0xfcfce000, 0xffbf3f00, 0x2effffff, 0xf0f8fcf8},
    { 0x00100010, 0x00100000, 0x00100000, 0x00110000, 0x00100000, 0x00100000, 0x00110000, 0x00100010}
   , 0x2000,55.000000,attributes+0,1,NULL,autohelperowl_defendpat357,0,0.010000},
  {owl_defendpat358,6,8, "D1315",-1,0,3,2,4,2,0x0,759,
    { 0x00bfffbf, 0xe0f0f0f0, 0xfcf80000, 0x3f3f2e00, 0xf0f0e000, 0xffbf0000, 0x2e3f3f3f, 0x00f8fcf8},
    { 0x00100010, 0x00100000, 0x00100000, 0x00110000, 0x00100000, 0x00100000, 0x00110000, 0x00100010}
   , 0x2000,50.000000,attributes+0,1,NULL,autohelperowl_defendpat358,0,0.016000},
  {owl_defendpat359,2,8, "D1316",0,0,1,1,1,1,0x0,721,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00102400, 0x00904000, 0x60100000, 0x04180000, 0x40900000, 0x24100000, 0x00180400, 0x00106000}
   , 0x20,35.000000,attributes+0,1,NULL,autohelperowl_defendpat359,0,0.010000},
  {owl_defendpat360,2,8, "D1316b",0,0,1,1,1,1,0x0,721,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00102400, 0x00904000, 0x60100000, 0x04180000, 0x40900000, 0x24100000, 0x00180400, 0x00106000}
   , 0x20,90.000000,attributes+0,1,NULL,autohelperowl_defendpat360,0,0.010000},
  {owl_defendpat361,4,8, "D1317",-1,-3,2,0,3,3,0x0,685,
    { 0x00fffffc, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xffff0000, 0x3f3f3f3c, 0x00fcfcfc},
    { 0x00920200, 0x201000a0, 0x00180000, 0x00102000, 0x00102000, 0x02920000, 0x20100028, 0x00180000}
   , 0x2000,90.000000,attributes+0,1,NULL,autohelperowl_defendpat361,0,0.010000},
  {owl_defendpat362,1,8, "D1318",-3,-5,0,0,3,5,0x0,722,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat362,0,0.023056},
  {owl_defendpat363,9,8, "D1319",-4,-1,2,1,6,2,0x2,686,
    { 0xa8b8fcfc, 0xeafaea00, 0xfcb8a8a8, 0xafbfaf00, 0xeafaea00, 0xfcb8a8a8, 0xafbfaf00, 0xa8b8fcfc},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,82.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat364,2,2, "D1320",0,0,0,2,0,2,0x0,685,
    { 0x00303030, 0x00f00000, 0x30300000, 0x003f0000, 0x00f00000, 0x30300000, 0x003f0000, 0x00303030},
    { 0x00100010, 0x00100000, 0x00100000, 0x00110000, 0x00100000, 0x00100000, 0x00110000, 0x00100010}
   , 0x20,35.000000,attributes+0,1,NULL,autohelperowl_defendpat364,0,0.016000},
  {owl_defendpat365,2,8, "D1320a",-1,0,1,2,2,2,0x0,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00108010, 0x80100000, 0x08100000, 0x00110800, 0x00108000, 0x80100000, 0x08110000, 0x00100810}
   , 0x20,70.000000,attributes+0,1,NULL,autohelperowl_defendpat365,0,1.096000},
  {owl_defendpat366,2,2, "D1320b",0,0,0,2,0,2,0x0,685,
    { 0x00303030, 0x00f00000, 0x30300000, 0x003f0000, 0x00f00000, 0x30300000, 0x003f0000, 0x00303030},
    { 0x00100010, 0x00100000, 0x00100000, 0x00110000, 0x00100000, 0x00100000, 0x00110000, 0x00100010}
   , 0x20,90.000000,attributes+0,1,NULL,autohelperowl_defendpat366,0,0.016000},
  {owl_defendpat367,3,8, "D1321",-1,0,0,2,1,2,0x0,721,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00100014, 0x00100000, 0x00100000, 0x01110000, 0x00100000, 0x00100000, 0x00110100, 0x00100050}
   , 0x4020,36.000000,attributes+0,1,NULL,autohelperowl_defendpat367,0,0.016000},
  {owl_defendpat368,3,8, "D1321b",-1,0,0,2,1,2,0x0,721,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00100014, 0x00100000, 0x00100000, 0x01110000, 0x00100000, 0x00100000, 0x00110100, 0x00100050}
   , 0x4020,91.000000,attributes+0,1,NULL,autohelperowl_defendpat368,0,0.016000},
  {owl_defendpat369,3,8, "D1322",-1,-1,0,1,1,2,0x0,721,
    { 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000},
    { 0x10201400, 0x00644000, 0x50201000, 0x04640000, 0x40640000, 0x14201000, 0x00640400, 0x10205000}
   , 0x4020,36.000000,attributes+0,1,NULL,autohelperowl_defendpat369,3,0.021760},
  {owl_defendpat370,2,2, "D1323",0,0,0,2,0,2,0x0,685,
    { 0x00303030, 0x00f00000, 0x30300000, 0x003f0000, 0x00f00000, 0x30300000, 0x003f0000, 0x00303030},
    { 0x00100010, 0x00100000, 0x00100000, 0x00110000, 0x00100000, 0x00100000, 0x00110000, 0x00100010}
   , 0x2020,35.000000,attributes+0,1,NULL,autohelperowl_defendpat370,0,0.016000},
  {owl_defendpat371,2,8, "D1323a",-1,-1,1,1,2,2,0x0,685,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00108400, 0x80104000, 0x48100000, 0x04100800, 0x40108000, 0x84100000, 0x08100400, 0x00104800}
   , 0x2020,55.000000,attributes+0,1,NULL,autohelperowl_defendpat371,0,0.235600},
  {owl_defendpat372,3,8, "D1324",-1,0,0,2,1,2,0x0,721,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00100014, 0x00100000, 0x00100000, 0x01110000, 0x00100000, 0x00100000, 0x00110100, 0x00100050}
   , 0x6020,86.000000,attributes+0,1,NULL,autohelperowl_defendpat372,0,0.016000},
  {owl_defendpat373,3,8, "D1325",-1,-1,0,1,1,2,0x0,721,
    { 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000},
    { 0x10201400, 0x00644000, 0x50201000, 0x04640000, 0x40640000, 0x14201000, 0x00640400, 0x10205000}
   , 0x6020,86.000000,attributes+0,1,NULL,autohelperowl_defendpat373,3,0.021760},
  {owl_defendpat374,2,2, "D1326",0,0,0,2,0,2,0x0,685,
    { 0x00303030, 0x00f00000, 0x30300000, 0x003f0000, 0x00f00000, 0x30300000, 0x003f0000, 0x00303030},
    { 0x00100010, 0x00100000, 0x00100000, 0x00110000, 0x00100000, 0x00100000, 0x00110000, 0x00100010}
   , 0x2000,35.000000,attributes+0,1,NULL,autohelperowl_defendpat374,0,0.016000},
  {owl_defendpat375,3,8, "D1329",-1,0,1,4,2,4,0x0,686,
    { 0x00b8fcfc, 0xe0f0e000, 0xfcb80000, 0x2f3f2f00, 0xe0f0e000, 0xfcb80000, 0x2f3f2f00, 0x00b8fcfc},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat376,5,8, "D1330",0,-1,3,2,3,3,0x0,685,
    { 0x003dffff, 0xc0f0f0d0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3d0000, 0x0f3f3f1f, 0x00f0fcfc},
    { 0x00108200, 0x80100080, 0x08100000, 0x00100800, 0x00108000, 0x82100000, 0x08100008, 0x00100800}
   , 0x2000,90.000000,attributes+0,1,NULL,autohelperowl_defendpat376,0,1.810000},
  {owl_defendpat377,6,8, "D1331",-1,-1,2,2,3,3,0x0,722,
    { 0x3efefe7e, 0xf0fcfca8, 0xfcfcf000, 0xffff3d00, 0xfcfcf000, 0xfefe3e00, 0x3dffffaa, 0xf0fcfcf4},
    { 0x20580020, 0x10182000, 0x00942000, 0x20921000, 0x20181000, 0x00582000, 0x10922000, 0x20940020}
   , 0x2200,90.000000,attributes+0,1,NULL,autohelperowl_defendpat377,0,1.810000},
  {owl_defendpat378,7,8, "D1332",-1,-1,2,2,3,3,0x0,721,
    { 0x31ff7faa, 0x70fcf0f4, 0xf4fc3000, 0x3efe3600, 0xf0fc7000, 0x7fff3100, 0x36fe3e7e, 0x30fcf4a8},
    { 0x10922400, 0x20944020, 0x60181000, 0x04582000, 0x40942000, 0x24921000, 0x20580420, 0x10186000}
   , 0x2000,95.000000,attributes+0,1,NULL,autohelperowl_defendpat378,0,0.010000},
  {owl_defendpat379,6,8, "D1333",-1,-1,2,1,3,2,0x0,648,
    { 0x30fcfca8, 0xf0fcf000, 0xfcfc3000, 0x3efe3e00, 0xf0fcf000, 0xfcfc3000, 0x3efe3e00, 0x30fcfca8},
    { 0x10982400, 0x20946000, 0x60981000, 0x24582000, 0x60942000, 0x24981000, 0x20582400, 0x10986000}
   , 0x2200,90.000000,attributes+0,1,NULL,autohelperowl_defendpat379,0,1.096000},
  {owl_defendpat380,4,8, "D1333b",-1,-1,2,1,3,2,0x0,722,
    { 0x30fcfc30, 0xf0fcf000, 0xfcfc3000, 0x3cff3c00, 0xf0fcf000, 0xfcfc3000, 0x3cff3c00, 0x30fcfc30},
    { 0x10986010, 0x60942000, 0x24981000, 0x20592400, 0x20946000, 0x60981000, 0x24592000, 0x10982410}
   , 0x2000,90.000000,attributes+0,1,NULL,autohelperowl_defendpat380,0,0.016000},
  {owl_defendpat381,5,4, "D1334",-1,-1,1,1,2,2,0x0,683,
    { 0xb8fcfc00, 0xf8fcf800, 0xfcfcb800, 0xbcfcbc00, 0xf8fcf800, 0xfcfcb800, 0xbcfcbc00, 0xb8fcfc00},
    { 0x00649800, 0x90609000, 0x98640000, 0x18241800, 0x90609000, 0x98640000, 0x18241800, 0x00649800}
   , 0x2000,95.000000,attributes+0,1,NULL,autohelperowl_defendpat381,3,0.010000},
  {owl_defendpat382,6,4, "D1335",-1,-1,2,2,3,3,0x0,647,
    { 0xb0fcf0c0, 0xf8fc3000, 0x3ffe3a00, 0x30fcbfac, 0x30fcf8e8, 0xf0fcb000, 0xbffc3000, 0x3afe3f0c},
    { 0x00249040, 0x80601000, 0x18600000, 0x10240900, 0x10608000, 0x90240000, 0x09241000, 0x00601804}
   , 0x2200,95.000000,attributes+0,1,NULL,autohelperowl_defendpat382,3,0.019600},
  {owl_defendpat383,5,8, "D1336",-1,-1,1,1,2,2,0x0,647,
    { 0xbcfcf800, 0xf8fcbc00, 0xbcfcf800, 0xf8fcbc00, 0xbcfcf800, 0xf8fcbc00, 0xbcfcf800, 0xf8fcbc00},
    { 0x18249000, 0x80641800, 0x18609000, 0x90640800, 0x18648000, 0x90241800, 0x08649000, 0x90601800}
   , 0x2000,95.000000,attributes+0,1,NULL,autohelperowl_defendpat383,3,0.010000},
  {owl_defendpat384,6,8, "D1337",0,-1,3,2,3,3,0x0,723,
    { 0x003cffff, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0f, 0x00f0fcfc},
    { 0x00148200, 0x80101080, 0x08500000, 0x10100800, 0x10108000, 0x82140000, 0x08101008, 0x00500800}
   , 0x2200,90.000000,attributes+0,1,NULL,autohelperowl_defendpat384,0,1.810000},
  {owl_defendpat385,7,8, "D1338",-1,-2,2,1,3,3,0x0,685,
    { 0x3efefe3e, 0xf0fcfca8, 0xfcfcf000, 0xffff3c00, 0xfcfcf000, 0xfefe3e00, 0x3cffffaa, 0xf0fcfcf0},
    { 0x20644020, 0x50281000, 0x04642000, 0x10a21400, 0x10285000, 0x40642000, 0x14a21000, 0x20640420}
   , 0x2000,90.000000,attributes+0,1,NULL,autohelperowl_defendpat385,3,1.810000},
  {owl_defendpat386,4,4, "D1339",-1,0,1,2,2,2,0x0,685,
    { 0x00b0fcb0, 0xe0f0c000, 0xfc380000, 0x0c3f2e00, 0xc0f0e000, 0xfcb00000, 0x2e3f0c00, 0x0038fc38},
    { 0x00204420, 0x40204000, 0x44200000, 0x04220400, 0x40204000, 0x44200000, 0x04220400, 0x00204420}
   , 0x2000,93.000000,attributes+0,1,NULL,autohelperowl_defendpat386,3,0.010000},
  {owl_defendpat387,3,8, "D1340",-1,-1,1,2,2,3,0x2,721,
    { 0xbcffff00, 0xf8fcfcf0, 0xfcfcf800, 0xfcfcbc00, 0xfcfcf800, 0xffffbc00, 0xbcfcfc3c, 0xf8fcfc00},
    { 0x08610000, 0x10200810, 0x00248000, 0x80201000, 0x08201000, 0x00610800, 0x10208010, 0x80240000}
   , 0x6000,85.000000,attributes+0,1,NULL,autohelperowl_defendpat387,3,1.412800},
  {owl_defendpat388,4,8, "D1341",0,-1,3,2,3,3,0x0,685,
    { 0x0030fffc, 0xc0f0c0c0, 0xfc300000, 0x0f3f0f00, 0xc0f0c000, 0xff300000, 0x0f3f0f0c, 0x0030fcfc},
    { 0x00108200, 0x80100080, 0x08100000, 0x00100800, 0x00108000, 0x82100000, 0x08100008, 0x00100800}
   , 0x2000,60.000000,attributes+0,1,NULL,autohelperowl_defendpat388,0,0.010000},
  {owl_defendpat389,3,8, "D1342",-2,-1,1,2,3,3,0x2,685,
    { 0xf8fcfcfc, 0xfcfcf800, 0xfcffbf00, 0xbffffff0, 0xf8fcfc3c, 0xfcfcf800, 0xffffbf00, 0xbffffcfc},
    { 0x00248408, 0x80205000, 0x48600000, 0x16200800, 0x50208000, 0x84240000, 0x08201600, 0x00604880}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat390,6,8, "D1343a",-1,-3,2,0,3,3,0x0,722,
    { 0x003fbfbd, 0x80f0f0f0, 0xf8f00000, 0x3f3f0a00, 0xf0f08000, 0xbf3f0000, 0x0a3f3f3d, 0x00f0f8f8},
    { 0x00210000, 0x00200010, 0x00200000, 0x00200000, 0x00200000, 0x00210000, 0x00200010, 0x00200000}
   , 0x2000,77.000000,attributes+0,1,NULL,autohelperowl_defendpat390,3,0.016000},
  {owl_defendpat391,8,8, "D1343b",-3,-1,0,2,3,3,0x0,722,
    { 0x003bbebf, 0x80f0e0b0, 0xf8b00000, 0x2f3f0a00, 0xe0f08000, 0xbe3b0000, 0x0a3f2f3b, 0x00b0f8f8},
    { 0x00210002, 0x00200010, 0x00200000, 0x00200000, 0x00200000, 0x00210000, 0x00200012, 0x00200000}
   , 0x2000,60.000000,attributes+0,1,NULL,autohelperowl_defendpat391,3,0.016000},
  {owl_defendpat392,8,8, "D1343c",-1,-3,2,0,3,3,0x0,723,
    { 0x003bbebf, 0x80f0e0b0, 0xf8b00000, 0x2f3f0a00, 0xe0f08000, 0xbe3b0000, 0x0a3f2f3b, 0x00b0f8f8},
    { 0x00210000, 0x00200010, 0x00200000, 0x00200000, 0x00200000, 0x00210000, 0x00200010, 0x00200000}
   , 0x2000,60.000000,attributes+0,1,NULL,autohelperowl_defendpat392,3,0.019600},
  {owl_defendpat393,6,8, "D1343d",-1,-3,2,0,3,3,0x0,723,
    { 0x003fbfbf, 0x80f0f0f0, 0xf8f00000, 0x3f3f0a00, 0xf0f08000, 0xbf3f0000, 0x0a3f3f3f, 0x00f0f8f8},
    { 0x00210000, 0x00200010, 0x00200000, 0x00200000, 0x00200000, 0x00210000, 0x00200010, 0x00200000}
   , 0x2200,55.000000,attributes+0,1,NULL,autohelperowl_defendpat393,3,0.016000},
  {owl_defendpat394,5,8, "D1344",-1,-1,1,3,2,4,0x2,685,
    { 0x28fcfc3c, 0xf0f8f800, 0xfcfca000, 0xbfbf3c00, 0xf8f8f000, 0xfcfc2800, 0x3cbfbf00, 0xa0fcfcf0},
    { 0x00908000, 0xa0100000, 0x08180000, 0x00102800, 0x0010a000, 0x80900000, 0x28100000, 0x00180800}
   , 0x2000,85.000000,attributes+0,1,NULL,autohelperowl_defendpat394,0,0.010000},
  {owl_defendpat395,2,8, "D1345",0,-1,1,1,1,2,0x0,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00640000, 0x10201000, 0x00640000, 0x10201000, 0x10201000, 0x00640000, 0x10201000, 0x00640000}
   , 0x6800,85.000000,attributes+0,1,NULL,autohelperowl_defendpat395,3,0.800656},
  {owl_defendpat396,5,8, "D1346",0,-1,3,2,3,3,0x0,722,
    { 0x003fff7f, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0d00, 0xf0f0c000, 0xff3f0000, 0x0d3f3f3f, 0x00f0fcf4},
    { 0x00128000, 0x80100020, 0x08100000, 0x00100800, 0x00108000, 0x80120000, 0x08100020, 0x00100800}
   , 0x2000,65.000000,attributes+0,1,NULL,autohelperowl_defendpat396,0,0.019600},
  {owl_defendpat397,2,8, "D1347",-1,-1,1,1,2,2,0x2,721,
    { 0xf0fcfc00, 0xfcfcf000, 0xfcfc3c00, 0x3cfcfc00, 0xf0fcfc00, 0xfcfcf000, 0xfcfc3c00, 0x3cfcfc00},
    { 0x60900000, 0x24180000, 0x00182400, 0x00906000, 0x00182400, 0x00906000, 0x60900000, 0x24180000}
   , 0x4000,75.000000,attributes+0,1,NULL,autohelperowl_defendpat397,0,1.000000},
  {owl_defendpat398,2,8, "D1348",0,0,1,2,1,2,0x0,722,
    { 0x003c3c0c, 0x00f0f000, 0xf0f00000, 0x3f3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3f00, 0x00f0f0c0},
    { 0x00100004, 0x00100000, 0x00100000, 0x01100000, 0x00100000, 0x00100000, 0x00100100, 0x00100040}
   , 0x6020,36.000000,attributes+0,1,NULL,autohelperowl_defendpat398,0,0.016000},
  {owl_defendpat399,2,8, "D1348b",0,0,1,2,1,2,0x0,722,
    { 0x003c3c0c, 0x00f0f000, 0xf0f00000, 0x3f3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3f00, 0x00f0f0c0},
    { 0x00100004, 0x00100000, 0x00100000, 0x01100000, 0x00100000, 0x00100000, 0x00100100, 0x00100040}
   , 0x6020,90.000000,attributes+0,1,NULL,autohelperowl_defendpat399,0,0.016000},
  {owl_defendpat400,2,8, "D1348c",0,0,1,2,1,2,0x0,722,
    { 0x003c1c1c, 0x0070f000, 0xd0f00000, 0x3f350000, 0xf0700000, 0x1c3c0000, 0x00353f00, 0x00f0d0d0},
    { 0x00100004, 0x00100000, 0x00100000, 0x01100000, 0x00100000, 0x00100000, 0x00100100, 0x00100040}
   , 0x6020,90.000000,attributes+0,1,NULL,autohelperowl_defendpat400,0,3.616000},
  {owl_defendpat401,2,8, "D1348d",0,0,2,2,2,2,0x0,722,
    { 0x003c3f0f, 0x00f0f0c0, 0xf0f00000, 0x3f3c0000, 0xf0f00000, 0x3f3c0000, 0x003c3f0f, 0x00f0f0c0},
    { 0x00100001, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100001, 0x00100000}
   , 0x6020,90.000000,attributes+0,1,NULL,autohelperowl_defendpat401,0,0.016000},
  {owl_defendpat402,2,8, "D1350",-1,-1,0,2,1,3,0x0,721,
    { 0x303c3c3c, 0x00fcf000, 0xf0f03000, 0x3fff0000, 0xf0fc0000, 0x3c3c3000, 0x00ff3f00, 0x30f0f0f0},
    { 0x10201000, 0x00640000, 0x10201000, 0x00640000, 0x00640000, 0x10201000, 0x00640000, 0x10201000}
   , 0x2000,85.000000,attributes+0,1,NULL,autohelperowl_defendpat402,3,0.021760},
  {owl_defendpat403,2,8, "D1351",0,-1,2,1,2,2,0x0,685,
    { 0x003cfc38, 0xc0f0f000, 0xfcf00000, 0x3e3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3e00, 0x00f0fcb0},
    { 0x00188000, 0x80102000, 0x08900000, 0x20100800, 0x20108000, 0x80180000, 0x08102000, 0x00900800}
   , 0x2000,65.000000,attributes+0,1,NULL,autohelperowl_defendpat403,0,0.010000},
  {owl_defendpat404,3,8, "D1352",0,-2,1,1,1,3,0x0,721,
    { 0x3c3c3c00, 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00, 0xf0f0f000},
    { 0x00102400, 0x00914000, 0x60100010, 0x04180000, 0x40910000, 0x24100010, 0x00180400, 0x00106000}
   , 0x4000,80.000000,attributes+0,1,NULL,autohelperowl_defendpat404,0,1.810000},
  {owl_defendpat405,1,8, "D1353",-2,-1,1,2,3,3,0x2,647,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xffffffff, 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xffffffff},
    { 0x10200000, 0x00240000, 0x00201200, 0x00600080, 0x00240008, 0x00201000, 0x00600000, 0x12200000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat406,3,8, "D1354",-3,-2,0,2,3,4,0x0,758,
    { 0x3f3f3f0c, 0x00fcfdfc, 0xf0f0f040, 0xfffc0000, 0xfdfc0000, 0x3f3f3f04, 0x00fcfffc, 0xf0f0f0c0},
    { 0x10101008, 0x00540000, 0x10101000, 0x02540000, 0x00540000, 0x10101000, 0x00540200, 0x10101080}
   , 0x2000,65.000000,attributes+0,1,NULL,autohelperowl_defendpat406,0,0.019600},
  {owl_defendpat407,3,8, "D1355",0,-1,1,2,1,3,0x2,722,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00691000, 0x10602010, 0x10a40000, 0x20241000, 0x20601000, 0x10690000, 0x10242010, 0x00a41000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_defendpat407,3,0.016000},
  {owl_defendpat408,3,4, "D1356",-1,0,1,4,2,4,0x0,686,
    { 0x00b8fcfc, 0xe0f0e000, 0xfcb80000, 0x2f3f2f00, 0xe0f0e000, 0xfcb80000, 0x2f3f2f00, 0x00b8fcfc},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x2000,90.000000,attributes+0,1,NULL,autohelperowl_defendpat408,0,2.179600},
  {owl_defendpat409,3,4, "D1356a",-1,0,1,4,2,4,0x0,686,
    { 0x00b8fcfc, 0xe0f0e000, 0xfcb80000, 0x2f3f2f00, 0xe0f0e000, 0xfcb80000, 0x2f3f2f00, 0x00b8fcfc},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x2200,80.000000,attributes+0,1,NULL,autohelperowl_defendpat409,0,2.179600},
  {owl_defendpat410,2,8, "D1356b",-1,0,2,4,3,4,0x2,795,
    { 0x0f3f2f3f, 0x00b0fcfc, 0xe0f0c000, 0xff3b0000, 0xfcb00000, 0x2f3f0f00, 0x003bffff, 0xc0f0e0f0},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x2000,91.000000,attributes+0,1,NULL,autohelperowl_defendpat410,0,2.179600},
  {owl_defendpat411,7,8, "D1357",-3,-2,0,2,3,4,0x0,685,
    { 0x00feffff, 0xf0f0f0e0, 0xfffc0000, 0x3f3f3f0f, 0xf0f0f0c0, 0xfffe0000, 0x3f3f3f2f, 0x00fcffff},
    { 0x00640000, 0x10201000, 0x01640000, 0x10201005, 0x10201040, 0x00640000, 0x10201000, 0x00640101}
   , 0x2000,61.000000,attributes+0,1,NULL,autohelperowl_defendpat411,3,0.019600},
  {owl_defendpat412,3,8, "D1358",0,0,1,3,1,3,0x0,759,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00101000, 0x00500000, 0x10100000, 0x00140000, 0x00500000, 0x10100000, 0x00140000, 0x00101000}
   , 0x6000,61.000000,attributes+0,1,NULL,autohelperowl_defendpat412,0,1.096000},
  {owl_defendpat413,3,8, "D1359",-2,-3,2,1,4,4,0x0,721,
    { 0xffffff2f, 0xfcffffff, 0xfcfcfcf0, 0xfffefc00, 0xfffffc00, 0xffffff3f, 0xfcfeffff, 0xfcfcfce0},
    { 0x00209004, 0x80600000, 0x18200000, 0x01240800, 0x00608000, 0x90200000, 0x08240100, 0x00201840}
   , 0x2000,65.000000,attributes+0,1,NULL,autohelperowl_defendpat413,3,0.019600},
  {owl_defendpat414,2,8, "D1360",-2,-1,2,2,4,3,0x0,720,
    { 0xfffffdfd, 0xfcfcff7f, 0xfcfcfcc0, 0xffffff00, 0xfffcfc00, 0xfdffff0f, 0xfffffff5, 0xfcfcfcfc},
    { 0x00100010, 0x00100000, 0x00100000, 0x00110000, 0x00100000, 0x00100000, 0x00110000, 0x00100010}
   , 0x2000,65.000000,attributes+0,1,NULL,autohelperowl_defendpat414,0,0.019600},
  {owl_defendpat415,2,8, "D1361a",-1,0,1,2,2,2,0x0,721,
    { 0x3f3f0e00, 0x003cfcbc, 0xc0f0f000, 0xfcf00000, 0xfc3c0000, 0x0e3f3f00, 0x00f0fcf8, 0xf0f0c000},
    { 0x22100800, 0x00188008, 0x80102000, 0x08900000, 0x80180000, 0x08102200, 0x00900880, 0x20108000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat415,0,0.021760},
  {owl_defendpat416,1,8, "D1361b",-1,0,1,2,2,2,0x0,721,
    { 0x3f3f0f00, 0x003cfcfc, 0xc0f0f000, 0xfcf00000, 0xfc3c0000, 0x0f3f3f00, 0x00f0fcfc, 0xf0f0c000},
    { 0x22100a00, 0x00188088, 0x80102000, 0x08900000, 0x80180000, 0x0a102200, 0x00900888, 0x20108000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_defendpat416,0,1.317760},
  {owl_defendpat417,2,8, "D1362",-2,0,2,3,4,3,0x2,757,
    { 0x0f3f2f3f, 0x00b0ffff, 0xe0f0c0c0, 0xff3b0000, 0xffb00000, 0x2f3f0f0f, 0x003bffff, 0xc0f0e0f0},
    { 0x00100000, 0x00100200, 0x00100080, 0x00100000, 0x02100000, 0x00100008, 0x00100000, 0x00100000}
   , 0x0,85.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat418,4,8, "D1363",-2,-1,2,2,4,3,0x0,647,
    { 0xfcffff3f, 0xfcfcfcf0, 0xfffffe00, 0xfffffcbc, 0xfcfcfcf8, 0xfffffc00, 0xfcffff3f, 0xfefffff0},
    { 0x00201810, 0x00608000, 0x92210000, 0x08250018, 0x80600090, 0x18200000, 0x00250800, 0x00219210}
   , 0x200,75.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat419,3,8, "D1364",-1,-1,2,2,3,3,0x0,685,
    { 0xfcffff3f, 0xfcfcfcf0, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc00, 0xfffffc00, 0xfcffff3f, 0xfcfcfcf0},
    { 0x18250800, 0x00249810, 0x80609000, 0x98600000, 0x98240000, 0x08251800, 0x00609810, 0x90608000}
   , 0x200,85.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat420,4,8, "D1365",-1,-1,2,1,3,2,0x0,648,
    { 0x3cfcfcfc, 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00, 0xf0fcfcfc},
    { 0x24582400, 0x10986400, 0x60946000, 0x64981000, 0x64981000, 0x24582400, 0x10986400, 0x60946000}
   , 0x200,85.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat421,6,8, "D1366",-2,-1,2,2,4,3,0x0,685,
    { 0xbfffffd0, 0xf8fcfcfc, 0xfffef800, 0xfcfdbf2f, 0xfcfcf8e0, 0xffffbf00, 0xbffdfcfc, 0xf8feff1f},
    { 0x06290500, 0x00206458, 0x40a04000, 0x64200000, 0x64200000, 0x05290600, 0x00206494, 0x40a04000}
   , 0x0,85.000000,attributes+0,1,NULL,autohelperowl_defendpat421,3,0.010000},
  {owl_defendpat422,2,8, "D1367",-3,-1,0,2,3,3,0x0,758,
    { 0x0f3f3f0c, 0x00f0fcfc, 0xf0f0c000, 0xff3c0000, 0xfcf00000, 0x3f3f0f00, 0x003cfffc, 0xc0f0f0c0},
    { 0x00101008, 0x00500000, 0x10100000, 0x02140000, 0x00500000, 0x10100000, 0x00140200, 0x00101080}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat423,3,8, "D1368",-1,-2,2,1,3,3,0x0,647,
    { 0xf0f0fce0, 0xfcfcc000, 0xff3f3f00, 0x0cfeffff, 0xc0fcfcfc, 0xfcf0f000, 0xfffe0c00, 0x3f3fff2f},
    { 0x00201840, 0x00608000, 0x90200000, 0x08240102, 0x80600000, 0x18200000, 0x01240800, 0x00209006}
   , 0x2000,70.000000,attributes+0,1,NULL,autohelperowl_defendpat423,3,0.016000},
  {owl_defendpat424,3,8, "D1370",-1,-2,2,0,3,2,0x0,722,
    { 0x003cbfbf, 0x80f0f0c0, 0xf8f00000, 0x3f3f0a00, 0xf0f08000, 0xbf3c0000, 0x0a3f3f0f, 0x00f0f8f8},
    { 0x00200102, 0x00200040, 0x00200000, 0x00200000, 0x00200000, 0x01200000, 0x00200006, 0x00200000}
   , 0x2000,75.000000,attributes+0,1,NULL,autohelperowl_defendpat424,3,0.016000},
  {owl_defendpat425,4,8, "D1371",0,-1,3,1,3,2,0x0,686,
    { 0x00b8fcfc, 0xe0f0e000, 0xfcb80000, 0x2f3f2f00, 0xe0f0e000, 0xfcb80000, 0x2f3f2f00, 0x00b8fcfc},
    { 0x00100008, 0x00100000, 0x00100000, 0x02100000, 0x00100000, 0x00100000, 0x00100200, 0x00100080}
   , 0x2800,85.000000,attributes+0,1,NULL,autohelperowl_defendpat425,0,0.010000},
  {owl_defendpat426,2,8, "D1372",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00244000, 0x40201000, 0x04600000, 0x10200400, 0x10204000, 0x40240000, 0x04201000, 0x00600400}
   , 0x2000,85.000000,attributes+0,1,NULL,autohelperowl_defendpat426,3,0.610000},
  {owl_defendpat427,2,4, "D1373",0,-2,0,1,0,3,0x0,685,
    { 0x30303020, 0x00fc0000, 0x30303000, 0x00fe0000, 0x00fc0000, 0x30303000, 0x00fe0000, 0x30303020},
    { 0x10200000, 0x00240000, 0x00201000, 0x00600000, 0x00240000, 0x00201000, 0x00600000, 0x10200000}
   , 0x2800,85.000000,attributes+0,1,NULL,autohelperowl_defendpat427,3,0.610000},
  {owl_defendpat428,4,8, "D1374",0,-4,1,1,1,5,0x2,648,
    { 0x00f8fc00, 0xf0f0e000, 0xffbf0000, 0x2c3c3c3c, 0xe0f0f0f0, 0xfcf80000, 0x3c3c2c00, 0x00bfff00},
    { 0x00201000, 0x00600000, 0x10200000, 0x00240000, 0x00600000, 0x10200000, 0x00240000, 0x00201000}
   , 0x2000,55.000000,attributes+0,1,NULL,autohelperowl_defendpat428,3,0.019600},
  {owl_defendpat429,3,8, "D1375",-1,-2,1,1,2,3,0x0,721,
    { 0x33ffff00, 0xf0fcf0fc, 0xfcfc3000, 0x3cfc3c00, 0xf0fcf000, 0xffff3300, 0x3cfc3cfc, 0x30fcfc00},
    { 0x01601000, 0x10600004, 0x10240000, 0x00241000, 0x00601000, 0x10600100, 0x10240040, 0x00241000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_defendpat429,3,1.000000},
  {owl_defendpat430,3,8, "D1376",0,-2,1,1,1,3,0x2,685,
    { 0x003bfd00, 0xc0f0e070, 0xfcb00000, 0x2c3c0c00, 0xe0f0c000, 0xfd3b0000, 0x0c3c2c34, 0x00b0fc00},
    { 0x00214000, 0x40200010, 0x04200000, 0x00200400, 0x00204000, 0x40210000, 0x04200010, 0x00200400}
   , 0x6000,75.000000,attributes+0,1,NULL,autohelperowl_defendpat430,3,0.902176},
  {owl_defendpat431,4,8, "D1377",-1,-1,1,3,2,4,0x2,647,
    { 0x00fcfc00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0x00ffff00},
    { 0x00241000, 0x00601000, 0x10600000, 0x10240000, 0x10600000, 0x10240000, 0x00241000, 0x00601000}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_defendpat431,3,1.000000},
  {owl_defendpat432,1,4, "D1378",-1,-1,0,1,1,2,0x0,685,
    { 0x0030fc00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0x0030fc00},
    { 0x00108800, 0x80108000, 0x88100000, 0x08100800, 0x80108000, 0x88100000, 0x08100800, 0x00108800}
   , 0x0,55.000000,attributes+0,1,NULL,autohelperowl_defendpat432,0,3.320000},
  {owl_defendpat433,1,8, "D1379",-2,0,1,2,3,2,0x0,685,
    { 0x0070fcf0, 0xd0f0c000, 0xfc340000, 0x0c3f1f00, 0xc0f0d000, 0xfc700000, 0x1f3f0c00, 0x0034fc3c},
    { 0x00100820, 0x00108000, 0x80100000, 0x08120000, 0x80100000, 0x08100000, 0x00120800, 0x00108020}
   , 0x2000,65.000000,attributes+0,1,NULL,autohelperowl_defendpat433,0,0.442960},
  {owl_defendpat434,1,8, "D1380",-2,0,0,2,2,2,0x0,722,
    { 0x003c3f0f, 0x00f0f0c0, 0xf0f00000, 0x3f3c0000, 0xf0f00000, 0x3f3c0000, 0x003c3f0f, 0x00f0f0c0},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x2000,65.000000,attributes+0,1,NULL,autohelperowl_defendpat434,0,0.019600},
  {owl_defendpat435,2,8, "D1381",-1,-1,0,1,1,2,0x0,685,
    { 0x00f0fc00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0x003cfc00},
    { 0x00600400, 0x10204000, 0x40240000, 0x04201000, 0x40201000, 0x04600000, 0x10200400, 0x00244000}
   , 0x6000,70.000000,attributes+0,1,NULL,autohelperowl_defendpat435,3,1.096000},
  {owl_defendpat436,2,8, "D1382",-1,-1,1,0,2,1,0x0,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00244000, 0x40201000, 0x04600000, 0x10200400, 0x10204000, 0x40240000, 0x04201000, 0x00600400}
   , 0x6000,70.000000,attributes+0,1,NULL,autohelperowl_defendpat436,3,0.376000},
  {owl_defendpat437,2,8, "D1383",0,-1,4,1,4,2,0x0,686,
    { 0x0038fc3c, 0xc0f0e000, 0xfcb00000, 0x2f3f0c00, 0xe0f0c000, 0xfc380000, 0x0c3f2f00, 0x00b0fcf0},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x2810,71.000000,attributes+0,1,NULL,autohelperowl_defendpat437,0,6.010000},
  {owl_defendpat438,2,8, "D1384",0,0,2,2,2,2,0x0,722,
    { 0x003c3f33, 0x00f0f0c0, 0xf0f00000, 0x3c3f0000, 0xf0f00000, 0x3f3c0000, 0x003f3c0f, 0x00f0f030},
    { 0x00100001, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100001, 0x00100000}
   , 0x2000,65.000000,attributes+0,1,NULL,autohelperowl_defendpat438,0,0.667600},
  {owl_defendpat439,2,8, "D1385",-2,0,1,1,3,1,0x0,685,
    { 0x00f0fc00, 0xf0f0c000, 0xff3f0000, 0x0c3c3c3c, 0xc0f0f0f0, 0xfcf00000, 0x3c3c0c00, 0x003fff00},
    { 0x00200400, 0x00204000, 0x41200000, 0x04200004, 0x40200040, 0x04200000, 0x00200400, 0x00204100}
   , 0x2000,75.000000,attributes+0,1,NULL,autohelperowl_defendpat439,3,0.592000},
  {owl_defendpat440,3,8, "D1386a",0,-1,1,2,1,3,0x2,685,
    { 0x00fdbf00, 0xb0f0f0d0, 0xf8fc0000, 0x3c3c3800, 0xf0f0b000, 0xbffd0000, 0x383c3c1c, 0x00fcf800},
    { 0x00600100, 0x10200040, 0x00240000, 0x00201000, 0x00201000, 0x01600000, 0x10200004, 0x00240000}
   , 0x2800,90.000000,attributes+0,1,NULL,autohelperowl_defendpat440,3,0.016000},
  {owl_defendpat441,3,8, "D1386b",0,-1,1,2,1,3,0x2,685,
    { 0x00fdbf00, 0xb0f0f0d0, 0xf8fc0000, 0x3c3c3800, 0xf0f0b000, 0xbffd0000, 0x383c3c1c, 0x00fcf800},
    { 0x00600100, 0x10200040, 0x00240000, 0x00201000, 0x00201000, 0x01600000, 0x10200004, 0x00240000}
   , 0x2800,35.000000,attributes+0,1,NULL,autohelperowl_defendpat441,3,0.016000},
  {owl_defendpat442,4,8, "D1387",-2,-1,1,2,3,3,0x0,647,
    { 0xbffff800, 0xf8fcbe3c, 0xbcfcf880, 0xf8fcbc00, 0xbefcf800, 0xf8ffbf08, 0xbcfcf8f0, 0xf8fcbc00},
    { 0x00229000, 0x80600020, 0x18200000, 0x00240800, 0x00608000, 0x90220000, 0x08240020, 0x00201800}
   , 0x2200,75.000000,attributes+0,1,NULL,autohelperowl_defendpat442,3,0.106000},
  {owl_defendpat443,5,8, "D1388",-2,-1,1,2,3,3,0x0,721,
    { 0xbfff3800, 0x38fcbe3c, 0xb0fcf880, 0xf8fcb000, 0xbefc3800, 0x38ffbf08, 0xb0fcf8f0, 0xf8fcb000},
    { 0x00621000, 0x10600020, 0x10240000, 0x00241000, 0x00601000, 0x10620000, 0x10240020, 0x00241000}
   , 0x2800,75.000000,attributes+0,1,NULL,autohelperowl_defendpat443,3,0.235600},
  {owl_defendpat444,2,8, "D1389",0,-1,1,2,1,3,0x2,685,
    { 0x00ff3c00, 0x30f0f030, 0xf0fc0000, 0x3c3c3000, 0xf0f03000, 0x3cff0000, 0x303c3c30, 0x00fcf000},
    { 0x00610000, 0x10200010, 0x00240000, 0x00201000, 0x00201000, 0x00610000, 0x10200010, 0x00240000}
   , 0x6000,84.000000,attributes+0,1,NULL,autohelperowl_defendpat444,3,3.616000},
  {owl_defendpat445,3,8, "D1390",-2,-1,1,3,3,4,0x2,683,
    { 0xbfff1c00, 0x387cfc3f, 0xd0fcf800, 0xfcf4b000, 0xfc7c3800, 0x1cffbf03, 0xb0f4fcf0, 0xf8fcd000},
    { 0x00600000, 0x10200000, 0x00240000, 0x00201000, 0x00201000, 0x00600000, 0x10200000, 0x00240000}
   , 0x800,80.000000,attributes+0,1,NULL,autohelperowl_defendpat445,3,5.410000},
  {owl_defendpat446,3,8, "D1391",0,-1,1,2,1,3,0x0,721,
    { 0x00fff000, 0xf0f03030, 0x3cfc0000, 0x303c3c00, 0x30f0f000, 0xf0ff0000, 0x3c3c3030, 0x00fc3c00},
    { 0x00116000, 0x40900010, 0x24100000, 0x00180400, 0x00904000, 0x60110000, 0x04180010, 0x00102400}
   , 0x4000,80.000000,attributes+0,1,NULL,autohelperowl_defendpat446,0,5.410000},
  {owl_defendpat447,2,8, "D1392",-1,-1,0,1,1,2,0x0,647,
    { 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000, 0x3c3c3c00, 0x00fcfc00, 0xf0f0f000, 0xfcfc0000},
    { 0x48240000, 0x04201800, 0x00608400, 0x90204000, 0x18200400, 0x00244800, 0x40209000, 0x84600000}
   , 0x800,40.000000,attributes+0,1,NULL,autohelperowl_defendpat447,3,0.010000},
  {owl_defendpat448,3,8, "D1393",0,-2,1,1,1,3,0x0,648,
    { 0x00fcfc00, 0xf0f0f000, 0xfcff0000, 0x3c3c3c30, 0xf0f0f030, 0xfcfc0000, 0x3c3c3c00, 0x00fffc00},
    { 0x00102400, 0x00904000, 0x60110000, 0x04180010, 0x40900010, 0x24100000, 0x00180400, 0x00116000}
   , 0x200,50.000000,attributes+0,1,NULL,autohelperowl_defendpat448,0,3.832000},
  {owl_defendpat449,3,8, "D1394",0,-2,1,1,1,3,0x0,721,
    { 0x00fc3c00, 0x30f0f000, 0xf0ff0000, 0x3c3c3030, 0xf0f03030, 0x3cfc0000, 0x303c3c00, 0x00fff000},
    { 0x00102400, 0x00904000, 0x60110000, 0x04180010, 0x40900010, 0x24100000, 0x00180400, 0x00116000}
   , 0x4000,70.000000,attributes+0,1,NULL,autohelperowl_defendpat449,0,2.536000},
  {owl_defendpat450,3,8, "D1395",0,-1,1,2,1,3,0x2,722,
    { 0x003ffd00, 0xc0f0f070, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfd3f0000, 0x0c3c3c34, 0x00f0fc00},
    { 0x00196000, 0x40902010, 0x24900000, 0x20180400, 0x20904000, 0x60190000, 0x04182010, 0x00902400}
   , 0x810,40.000000,attributes+0,1,NULL,autohelperowl_defendpat450,0,3.616000},
  {owl_defendpat451,3,8, "D1400",-1,-2,1,1,2,3,0x1,721,
    { 0x3fff3c00, 0x30fcfc3c, 0xf0fcf000, 0xfcfc3000, 0xfcfc3000, 0x3cff3f00, 0x30fcfcf0, 0xf0fcf000},
    { 0x20912400, 0x20984010, 0x60182000, 0x04982000, 0x40982000, 0x24912000, 0x20980410, 0x20186000}
   , 0x0,95.000000,attributes+0,1,NULL,autohelperowl_defendpat451,0,0.019600},
  {owl_defendpat452,3,8, "D1400b",-1,-2,1,1,2,3,0x1,720,
    { 0x3fff3c00, 0x30fcfc3c, 0xf0fcf000, 0xfcfc3000, 0xfcfc3000, 0x3cff3f00, 0x30fcfcf0, 0xf0fcf000},
    { 0x20912400, 0x20984010, 0x60182000, 0x04982000, 0x40982000, 0x24912000, 0x20980410, 0x20186000}
   , 0x0,95.000000,attributes+0,1,NULL,autohelperowl_defendpat452,0,0.010000},
  {owl_defendpat453,3,8, "D1401",-1,-2,1,1,2,3,0x1,720,
    { 0x3fff3c00, 0x30fcfc3c, 0xf0fcf000, 0xfcfc3000, 0xfcfc3000, 0x3cff3f00, 0x30fcfcf0, 0xf0fcf000},
    { 0x20912400, 0x20984010, 0x60182000, 0x04982000, 0x40982000, 0x24912000, 0x20980410, 0x20186000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat453,0,0.016000},
  {owl_defendpat454,2,8, "D1402",0,-1,1,2,1,3,0x2,722,
    { 0x00fcff00, 0xf0f0f0c0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfffc0000, 0x3c3c3c0c, 0x00fcfc00},
    { 0x00186200, 0x40902080, 0x24900000, 0x20180400, 0x20904000, 0x62180000, 0x04182008, 0x00902400}
   , 0x10,45.000000,attributes+0,1,NULL,autohelperowl_defendpat454,0,0.076160},
  {owl_defendpat455,2,8, "D1403",0,-1,1,1,1,2,0xa,722,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00186000, 0x40902000, 0x24900000, 0x20180400, 0x20904000, 0x60180000, 0x04182000, 0x00902400}
   , 0x10,30.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat456,3,8, "D1404",-1,-1,1,1,2,2,0xa,685,
    { 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00},
    { 0x58240000, 0x04241800, 0x00609400, 0x90604000, 0x18240400, 0x00245800, 0x40609000, 0x94600000}
   , 0x10,80.000000,attributes+0,1,NULL,autohelperowl_defendpat456,3,1.000000},
  {owl_defendpat457,4,8, "D1405",-1,-1,1,1,2,2,0xa,685,
    { 0xf8fcf400, 0xfcfc7800, 0x7cfcbc00, 0xb4fcfc00, 0x78fcfc00, 0xf4fcf800, 0xfcfcb400, 0xbcfc7c00},
    { 0x50248000, 0x84241000, 0x08601400, 0x10604800, 0x10248400, 0x80245000, 0x48601000, 0x14600800}
   , 0x10,80.000000,attributes+0,1,NULL,autohelperowl_defendpat457,3,1.000000},
  {owl_defendpat458,4,8, "D1405b",-1,-1,1,1,2,2,0xa,721,
    { 0xf8fcfc00, 0xfcfcf800, 0xfcfcbc00, 0xbcfcfc00, 0xf8fcfc00, 0xfcfcf800, 0xfcfcbc00, 0xbcfcfc00},
    { 0x50209000, 0x84640000, 0x18201400, 0x00644800, 0x00648400, 0x90205000, 0x48640000, 0x14201800}
   , 0x10,80.000000,attributes+0,1,NULL,autohelperowl_defendpat458,3,1.000000},
  {owl_defendpat459,4,8, "D1406",-1,-1,1,1,2,2,0xa,647,
    { 0xf8fcfc00, 0xfcfcf800, 0xfcfcbc00, 0xbcfcfc00, 0xf8fcfc00, 0xfcfcf800, 0xfcfcbc00, 0xbcfcfc00},
    { 0x50248000, 0x84241000, 0x08601400, 0x10604800, 0x10248400, 0x80245000, 0x48601000, 0x14600800}
   , 0x0,55.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat460,3,8, "D1407",-2,-1,1,2,3,3,0xa,647,
    { 0xfcfcfc00, 0xffffff00, 0xfffffcfc, 0xfcfcfc3c, 0xfffffff0, 0xfcfcfcfc, 0xfcfcfc00, 0xfcffff00},
    { 0x40100000, 0x06110000, 0x00120418, 0x00104020, 0x00110620, 0x00104090, 0x40100000, 0x04120000}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat461,4,8, "D1408",-2,-1,1,2,3,3,0x0,683,
    { 0xfcfcf000, 0xfcff3c00, 0x3ffffc30, 0xf0fcfc3c, 0x3cfffcf0, 0xf0fcfc30, 0xfcfcf000, 0xfcff3f00},
    { 0x88641000, 0x18621800, 0x11668820, 0x90249024, 0x18621860, 0x10648820, 0x90249000, 0x88661100}
   , 0x10,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat462,3,8, "D1409",-2,-1,1,1,3,2,0x4,683,
    { 0xfcfcf000, 0xfcff3c00, 0x3cfcfc30, 0xf0fcfc00, 0x3cfffc00, 0xf0fcfc30, 0xfcfcf000, 0xfcfc3c00},
    { 0x88641000, 0x18621800, 0x10648820, 0x90249000, 0x18621800, 0x10648820, 0x90249000, 0x88641000}
   , 0x10,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_defendpat463,6,8, "D1410",-2,-1,1,1,3,2,0x6,722,
    { 0xf8fcfc00, 0xfcfcf800, 0xffffbc00, 0xbcfcfc3c, 0xf8fcfcf0, 0xfcfcf800, 0xfcfcbc00, 0xbcffff00},
    { 0x5010a000, 0x84940000, 0x29111400, 0x00584814, 0x00948450, 0xa0105000, 0x48580000, 0x14112900}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat464,2,8, "D1411",0,-1,1,1,1,2,0xa,721,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00601800, 0x10608000, 0x90240000, 0x08241000, 0x80601000, 0x18600000, 0x10240800, 0x00249000}
   , 0x10,45.000000,attributes+0,1,NULL,autohelperowl_defendpat464,3,1.000000},
  {owl_defendpat465,3,8, "D1411b",0,-1,1,1,1,2,0xa,721,
    { 0x00fcbc00, 0xb0f0f000, 0xf8fc0000, 0x3c3c3800, 0xf0f0b000, 0xbcfc0000, 0x383c3c00, 0x00fcf800},
    { 0x00601800, 0x10608000, 0x90240000, 0x08241000, 0x80601000, 0x18600000, 0x10240800, 0x00249000}
   , 0x10,35.000000,attributes+0,1,NULL,autohelperowl_defendpat465,3,1.000000},
  {owl_defendpat466,4,8, "D1412",-1,-1,1,1,2,2,0xa,648,
    { 0x0cfcfc00, 0xf0f0fc00, 0xfcfcc000, 0xfc3c3c00, 0xfcf0f000, 0xfcfc0c00, 0x3c3cfc00, 0xc0fcfc00},
    { 0x04502400, 0x10904400, 0x60144000, 0x44181000, 0x44901000, 0x24500400, 0x10184400, 0x40146000}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat467,3,8, "D1413",-1,-1,1,1,2,2,0xa,648,
    { 0x0cfcfc00, 0xf0f0fc00, 0xfcfcc000, 0xfc3c3c00, 0xfcf0f000, 0xfcfc0c00, 0x3c3cfc00, 0xc0fcfc00},
    { 0x04582000, 0x10902400, 0x20944000, 0x60181000, 0x24901000, 0x20580400, 0x10186000, 0x40942000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat467,0,0.010000},
  {owl_defendpat468,8,8, "D1414",-2,-2,2,2,4,4,0xa,720,
    { 0x0f3fffff, 0xc0f0fefe, 0xfef0c080, 0xff3f0f0a, 0xfef0c080, 0xff3f0f0a, 0x0f3fffff, 0xc0f0fefe},
    { 0x00165822, 0x40509020, 0x94500000, 0x18160400, 0x90504000, 0x58160000, 0x04161822, 0x00509420}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat469,1,8, "D1415",-1,0,0,1,1,1,0x0,685,
    { 0x00303c00, 0x00f0c000, 0xf0300000, 0x0c3c0000, 0xc0f00000, 0x3c300000, 0x003c0c00, 0x0030f000},
    { 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200400, 0x00204000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat469,3,0.040000},
  {owl_defendpat470,1,4, "D1416",0,0,0,2,0,2,0x0,685,
    { 0x00303030, 0x00f00000, 0x30300000, 0x003f0000, 0x00f00000, 0x30300000, 0x003f0000, 0x00303030},
    { 0x00200010, 0x00200000, 0x00200000, 0x00210000, 0x00200000, 0x00200000, 0x00210000, 0x00200010}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat470,3,0.040000},
  {owl_defendpat471,1,8, "D1417",-1,0,0,1,1,1,0x0,685,
    { 0x00303c00, 0x00f0c000, 0xf0300000, 0x0c3c0000, 0xc0f00000, 0x3c300000, 0x003c0c00, 0x0030f000},
    { 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200400, 0x00204000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat471,3,0.050800},
  {owl_defendpat472,1,4, "D1418",0,0,0,2,0,2,0x0,685,
    { 0x00303030, 0x00f00000, 0x30300000, 0x003f0000, 0x00f00000, 0x30300000, 0x003f0000, 0x00303030},
    { 0x00200010, 0x00200000, 0x00200000, 0x00210000, 0x00200000, 0x00200000, 0x00210000, 0x00200010}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_defendpat472,3,0.050800},
  {owl_defendpat473,5,8, "D1419",-1,-2,1,1,2,3,0x2,646,
    { 0xffff3e00, 0x3cfcfcbc, 0xf0fcfc00, 0xfcfcf000, 0xfcfc3c00, 0x3effff00, 0xf0fcfcf8, 0xfcfcf000},
    { 0x26912400, 0x20984418, 0x60186000, 0x44982000, 0x44982000, 0x24912600, 0x20984490, 0x60186000}
   , 0x10,35.000000,attributes+0,1,NULL,autohelperowl_defendpat473,0,1.000000},
  {owl_defendpat474,5,8, "D1420",-1,-2,1,1,2,3,0x2,646,
    { 0xffff3e00, 0x3cfcfcbc, 0xf0fcfc00, 0xfcfcf000, 0xfcfc3c00, 0x3effff00, 0xf0fcfcf8, 0xfcfcf000},
    { 0x24912400, 0x20984410, 0x60186000, 0x44982000, 0x44982000, 0x24912400, 0x20984410, 0x60186000}
   , 0x10,35.000000,attributes+0,1,NULL,autohelperowl_defendpat474,0,1.000000},
  {owl_defendpat475,1,8, "D1421",0,-1,1,1,1,2,0x2,648,
    { 0x00f4fc00, 0xf0f0d000, 0xfc7c0000, 0x1c3c3c00, 0xd0f0f000, 0xfcf40000, 0x3c3c1c00, 0x007cfc00},
    { 0x00600800, 0x10208000, 0x80240000, 0x08201000, 0x80201000, 0x08600000, 0x10200800, 0x00248000}
   , 0x10,25.000000,attributes+0,1,NULL,autohelperowl_defendpat475,3,1.600000},
  {owl_defendpat476,6,8, "D1422",-1,-1,2,2,3,3,0xa,760,
    { 0xf0ffffff, 0xfcfcf0f0, 0xfcfc3c00, 0x3fffff00, 0xf0fcfc00, 0xfffff000, 0xffff3f3f, 0x3cfcfcfc},
    { 0xa0651a44, 0x18689090, 0x90642800, 0x19a49100, 0x90681800, 0x1a65a000, 0x91a41918, 0x28649044}
   , 0x10,25.000000,attributes+0,1,NULL,autohelperowl_defendpat476,3,0.010000},
  {owl_defendpat477,6,8, "D1423",-1,-1,2,1,3,2,0xa,723,
    { 0x3c3cfcfc, 0xc0fcfc00, 0xfcf0f000, 0xffff0f00, 0xfcfcc000, 0xfc3c3c00, 0x0fffff00, 0xf0f0fcfc},
    { 0x14105840, 0x40548400, 0x94105000, 0x48540500, 0x84544000, 0x58101400, 0x05544800, 0x50109404}
   , 0x10,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat478,5,8, "D1424",-1,-1,1,1,2,2,0xa,646,
    { 0xe0f8bc00, 0xbcf8e000, 0xf8bc2c00, 0x2cbcf800, 0xe0f8bc00, 0xbcf8e000, 0xf8bc2c00, 0x2cbcf800},
    { 0x00900400, 0x20104000, 0x40180000, 0x04102000, 0x40102000, 0x04900000, 0x20100400, 0x00184000}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_defendpat479,1,8, "DC01a",-1,0,1,2,2,2,0x0,722,
    { 0x003f3c00, 0x00f0f030, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3f0000, 0x003c3c30, 0x00f0f000},
    { 0x00221000, 0x00600020, 0x10200000, 0x00240000, 0x00600000, 0x10220000, 0x00240020, 0x00201000}
   , 0x100,35.000000,attributes+1,1,NULL,autohelperowl_defendpat479,3,0.400000},
  {owl_defendpat480,1,8, "DC01b",-1,0,1,2,2,2,0x0,722,
    { 0x003f3c00, 0x00f0f030, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3f0000, 0x003c3c30, 0x00f0f000},
    { 0x00221000, 0x00600020, 0x10200000, 0x00240000, 0x00600000, 0x10220000, 0x00240020, 0x00201000}
   , 0x100,35.000000,attributes+3,1,NULL,autohelperowl_defendpat480,3,0.400000},
  {owl_defendpat481,2,8, "DC02",-1,-1,1,2,2,3,0x2,685,
    { 0xfcffff00, 0xfcfcfcf0, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfc00},
    { 0x60600000, 0x14280000, 0x00242400, 0x00a05000, 0x00281400, 0x00606000, 0x50a00000, 0x24240000}
   , 0x100,35.000000,attributes+5,1,NULL,autohelperowl_defendpat481,3,0.034000},
  {owl_defendpat482,4,8, "DE01a",0,-1,2,2,2,3,0x0,721,
    { 0x003cff7f, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0d00, 0xf0f0c000, 0xff3c0000, 0x0d3f3f0f, 0x00f0fcf4},
    { 0x00100015, 0x00100000, 0x00100000, 0x01110000, 0x00100000, 0x00100000, 0x00110101, 0x00100050}
   , 0x100,30.000000,attributes+7,0,NULL,NULL,0,0.000000},
  {owl_defendpat483,5,8, "DE01b",0,-1,2,2,2,3,0x0,721,
    { 0x003cfffe, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0e, 0x00f0fcfc},
    { 0x00100054, 0x00100000, 0x00100000, 0x01110100, 0x00100000, 0x00100000, 0x01110100, 0x00100054}
   , 0x100,30.000000,attributes+9,0,NULL,NULL,0,0.000000},
  {owl_defendpat484,2,8, "DE02",0,-1,1,1,1,2,0x2,721,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00104000, 0x40100000, 0x04100000, 0x00100400, 0x00104000, 0x40100000, 0x04100000, 0x00100400}
   , 0x100,30.000000,attributes+11,1,NULL,autohelperowl_defendpat484,0,0.592000},
  {owl_defendpat485,2,8, "DE03",0,-1,1,1,1,2,0x2,722,
    { 0x00f0fc00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0x003cfc00},
    { 0x00500000, 0x10100000, 0x00140000, 0x00101000, 0x00101000, 0x00500000, 0x10100000, 0x00140000}
   , 0x100,30.000000,attributes+13,1,NULL,autohelperowl_defendpat485,0,0.592000},
  {owl_defendpat486,5,8, "DE04",-1,-1,1,3,2,4,0x2,796,
    { 0x7effff00, 0xf4fcfcf8, 0xfcfcf400, 0xfcfc7c00, 0xfcfcf400, 0xffff7e00, 0x7cfcfcbc, 0xf4fcfc00},
    { 0x24918600, 0xa0184490, 0x48186000, 0x44902800, 0x4418a000, 0x86912400, 0x28904418, 0x60184800}
   , 0x100,30.000000,attributes+15,0,NULL,NULL,0,0.000000},
  {owl_defendpat487,2,8, "DR01",-1,-2,1,2,2,4,0x2,722,
    { 0xfcfdff00, 0xfcfcfcd0, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfcf0, 0xfffdfc00, 0xfcfcfc1c, 0xfcffff00},
    { 0x18180000, 0x00142800, 0x00909000, 0xa0500000, 0x28140000, 0x00181800, 0x0050a000, 0x90900000}
   , 0x100,30.000000,attributes+17,1,NULL,autohelperowl_defendpat487,0,0.610000},
  {NULL, 0,0,NULL,0,0,0,0,0,0,0,0,{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},0,0.0,NULL,0,NULL,NULL,0,0.0}
};

#include "dfa-mkpat.h"
static const state_rt_t state_owl_defendpat[12654] = {
{{0,0,0,0}, 0},	{{0,1,68,0}, 0},	{{1,83,112,158}, 0},
{{1,158,200,238}, 3},	{{1,240,250,268}, 0},	{{1,289,298,338}, 0},
{{1,359,406,430}, 0},	{{1,437,449,0}, 0},	{{1,466,484,338}, 0},
{{1,492,514,531}, 0},	{{1,551,563,268}, 0},	{{1,566,569,572}, 0},
{{1,289,574,576}, 0},	{{1,289,289,289}, 0},	{{1,576,591,596}, 0},
{{1,607,621,0}, 0},	{{1,621,631,338}, 0},	{{1,531,531,531}, 0},
{{1,1,1,1}, 0},	{{1,492,492,492}, 0},	{{1,551,1,551}, 0},
{{1,1,250,250}, 0},	{{1,1,1,628}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,298,298,638}, 0},
{{1,576,576,576}, 4},	{{1,298,298,298}, 0},	{{1,642,531,531}, 0},
{{1,1,1,1}, 5},	{{1,158,158,158}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,158}, 0},	{{1,298,298,0}, 0},	{{1,298,298,298}, 0},
{{1,0,0,0}, 8},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 9},
{{1,603,615,620}, 0},	{{1,623,651,655}, 0},	{{1,657,670,675}, 0},
{{1,677,688,691}, 0},	{{1,692,715,722}, 0},	{{1,729,0,0}, 0},
{{1,750,784,0}, 0},	{{1,791,812,0}, 0},	{{1,818,818,657}, 0},
{{1,1,821,821}, 0},	{{1,823,818,657}, 0},	{{1,1,1,1}, 0},
{{1,823,855,857}, 0},	{{1,0,0,0}, 0},	{{1,867,0,0}, 0},
{{0,876,0,0}, 0},	{{1,888,894,932}, 0},	{{1,932,943,954}, 0},
{{1,964,964,964}, 0},	{{1,964,972,981}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,954,954,954}, 0},
{{1,984,984,987}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,992}, 0},	{{1,1,1003,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,1007,0,0}, 0},
{{1,1007,1012,0}, 0},	{{1,1016,1027,1030}, 0},	{{1,1031,1036,1040}, 0},
{{1,1042,1,1051}, 0},	{{1,1058,1064,0}, 0},	{{1,1064,1,1}, 270},
{{1,1016,1016,1016}, 0},	{{1,1016,1016,1016}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1058,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 271},	{{0,1025,1028,0}, 0},	{{1,1030,1035,1053}, 0},
{{1,1054,1074,1096}, 0},	{{1,1096,1105,1113}, 0},	{{1,1119,1126,813}, 0},
{{1,813,1132,813}, 0},	{{1,1,1140,1151}, 0},	{{1,1,1035,1035}, 0},
{{1,1,1035,1035}, 0},	{{1,1,1035,1035}, 0},	{{1,1163,1164,1165}, 0},
{{1,1167,0,1168}, 0},	{{1,1179,0,0}, 0},	{{1,1179,1179,0}, 0},
{{1,1,1,1151}, 0},	{{1,1151,1151,374}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1035,1035}, 0},	{{1,1,1,1174}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1185}, 0},
{{1,1185,1185,1190}, 0},	{{1,0,0,0}, 4},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,335}, 0},	{{1,1,1,1}, 181},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 8},	{{1,1171,1179,1204}, 0},
{{1,1207,1218,1220}, 0},	{{1,1229,1233,1242}, 0},	{{1,1249,1259,0}, 0},
{{1,1229,1261,1220}, 206},	{{1,1,1,1}, 0},	{{1,1268,1179,1179}, 0},
{{1,1,1,1}, 0},	{{1,1269,1179,1179}, 0},	{{1,1179,1179,1179}, 0},
{{1,1280,1295,1295}, 0},	{{1,1137,0,0}, 0},	{{1,0,0,0}, 207},
{{1,1,1,1}, 0},	{{1,1179,1179,1179}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1179,1179,1179}, 0},	{{1,1179,1179,1179}, 0},
{{1,1,1,1280}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1280}, 0},
{{1,1,1,1}, 208},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,1269}, 0},	{{1,1,1,1277}, 0},	{{1,1277,1277,1277}, 0},
{{0,1277,0,1278}, 0},	{{1,1278,1282,1291}, 0},	{{1,1299,1341,1343}, 0},
{{1,198,210,0}, 0},	{{1,1349,1355,1291}, 0},	{{1,1360,275,292}, 0},
{{1,312,1364,29}, 0},	{{1,1,1364,1367}, 0},	{{1,1,1364,1369}, 0},
{{1,1,1,1}, 0},	{{-238,1369,352,1371}, 0},	{{1,1382,1391,1400}, 0},
{{1,1408,1411,1424}, 0},	{{1,188,1431,0}, 0},	{{1,1443,1449,1400}, 0},
{{1,1454,1467,1480}, 0},	{{1,1492,1496,19}, 0},	{{1,1499,1499,1502}, 0},
{{1,1499,1499,1504}, 0},	{{1,1,1,1}, 0},	{{1,1359,342,1504}, 0},
{{1,358,372,0}, 0},	{{1,372,382,89}, 0},	{{1,1480,1480,1480}, 0},
{{1,1,1,1}, 0},	{{1,1454,1454,1454}, 0},	{{1,19,1,19}, 0},
{{1,1,1,1}, 0},	{{-248,-248,-248,-248}, 0},	{{1,1507,1511,1522}, 0},
{{1,1530,1532,1533}, 0},	{{1,1535,1536,0}, 0},	{{1,1536,1544,1522}, 0},
{{1,1436,1549,1462}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1341,324,1549}, 0},
{{1,340,354,0}, 0},	{{1,354,364,71}, 0},	{{1,1462,1462,1462}, 0},
{{1,1,1,1}, 0},	{{1,1436,1436,1436}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-266,31,31,1538}, 0},
{{1,1544,1574,1575}, 0},	{{1,1578,161,0}, 0},	{{1,178,196,50}, 0},
{{1,1311,1586,1591}, 0},	{{1,263,1315,-20}, 0},	{{1,1594,1597,1600}, 0},
{{1,1,286,288}, 0},	{{1,1,1,1}, 0},	{{-287,288,303,1600}, 0},
{{1,1602,1611,1612}, 0},	{{1,1619,1638,0}, 0},	{{1,1638,1639,41}, 0},
{{1,1639,1657,1665}, 0},	{{1,1671,1675,1481}, 0},	{{1,1678,1678,1681}, 0},
{{1,1,1,1683}, 0},	{{1,1,1,1}, 0},	{{1,1683,294,1591}, 0},
{{1,310,324,0}, 0},	{{1,324,334,41}, 0},	{{1,934,934,934}, 0},
{{1,1,1,1}, 0},	{{1,1639,1639,1639}, 0},	{{1,324,1,324}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,341}, 0},
{{1,279,279,279}, 4},	{{1,1,1,1}, 0},	{{1,1669,0,0}, 0},
{{1,1,1,1}, 5},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{-296,0,0,0}, 0},	{{1,1653,1662,1665}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1670,1670,1675}, 0},	{{1,1680,1452,1452}, 0},
{{1,1193,1193,1683}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1479,1479,1551}, 0},	{{1,1682,284,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,239,239,239}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1468}, 0},	{{-39,239,239,239}, 0},	{{1,1670,1680,0}, 64},
{{1,1680,1682,1632}, 0},	{{1,1541,1541,1689}, 0},	{{1,1180,1180,1180}, 0},
{{1,1,1,1474}, 0},	{{1,1474,1474,1180}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1690,0,0}, 0},	{{1,1474,1302,1302}, 0},
{{1,0,1702,0}, 0},	{{1,1,1,1}, 0},	{{1,1719,1719,1736}, 0},
{{1,1180,1180,1180}, 0},	{{1,1474,1474,1474}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1474}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1737,1702,0}, 0},	{{1,1,1,1}, 5},	{{1,1719,1702,1702}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1719}, 0},	{{1,1719,1719,1719}, 0},
{{1,1474,1474,1474}, 0},	{{1,1,1,1}, 65},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1180,0,0}, 0},	{{1,1,1,1}, 66},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 67},	{{1,1713,1721,0}, 0},	{{1,1594,1594,1594}, 0},
{{1,1,1255,1729}, 0},	{{1,1,1255,1255}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1255}, 0},	{{1,1,1,1255}, 0},	{{1,1,1,1}, 0},
{{1,1724,0,0}, 0},	{{1,1255,1255,1255}, 0},	{{1,1723,0,0}, 0},
{{1,1,1,1255}, 0},	{{1,1,1,1723}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1690,0,0}, 0},
{{0,0,0,0}, 5},	{{1,1723,1730,0}, 0},	{{1,1736,1573,1573}, 0},
{{1,0,1736,1737}, 0},	{{1,1738,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1573}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1738}, 0},
{{1,1738,1745,0}, 0},	{{1,1,1,1}, 52},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1743,1745}, 0},
{{1,1,1745,1746}, 0},	{{1,1757,1012,1012}, 0},	{{1,1,1,1012}, 0},
{{1,1,1,1}, 53},	{{1,1,0,0}, 0},	{{0,0,0,0}, 54},
{{1,1753,1759,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1755,1756,1756}, 0},
{{1,0,0,1756}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1757}, 0},
{{1,1763,1764,1769}, 0},	{{1,1773,1777,1338}, 0},	{{1,1780,1780,1783}, 0},
{{1,1,1,1785}, 0},	{{1,1,1,1}, 0},	{{1,1785,126,1423}, 0},
{{1,1554,156,0}, 0},	{{1,-127,1784,-127}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,111,111,111}, 0},	{{1,-127,1,-127}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-127,-127,-127,173}, 0},
{{1,1776,1784,1821}, 0},	{{1,1828,1328,1328}, 0},	{{1,1111,1111,1831}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1831,108,1834}, 0},
{{1,1536,138,0}, 0},	{{1,-145,1766,-145}, 0},	{{-145,0,1843,0}, 0},
{{1,1108,1212,1212}, 0},	{{1,1,1870,1870}, 0},	{{1,1108,1212,1212}, 0},
{{1,1108,1108,1108}, 0},	{{1,1117,1325,1870}, 0},	{{1,116,130,0}, 0},
{{1,1445,1445,100}, 0},	{{1,40,40,40}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1212,1212}, 0},
{{1,1,1,1865}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1445,1445,85}, 0},	{{1,85,85,85}, 4},
{{1,85,85,85}, 0},	{{1,151,40,40}, 0},	{{1,1,1,1}, 5},
{{-333,-333,-333,-333}, 0},	{{1,1,1303,1303}, 0},	{{1,1,1303,1303}, 0},
{{1,1,1303,1303}, 0},	{{1,1,1,1361}, 0},	{{1,1095,1303,1860}, 0},
{{1,94,108,0}, 0},	{{1,1423,1423,78}, 0},	{{1,18,18,18}, 0},
{{1,1,1,1}, 0},	{{1,-21,-21,-21}, 0},	{{1,1,1,1}, 0},
{{1,1,1203,1203}, 0},	{{1,1,1,1864}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-21,1423,1423,1864}, 0},
{{1,1,1199,1199}, 0},	{{1,1,1869,1869}, 0},	{{1,1,1869,1199}, 0},
{{1,1,1,1349}, 0},	{{1,1871,1873,1874}, 0},	{{1,1876,0,0}, 0},
{{1,806,1876,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1199,1199}, 0},
{{1,1,1,1871}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,701,701,0}, 0},	{{1,0,0,0}, 4},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{-38,-38,-38,-38}, 0},
{{1,1,1870,1870}, 0},	{{1,1,1870,1870}, 0},	{{1,1,1,1}, 0},
{{1,1058,41,1870}, 0},	{{1,57,71,0}, 0},	{{1,71,81,-212}, 0},
{{1,-19,-19,-19}, 0},	{{1,1,1,1}, 0},	{{1,-58,-58,-58}, 0},
{{1,1,1,1}, 0},	{{1,1,-282,-282}, 0},	{{-282,-282,-282,1874}, 0},
{{1,1,1877,1}, 0},	{{1,1,1,-294}, 0},	{{1,1,1,1}, 0},
{{-312,1046,29,1254}, 0},	{{1,1317,1320,1043}, 0},	{{1,1317,1317,1317}, 0},
{{-564,11,26,1874}, 0},	{{1,1317,1317,1040}, 0},	{{1,1317,1317,1317}, 0},
{{-318,8,23,1871}, 0},	{{1,1317,1317,1873}, 0},	{{1,1317,1317,1317}, 0},
{{-321,5,20,1873}, 0},	{{1,1,1,1}, 0},	{{-323,3,18,1315}, 0},
{{1,1,1,1}, 0},	{{-307,1033,16,1313}, 0},	{{1,32,1880,0}, 0},
{{1,1,16,16}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1890}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-169,1391,0,0}, 0},	{{1,1429,31,0}, 0},
{{1,1,1886,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-14,-14,-14,-14}, 0},	{{1,1424,26,0}, 0},	{{1,1293,1293,1293}, 0},
{{1,1883,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1883,-19,-19}, 0},
{{1,1883,-19,-19}, 0},	{{1,1015,1888,1849}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-19,-19,-19,1888}, 0},	{{1,1888,1,1}, 18},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,1886,0,0}, 0},
{{-13,-13,-13,-13}, 0},	{{1,611,611,611}, 0},	{{1,1,1,1}, 0},
{{1,1316,1316,1316}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-322,-322,-322,1185}, 0},	{{1,601,601,601}, 0},
{{1,1,1,1}, 0},	{{-9,1306,1306,1873}, 0},	{{1,1,-626,-626}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-329,-329,11}, 0},
{{1,-51,-51,-51}, 4},	{{1,-329,-329,-329}, 0},	{{1,1878,1774,1774}, 0},
{{1,1,1,1}, 5},	{{1,704,704,704}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-626,-626,-626,1872}, 0},	{{1,-61,-61,-61}, 0},	{{1,1168,1168,1168}, 0},
{{1,1329,0,0}, 0},	{{1,1,1,1}, 5},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,1866,1875}, 0},	{{-149,-149,-149,-149}, 11},
{{1,1882,1889,0}, 0},	{{1,1892,1904,1909}, 0},	{{1,1911,1926,1929}, 0},
{{1,1931,1933,1935}, 0},	{{1,1942,1953,0}, 0},	{{1,1961,1967,1904}, 0},
{{1,0,1975,0}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1971}, 0},
{{1,1973,1978,0}, 0},	{{1,1979,1982,1985}, 0},	{{1,1986,1,1988}, 0},
{{1,1988,1,1982}, 0},	{{0,1989,0,0}, 0},	{{1,1989,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,1987}, 0},
{{1,1987,1993,1996}, 0},	{{1,1997,2010,2013}, 0},	{{1,2014,2023,2025}, 0},
{{1,2027,2038,1965}, 0},	{{1,2047,1862,1862}, 423},	{{1,2055,2076,2082}, 0},
{{1,1,2089,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2014}, 0},	{{1,2087,2014,2014}, 0},	{{1,2082,2087,0}, 0},
{{1,0,0,0}, 0},	{{1,1,2086,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 424},	{{1,2121,2126,2129}, 0},	{{1,2130,2141,2141}, 0},
{{1,2141,2142,2143}, 0},	{{0,2145,0,0}, 0},	{{1,2156,1,1}, 0},
{{1,1,1,1}, 0},	{{0,2157,0,0}, 0},	{{1,2157,2161,2163}, 0},
{{1,2164,2165,2167}, 0},	{{1,2170,0,0}, 408},	{{1,94,128,0}, 0},
{{1,2190,156,2207}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2210,2213,2213}, 0},
{{1,0,0,0}, 0},	{{1,211,0,0}, 0},	{{0,2212,0,0}, 0},
{{1,2223,2226,2228}, 0},	{{1,2229,2239,2240}, 0},	{{1,2242,0,0}, 0},
{{1,81,115,0}, 0},	{{-12,2177,143,0}, 0},	{{1,2249,2251,2117}, 0},
{{1,2252,2253,2254}, 0},	{{-4,2255,0,0}, 0},	{{1,2257,2267,2269}, 0},
{{1,2276,0,0}, 0},	{{1,2285,108,0}, 0},	{{1,2170,136,2302}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2304,2306,2306}, 0},	{{1,0,0,0}, 0},
{{-19,191,2306,0}, 0},	{{1,2306,2308,2309}, 0},	{{1,2309,0,0}, 0},
{{-17,2309,97,0}, 0},	{{1,2314,1,2324}, 0},	{{0,2325,0,0}, 0},
{{1,2325,2329,0}, 369},	{{1,2329,2313,2313}, 0},	{{1,0,0,0}, 0},
{{1,1,2207,2207}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2329,2329,2329}, 0},	{{1,2313,0,0}, 0},
{{1,2329,2339,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,2329,0}, 0},	{{1,2347,2349,0}, 0},
{{1,2349,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{0,0,2365,0}, 0},
{{1,2367,0,0}, 0},	{{1,2367,2188,2188}, 0},	{{1,2367,0,0}, 0},
{{1,2367,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2367}, 0},	{{1,2367,1816,1816}, 363},
{{1,2183,2201,2201}, 0},	{{1,2098,1921,1921}, 0},	{{1,1,2098,1921}, 0},
{{1,1,1,1}, 0},	{{1,1816,1816,1816}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2183}, 0},	{{1,1,1,1}, 0},	{{1,1921,2366,1921}, 0},
{{1,2402,1,1}, 0},	{{1,2098,0,0}, 0},	{{1,2098,0,0}, 0},
{{1,1,2098,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,2392,0}, 0},
{{1,2438,2455,2472}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2476,2480,2480}, 0},
{{1,1920,0,0}, 0},	{{1,2482,2492,2492}, 353},	{{1,2492,2455,2472}, 0},
{{1,1,1,1}, 354},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,2496}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2483}, 0},	{{1,2502,2502,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2502,0,0}, 0},	{{1,0,0,0}, 0},	{{0,2503,0,0}, 0},
{{1,2056,2056,2056}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2056}, 0},
{{1,1,1,1}, 0},	{{1,2500,2079,2079}, 0},	{{1,0,0,0}, 0},
{{1,2500,0,0}, 0},	{{1,2509,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2056,1,2056}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2513}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{1,0,2526,0}, 0},	{{0,0,0,0}, 347},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2058,2058,2058}, 0},	{{1,0,0,0}, 0},
{{-154,2519,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-160}, 0},
{{1,1,1,1}, 0},	{{-816,6,38,38}, 0},	{{1,-2,-2,-163}, 0},
{{1,1,1,1}, 0},	{{-819,3,35,2513}, 0},	{{1,1,-4,-4}, 0},
{{-821,1,33,2514}, 0},	{{1,0,0,0}, 0},	{{1,2044,2463,0}, 0},
{{1,54,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2513}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 340},
{{1,0,0,0}, 0},	{{-853,-197,0,0}, 0},	{{1,0,0,0}, 0},
{{1,-199,0,0}, 0},	{{1,2493,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2487}, 0},	{{1,2002,0,0}, 0},
{{1,1,1,1}, 0},	{{1,2365,2365,2365}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2478}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1993}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,2482,0}, 0},
{{0,0,0,0}, 336},	{{1,2481,2483,0}, 0},	{{1,1,2483,0}, 0},
{{1,1,2483,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,2481,0}, 0},	{{1,2491,2493,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,2496,0,0}, 0},
{{1,1,1,1}, 0},	{{1,2496,2499,0}, 0},	{{1,2501,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,2501}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,2478}, 0},
{{0,2453,0,0}, 0},	{{1,2485,2485,2486}, 0},	{{1,2488,2496,50}, 0},
{{1,0,2505,0}, 0},	{{1,2505,1,1}, 0},	{{1,0,2506,0}, 0},
{{1,23,23,23}, 0},	{{1,1,1,56}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2507}, 0},	{{-930,-930,2511,-930}, 0},
{{1,2531,2531,2531}, 0},	{{1,2531,2539,2548}, 0},	{{1,0,2548,0}, 0},
{{1,1,1,1}, 0},	{{1,2559,0,0}, 0},	{{1,12,12,12}, 0},
{{1,1,1,2558}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2558}, 0},	{{-941,-941,2569,-941}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-952,-952,-952,-952}, 0},	{{-962,1,2564,18}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,-9,-9,-9}, 0},
{{1,2510,2510,2560}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-962,-962,-962,-962}, 0},	{{1,0,2559,0}, 0},	{{1,1,1,1}, 0},
{{1,2562,2568,0}, 0},	{{1,2573,2573,-17}, 0},	{{1,2577,2577,2577}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-970,2577,32,-970}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,-26,-26}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-26,-26,-26,2573}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-40,-40,-40,2571}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2569}, 0},
{{1,1,2525,-985}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-985,-985,-985,2571}, 0},	{{1,-990,12,-990}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,-990,-990,0}, 0},	{{1,-990,-990,-990}, 0},	{{1,1,2566,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-990,-990,-990,2566}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,-1001,-1001,0}, 0},
{{1,-1001,-1001,-1001}, 0},	{{1,2509,2509,2509}, 0},	{{1,1,1,2560}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-1001}, 0},	{{1,1,1,1}, 0},	{{1,5,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 251},	{{0,0,0,0}, 250},	{{1,2559,2559,2561}, 0},
{{1,2562,2563,2563}, 0},	{{1,1,1,2563}, 0},	{{1,-147,-147,-147}, 0},
{{-147,-147,-147,-147}, 270},	{{1,2568,2569,2572}, 0},	{{1,2573,2574,2576}, 0},
{{1,1,1,2576}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 270},
{{1,2579,2582,2589}, 0},	{{1,2589,2591,2592}, 0},	{{1,2593,49,0}, 0},
{{1,2598,1,1}, 270},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,2592,0,0}, 0},	{{1,2592,2594,2596}, 0},
{{1,2596,1,2597}, 0},	{{-1025,2582,2602,0}, 0},	{{1,2602,2603,2603}, 0},
{{-13,2575,-13,2603}, 0},	{{1,2604,2606,2607}, 0},	{{1,2609,0,0}, 0},
{{1,-1029,1,-1029}, 270},	{{1,2613,-14,-14}, 0},	{{-1029,-14,2613,-14}, 0},
{{1,2616,2617,2618}, 0},	{{1,2619,0,0}, 0},	{{1,-1034,-1034,-1034}, 270},
{{-1034,-19,-19,2631}, 0},	{{1,2633,1,2634}, 0},	{{1,2634,0,0}, 0},
{{-1038,-1038,-1038,-1038}, 270},	{{1,17,23,0}, 0},	{{1,2636,1,1}, 270},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1040,-1040,0,0}, 0},	{{1,8,2629,0}, 0},	{{1,2635,2636,2587}, 270},
{{1,0,2636,2641}, 0},	{{1,2573,2573,2573}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2637}, 0},
{{1,2637,2642,2616}, 275},	{{1,1,1,2642}, 0},	{{1,2551,2551,2551}, 0},
{{1,2643,1,2551}, 0},	{{1,1,2551,2551}, 276},	{{0,2652,0,0}, 277},
{{0,2652,0,0}, 0},	{{-1062,2652,-47,-47}, 0},	{{-1056,-1056,-1056,-1056}, 16},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{-211,-211,-211,-211}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,2646}, 0},
{{1,2646,45,67}, 0},	{{1,2649,2652,2655}, 0},	{{1,2657,2659,0}, 0},
{{1,0,2660,0}, 0},	{{-1028,-1028,2660,122}, 0},	{{1,2664,2681,62}, 0},
{{1,2644,2647,2650}, 0},	{{1,2652,2681,0}, 0},	{{1,0,2655,0}, 0},
{{1,1,2680,2685}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2694,2695,2696}, 0},	{{1,133,0,134}, 0},
{{1,145,0,0}, 0},	{{1,145,145,0}, 0},	{{1,1,1,2685}, 0},
{{1,2685,2685,538}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1033,-1033,-1033,-1033}, 0},	{{1,2688,2689,44}, 0},
{{-17,2689,2629,2632}, 0},	{{1,2695,2702,2703}, 0},	{{1,2705,73,-240}, 0},
{{1,-240,79,-240}, 0},	{{1,2705,2709,2720}, 0},	{{1,1,2645,2645}, 0},
{{1,1,2645,2645}, 0},	{{1,1,2645,2645}, 0},	{{1,1,2721,112}, 0},
{{1,114,0,2721}, 0},	{{1,126,0,0}, 0},	{{1,126,126,0}, 0},
{{1,1,1,-679}, 0},	{{1,-679,-679,-679}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,2645,2645}, 0},	{{1,1,1,2715}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-679,-679,-679,2715}, 0},
{{1,2715,2716,2717}, 0},	{{1,2719,2721,0}, 0},	{{1,0,2616,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2715,0,0}, 0},
{{1,106,0,0}, 0},	{{1,106,106,0}, 0},	{{1,1,1,1}, 201},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 4},	{{0,2702,0,0}, 0},	{{1,2703,2705,-282}, 64},
{{1,-282,-282,-282}, 0},	{{1,1,2704,0}, 0},	{{1,1,1,2646}, 0},
{{1,1,1,1}, 0},	{{1,1,2646,2646}, 0},	{{1,2706,1,1}, 0},
{{1,1,1,1}, 0},	{{0,2706,0,0}, 0},	{{1,2707,2710,-291}, 0},
{{1,-291,-291,-291}, 0},	{{1,1,2189,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,2705}, 0},	{{1,2705,2707,-299}, 0},	{{1,2707,2708,-299}, 0},
{{1,2708,2712,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2713}, 0},	{{1,2713,-305,-305}, 0},
{{1,1,2720,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,906,906}, 0},	{{-838,-838,906,906}, 0},
{{1,2724,2725,-312}, 0},	{{1,1,2725,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2732,0,0}, 0},
{{-833,0,0,2732}, 0},	{{1,1,2734,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,2737}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,2737,0}, 0},	{{1,2550,2575,2575}, 0},	{{1,2550,2575,2575}, 0},
{{1,2550,2575,2575}, 0},	{{1,2762,2763,2770}, 0},	{{1,2776,2154,2777}, 0},
{{1,2782,2154,2154}, 0},	{{1,2782,2782,2154}, 0},	{{1,1,1,2763}, 0},
{{1,2763,2763,2770}, 0},	{{1,1,1,1}, 0},	{{-1138,2782,-1138,-1138}, 0},
{{1,1,2569,2569}, 0},	{{1,1,2569,2569}, 0},	{{1,1,2569,2569}, 0},
{{1,1,1,2623}, 0},	{{1,17,0,2792}, 0},	{{1,29,0,0}, 0},
{{1,29,29,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-776}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,2569,2569}, 0},
{{1,1,1,2786}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1149,-1149,-1149,-1149}, 0},	{{-1161,5,0,2612}, 0},	{{-12,4,0,2611}, 0},
{{1,3,0,2783}, 0},	{{1,15,0,0}, 0},	{{-790,15,15,0}, 0},
{{0,13,2783,0}, 0},	{{1,0,0,0}, 0},	{{1,0,2795,0}, 0},
{{1,1,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,2786}, 0},	{{0,2786,0,0}, 0},	{{-104,-104,-104,-104}, 0},
{{1,1,-1172,-1172}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2793}, 0},
{{1,12,12,17}, 0},	{{1,0,0,0}, 4},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1026}, 0},	{{1,1,1,1}, 181},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1172,-1172,-1172,2783}, 0},	{{-1183,1,1,2783}, 0},
{{1,0,0,0}, 4},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 181},	{{-4,0,0,0}, 0},
{{1,37,2782,50}, 0},	{{1,2782,2784,2788}, 0},	{{1,2791,434,0}, 0},
{{1,50,91,50}, 206},	{{1,1,1,1}, 0},	{{1,2794,2794,9}, 0},
{{1,2794,1,1}, 0},	{{-1169,9,9,9}, 0},	{{1,2795,2804,42}, 0},
{{1,2774,2776,2805}, 0},	{{1,2808,426,0}, 0},	{{1,2815,83,42}, 206},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2815,42,42}, 0},
{{1,-41,0,0}, 0},	{{1,0,0,0}, 207},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{0,0,0,0}, 208},
{{1,4,2749,17}, 0},	{{1,2749,2751,2780}, 0},	{{1,2758,401,0}, 0},
{{-24,17,58,17}, 206},	{{1,2796,2805,2806}, 0},	{{1,2813,398,0}, 0},
{{1,2820,2829,14}, 206},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,2796,2796}, 0},	{{1,2830,0,0}, 0},	{{0,0,0,0}, 207},
{{1,2829,2830,2831}, 0},	{{-13,2833,2843,0}, 0},	{{1,2843,2844,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 206},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-12,0,0,0}, 0},
{{1,2835,2844,0}, 64},	{{1,1,-8,-8}, 0},	{{1,1,1,1}, 0},
{{-8,2842,-8,-8}, 0},	{{1,2844,2847,0}, 0},	{{1,1,2722,2722}, 0},
{{1,1,1,1}, 0},	{{1,2847,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,2845,0,0}, 0},	{{1,2845,2852,0}, 0},	{{1,2031,2852,0}, 0},
{{1,2031,2031,2031}, 0},	{{1,2851,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,2850}, 0},
{{1,2024,2850,0}, 0},	{{1,1,2850,2850}, 214},	{{1,2850,2713,2713}, 0},
{{1,1,1,1}, 0},	{{1,2713,2713,2713}, 0},	{{1,1,2850,2851}, 0},
{{1,1,671,2852}, 0},	{{1,746,1,1}, 0},	{{1,1,1,1}, 0},
{{-1010,-1010,-1010,-1010}, 0},	{{1,2851,2853,0}, 0},	{{1,1,1,1}, 0},
{{-1008,2852,-1008,-1008}, 0},	{{1,1,1,2854}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,2854,2854}, 0},	{{1,2856,0,0}, 0},	{{1,2854,2854,0}, 207},
{{0,0,2855,0}, 213},	{{1,1,2866,2866}, 0},	{{1,2,-88,-88}, 0},
{{-88,-88,-88,-88}, 212},	{{1,1,-89,-89}, 0},	{{1,2863,2874,2874}, 0},
{{1,-131,0,0}, 0},	{{1,0,0,0}, 207},	{{1,1,1,1}, 0},
{{1,1,1,-89}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-89}, 0},	{{-89,-89,-89,-89}, 210},	{{1,-142,0,0}, 0},
{{1,0,0,0}, 207},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1278,-1278,-1278,-1278}, 0},	{{-14,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2839}, 0},
{{1,1,1,1}, 0},	{{0,1,0,0}, 0},	{{0,0,0,0}, 64},
{{0,0,0,2845}, 0},	{{1,2846,2847,2848}, 0},	{{1,350,-1067,0}, 0},
{{1,2850,78,14}, 0},	{{-1276,83,358,2850}, 0},	{{1,379,388,2854}, 0},
{{1,396,415,0}, 0},	{{1,2860,2861,10}, 0},	{{1,416,434,442}, 0},
{{1,448,452,258}, 0},	{{1,1,1,2859}, 0},	{{1,1,1,2861}, 0},
{{1,1,1,1}, 0},	{{-1222,2861,-929,90}, 0},	{{1,461,2861,2863}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,478,478,483}, 0},
{{1,488,260,260}, 0},	{{1,1,1,491}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1191,287,287,81}, 0},	{{1,491,501,0}, 64},
{{1,2861,503,453}, 0},	{{1,362,362,510}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,511,0,0}, 0},	{{1,1,123,123}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-1131}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,558,0,0}, 0},	{{1,1,1,1}, 5},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 66},	{{1,2821,2823,0}, 0},
{{-1173,2823,420,420}, 0},	{{1,571,2823,0}, 0},	{{1,2829,2811,2811}, 0},
{{1,2829,584,0}, 0},	{{1,2833,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2811}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2833}, 0},
{{1,641,642,2833}, 0},	{{1,651,655,216}, 0},	{{1,1,1,2833}, 0},
{{1,1,1,2835}, 0},	{{1,1,1,1}, 0},	{{-1121,229,-996,23}, 0},
{{1,666,674,711}, 0},	{{1,718,218,218}, 0},	{{1,1,1,721}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1109,721,-1002,2829}, 0},
{{1,1,105,105}, 0},	{{1,1,105,105}, 0},	{{1,1,105,105}, 0},
{{1,1,1,1}, 0},	{{-1106,10,218,218}, 0},	{{-1039,-1039,-1039,-1039}, 0},
{{1,1,1,6}, 0},	{{1,1,1,1}, 0},	{{-1352,6,-1011,8}, 0},
{{1,1,1,839}, 0},	{{1,1,1,1}, 0},	{{-1355,3,-1014,2829}, 0},
{{1,1,1,1}, 0},	{{-1339,1,-1016,3}, 0},	{{1,-1000,848,0}, 0},
{{-1016,-1016,-1016,-1016}, 0},	{{1,410,-988,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,869,-1033,-1033}, 0},
{{1,869,-1033,-1033}, 0},	{{1,1,874,835}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1033,-1033,-1033,2816}, 0},	{{1,2816,2817,2818}, 0},	{{1,236,50,0}, 0},
{{1,2822,68,19}, 0},	{{1,73,2822,2827}, 0},	{{1,2831,2833,-1362}, 0},
{{1,2836,2836,121}, 0},	{{1,118,2836,123}, 0},	{{1,1,1,1}, 0},
{{-1380,-22,-1039,2836}, 0},	{{1,2841,2844,2845}, 0},	{{1,277,2852,0}, 0},
{{1,2852,59,10}, 0},	{{1,297,315,2852}, 0},	{{1,2858,2862,139}, 0},
{{1,2865,2865,2868}, 0},	{{1,2865,2865,2870}, 0},	{{1,1,1,1}, 0},
{{-1341,2742,-1048,2870}, 0},	{{1,2881,2882,2883}, 0},	{{1,0,1924,0}, 0},
{{1,1,1,1}, 0},	{{1,359,359,364}, 0},	{{1,141,141,141}, 0},
{{1,1,1,2886}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1310,168,168,2886}, 0},	{{1,372,2891,0}, 64},	{{1,382,384,334}, 0},
{{-118,243,243,2890}, 0},	{{1,459,2895,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,353}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,470,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-1253,-1253,-1253,-1253}, 0},	{{1,2892,2893,0}, 0},
{{1,2899,2903,2859}, 0},	{{1,2903,2908,0}, 0},	{{1,2908,2903,0}, 0},
{{1,1,1,1}, 0},	{{1,1,2912,2859}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2912}, 0},	{{1,2912,2918,1893}, 0},	{{1,-1230,-1230,-1230}, 0},
{{1,-1230,-1230,-1230}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2914,2915,2915}, 0},	{{1,1893,1893,2915}, 0},	{{1,1893,1893,1893}, 0},
{{1,1893,1893,1893}, 0},	{{1,1,2918,-1230}, 0},	{{1,1893,1893,1893}, 0},
{{1,1,1,1}, 0},	{{-1230,-1230,2918,-1230}, 0},	{{1,537,538,543}, 0},
{{1,2917,551,112}, 0},	{{1,1,1,2920}, 0},	{{1,1,1,2922}, 0},
{{1,1,1,1}, 0},	{{-1225,125,-1100,2843}, 0},	{{1,562,570,2921}, 0},
{{1,114,114,114}, 0},	{{1,1,1,2926}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1213,617,-1106,2926}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-94,114,114}, 0},	{{1,-1095,-1081,0}, 0},	{{1,234,234,-1111}, 0},
{{1,27,27,27}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1210,-1210,-1210,-1210}, 0},
{{1,101,1,101}, 0},	{{1,1,1,1}, 0},	{{1,101,101,101}, 0},
{{1,101,101,2737}, 0},	{{1,-107,101,2920}, 0},	{{1,-1108,-1094,0}, 0},
{{1,221,221,-1124}, 0},	{{1,14,14,14}, 0},	{{1,1,1,1}, 0},
{{1,-12,-12,-12}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1201,-1201,-1201,-1201}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2729}, 0},	{{1,2919,284,2920}, 0},
{{1,678,0,0}, 0},	{{1,-392,-392,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1197,-1197,-1197,-1197}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-1472}, 0},	{{1,-1472,-1472,-1472}, 0},	{{-1472,-132,-1149,2909}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-1476}, 0},	{{1,1,1,1}, 0},
{{-1494,-136,-1153,2911}, 0},	{{1,1,1,6}, 0},	{{1,1,1,1}, 0},
{{-1497,-139,-1156,2787}, 0},	{{1,1,1,2919}, 0},	{{1,1,1,1}, 0},
{{-1500,-142,-1159,2919}, 0},	{{1,1,1,1}, 0},	{{-1484,-144,-1161,2782}, 0},
{{1,267,-1131,0}, 0},	{{1,2782,2782,2782}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,2919,2919,2919}, 0},	{{1,2925,-1176,-1176}, 0},
{{1,2757,2930,2757}, 0},	{{1,1,1,1}, 0},	{{1,2757,2757,2757}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1176,-1176,-1176,2930}, 0},
{{1,2930,2931,2932}, 0},	{{1,2934,30,0}, 0},	{{1,30,38,16}, 0},
{{-1505,-70,2679,2684}, 0},	{{1,2932,2934,2935}, 0},	{{1,2937,2482,0}, 0},
{{1,2937,34,12}, 0},	{{1,159,177,2714}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2604,-1186,39}, 0},	{{1,-1170,-1156,0}, 0},	{{-1156,-1156,-1146,-1439}, 0},
{{1,202,2929,2930}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,219,219,224}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1450,28,28,28}, 0},
{{1,2923,242,0}, 64},	{{-139,194,244,194}, 0},	{{-138,2922,2604,0}, 0},
{{1,2922,2923,0}, 0},	{{1,2923,0,0}, 0},	{{0,0,2923,0}, 0},
{{-1364,373,0,0}, 0},	{{-1353,399,2508,0}, 0},	{{1,205,427,210}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,14,-1211,14}, 0},	{{1,217,-1181,0}, 0},
{{-1464,-1464,447,-1464}, 0},	{{1,449,457,202}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1326,504,-1219,2908}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2637}, 0},	{{-99,-207,1,558}, 0},
{{-207,204,-1194,0}, 0},	{{1,-1228,-1228,-1228}, 0},	{{1,1,1,1}, 0},
{{1,162,0,0}, 0},	{{1,1,1,1}, 5},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,708}, 0},	{{1,2906,207,0}, 64},
{{1,207,209,159}, 0},	{{1,68,68,216}, 0},	{{1,-293,-293,-293}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-293}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,217,0,0}, 0},	{{1,1,-171,-171}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,-293,-293,-1425}, 0},
{{1,-293,-293,-293}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,264,0,0}, 0},	{{1,1,1,1}, 5},	{{1,-293,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-293}, 0},	{{1,-293,-293,-293}, 0},
{{1,1,1,1}, 0},	{{-1472,-1472,-1472,-1472}, 0},	{{-1455,2885,2398,0}, 0},
{{1,2884,2885,0}, 0},	{{1,2890,140,140}, 0},	{{1,0,2860,2891}, 117},
{{-1432,2891,0,0}, 0},	{{1,2894,316,0}, 0},	{{1,1,1,2894}, 52},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,316}, 0},	{{1,314,309,309}, 0},	{{1,2893,0,0}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 53},	{{1,1,2579,2579}, 0},
{{1,1,2579,2579}, 0},	{{1,1,2579,2579}, 0},	{{1,1,1,1}, 0},
{{-1359,-265,-57,2889}, 0},	{{1,1,2579,2579}, 0},	{{1,1,2890,2890}, 0},
{{1,1,2890,2579}, 0},	{{1,1,1,1}, 0},	{{-1347,523,525,525}, 0},
{{1,1,4,-273}, 0},	{{1,1,1,1}, 0},	{{-1880,-1305,-1290,-271}, 0},
{{1,1,1,-276}, 0},	{{1,1,1,1}, 0},	{{-1634,-1308,-1293,-274}, 0},
{{1,1,1,557}, 0},	{{1,1,1,1}, 0},	{{-1637,-1311,-1296,2547}, 0},
{{1,132,-1266,0}, 0},	{{1,1,1,1}, 0},	{{-1291,0,0,0}, 0},
{{1,2877,140,0}, 64},	{{1,2886,142,92}, 0},	{{1,1,1,149}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-238,150,0,0}, 0},
{{-1501,2839,2495,0}, 0},	{{1,2878,2884,0}, 0},	{{1,2885,2886,94}, 0},
{{1,2886,2814,2891}, 0},	{{1,2891,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,94}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2891}, 0},
{{1,259,266,0}, 0},	{{1,1,1,1}, 52},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2886}, 0},
{{1,2886,2889,2889}, 0},	{{1,2889,0,0}, 0},	{{1,2886,2889,0}, 0},
{{1,1,1,1}, 125},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2880}, 0},	{{0,0,273,0}, 0},	{{-1468,294,2894,300}, 0},
{{-1451,324,332,2902}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2446,-119,-119}, 0},
{{1,-1328,-1314,0}, 0},	{{1,1,1,-1344}, 0},	{{1,-704,-704,-704}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-1359}, 0},
{{-1359,-1359,-1359,-1359}, 4},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2887,2890,2893}, 0},
{{1,-1346,-1332,0}, 0},	{{1,-17,-17,-1362}, 0},	{{-17,-722,2893,-722}, 0},
{{1,1,2530,2530}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2530}, 0},
{{1,1,1,1}, 0},	{{1,2901,2903,2903}, 0},	{{1,445,0,0}, 0},
{{-625,2902,445,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-189,2414,-1376,453}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-193}, 0},	{{1,1,1,1}, 0},	{{-1673,2410,-1380,-155}, 0},
{{1,1,1,2407}, 0},	{{1,1,1,1}, 0},	{{-1676,6,-1383,-364}, 0},
{{1,1,1,2891}, 0},	{{1,1,1,1}, 0},	{{-1679,3,-1386,2457}, 0},
{{1,1,1,1}, 0},	{{-201,2402,-1388,-91}, 0},	{{-1403,-1372,-1358,0}, 0},
{{0,0,0,0}, 11},	{{1,0,0,0}, 64},	{{1,1,1,1}, 0},
{{1,1,1,2557}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-329,2878,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,2877}, 0},
{{-338,-338,-338,136}, 0},	{{1,0,2876,0}, 0},	{{1,1,1,1}, 144},
{{1,0,0,2752}, 0},	{{1,2798,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2870}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-190,-190,-190,-190}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,118,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1678,-200,-200,404}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1681,-203,-203,2415}, 0},
{{-1411,-1411,-1411,-1411}, 18},	{{1,2851,2853,0}, 0},	{{1,1,1,1}, 52},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,2856,2860}, 0},	{{1,1,1,2862}, 0},	{{1,2862,-579,-579}, 0},
{{1,2862,-579,-579}, 81},	{{-1590,-1590,-1590,-1590}, 82},	{{0,0,2862,0}, 0},
{{1,1,-47,2862}, 0},	{{-47,2867,-47,-47}, 0},	{{1,2870,1,2878}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2828,0,0}, 0},
{{-379,-379,-379,-379}, 78},	{{1,1,1,2500}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2500}, 0},	{{1,1,1,2500}, 0},	{{1,1,1,2500}, 0},
{{1,2821,0,0}, 0},	{{0,2872,0,0}, 0},	{{1,2872,1,0}, 72},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,2873,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 65},	{{1,-538,-538,-538}, 0},
{{1,-538,-538,-538}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-538}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,19,-16,0}, 0},
{{1,1,1,1}, 5},	{{1,1,-16,-16}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-538,-538,-538}, 0},
{{-538,-538,-538,-538}, 65},	{{1,-1687,-1687,-1687}, 0},	{{1,-1687,-1687,-1687}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-1687}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2,-33,0}, 0},	{{-33,-33,-33,-33}, 5},
{{0,0,0,0}, 10},	{{1,0,64,0}, 0},	{{1,1,1,1}, 0},
{{1,1,2823,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{-669,-669,-669,-669}, 0},
{{1,2848,2185,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 94},	{{-121,-121,2866,-121}, 0},	{{0,0,0,0}, 18},
{{1,1,1,0}, 0},	{{0,0,0,2870}, 0},	{{1,1,-1721,-1721}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-1721}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-32,0,0}, 0},
{{1,1,1,0}, 5},	{{0,0,0,2869}, 0},	{{1,0,2870,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2866,2867,0}, 0},	{{-33,-33,-33,2867}, 110},
{{1,1,2867,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2862}, 0},	{{-162,0,2862,2589}, 108},	{{0,2862,0,0}, 103},
{{1,0,2864,0}, 0},	{{0,2864,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2633}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2861}, 0},
{{0,0,0,2861}, 0},	{{1,1,1,1}, 52},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-307,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 56},	{{1,1,-4,2851}, 0},
{{-312,-842,0,0}, 0},	{{-1,-1,-6,-6}, 0},	{{-1743,-732,-732,-732}, 0},
{{1,-733,-733,-733}, 0},	{{1,-1744,-1744,-733}, 0},	{{1,1,1,1}, 53},
{{1,-1744,0,0}, 0},	{{1,1,1,1}, 54},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2841}, 0},
{{-744,2841,-744,-744}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{-1751,0,0,0}, 0},	{{0,0,0,2837}, 60},	{{0,0,0,2}, 0},
{{0,0,0,2841}, 0},	{{1,0,0,0}, 0},	{{1,1811,0,0}, 0},
{{1,1,1,1}, 58},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,2832}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2826}, 0},	{{-220,2833,-220,-220}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-412,-412,-412,2534}, 0},	{{1,1,1,-221}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-221}, 0},	{{1,1,1,1}, 0},
{{-221,-221,-221,2827}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2828}, 0},
{{1,1,1,1}, 0},	{{-434,-421,-1646,2828}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-438}, 0},	{{1,1,1,1}, 0},	{{-1775,-425,-1650,-425}, 0},
{{1,1,1,2178}, 0},	{{1,1,1,1}, 0},	{{-1778,6,-1653,-634}, 0},
{{1,1,1,2825}, 0},	{{1,1,1,1}, 0},	{{-1781,3,-1656,2187}, 0},
{{1,1,1,1}, 0},	{{-446,-433,-1658,-361}, 0},	{{-1673,-230,-1628,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{-1910,-1672,-1672,2819}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,-442,2460}, 0},	{{1,-239,-1637,0}, 0},
{{1,-1667,-1667,-1667}, 0},	{{-1667,0,2056,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,-450,-450}, 0},	{{1,-247,-1645,0}, 0},	{{1,-1675,2812,-1675}, 0},
{{1,0,60,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,-1690,-1690}, 0},	{{1,1,-1690,-1690}, 0},
{{1,-300,0,0}, 0},	{{1,1,1,1}, 5},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 48},
{{1,1,2315,-291}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-291}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-174,0,0}, 0},
{{1,1,2776,1}, 0},	{{0,0,0,2776}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1826,4,-1719,2774}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1829,1,-1722,2783}, 0},
{{1,-294,-1692,0}, 0},	{{1,-1722,-1722,-1722}, 0},	{{-1722,0,13,0}, 0},
{{1,-297,-1695,0}, 0},	{{1,-428,-428,-428}, 0},	{{1,2789,0,0}, 0},
{{1,1,1,1}, 0},	{{1,2796,2402,2402}, 0},	{{1,2796,2402,2402}, 0},
{{1,2106,2801,2780}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1740,-1740,-1740,2801}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,0,0}, 0},	{{1,0,0,0}, 44},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 45},	{{1,-657,-657,-657}, 0},
{{1,-657,-657,-657}, 0},	{{-657,-752,-544,1}, 0},	{{1,-341,-1739,0}, 0},
{{1,-1769,-1769,-1769}, 0},	{{-1769,118,0,0}, 0},	{{1,1,-1863,-1863}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-419,-419,-1779}, 0},
{{1,-1779,-1779,-1779}, 4},	{{1,-1779,-1779,-1779}, 0},	{{1,150,46,46}, 0},
{{1,1,1,1}, 5},	{{-1024,-1024,-1024,-1024}, 0},	{{1,-353,-1751,0}, 0},
{{1,2390,-1781,-1781}, 0},	{{1,2755,2764,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1796,-1796,-1796,2764}, 0},	{{1,1,-1862,-1862}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-20,-440,-440,1}, 0},
{{1,-1800,-1800,-1800}, 0},	{{1,-1800,-1800,-1800}, 0},	{{1,-410,0,0}, 0},
{{1,1,1,1}, 5},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2754}, 0},	{{1,1,1,-669}, 0},	{{1,1,1,2370}, 0},
{{1,3,5,6}, 0},	{{1,8,0,0}, 0},	{{-669,-1062,8,0}, 0},
{{1,6,1706,0}, 0},	{{0,0,2756,0}, 0},	{{-1,-273,0,0}, 0},
{{1,-274,0,0}, 0},	{{1,0,2753,0}, 0},	{{0,0,0,2753}, 0},
{{0,1716,0,0}, 18},	{{-1174,-1174,-1174,2752}, 0},	{{1,1,-1869,-1869}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-1169,-1169,0}, 0},
{{1,0,0,0}, 4},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-44,-44,-44,-44}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2151,-811,-1828,1}, 0},	{{1,-400,-1798,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,59,-1843,-1843}, 0},
{{1,59,-1843,-1843}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1843,-1843,-1843,2731}, 0},	{{1,1,-2155,-2155}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1795,-2125,-2125,-618}, 0},	{{1,-1875,-1875,-2170}, 0},
{{1,-1875,-1875,-1875}, 0},	{{-2188,-830,-1847,2725}, 0},	{{1,-419,-1817,0}, 0},
{{1,-828,-828,-828}, 0},	{{-828,40,0,0}, 0},	{{1,1,1,1}, 0},
{{-2175,-835,-1852,1991}, 0},	{{1,-424,-1822,0}, 0},	{{1,1991,1991,1991}, 0},
{{1,35,0,0}, 0},	{{1,1,1,1}, 0},	{{1,35,-1867,-1867}, 0},
{{1,35,-1867,-1867}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1867,-1867,-1867,2717}, 0},	{{1,-1847,-1847,-1847}, 0},	{{1,1652,1652,1652}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-1847}, 0},	{{1,-1847,-1847,-1847}, 0},	{{0,38,0,0}, 22},
{{1,-1888,-1888,-1888}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1888,-1888,2696,-1888}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-1899,-1899,-1899,2592}, 0},	{{1,0,0,0}, 0},
{{0,0,2695,0}, 0},	{{1,1,-1901,-1901}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1901,-1901,-1901,2689}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1906,-1906,-1906,2685}, 0},	{{-1906,-1906,-1906,2685}, 0},	{{1,1628,1628,1628}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1886,-1886,2675,-1886}, 0},	{{0,0,0,0}, 19},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2565}, 0},
{{1,-1926,-1926,-1926}, 4},	{{1,1,1,-1926}, 0},	{{1,-536,0,0}, 0},
{{1,1,1,1}, 5},	{{0,0,0,2663}, 0},	{{-148,-148,-148,-148}, 11},
{{-2497,-2497,-2497,2663}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2655}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2647}, 0},	{{1,2647,2651,2654}, 0},	{{1,2655,2660,0}, 0},
{{1,1,2660,2661}, 0},	{{1,1,2668,104}, 0},	{{1,1,2670,1}, 0},
{{1,1,1,1}, 0},	{{0,0,2676,0}, 0},	{{1,2677,2678,2677}, 0},
{{1,2679,0,0}, 0},	{{1,2685,0,2686}, 0},	{{0,2693,2694,0}, 0},
{{1,2694,2697,2700}, 0},	{{1,2701,2701,2702}, 0},	{{1,2709,2720,0}, 0},
{{1,2720,1,1}, 0},	{{1,1,2725,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 500},
{{1,2718,2720,2722}, 0},	{{1,2723,2723,2724}, 0},	{{1,2725,2708,0}, 0},
{{1,58,1,1}, 0},	{{0,0,72,0}, 0},	{{1,2732,2733,2733}, 0},
{{1,1,1,2733}, 0},	{{0,0,2735,0}, 0},	{{1,2735,2735,2736}, 0},
{{1,2736,2738,0}, 0},	{{1,2738,2742,-6}, 0},	{{1,0,2742,0}, 0},
{{1,2754,2754,0}, 0},	{{1,1,1,1}, 0},	{{1,1,2754,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,2751,0,0}, 0},	{{1,4,4,2700}, 0},
{{1,76,2723,0}, 0},	{{-21,2749,-21,-21}, 0},	{{1,1,1,2697}, 0},
{{1,73,2715,0}, 0},	{{-24,-24,-24,-24}, 0},	{{1,12,2751,0}, 0},
{{-26,-26,37,-26}, 0},	{{1,10,2755,0}, 0},	{{-28,-28,2755,-28}, 0},
{{1,2761,2753,0}, 0},	{{1,-30,2753,-30}, 0},	{{1,1,2766,1}, 0},
{{1,1,1,2659}, 0},	{{1,1,1,1}, 0},	{{1,2659,2659,2659}, 0},
{{1,0,0,0}, 0},	{{0,0,0,2762}, 0},	{{1,1,2762,1}, 0},
{{1,2687,0,0}, 0},	{{1,2761,0,0}, 0},	{{1,1,2659,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2687}, 0},	{{1,1,1,1}, 0},	{{1,0,2755,0}, 0},
{{-1814,-1814,-1814,-1814}, 0},	{{1,2754,2760,0}, 482},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,2754,0,0}, 0},	{{1,1,2767,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2763}, 0},	{{1,0,2774,0}, 0},	{{1,2721,2721,0}, 0},
{{1,2721,2721,2721}, 0},	{{1,2721,2721,0}, 0},	{{1,2783,2783,2783}, 0},
{{1,1,1,1}, 0},	{{1,2783,1,1}, 0},	{{1,1,1,1}, 0},
{{0,2802,0,0}, 0},	{{0,0,0,0}, 476},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,2800,0,0}, 0},	{{1,2802,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-102,-102,-102,-102}, 0},	{{1,0,1,0}, 0},	{{0,2799,0,0}, 0},
{{1,2799,1,2800}, 0},	{{1,2800,1,4}, 0},	{{0,2800,0,0}, 0},
{{1,1,1,2802}, 0},	{{1,2802,1,1}, 0},	{{0,2635,0,0}, 0},
{{1,1,1,0}, 0},	{{0,2800,0,0}, 0},	{{1,2800,-1984,2801}, 0},
{{0,2808,0,0}, 0},	{{-1986,-1986,-1986,-5}, 0},	{{1,2,0,0}, 0},
{{0,2806,0,0}, 0},	{{-58,-58,-58,-58}, 0},	{{-20,0,0,0}, 0},
{{0,0,0,2809}, 0},	{{1,2809,2811,2813}, 0},	{{1,2814,2818,2820}, 0},
{{1,321,2822,0}, 408},	{{1,2826,0,0}, 423},	{{1,2827,2828,2829}, 0},
{{-1985,-1985,-1985,-1985}, 0},	{{1,2828,18,21}, 0},	{{1,2829,2812,2830}, 0},
{{-5,315,2832,0}, 0},	{{1,2834,2836,174}, 0},	{{-2,2836,2809,2827}, 0},
{{1,2836,2839,2842}, 0},	{{1,2844,2854,0}, 0},	{{1,2855,0,0}, 423},
{{1,2855,2818,2819}, 443},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,18}, 0},	{{1,91,18,18}, 0},
{{1,86,91,0}, 0},	{{1,0,0,0}, 0},	{{1,-1995,90,-1995}, 0},
{{-1995,2855,0,0}, 0},	{{1,2866,2868,2870}, 0},	{{1,2870,0,0}, 0},
{{-22,2842,0,0}, 423},	{{1,2869,1,1}, 0},	{{0,2869,0,0}, 0},
{{1,2869,2872,-48}, 369},	{{1,2874,-151,-151}, 423},	{{1,-151,-151,-151}, 0},
{{1,1,2873,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,2870,0}, 0},
{{1,2870,-57,-57}, 0},	{{-160,2870,-160,-160}, 423},	{{1,2858,-59,-59}, 0},
{{1,2876,-162,-162}, 0},	{{-162,2876,2880,-162}, 0},	{{1,2884,2892,-164}, 363},
{{1,1,1,1}, 0},	{{1,1,2893,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,2906,0,0}, 0},	{{1,-175,-175,-175}, 0},	{{1,1,1,1}, 0},
{{1,1,2904,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 435},	{{1,2898,2918,2864}, 430},
{{1,1,2923,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,2837,0}, 0},
{{1,0,0,0}, 353},	{{0,2918,0,0}, 0},	{{1,1,2918,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2919}, 0},
{{1,2922,0,0}, 0},	{{1,28,28,0}, 0},	{{1,2919,0,0}, 0},
{{1,1,32,-2053}, 0},	{{1,1,2890,2890}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,-2053,0}, 0},	{{1,1,0,0}, 0},
{{1,-2053,2910,-2053}, 0},	{{-2053,-2053,0,0}, 345},	{{1,1,2909,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,7,0,0}, 0},	{{-2074,7,7,0}, 0},	{{1,1,2905,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,0}, 0},	{{1,0,0,0}, 0},
{{-2080,-2080,-2080,-2080}, 0},	{{1,1,1,1}, 0},	{{-2087,2898,-2087,-2087}, 0},
{{-4,-4,1,0}, 0},	{{-4,2897,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,-2084,-2084}, 0},	{{1,-2084,-2084,0}, 0},
{{1,-2084,0,0}, 0},	{{1,-2084,-2084,-2084}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 424},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 425},	{{1,2849,2854,2854}, 0},	{{1,2854,2855,2856}, 0},
{{1,2856,0,0}, 408},	{{1,0,0,0}, 0},	{{0,2856,0,2857}, 0},
{{1,2859,16,16}, 0},	{{1,16,2850,2851}, 0},	{{0,2851,0,0}, 0},
{{1,2858,13,13}, 0},	{{-2,2859,2847,2848}, 0},	{{1,2859,2862,2863}, 0},
{{1,2865,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,2857,0}, 0},	{{-155,2886,-155,-155}, 0},	{{0,2886,230,0}, 369},
{{0,2886,0,0}, 0},	{{1,2884,1,0}, 0},	{{1,0,0,0}, 0},
{{0,2885,0,0}, 0},	{{1,0,0,0}, 363},	{{1,2884,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2881,2881,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-145}, 0},
{{1,-145,-145,-145}, 0},	{{1,1,1,1}, 0},	{{1,2760,0,0}, 0},
{{0,0,0,0}, 464},	{{1,1,1,1}, 0},	{{1,2878,0,0}, 0},
{{0,0,0,0}, 408},	{{0,0,0,0}, 369},	{{1,2876,2877,2878}, 0},
{{1,2885,0,0}, 408},	{{1,149,2894,0}, 0},	{{-2135,34,-2000,0}, 0},
{{1,2893,2894,180}, 0},	{{-2128,2894,0,0}, 408},	{{1,2894,2895,196}, 0},
{{0,2895,0,0}, 408},	{{-2127,2895,201,0}, 415},	{{1,2895,243,0}, 0},
{{0,2895,0,0}, 0},	{{1,266,0,0}, 0},	{{1,266,87,87}, 0},
{{1,2901,0,0}, 0},	{{0,2903,0,0}, 0},	{{1,2905,2567,2567}, 363},
{{1,86,104,104}, 0},	{{1,1,-176,-176}, 0},	{{1,1,1,-176}, 0},
{{1,1,1,1}, 0},	{{1,2377,2377,2377}, 0},	{{1,1,1,1}, 0},
{{1,1,1,86}, 0},	{{1,1,1,1}, 0},	{{1,-176,269,-176}, 0},
{{1,2903,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,2893,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,445,24,24}, 0},	{{1,0,0,0}, 0},
{{1,445,0,0}, 0},	{{1,454,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2054,-2054,-2054,-2054}, 0},	{{1,0,2765,0}, 0},
{{1,1,2893,1}, 0},	{{1,2893,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,2889}, 0},	{{1,0,0,0}, 0},	{{1,1,420,0}, 0},
{{-2042,3,0,0}, 0},	{{1,0,0,0}, 0},	{{-2211,-2211,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,490,0}, 0},
{{1,2873,2883,2884}, 0},	{{1,2889,0,0}, 0},	{{-78,70,-2107,0}, 0},
{{1,2897,2899,102}, 0},	{{-2206,2899,0,0}, 0},	{{1,2899,1,118}, 0},
{{0,2899,0,0}, 0},	{{1,191,123,0}, 369},	{{1,2510,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2892,2892,2892}, 0},
{{1,0,0,0}, 0},	{{0,2892,2902,0}, 0},	{{-86,2904,156,0}, 0},
{{1,180,0,0}, 0},	{{1,180,1,1}, 0},	{{-85,0,0,0}, 0},
{{1,2901,2320,2320}, 363},	{{1,1,19,19}, 0},	{{1,1,-261,-261}, 0},
{{1,1,1,-261}, 0},	{{1,1,1,1}, 0},	{{1,2320,2320,2320}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-261,-261,184,-261}, 0},	{{1,2899,2900,2901}, 0},	{{-30,2904,0,0}, 0},
{{1,2907,2908,2577}, 0},	{{-2236,2577,0,0}, 0},	{{-27,2751,0,0}, 369},
{{-105,2906,137,0}, 0},	{{1,2749,0,0}, 0},	{{0,2905,0,0}, 0},
{{1,2905,0,0}, 363},	{{1,1,1,1}, 0},	{{-279,-279,-279,-279}, 0},
{{1,2904,0,0}, 369},	{{1,2904,72,72}, 0},	{{1,0,0,0}, 0},
{{1,1,2832,2832}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,72,72,72}, 0},	{{1,72,0,0}, 0},
{{-2240,88,-2240,-2240}, 0},	{{1,2903,2904,0}, 0},	{{0,2904,0,0}, 0},
{{1,2911,2915,0}, 0},	{{1,2916,2917,-35}, 0},	{{1,2918,2879,0}, 0},
{{1,2918,2746,2746}, 0},	{{1,1,1,2746}, 0},	{{1,1,2746,2746}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2918}, 0},	{{1,144,2918,-407}, 363},
{{1,2829,2511,2511}, 393},	{{1,2746,2511,2875}, 0},	{{1,1,2746,2916}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2279}, 0},	{{1,-407,-407,-407}, 0},	{{-407,0,2347,0}, 395},
{{1,2911,2920,2927}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2929,2931,2931}, 0},
{{1,-291,0,0}, 0},	{{1,271,281,281}, 392},	{{1,2930,269,0}, 0},
{{1,1,1,1}, 354},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2210,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,2928,2928,2928}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2928}, 0},	{{1,0,0,0}, 0},
{{0,0,2929,0}, 0},	{{1,0,0,0}, 0},	{{-113,-113,2928,0}, 0},
{{1,0,0,0}, 0},	{{-2324,-2324,1,0}, 0},	{{0,2926,0,0}, 0},
{{1,23,0,0}, 369},	{{-59,28,12,12}, 0},	{{-173,21,69,0}, 0},
{{-86,2800,0,0}, 0},	{{-451,100,-451,-451}, 363},	{{1,192,209,226}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2245,230,234,2916}, 0},	{{1,12,0,0}, 369},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{-2311,-2311,-2311,-2311}, 0},
{{1,2782,0,0}, 0},	{{-104,-104,-104,-104}, 0},	{{-470,-470,-470,-470}, 363},
{{1,-471,-471,-471}, 363},	{{1,-104,-86,-86}, 0},	{{1,-189,-366,-366}, 0},
{{-2286,-2286,-189,2911}, 0},	{{0,2912,0,0}, 0},	{{1,2388,0,0}, 0},
{{1,1,2388,2388}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-15,-15,-15,2928}, 0},	{{1,-15,0,0}, 0},
{{-2327,-2327,11,-2327}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,-2327,0,0}, 0},	{{1,1,2770,2770}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2327,-2327,-2327,2928}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-2337,-2337,0,2932}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 370},
{{1,2924,-516,-516}, 363},	{{-2331,-149,2932,-131}, 0},	{{0,2962,0,0}, 0},
{{1,1,1,2969}, 0},	{{1,2653,2653,2653}, 0},	{{1,1,1,1}, 0},
{{1,2653,2653,2653}, 0},	{{1,1,1,1}, 0},	{{1,2653,2653,2653}, 0},
{{1,2452,0,0}, 0},	{{1,2970,2970,0}, 0},	{{1,2970,1,1}, 377},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 378},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,2956,0,0}, 0},
{{-176,2143,2143,2143}, 363},	{{-264,2978,0,0}, 0},	{{0,2982,0,0}, 0},
{{1,2638,2638,2638}, 0},	{{1,2638,2638,2638}, 0},	{{1,2982,1,1}, 0},
{{0,0,0,2982}, 0},	{{0,0,0,2982}, 0},	{{1,2717,2739,2739}, 0},
{{1,2636,2438,2438}, 0},	{{1,1,2636,2438}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,-550,2136}, 0},
{{-550,-550,-550,-550}, 353},	{{1,2974,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 367},	{{-2400,-303,0,0}, 366},
{{1,1,1,1}, 0},	{{1,2599,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,2599,0}, 0},	{{1,2599,0,0}, 0},	{{1,1,2599,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2599,0,0}, 0},
{{1,1,1,1}, 364},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 365},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2886,43,43}, 0},	{{1,-517,0,0}, 0},	{{1,2886,55,55}, 353},
{{1,2887,18,35}, 0},	{{1,1,1,1}, 354},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2395,-2395,-2395,2891}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,26,26,26}, 0},
{{1,-534,0,0}, 0},	{{1,28,38,38}, 353},	{{1,38,1,18}, 0},
{{1,1,1,1}, 354},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,42}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2312,2312,2312}, 0},	{{1,2312,0,0}, 0},
{{1,0,0,0}, 353},	{{1,1,1,1}, 0},	{{-16,-16,-16,-16}, 0},
{{1,-555,0,0}, 0},	{{1,2866,2867,17}, 353},	{{1,2666,5,0}, 0},
{{-2401,-2401,-2401,-2401}, 354},	{{1,-559,0,0}, 0},	{{1,2864,13,13}, 353},
{{1,2662,1,0}, 0},	{{0,0,0,0}, 354},	{{1,2862,-1,0}, 0},
{{1,1,1,1}, 354},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2854}, 0},
{{-11,-11,-11,0}, 0},	{{1,1,1,1}, 358},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2851}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,117,0}, 0},	{{0,0,0,0}, 359},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 356},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2827}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2500,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{-2461,0,0,0}, 0},
{{1,0,0,0}, 0},	{{-54,-54,-54,-54}, 0},	{{1,0,0,0}, 0},
{{-443,-443,0,0}, 0},	{{1,10,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2498,-2498,-2498,2806}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,-430,-430}, 0},
{{1,1,-430,-430}, 0},	{{1,0,2798,0}, 0},	{{0,0,0,0}, 345},
{{1,-2511,0,0}, 0},	{{1,-2511,0,0}, 0},	{{1,0,14,0}, 0},
{{1,1,1,1}, 347},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2782}, 0},	{{0,0,0,0}, 349},	{{-43,-461,0,0}, 0},
{{1,0,0,0}, 0},	{{1,-2675,0,0}, 0},	{{-2475,-2456,0,0}, 0},
{{1,0,0,0}, 0},	{{1,-2678,0,0}, 0},	{{1,-2459,0,0}, 0},
{{0,2774,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-2511,-2511,-2511,2763}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2472,-2472,2762,-480}, 0},	{{0,0,0,2767}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,2741,0,0}, 0},	{{1,1,1,1}, 0},
{{1,2741,2741,2741}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2761}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2761}, 0},
{{0,0,0,0}, 337},	{{1,3,3,0}, 0},	{{0,0,2759,0}, 0},
{{1,1,1,0}, 0},	{{0,0,2767,0}, 0},	{{-2481,-2481,2767,-2481}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,2757,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,2770,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,2764}, 0},	{{1,1,1,1}, 0},
{{0,1,0,0}, 0},	{{1,1,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 212},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{-2497,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2759}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2756}, 0},	{{-2483,4,2765,-2434}, 0},
{{1,3,2764,-2435}, 0},	{{1,0,0,0}, 0},	{{-2484,-2484,-2484,-2484}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,19,0}, 0},
{{1,-2464,-2464,-2464}, 0},	{{1,1,1,105}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2486,-2486,-2486,2763}, 0},	{{1,2700,2767,2700}, 0},
{{1,2754,2754,2754}, 0},	{{1,2770,2776,2700}, 0},	{{1,2781,2781,2786}, 0},
{{1,1,1,2790}, 0},	{{1,2754,2754,2754}, 0},	{{1,2754,2754,2754}, 0},
{{1,1,1,1}, 0},	{{1,2790,2791,1}, 0},	{{-3425,2791,-3425,-3425}, 0},
{{0,2799,0,0}, 0},	{{1,0,2,0}, 0},	{{-2503,2798,-2481,-2481}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2797}, 0},	{{0,2801,0,0}, 0},
{{1,-3436,5,-3436}, 0},	{{1,1,1,1}, 0},	{{1,0,2802,0}, 0},
{{1,1,1,1}, 0},	{{-2445,-3436,-3436,2802}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,-3440,-3440,0}, 0},
{{1,-3440,-3440,-3440}, 0},	{{1,70,1,70}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2789}, 0},	{{1,1,1,1}, 0},	{{1,-2434,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,0}, 251},	{{0,0,0,0}, 258},	{{-2529,1,2787,18}, 0},
{{1,0,18,0}, 0},	{{1,1,1,1}, 0},	{{1,29,0,0}, 0},
{{1,-2518,-2518,-2518}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2529,-2529,-2529,-2529}, 0},	{{1,0,2779,0}, 0},
{{1,1,1,1}, 0},	{{1,59,59,0}, 0},	{{1,64,64,-2526}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-3479,2776,31,-3479}, 0},	{{-2535,0,1,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,2766,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,2766,0}, 0},	{{0,0,2766,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2556,-2556,-2556,2770}, 0},	{{1,-3498,12,-3498}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,-3498,-3498,0}, 0},	{{1,-3498,-3498,-3498}, 0},	{{1,1,2770,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-3498,-3498,-3498,2770}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,-3509,-3509,0}, 0},
{{1,-3509,-3509,-3509}, 0},	{{1,1,1,1}, 0},	{{-2507,-2507,-2507,-2507}, 0},
{{-2554,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2535,-2535,-2535,-2535}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,2755,0}, 0},
{{1,7,7,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,2750,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,2748,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-3542,2713,-3542,-3542}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-3546,1,-36,-3546}, 0},
{{1,1,1,1}, 254},	{{1,2735,0,0}, 0},	{{1,1,1,1}, 0},
{{-3546,-3546,-3546,2736}, 0},	{{-3551,-3551,-3551,2746}, 0},	{{-2561,-3552,-42,-3552}, 0},
{{1,-2567,-43,-3553}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,-3553,-3553,3}, 0},	{{1,-3553,-3553,-3553}, 0},
{{-2562,-2562,-2562,-2562}, 0},	{{1,0,0,0}, 0},	{{0,0,0,2737}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-3555,-3555,-3555,2733}, 0},	{{-3555,-3555,-3555,2733}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-2558,-2558,-3560}, 0},	{{1,1,1,1}, 0},	{{1,-2554,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 251},	{{0,0,0,2720}, 0},	{{1,3,5,5}, 0},
{{-2552,-2552,-2552,2719}, 0},	{{1,1,3,3}, 0},	{{-2554,-2554,-2554,2720}, 0},
{{-2560,-2560,-2560,2722}, 0},	{{-2556,-2556,-2556,2724}, 0},	{{1,-2709,-2709,-2709}, 0},
{{1,2725,2725,2725}, 270},	{{1,2725,2728,2725}, 0},	{{1,1,1,55}, 0},
{{1,1,1,1}, 0},	{{1,2730,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2729}, 0},	{{-2566,6,2729,9}, 0},	{{1,2730,2733,8}, 0},
{{1,1,1,2733}, 0},	{{-2567,2734,0,0}, 0},	{{1,2734,2730,5}, 0},
{{-2570,-2570,-2570,2734}, 0},	{{-2571,-2571,-2571,2735}, 0},	{{1,1,1,2737}, 0},
{{-2572,2738,0,0}, 0},	{{-2574,-2574,-2574,-2574}, 0},	{{1,2738,2744,0}, 0},
{{1,2744,0,0}, 270},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,2746,0,0}, 0},	{{1,2747,1,2748}, 0},
{{1,2748,0,0}, 0},	{{-2577,-2577,-2577,-2577}, 270},	{{1,2747,-2,2748}, 0},
{{1,2748,0,0}, 0},	{{1,-2580,-2580,-2580}, 270},	{{1,1,1,70}, 0},
{{1,1,1,-2580}, 0},	{{1,1,1,1}, 0},	{{-2580,-2580,2745,-2580}, 0},
{{-9,2737,-9,2741}, 0},	{{1,5,-2539,0}, 0},	{{0,112,0,0}, 270},
{{-2589,3,2750,0}, 0},	{{1,2,73,0}, 0},	{{-2555,79,2749,31}, 270},
{{1,2749,2754,0}, 275},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,102,0,0}, 0},
{{-2596,103,-2596,-2596}, 0},	{{0,0,0,0}, 16},	{{1,2747,1,2748}, 0},
{{-2577,2724,-156,0}, 0},	{{1,2748,1,2749}, 0},	{{-2579,2750,-158,0}, 0},
{{-3,2743,-3,2751}, 0},	{{-2579,-13,7,0}, 0},	{{1,-14,6,0}, 0},
{{1,2749,2750,1}, 270},	{{1,0,64,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-53,-53,-53,-53}, 0},	{{-166,2746,-166,-166}, 0},
{{-36,2710,-36,2746}, 0},	{{-37,2709,-37,2747}, 0},	{{1,-23,-2567,0}, 0},
{{-8,2740,2746,-8}, 270},	{{1,6,0,0}, 0},	{{-2591,-2591,-2591,-2591}, 270},
{{-2595,4,0,0}, 0},	{{1,2743,2745,0}, 0},	{{1,1,50,1}, 270},
{{-2585,0,50,0}, 0},	{{1,1,1,35}, 275},	{{1,1,1,35}, 0},
{{1,0,0,0}, 0},	{{1,2740,1,0}, 0},	{{1,1,0,0}, 276},
{{0,0,0,0}, 277},	{{-2626,-2626,1,-2626}, 0},	{{1,1,1,1}, 0},
{{1,-2626,-2626,-2626}, 0},	{{1,1,1,1}, 0},	{{-2626,-2626,-2626,2735}, 0},
{{-16,4,2746,0}, 0},	{{-2611,3,0,0}, 0},	{{1,2745,2729,0}, 0},
{{-15,-15,-15,-15}, 270},	{{1,2746,1,20}, 275},	{{1,2746,2748,20}, 0},
{{1,0,0,0}, 0},	{{1,2749,1,2759}, 0},	{{1,0,0,0}, 276},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 291},
{{1,1,-2649,-2649}, 0},	{{1,1,1,1}, 0},	{{-2649,2747,-2649,-2649}, 0},
{{-37,2,0,0}, 0},	{{-19,1,2709,0}, 0},	{{1,1,1,1}, 275},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,2743,1,0}, 0},
{{0,0,0,0}, 276},	{{-2634,2743,0,0}, 0},	{{1,2743,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2738}, 0},
{{-2633,2735,2,0}, 0},	{{-2634,0,2737,2742}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2738}, 0},	{{0,2738,0,0}, 0},	{{0,0,0,2739}, 0},
{{1,2739,1,2740}, 0},	{{1,2663,2663,2663}, 0},	{{1,2741,1,2663}, 0},
{{1,1,2663,2663}, 276},	{{0,2741,0,0}, 277},	{{-4,-4,-4,2735}, 0},
{{1,-90,-90,-90}, 0},	{{1,2739,1,-90}, 0},	{{-90,-90,-90,-90}, 276},
{{1,1,2738,2738}, 276},	{{1,2738,1,1}, 277},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 280},	{{0,0,0,0}, 279},
{{0,2705,0,0}, 0},	{{-2698,-2698,-2698,-2698}, 272},	{{0,0,0,2726}, 0},
{{1,2726,2729,2730}, 0},	{{1,2732,14,0}, 0},	{{1,0,15,0}, 0},
{{-2620,84,2732,99}, 0},	{{1,2736,-1796,0}, 64},	{{1,0,0,0}, 0},
{{-2581,-2581,-2581,0}, 0},	{{1,883,565,0}, 0},	{{1,0,0,0}, 0},
{{-2575,-2575,0,0}, 0},	{{1,881,882,0}, 0},	{{1,2731,2732,0}, 0},
{{-2570,137,2732,-2570}, 0},	{{1,2736,0,0}, 0},	{{-2566,-2566,-2566,-2566}, 0},
{{1,-1643,2735,0}, 0},	{{-2561,-2561,-2561,-2561}, 0},	{{-2556,-2556,-2556,0}, 0},
{{1,1,26,26}, 0},	{{1,1,26,26}, 0},	{{1,1,26,26}, 0},
{{1,2730,2731,2732}, 0},	{{-3687,-2521,0,2732}, 0},	{{1,2703,2706,2707}, 0},
{{1,2709,18,0}, 0},	{{1,0,-8,0}, 0},	{{1,2730,2734,2739}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,2740,33}, 0},	{{1,-2530,0,77}, 0},	{{1,-2518,0,0}, 0},
{{1,-2518,-2518,0}, 0},	{{1,1,1,-2125}, 0},	{{1,-2125,-2125,-2125}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2643,-2643,-2643,-2643}, 0},	{{1,2731,75,2733}, 0},	{{-2640,78,388,0}, 0},
{{-26,-1670,439,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2728,2729,2730}, 0},	{{-2678,-2546,0,2707}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2718}, 0},	{{1,-2551,0,224}, 0},	{{1,-2539,0,0}, 0},
{{1,-2539,-2539,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2146}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2567,-2567,-2567,-2567}, 0},	{{-2692,-2560,0,47}, 0},	{{-9,-2561,0,46}, 0},
{{1,-2562,0,218}, 0},	{{-2157,-2550,0,0}, 0},	{{-41,2712,2664,2665}, 0},
{{-25,48,49,2707}, 0},	{{1,2673,-1859,0}, 64},	{{1,0,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2644,-2644,-2644,-2644}, 0},	{{1,2704,53,-2934}, 64},
{{1,-2934,-2934,-2934}, 0},	{{1,1,2704,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,2704,0,0}, 0},
{{-2649,-2941,2705,-2941}, 0},	{{1,-2942,2705,-2942}, 0},	{{1,64,2710,-2942}, 0},
{{0,0,2710,2714}, 117},	{{1,74,-2944,-2944}, 0},	{{-2048,-2048,2713,-2048}, 0},
{{1,1,2670,2670}, 0},	{{1,1,2670,2670}, 0},	{{1,1,2670,2670}, 0},
{{-2703,2717,17,-2592}, 0},	{{1,2645,2670,2670}, 0},	{{1,2645,2670,2670}, 0},
{{1,2645,2670,2670}, 0},	{{1,1,2714,148}, 0},	{{1,154,-468,-468}, 0},
{{1,160,-468,-468}, 0},	{{1,160,160,-468}, 0},	{{1,1,1,148}, 0},
{{1,148,148,148}, 0},	{{1,1,1,1}, 0},	{{-2707,2708,-2707,-2707}, 0},
{{1,1,2664,2664}, 0},	{{1,1,2664,2664}, 0},	{{1,1,2664,2664}, 0},
{{1,1,1,1}, 0},	{{-2607,-2605,0,0}, 0},	{{-2608,-2606,0,1}, 0},
{{1,0,0,0}, 0},	{{0,0,189,0}, 0},	{{1,1,-2713,-2713}, 0},
{{1,1,1,1}, 0},	{{-1523,-1523,-1523,2708}, 0},	{{-3393,-2693,-2693,2708}, 0},
{{0,2712,-1906,0}, 64},	{{0,0,457,0}, 0},	{{1,2712,776,0}, 0},
{{1,0,2714,0}, 0},	{{0,0,0,0}, 202},	{{1,2630,0,0}, 0},
{{-2032,-2032,-2032,-2032}, 0},	{{0,0,2629,0}, 0},	{{0,-2608,0,0}, 0},
{{1,0,0,0}, 64},	{{0,0,0,2708}, 0},	{{1,-2984,-2984,-2984}, 0},
{{-1926,-1926,2710,-1926}, 0},	{{-2986,-2986,2717,-2986}, 0},	{{1,-2702,-2702,-57}, 0},
{{1,-2702,-2702,-2702}, 0},	{{1,-2702,-57,-57}, 0},	{{1,2714,1,1}, 0},
{{1,1,1,1}, 0},	{{-505,2714,-505,-505}, 0},	{{1,1,1,1}, 0},
{{0,2714,0,0}, 0},	{{1,0,0,0}, 0},	{{0,2714,0,0}, 0},
{{1,-2997,-2997,-2997}, 0},	{{1,1,2713,1}, 0},	{{-1849,-1849,-1849,-1849}, 0},
{{1,-3000,2719,-3000}, 0},	{{-1844,-1844,2719,-1844}, 0},	{{0,2726,0,0}, 0},
{{1,-3003,-3003,-3003}, 0},	{{-1821,-1821,2726,-1821}, 0},	{{-3005,-3005,2730,-3005}, 0},
{{0,0,2647,0}, 0},	{{0,0,2646,0}, 197},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,2725,6}, 0},
{{1,2592,2592,2592}, 0},	{{1,2592,2592,2592}, 0},	{{1,2592,2592,2592}, 0},
{{1,1,1,2722}, 0},	{{-530,-530,-530,2722}, 0},	{{0,0,0,0}, 194},
{{1,1,2721,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{-2121,2721,-2121,0}, 0},	{{1,-2718,-2718,-2718}, 0},
{{1,-2718,-2718,-2718}, 0},	{{1,-2718,-2718,-2718}, 0},	{{1,1,2718,2718}, 0},
{{1,1,2719,2719}, 0},	{{1,2719,2686,2686}, 0},	{{1,1,1,2686}, 0},
{{1,1,1,1}, 53},	{{1,1,-544,-544}, 0},	{{-544,-544,-544,-544}, 54},
{{-1804,-1804,2715,-1804}, 0},	{{0,0,2719,0}, 60},	{{1,-2723,-2723,-2723}, 0},
{{1,-2723,-2723,-2723}, 0},	{{1,-2723,-2723,-2723}, 0},	{{1,2716,-556,-556}, 0},
{{1,-556,-556,2716}, 0},	{{1,-556,-556,-556}, 0},	{{1,-556,-556,-556}, 0},
{{1,1,1,1}, 0},	{{1,-556,-556,-556}, 0},	{{1,1,1,1}, 0},
{{-3557,2716,-3557,-3557}, 0},	{{0,0,0,1}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{-1809,-1809,-1809,-1809}, 0},	{{1,-2732,-2732,-2732}, 0},
{{1,-2732,-2732,-2732}, 0},	{{1,-2732,-2732,-2732}, 0},	{{1,1,1,1}, 0},
{{1,1,-571,2712}, 0},	{{1,-571,-571,-571}, 0},	{{1,-571,-571,-571}, 0},
{{-571,-571,2712,-571}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,2712,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{1,0,0,0}, 44},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 187},
{{-2760,15,-607,-607}, 0},	{{1,14,-608,-608}, 0},	{{1,20,-608,-608}, 0},
{{1,20,20,-608}, 0},	{{1,1,1,1}, 0},	{{1,1,1,8}, 0},
{{1,1,1,1}, 0},	{{-2750,2684,-2750,-2750}, 0},	{{1,7,-615,2688}, 0},
{{1,13,-615,-615}, 0},	{{1,13,13,-615}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-3534,2685,-3534,-3534}, 0},
{{-621,7,2689,-621}, 0},	{{1,-622,-622,-622}, 0},	{{1,-622,-622,-622}, 0},
{{1,1,-622,-622}, 0},	{{1,-622,-622,-622}, 0},	{{1,1,1,1}, 0},
{{-2747,2688,-2747,-2747}, 0},	{{-627,2693,-627,-627}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2846,2693,-2846,-2846}, 0},
{{1,-3919,-2885,-2885}, 0},	{{1,-3919,-3919,-2746}, 0},	{{1,-3919,-3919,-3919}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2695}, 0},	{{1,2695,2695,2700}, 0},
{{1,2129,2129,2129}, 4},	{{1,2129,2129,2129}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2549}, 0},	{{1,1,1,1}, 181},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-3919,2692,-3919,-3919}, 0},
{{1,0,0,0}, 0},	{{-1694,0,0,0}, 0},	{{1,1,-2784,-2784}, 0},
{{1,1,1,1}, 0},	{{-2761,-2761,-2761,-2761}, 0},	{{1,0,0,0}, 0},
{{1,0,16,0}, 0},	{{0,2704,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 22},	{{0,2690,0,0}, 0},	{{0,0,0,2698}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,2688,0}, 0},	{{-2791,-2780,-2780,2}, 0},
{{-3954,-3954,-3954,2687}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,-2781,1,-2781}, 0},	{{1,-2781,-2781,0}, 0},	{{1,1,1,1}, 181},
{{0,0,0,2682}, 0},	{{-2733,95,96,2689}, 0},	{{1,2689,-2112,0}, 64},
{{-2731,-2731,-2731,-2731}, 0},	{{1,2690,250,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2720,-2720,-2720,-2720}, 0},	{{1,2688,566,0}, 0},
{{1,0,136,0}, 0},	{{1,0,2689,0}, 0},	{{-2715,-2715,2689,-2715}, 0},
{{1,0,138,0}, 0},	{{1,1,1,1}, 214},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2711,-2711,138,138}, 0},
{{-2784,2686,-2784,-2784}, 0},	{{1,-2784,-2784,-2784}, 0},	{{1,-2784,-2784,-2784}, 0},
{{-3962,-2683,-2668,2686}, 0},	{{1,30,2696,40}, 0},	{{1,2719,-2368,0}, 0},
{{1,2720,63,-2752}, 206},	{{1,-2765,-2765,-2765}, 0},	{{1,-2765,-2765,-2765}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2765}, 0},	{{1,1,1,1}, 0},
{{-2765,-2765,30,2720}, 0},	{{1,65,66,2659}, 0},	{{-2802,69,79,0}, 0},
{{1,2663,541,0}, 0},	{{1,0,111,0}, 0},	{{1,0,0,0}, 0},
{{-2740,-2740,-2740,-2740}, 0},	{{1,0,113,0}, 0},	{{1,1,1,2724}, 214},
{{1,1,1,-24}, 0},	{{1,1,1,1}, 0},	{{1,2724,2724,-24}, 0},
{{1,2724,2725,2725}, 0},	{{1,1,2726,2727}, 0},	{{-2736,2729,-2736,-2736}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2772}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2772}, 0},	{{1,1,1,1}, 0},	{{-2772,-2772,-2772,2725}, 0},
{{-2785,-2855,0,0}, 0},	{{1,2726,-2162,0}, 64},	{{1,25,-2781,-2781}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2794,2725,0,0}, 0},	{{-56,2725,50,0}, 0},	{{1,2724,2726,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 235},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,2722,2722}, 0},
{{0,0,0,2722}, 0},	{{1,0,80,0}, 0},	{{1,1,1,2721}, 214},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2722}, 0},	{{1,-272,0,2722}, 0},	{{0,541,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2717,0,0}, 0},	{{1,1,0,0}, 207},	{{0,0,0,0}, 227},
{{1,1,-2773,80}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,80,80}, 0},
{{1,82,0,0}, 0},	{{-2773,80,2708,0}, 207},	{{0,2737,0,0}, 0},
{{-93,2682,-2206,0}, 64},	{{-92,2689,157,0}, 0},	{{1,2735,476,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 238},	{{1,0,49,0}, 0},
{{1,1,1,1}, 214},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2729}, 0},	{{1,-303,0,0}, 0},
{{1,-2912,0,0}, 0},	{{1,0,0,0}, 0},	{{-2332,-2332,-2332,-2332}, 0},
{{0,0,52,0}, 0},	{{-109,0,0,0}, 64},	{{-108,0,0,0}, 0},
{{1,-790,2722,0}, 0},	{{1,1,1,1}, 214},	{{1,2729,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,2729,2732}, 0},
{{1,1,1,1}, 0},	{{1,-2813,-2813,-2813}, 0},	{{-2813,628,-2813,-2813}, 81},
{{-799,-799,629,0}, 0},	{{1,1,-2849,-2849}, 0},	{{1,-2849,-2849,-2849}, 0},
{{-2849,-2849,-2849,-2849}, 212},	{{1,-803,23,0}, 0},	{{1,1,1,1}, 214},
{{-2156,2727,-2156,-2156}, 0},	{{1,-806,33,0}, 0},	{{1,1,1,1}, 0},
{{-2151,2727,-2151,-2151}, 0},	{{1,1,-2845,-2845}, 0},	{{1,-2845,-2845,-2845}, 0},
{{-2845,-2845,-2845,-2845}, 212},	{{0,0,0,0}, 223},	{{1,-813,13,0}, 0},
{{1,1,1,1}, 214},	{{1,2723,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-2166,0,0}, 0},	{{-2166,-2166,-2166,734}, 0},
{{-820,-820,2721,0}, 0},	{{0,0,0,0}, 225},	{{1,1,-2849,-2849}, 0},
{{1,-2849,-2849,-2849}, 0},	{{-2849,-2849,0,0}, 212},	{{0,0,0,2717}, 0},
{{0,0,0,0}, 218},	{{-136,1,-136,-136}, 0},	{{1,1,-136,-136}, 0},
{{1,-136,-136,-136}, 0},	{{-2848,-2848,1,1}, 212},	{{-351,-351,0,2712}, 0},
{{1,1,2714,2715}, 0},	{{0,2715,0,0}, 0},	{{1,-2850,-2850,-2850}, 0},
{{1,-2850,-2850,-2850}, 0},	{{-3861,-3861,-3861,-3861}, 215},	{{1,1,1,1}, 0},
{{-2106,2719,-2106,-2106}, 0},	{{0,0,0,0}, 60},	{{1,1,-3859,-3859}, 0},
{{1,-3859,-3859,-3859}, 0},	{{-3859,-2105,-2104,-2104}, 212},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,3,0,0}, 0},	{{1,1,1,0}, 207},
{{0,0,0,0}, 213},	{{-1,-1,-1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 44},	{{-2953,-2863,-2953,-2953}, 0},
{{1,-2993,0,0}, 0},	{{1,0,0,0}, 207},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 210},	{{-10,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2674}, 0},	{{1,0,0,0}, 0},	{{0,0,0,2673}, 0},
{{-2823,376,-2323,0}, 64},	{{-2782,384,-103,0}, 0},	{{1,383,2671,0}, 0},
{{1,2676,29,29}, 0},	{{1,47,359,0}, 117},	{{-2781,2676,0,0}, 0},
{{-2777,-2137,-2136,2679}, 0},	{{1,-2486,92,92}, 0},	{{1,1,2684,2684}, 0},
{{1,1,2684,92}, 0},	{{1,1,1,1}, 0},	{{-3834,2684,-1962,-1962}, 0},
{{1,2685,2687,0}, 0},	{{1,2688,2689,19}, 0},	{{1,421,349,2689}, 0},
{{1,426,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,19}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2685}, 0},	{{-2791,-2151,449,-2145}, 0},
{{-2786,-2121,-2113,457}, 0},	{{1,1,1,490}, 0},	{{1,1,1,1}, 0},
{{-4080,3,-3787,56}, 0},	{{1,1,1,1}, 0},	{{-2602,1,-3789,-2770}, 0},
{{-2772,-3773,-3759,0}, 0},	{{1,0,0,0}, 0},	{{-2390,-2390,-2390,-2390}, 0},
{{1,0,2675,0}, 0},	{{1,1,1,1}, 144},	{{1,0,0,0}, 0},
{{1,408,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2669}, 0},	{{-2359,-2359,-2407,2669}, 0},
{{1,0,-2218,0}, 0},	{{-431,-431,-431,-431}, 0},	{{-2275,0,-91,0}, 0},
{{-2741,-2741,-2741,2667}, 0},	{{1,1,2668,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2663}, 0},	{{-17,0,313,2663}, 108},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2660}, 0},	{{1,1,1,1}, 0},
{{1,1,1,386}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2657}, 0},
{{0,0,0,2657}, 0},	{{1,1,-2185,-2407}, 0},	{{-2185,-2185,-2185,-2185}, 145},
{{1,1,1,653}, 0},	{{1,1,1,1}, 0},	{{-3953,-2603,-3828,15}, 0},
{{1,1,1,1}, 0},	{{-2618,-2605,-3830,-2811}, 0},	{{1,-2402,-3800,0}, 0},
{{1,-2811,-2811,-2811}, 0},	{{1,684,0,0}, 0},	{{1,1,1,1}, 0},
{{1,691,297,297}, 0},	{{1,691,297,297}, 0},	{{1,1,696,675}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-3845,-3845,-3845,2639}, 0},	{{1,-2414,-3812,0}, 0},
{{1,1,1,1}, 0},	{{-1989,0,0,0}, 0},	{{-3848,-3848,-3848,2636}, 0},
{{-2788,292,102,0}, 64},	{{-2786,300,2635,0}, 0},	{{1,299,2635,0}, 0},
{{1,2640,128,84}, 0},	{{1,2641,133,0}, 117},	{{1,2643,128,0}, 0},
{{1,1,1,1}, 0},	{{-2774,-2774,2645,84}, 0},	{{-2759,-2223,-2222,2645}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2735,-2843,-2635,311}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2727,191,-2444,-2444}, 0},	{{1,1,1,-4192}, 0},	{{-4192,-4192,2640,-4192}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-4194}, 0},	{{1,1,1,1}, 0},
{{-4212,-2854,-3871,2637}, 0},	{{-2717,-2717,1,-2712}, 0},	{{1,1,1,1}, 0},
{{-4215,-2857,-3874,2646}, 0},	{{1,-2446,-3844,0}, 0},	{{1,69,69,69}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,2653,2653,2653}, 0},
{{-2712,-3889,-3889,-3889}, 0},	{{1,296,68,0}, 64},	{{1,305,-2439,-2489}, 0},
{{-2580,-2580,-2580,67}, 0},	{{-2822,264,72,0}, 0},	{{1,2648,2651,0}, 0},
{{1,2652,2653,48}, 0},	{{1,2653,2658,2661}, 0},	{{1,2661,2658,0}, 0},
{{1,1,1,1}, 0},	{{1,2663,1,48}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2662}, 0},	{{-918,-918,107,-918}, 0},	{{-2798,-2262,338,-2256}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2656,2658,2658}, 0},	{{1,-2084,0,0}, 0},
{{-3154,373,-3154,0}, 0},	{{1,2656,2656,-2718}, 0},	{{1,-2718,2656,-2718}, 0},
{{1,-2718,-2718,-2718}, 0},	{{-2718,-115,-3905,2656}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2722}, 0},	{{1,1,1,1}, 0},	{{-4202,-119,-3909,155}, 0},
{{1,1,1,6}, 0},	{{1,1,1,1}, 0},	{{-4205,-122,-3912,31}, 0},
{{1,1,1,2658}, 0},	{{1,1,1,1}, 0},	{{-4208,-125,-3915,163}, 0},
{{1,1,1,1}, 0},	{{-2730,-127,-3917,26}, 0},	{{1,-2489,-3887,0}, 0},
{{1,26,26,26}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,2651,2651,2651}, 0},	{{1,2651,-3932,-3932}, 0},	{{1,1,174,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-3932,-3932,-3932,2651}, 0},	{{-2538,0,-956,0}, 64},
{{-2869,0,-957,0}, 0},	{{1,0,2649,0}, 0},	{{1,1,1,1}, 144},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2643}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-4195,-2717,-2717,136}, 0},
{{1,-2514,-3912,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,-3957,-3957,-3957}, 0},	{{-24,-3957,-3957,-3957}, 0},
{{-974,-974,2634,-974}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,322,0,0}, 0},	{{1,-981,2628,-981}, 0},	{{1,-2427,-2427,-2427}, 0},
{{1,-2427,-2427,-2427}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-981}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-981}, 0},
{{1,-981,-981,-981}, 0},	{{-981,-981,1784,0}, 94},	{{-2411,0,-2382,0}, 0},
{{1,1,2618,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-992,-992,-992,2613}, 0},	{{1,5,10,0}, 108},	{{1,0,5,0}, 0},
{{1,1,1,1}, 0},	{{-2897,-2897,-2897,-39}, 0},	{{-3,1,1,0}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2604}, 0},	{{-4,0,-4,0}, 103},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{1,0,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2598}, 0},
{{1,1,-2910,-2910}, 0},	{{0,0,0,2600}, 0},	{{0,0,0,2600}, 0},
{{1,-2389,-2389,-2389}, 0},	{{1,-2389,-2389,-2389}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-1018,-1018,-1018}, 0},	{{-2910,-1018,-1018,-1018}, 0},
{{-1024,0,0,447}, 60},	{{-1020,-1020,-1020,2}, 0},	{{-1021,-1021,-1021,2592}, 0},
{{1,-1021,-1021,-1021}, 0},	{{1,2593,-1021,-1021}, 0},	{{1,1,2593,-2389}, 58},
{{1,1,-1021,-1021}, 0},	{{1,1,1,1}, 0},	{{-2389,-2389,2593,-2389}, 0},
{{1,1741,1741,1741}, 0},	{{1,1,1,1}, 0},	{{-4147,-4147,2591,-4147}, 0},
{{-4147,-4147,-4147,-4147}, 160},	{{1,1,1,1}, 0},	{{1,1,1,-2804}, 0},
{{1,1,1,1}, 0},	{{-2804,-2791,-4016,2587}, 0},	{{1,1,1,2591}, 0},
{{1,1,1,1}, 0},	{{-4144,-2794,-4019,59}, 0},	{{1,1,1,1}, 0},
{{-2809,-2796,-4021,-78}, 0},	{{1,1,1,-2605}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2605}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-2488,0,0}, 0},	{{-2313,-2313,-2313,-2313}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-4138,-2308,-4031,2579}, 0},	{{1,-2603,-4001,0}, 0},
{{1,-88,-88,-88}, 0},	{{1,483,0,0}, 0},	{{1,1,1,1}, 0},
{{1,96,96,96}, 0},	{{1,96,96,96}, 0},	{{1,1,2579,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-4046,-4046,-4046,2579}, 0},	{{1,-2615,-4013,0}, 0},
{{1,128,-4043,-4043}, 0},	{{1,493,502,0}, 0},	{{1,-2261,-2261,-2261}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2261}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-2261,-2261,-2261}, 0},
{{1,1,1,1}, 0},	{{-4058,-4058,-4058,2568}, 0},	{{0,-2240,-540,0}, 0},
{{-548,-2518,0,0}, 0},	{{1,-2629,-4027,0}, 0},	{{1,-4057,-4057,-4057}, 0},
{{1,0,0,0}, 0},	{{1,-4057,-4057,-4057}, 0},	{{1,1,1,1}, 0},
{{-4072,2561,-4072,-4072}, 0},	{{1,-2635,-4033,0}, 0},	{{1,-4063,-4063,-4063}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-4078}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-4078,-4078,-4078,2555}, 0},	{{1,1,1,1}, 0},	{{-4400,-3060,-4077,1}, 0},
{{1,-2649,-4047,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,-4092,-4092,-4092}, 0},	{{1,-4092,-4092,-4092}, 0},
{{-159,-159,-159,-159}, 0},	{{1,7,-4094,-4094}, 0},	{{1,-4094,-4094,-4094}, 0},
{{1,1,1,1}, 0},	{{1,-4094,-4094,-4094}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-4094,-4094,-4094,2540}, 0},	{{1,-4100,-4100,-4100}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-4100}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-4100,-4100,-4100,2535}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-4105,-4105,-4105,2531}, 0},	{{-4105,-4105,-4105,2531}, 0},	{{-2905,2531,-2664,0}, 64},
{{-3043,0,-444,0}, 0},	{{1,0,2232,0}, 0},	{{1,18,0,0}, 0},
{{0,0,18,0}, 117},	{{-2840,53,0,0}, 0},	{{1,2526,-2670,0}, 64},
{{-228,-2718,-2668,-2718}, 0},	{{-3050,0,-308,0}, 0},	{{1,0,11,0}, 0},
{{1,2523,2524,0}, 0},	{{0,0,11,2351}, 0},	{{-2797,-2539,0,0}, 0},
{{-2910,-2706,115,-2701}, 0},	{{-3056,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 144},	{{-2690,2518,2519,0}, 0},	{{-319,0,0,0}, 0},
{{-2568,0,0,0}, 0},	{{0,0,2291,0}, 0},	{{0,0,1,0}, 108},
{{0,0,0,0}, 103},	{{1,-2698,-4096,0}, 0},	{{1,-4126,-4126,-4126}, 0},
{{1,388,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-4141,-4141,-4141,2505}, 0},	{{1,142,144,0}, 0},	{{1,1,1,1}, 52},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2500}, 0},	{{1,1,1,2500}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 81},	{{0,0,-2564,0}, 0},	{{1,-2587,279,-2587}, 0},
{{1,1871,1871,1871}, 0},	{{1,1871,1871,1871}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2587,-2587,-2587,2492}, 0},	{{1,0,275,2}, 108},
{{-2749,2491,0,0}, 0},	{{0,0,277,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,47}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2490}, 0},
{{-2584,-2584,-2584,2490}, 52},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2491}, 0},	{{-2892,-2579,-2584,2491}, 0},
{{1,-636,0,0}, 0},	{{1,1,1,1}, 0},	{{0,2491,0,0}, 0},
{{1,-2742,-4140,0}, 0},	{{1,1,-4170,-4170}, 0},	{{-2388,0,375,0}, 0},
{{1,1,1,-310}, 0},	{{1,1,1,1}, 0},	{{-2368,-2366,-2364,-2364}, 0},
{{1,104,106,0}, 0},	{{1,1,1,1}, 52},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2485,0,0}, 0},	{{1,1,2485,0}, 81},
{{0,0,0,0}, 128},	{{-2745,-2745,-2793,2484}, 0},	{{1,2488,-2604,0}, 0},
{{1,2493,1873,1873}, 0},	{{1,2493,1,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,2492}, 0},	{{1,1,2492,-2632}, 0},
{{-2632,3,0,0}, 0},	{{-2790,2,-70,2491}, 108},	{{-2791,1,0,2491}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2487}, 0},	{{0,0,231,0}, 135},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2483}, 0},	{{0,0,0,2483}, 0},	{{1,1,4,4}, 0},
{{1,4,0,0}, 0},	{{1,1,4,0}, 0},	{{0,0,0,0}, 125},
{{-2,2456,0,0}, 0},	{{-28,2478,2456,0}, 0},	{{0,0,0,0}, 127},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2462}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2598}, 0},	{{1,-3011,-3011,-65}, 0},
{{1,-2808,-4206,0}, 0},	{{1,-4236,-4236,-4236}, 0},	{{1,0,0,0}, 0},
{{-4236,2454,-4236,-4236}, 0},	{{1,1,-218,-2824}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2824}, 0},	{{1,1,1,1}, 0},	{{1,1,-2532,-2532}, 0},
{{1,-2707,0,0}, 0},	{{1,1,2455,-2532}, 0},	{{0,0,0,2455}, 0},
{{1,-4232,-4218,0}, 0},	{{1,-4248,-4248,-4248}, 0},	{{-4248,0,2454,0}, 0},
{{1,-2823,-4221,0}, 0},	{{1,-4251,-4251,-4251}, 0},	{{-4251,0,2461,0}, 0},
{{1,-2826,-4224,0}, 0},	{{1,-83,-4254,-4254}, 0},	{{-2472,0,2459,0}, 0},
{{1,1,1,1}, 120},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2448}, 0},
{{1,1,0,0}, 4},	{{1,1,0,0}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 121},	{{1,-2455,0,0}, 0},	{{0,2445,295,0}, 0},
{{-1,-2734,0,0}, 0},	{{-3631,-3631,-3631,2444}, 0},	{{1,1,1,1}, 0},
{{-3089,-486,-4276,-433}, 0},	{{0,0,0,0}, 72},	{{-3214,2442,-3214,-2740}, 0},
{{-2717,-2717,-2717,-2717}, 0},	{{0,0,0,2441}, 0},	{{1,1,1,1}, 52},
{{0,0,2440,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2358}, 0},
{{1,1,1,1}, 56},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 89},
{{1,1,1,2434}, 0},	{{1,2434,0,0}, 0},	{{1,2434,0,0}, 81},
{{0,0,0,0}, 82},	{{1,1,1,2434}, 0},	{{1,2434,0,0}, 0},
{{-3,0,0,0}, 81},	{{-2860,1,2435,-3440}, 0},	{{-2860,-3440,-3440,-3440}, 0},
{{1,1,1,1}, 0},	{{-4451,2435,0,0}, 0},	{{0,0,0,0}, 90},
{{1,2369,2369,-352}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-352}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2430}, 0},	{{0,2430,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2913}, 0},	{{1,1,1,1}, 0},
{{-2913,-2913,-2913,2427}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-41,0,0}, 0},	{{1,1,1,-3248}, 78},	{{-3248,2424,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-49,0,0}, 0},
{{1,1,1,1}, 78},	{{0,0,0,2429}, 0},	{{0,0,0,2430}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 74},	{{0,0,0,0}, 73},
{{1,1,1,1}, 0},	{{1,-2821,-2821,-2821}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-3491}, 0},	{{1,-3491,-3491,-3491}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 54},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 93},	{{1,1,1,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 95},	{{1,1,-2986,-2986}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-2869,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2351}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{-2868,-2868,-2868,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2340}, 0},	{{-2839,2340,-2839,-2839}, 0},	{{-2898,-2898,-2898,-2898}, 110},
{{0,0,0,0}, 110},	{{-3569,-3569,-3569,2338}, 0},	{{-2865,0,0,0}, 114},
{{0,0,0,2337}, 0},	{{0,2337,0,0}, 103},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,2335}, 0},	{{0,0,0,0}, 107},
{{0,2334,0,0}, 0},	{{0,0,0,2335}, 0},	{{0,0,0,2335}, 0},
{{1,0,0,0}, 0},	{{1,-3162,-3162,0}, 0},	{{1,1,1,1}, 53},
{{1,0,0,0}, 0},	{{-2846,-2846,-2846,-2846}, 0},	{{0,0,0,2339}, 0},
{{1,1,1,1}, 0},	{{1,1,-911,-911}, 0},	{{-911,-911,-911,-911}, 54},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-424,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 58},
{{0,0,0,2327}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2320}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-3052}, 0},	{{1,1,1,1}, 0},
{{-3243,-3243,-3243,2135}, 0},	{{1,-2930,0,0}, 0},	{{1,1,0,0}, 0},
{{0,0,0,2314}, 0},	{{1,1,1,1}, 0},	{{-3261,-3248,-4473,-2644}, 0},
{{1,-3045,-4443,0}, 0},	{{1,1,-2644,-2644}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-2644,-2586,-4488,2309}, 0},	{{1,1,1,1}, 0},
{{-3268,-3255,-4480,-637}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2563,-4490,-4490,-4490}, 0},
{{-2810,0,0,0}, 0},	{{0,0,0,2304}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2304}, 0},	{{1,-3064,-4462,0}, 0},	{{1,-2663,-2663,-2663}, 0},
{{1,22,0,0}, 0},	{{1,1,1,1}, 0},	{{1,29,-365,-365}, 0},
{{1,29,-365,-365}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-4507,-4507,-4507,2293}, 0},	{{1,-3076,-4474,0}, 0},	{{1,-661,-661,-661}, 0},
{{1,10,0,0}, 0},	{{1,1,1,1}, 0},	{{1,17,-377,-377}, 0},
{{1,17,-377,-377}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-4519,-4519,-4519,2282}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2274}, 0},	{{1,1,-393,-393}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-4535,-4535,-4535,2268}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-4540,-4540,-4540,2264}, 0},	{{-4540,-4540,-4540,2264}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2256}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2248}, 0},	{{-4559,-4559,-4559,2248}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2240}, 0},
{{0,0,0,2240}, 0},	{{0,2241,0,0}, 0},	{{1,1,1,1}, 0},
{{-3925,-3925,-3925,2240}, 0},	{{-4573,-4573,-4573,2240}, 0},	{{1,-3143,-4541,0}, 0},
{{1,-4571,-4571,-4571}, 0},	{{1,0,0,0}, 0},	{{1,-4571,-4571,-4571}, 0},
{{1,-4586,-4586,-4586}, 0},	{{1,-4586,-4586,-4586}, 0},	{{1,-4586,-4586,-4586}, 0},
{{1,1,1,-4586}, 0},	{{-4586,-4586,2232,-4586}, 0},	{{-4583,-4583,-4583,2233}, 0},
{{1,1,1,-4583}, 0},	{{1,-3193,0,0}, 0},	{{1,1,1,1}, 5},
{{0,0,0,2230}, 0},	{{0,0,2231,0}, 0},	{{-4589,-4589,-4589,2236}, 0},
{{-4590,-4590,-4590,2236}, 0},	{{-4590,-4590,-4590,2236}, 0},	{{-4560,2249,-4560,-4560}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2248}, 0},	{{-5159,-5159,-5159,2248}, 0},
{{0,0,0,2263}, 0},	{{0,0,0,2263}, 0},	{{1,2263,2263,0}, 0},
{{1,2263,1,2264}, 0},	{{1,1,2271,0}, 0},	{{0,0,2275,0}, 0},
{{1,2279,2281,0}, 0},	{{1,1,1,2283}, 0},	{{0,0,2286,0}, 0},
{{1,2256,2256,0}, 0},	{{-2,-2,-2,2286}, 0},	{{1,1,1,1}, 0},
{{1,1,2285,0}, 0},	{{1,0,2286,0}, 0},	{{1,1,1,1}, 0},
{{0,0,2287,0}, 0},	{{-8,-8,-8,2287}, 0},	{{-2658,-2658,2289,-2555}, 0},
{{1,2291,2294,-2556}, 0},	{{1,-2659,-2659,-2659}, 0},	{{1,1,1,1}, 0},
{{1,1,2293,52}, 0},	{{1,1,1,1}, 0},	{{1,2250,2250,52}, 0},
{{1,0,0,0}, 0},	{{0,0,0,2291}, 0},	{{1,-2666,3,-2666}, 0},
{{1,1,1,1}, 509},	{{-2595,-2595,2289,0}, 0},	{{1,1,1,1}, 0},
{{1,1,2289,0}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,2285,0,0}, 0},	{{1,1,1,1}, 0},	{{0,2292,0,0}, 0},
{{0,2292,0,0}, 0},	{{1,2291,0,0}, 0},	{{0,0,0,9}, 0},
{{1,0,0,2290}, 0},	{{1,2292,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,2288,0}, 0},	{{0,0,10,0}, 0},	{{1,1,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,2280}, 0},	{{0,0,2280,0}, 0},	{{-2628,0,0,0}, 0},
{{1,2279,2280,2282}, 0},	{{1,16,64,0}, 0},	{{-2692,-2692,-2692,-2692}, 0},
{{1,2276,2276,2280}, 0},	{{1,13,61,0}, 0},	{{-2695,2279,-2695,-2695}, 0},
{{1,2273,2273,2277}, 0},	{{-5,10,53,0}, 0},	{{-2662,9,96,0}, 0},
{{1,2281,95,0}, 0},	{{1,-2688,2284,-2688}, 0},	{{1,1,2284,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,2280}, 0},	{{1,1,1,1}, 0},
{{1,2274,2279,2279}, 0},	{{1,103,0,0}, 0},	{{1,1,1,0}, 502},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,29}, 0},	{{1,1,1,1}, 0},	{{1,0,97,0}, 0},
{{-2375,-2375,-2375,-2375}, 0},	{{0,2271,102,0}, 482},	{{1,1,2274,-2718}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2718}, 0},
{{1,1,1,1}, 0},	{{-2718,-2718,-2718,2270}, 0},	{{-2723,-2723,-2723,0}, 476},
{{1,5,5,2270}, 0},	{{-2691,8,28,0}, 0},	{{1,3,3,3}, 0},
{{-2696,6,26,0}, 0},	{{1,1,1,1}, 0},	{{-2695,4,19,0}, 0},
{{-2696,3,62,0}, 0},	{{1,2264,61,0}, 0},	{{-2691,-2722,-2722,-2722}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,69,0}, 0},	{{-2730,-2730,-2730,2253}, 0},	{{-2731,-2731,-2731,-2731}, 0},
{{1,0,3,0}, 0},	{{1,0,0,0}, 0},	{{-47,-47,-47,-47}, 0},
{{0,0,0,0}, 482},	{{-2733,2,-1,0}, 0},	{{-2734,2247,2249,0}, 0},
{{1,1,1,-2703}, 0},	{{-2703,-17,2249,0}, 0},	{{0,2234,0,0}, 482},
{{1,0,5,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,2245,0}, 0},	{{0,0,1,2249}, 0},	{{1,0,0,0}, 476},
{{1,1,1,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 493},
{{1,1,1,1}, 0},	{{-2752,-2752,-2752,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2752,0,2237,0}, 0},	{{0,0,0,0}, 491},	{{1,-2712,54,0}, 0},
{{1,-2712,-2712,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2234}, 0},	{{1,2245,32,0}, 482},
{{1,-2727,-2727,-2727}, 0},	{{1,-2727,-2727,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{-2727,2248,0,0}, 0},	{{0,0,26,0}, 482},
{{1,0,54,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-2719,-2719,-2719,-2719}, 0},	{{1,-66,2244,-66}, 0},	{{1,1,-120,-120}, 0},
{{1,1,-120,0}, 0},	{{1,1,1,-120}, 0},	{{1,-66,-66,-66}, 0},
{{1,-66,-66,-66}, 0},	{{-66,-66,-66,2239}, 0},	{{-2764,-2764,-2764,-106}, 476},
{{0,0,0,2238}, 0},	{{-2760,-74,2238,0}, 0},	{{-101,-101,-101,0}, 0},
{{-2203,-2203,-2203,-2203}, 0},	{{1,2176,0,0}, 0},	{{1,2176,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,2233,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2233}, 0},	{{1,1,1,0}, 0},	{{0,0,0,0}, 486},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,2229,0}, 0},	{{-2765,-2765,-2765,0}, 476},
{{1,0,1,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2217}, 0},
{{1,0,0,0}, 476},	{{1,1,1,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 480},	{{1,1,1,1}, 0},	{{0,2203,0,0}, 0},
{{1,1,1,-2781}, 0},	{{1,20,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 479},
{{1,1,1,0}, 0},	{{0,0,0,0}, 478},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,2179,0}, 0},	{{1,2184,0,0}, 0},
{{1,0,0,0}, 0},	{{0,2183,2186,0}, 0},	{{0,0,0,2186}, 0},
{{-2797,2,-2797,2188}, 0},	{{-2798,-2798,-2798,-2795}, 0},	{{-2789,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,-161,0,0}, 0},	{{-87,-87,0,0}, 0},
{{-2800,-2800,-2800,-2800}, 0},	{{-2794,-166,0,0}, 0},	{{-2795,0,0,0}, 0},
{{-2796,2182,0,0}, 0},	{{1,-169,0,0}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2175}, 0},
{{-2862,2175,-2862,-2862}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2170}, 0},	{{0,0,0,2181}, 0},	{{1,2186,41,2187}, 0},
{{-2797,2190,56,0}, 408},	{{1,2190,81,83}, 0},	{{-2786,83,0,0}, 408},
{{1,2189,-2785,-2785}, 0},	{{0,83,0,0}, 408},	{{1,255,2188,0}, 415},
{{1,2190,0,0}, 423},	{{1,0,0,0}, 0},	{{-2785,-2785,-2785,-2785}, 0},
{{1,407,0,0}, 0},	{{0,2187,0,0}, 423},	{{1,249,2188,0}, 0},
{{1,2188,2189,0}, 0},	{{0,2189,2190,2191}, 0},	{{1,0,0,0}, 0},
{{1,2190,1,1}, 0},	{{1,2190,1,-2769}, 0},	{{1,1,1,1}, 0},
{{-2769,2190,-2769,-2769}, 0},	{{1,2208,2209,400}, 430},	{{-2764,-2764,-2764,-2764}, 0},
{{-2757,-2757,-2757,-2757}, 0},	{{-2737,-2737,-2737,-2737}, 0},	{{-2732,-2732,-2732,-2732}, 0},
{{1,13,2205,19}, 0},	{{-2822,2165,31,0}, 0},	{{-20,234,2167,0}, 369},
{{1,233,0,0}, 0},	{{1,2172,0,0}, 0},	{{0,2173,2174,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{-2785,-2785,-2785,-2785}, 0},
{{1,2198,2199,2200}, 0},	{{-2831,376,22,0}, 0},	{{-2820,2199,47,49}, 0},
{{-30,224,0,0}, 369},	{{1,2198,2199,0}, 369},	{{1,-31,0,0}, 423},
{{-31,0,0,0}, 443},	{{1,2198,16,0}, 0},	{{1,2198,0,0}, 423},
{{0,0,0,0}, 443},	{{1,2197,2201,0}, 0},	{{1,373,0,0}, 0},
{{0,0,0,0}, 450},	{{1,2200,2209,0}, 363},	{{1,1,1,1}, 393},
{{1,1,1,365}, 0},	{{1,1,1,406}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 395},	{{1,1,1,0}, 0},
{{0,0,0,0}, 446},	{{-38,2169,2170,361}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,123}, 0},
{{1,126,0,0}, 0},	{{1,-2768,-2768,0}, 0},	{{1,123,0,0}, 0},
{{1,-2795,-2764,-4849}, 0},	{{-2795,2189,94,94}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-4849,-4849,0}, 0},	{{1,-4849,0,0}, 0},
{{1,-4849,-4849,-4849}, 0},	{{-4849,2189,0,0}, 0},	{{1,7,2113,0}, 369},
{{-74,-74,0,0}, 423},	{{1,5,0,0}, 0},	{{0,2156,0,0}, 423},
{{-2572,3,0,0}, 0},	{{0,333,0,0}, 363},	{{0,1,2107,0}, 369},
{{0,0,0,0}, 363},	{{1,-3019,-3019,-3019}, 363},	{{1,1,1,1}, 0},
{{-2854,-2854,2195,-2854}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,2194,-347,0}, 0},	{{-2872,-3024,-3024,-3024}, 430},	{{1,1,1,1}, 0},
{{-2871,2197,-2871,-2871}, 0},	{{0,101,0,0}, 0},	{{-9,2196,-3029,-3029}, 363},
{{1,1,1,-3029}, 430},	{{1,1,2203,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{-2844,0,0,0}, 0},	{{-3037,2198,-3037,-3037}, 442},
{{1,1,2198,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2197}, 0},	{{1,1,2197,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2195}, 0},
{{1,1,1,1}, 0},	{{1,1,2194,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 353},	{{1,1,1,1}, 0},
{{1,1,2188,0}, 0},	{{0,0,0,2194}, 0},	{{1,1,1,1}, 0},
{{1,2196,-2891,-2891}, 0},	{{1,2197,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2891}, 0},	{{1,-2891,-2891,-2891}, 0},	{{1,1,1,1}, 0},
{{1,2197,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 431},	{{0,0,0,0}, 366},
{{1,1,1,1}, 0},	{{-2902,2182,-2902,-2902}, 0},	{{1,1,2182,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,21,21}, 0},	{{1,-2896,0,0}, 0},	{{1,30,0,0}, 353},
{{1,2177,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{-2266,0,2166,0}, 0},	{{1,1,2166,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2916,-2916,0,0}, 0},	{{1,1,1,1}, 0},	{{-2921,2161,-2921,-2921}, 0},
{{0,0,0,0}, 357},	{{1,1,1,2160}, 0},	{{1,2160,-2916,-2916}, 0},
{{1,1,1,2160}, 0},	{{-2916,5,0,2160}, 0},	{{1,1,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{-28,-28,0,0}, 0},
{{1,-2893,-2893,0}, 0},	{{1,-2,0,0}, 0},	{{-2920,-2920,-4974,-4974}, 0},
{{-4962,-4962,0,0}, 428},	{{1,1,1,1}, 0},	{{-2907,2156,-2907,-2907}, 0},
{{1,1,1,1}, 0},	{{-2903,2155,-2903,-2903}, 0},	{{-4984,-4984,-4984,-2971}, 427},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2152}, 0},
{{1,2163,23,24}, 0},	{{1,2033,0,0}, 408},	{{1,2162,2162,0}, 0},
{{1,2163,0,0}, 0},	{{-2838,2163,-2838,-2838}, 0},	{{-202,2166,-2988,-2988}, 0},
{{0,53,-2603,0}, 415},	{{0,208,0,0}, 0},	{{0,51,0,0}, 0},
{{1,0,0,0}, 363},	{{-2830,-2830,-2830,-2830}, 0},	{{0,2161,0,0}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{0,129,0,0}, 0},
{{1,5,8,9}, 0},	{{-2853,2018,0,0}, 0},	{{1,2157,2158,2159}, 0},
{{-2855,2159,0,0}, 0},	{{0,40,0,0}, 369},	{{1,2014,0,0}, 369},
{{1,0,0,0}, 0},	{{0,2156,0,0}, 0},	{{0,2014,0,0}, 0},
{{1,2015,218,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 470},
{{-181,2153,2027,0}, 363},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 467},	{{0,-172,0,0}, 369},	{{-2746,0,0,0}, 363},
{{1,2122,0,0}, 363},	{{-2747,2123,-2747,-2747}, 0},	{{0,2123,0,0}, 0},
{{-2882,2126,-2882,-2882}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{-2879,0,0,0}, 0},
{{0,0,0,0}, 415},	{{-2754,2126,2127,0}, 415},	{{-2745,2127,-2625,0}, 0},
{{1,166,170,0}, 0},	{{1,2126,2127,-2780}, 0},	{{1,2127,134,0}, 0},
{{1,173,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2125}, 0},	{{1,34,2125,-304}, 363},
{{1,84,-234,-234}, 393},	{{1,1,-234,130}, 0},	{{1,1,1,171}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-466}, 0},	{{1,-494,-494,-494}, 0},	{{-494,0,-398,0}, 395},
{{-4921,-2420,-2420,2116}, 0},	{{-2715,5,0,0}, 415},	{{-2888,4,-2646,0}, 0},
{{-317,21,-317,-317}, 363},	{{-2707,2,0,0}, 415},	{{0,1,0,0}, 0},
{{-320,-320,-320,-320}, 363},	{{-2887,-321,-321,-321}, 363},	{{-2888,2109,-322,-322}, 363},
{{1,1,1,2117}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-200,0,0}, 0},	{{1,318,318,0}, 0},	{{0,-128,0,0}, 377},
{{1,2115,0,0}, 0},	{{1,1,1,1}, 0},	{{0,2115,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2636,-2636,-2636,-2636}, 0},
{{1,82,104,104}, 0},	{{1,1,-197,-197}, 0},	{{1,1,1,-197}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,-527,-499}, 0},	{{-527,-527,-527,-527}, 353},	{{-2901,-2901,0,0}, 366},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 364},	{{-2891,2084,0,0}, 0},	{{0,0,2087,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,2089}, 0},	{{1,2089,0,0}, 369},
{{1,2089,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,26,0,0}, 0},
{{-2830,2088,-2710,0}, 0},	{{1,81,85,0}, 0},	{{1,2041,2042,-2865}, 0},
{{1,2086,49,0}, 0},	{{1,88,-84,-84}, 0},	{{1,1,1,1}, 0},
{{-84,2084,-84,-84}, 0},	{{1,32,2085,-549}, 363},	{{1,1,-317,-317}, 393},
{{1,1,-317,47}, 0},	{{1,1,1,88}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-549}, 0},
{{1,-549,-549,-549}, 0},	{{0,0,-481,0}, 395},	{{1,5,0,0}, 369},
{{-26,-383,0,0}, 0},	{{-2971,3,-2729,0}, 0},	{{-562,19,-562,-562}, 363},
{{0,1,0,0}, 369},	{{-564,-564,-564,-564}, 363},	{{1,0,0,0}, 0},
{{0,0,11,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2059}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,163}, 0},	{{-2899,2058,-580,-580}, 363},
{{1,1,23,23}, 0},	{{1,1,-278,-278}, 0},	{{1,1,1,-278}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,-580,-580}, 0},	{{-580,-580,-580,-580}, 353},	{{-56,1974,0,0}, 369},
{{-2878,2057,-2758,0}, 0},	{{1,2057,37,0}, 0},	{{1,2058,2059,0}, 0},
{{1,2038,1,0}, 0},	{{-132,-132,-132,-132}, 0},	{{1,8,1845,0}, 363},
{{1,1,1,1}, 393},	{{1,1,1,1}, 0},	{{-363,-363,-363,-363}, 0},
{{-39,-327,0,0}, 369},	{{-3010,-328,-2768,0}, 0},	{{-2902,1967,0,0}, 363},
{{0,234,0,0}, 0},	{{1,1,1,1}, 0},	{{-300,-300,-300,-300}, 0},
{{-2883,-3291,34,-3291}, 363},	{{1,2017,2046,2046}, 0},	{{1,1,2017,2017}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2046}, 0},	{{1,-2831,0,0}, 0},	{{-5143,-5143,-5143,-5143}, 399},
{{-2892,140,25,-3300}, 363},	{{0,2044,0,0}, 0},	{{1,1,1,2050}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-331,0,0}, 0},
{{-130,187,187,0}, 399},	{{1,-624,2010,-624}, 363},	{{1,1,1802,1802}, 393},
{{1,1,1802,0}, 0},	{{-624,-624,-624,2046}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 406},	{{-2914,2045,-36,0}, 0},	{{1,2000,0,0}, 0},
{{-460,-135,0,0}, 0},	{{0,0,2043,0}, 404},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2043}, 0},
{{0,0,0,2043}, 0},	{{-3324,-638,0,0}, 397},	{{1,1,1,-404}, 0},
{{-404,-404,-404,-404}, 396},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2036,21,21}, 0},
{{1,-3201,0,0}, 0},	{{1,202,-2629,-2629}, 392},	{{1,2035,-2641,0}, 0},
{{-3024,-3024,-3024,-3024}, 354},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,12,12,12}, 0},
{{1,-3210,0,0}, 0},	{{-2650,-2648,-2638,-2638}, 392},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-354,0,0}, 0},	{{0,0,0,0}, 392},
{{1,-3219,0,0}, 0},	{{-2663,202,203,-2647}, 392},	{{1,-3221,0,0}, 0},
{{-2661,202,-2649,-2649}, 392},	{{1,1,1,1}, 358},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2648,-2648,-2648,-2648}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2013}, 0},	{{1,0,0,0}, 0},	{{1,0,2,0}, 0},
{{0,0,0,0}, 390},	{{0,0,0,2011}, 0},	{{-5083,1,0,0}, 0},
{{0,0,0,0}, 387},	{{1,-3241,0,0}, 0},	{{1,182,-2669,-2669}, 353},
{{1,-20,-2681,0}, 0},	{{1,1,1,1}, 354},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1999}, 0},	{{1,-3276,-3276,-3276}, 0},	{{-3276,0,0,1998}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,1984,0}, 0},	{{1,-2942,0,0}, 0},	{{1,1,-5254,-5254}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1630,1630}, 0},
{{1,1,1630,1630}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-5254,-5254,-5254,1973}, 0},	{{1,-5254,-5254,-5254}, 0},	{{1,-5254,-5254,-5254}, 0},
{{1,0,-2926,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1967}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1964}, 0},	{{1,1885,1815,1815}, 0},
{{1,1840,1726,1726}, 0},	{{1,1,1840,1726}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1885}, 0},
{{1,1,-3439,-3439}, 0},	{{-3439,0,-685,0}, 380},	{{1,-3342,-3342,-3342}, 0},
{{1,1,1,-3342}, 0},	{{1,1,-3342,-3342}, 0},	{{1,1953,1953,0}, 0},
{{1,1,1,1}, 0},	{{1,1,-3342,-3342}, 0},	{{1,-3342,-3342,-3342}, 0},
{{1,1,1,-3342}, 0},	{{1,1953,1,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{0,0,0,0}, 379},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 381},	{{1,1801,1801,1801}, 0},
{{1,1,1,1}, 0},	{{1,1801,1801,1801}, 0},	{{1,1,1,1}, 0},
{{1,1801,1801,1801}, 0},	{{1,0,0,0}, 0},	{{1,2,2,0}, 0},
{{-2967,-2967,-2967,-2967}, 377},	{{0,0,0,0}, 377},	{{-2968,-2968,-2968,-2968}, 357},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{0,0,0,0}, 375},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1885}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,1883,0,0}, 0},	{{0,0,0,1883}, 0},
{{0,0,0,1883}, 0},	{{0,0,0,1883}, 0},	{{-2972,-2972,0,0}, 366},
{{1,-3402,0,0}, 0},	{{-200,1885,-2830,-2830}, 353},	{{1,1885,-2842,0}, 0},
{{-2781,-2781,-2781,-2781}, 354},	{{1,1,1,1}, 358},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1876}, 0},	{{1,1,-2831,-2831}, 0},	{{1,1,-2831,-2831}, 0},
{{1,0,24,0}, 0},	{{0,0,0,0}, 360},	{{1,-5285,0,0}, 0},
{{1,-5285,0,0}, 0},	{{-5285,0,-2760,0}, 356},	{{-2864,3,-2860,0}, 0},
{{-2865,-2861,-2861,0}, 0},	{{-2862,1,-2862,0}, 0},	{{-3223,-3223,-3223,-3223}, 354},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2739,-2739,-2739,-2739}, 0},	{{1,-2849,-2849,-2849}, 0},	{{1,-2849,-2849,-2849}, 0},
{{-2849,0,-2733,0}, 356},	{{0,0,0,1857}, 0},	{{1,-5303,0,0}, 0},
{{1,-5303,0,0}, 0},	{{1,-10,-2778,0}, 0},	{{-10,-10,-10,-10}, 347},
{{0,0,0,0}, 351},	{{0,0,0,1852}, 0},	{{0,0,0,1852}, 0},
{{1,1,1,1}, 0},	{{-5273,-5273,-5273,1852}, 0},	{{1,1,-5233,-5233}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-5233}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-5233,-5233,-5233,1847}, 0},	{{0,0,0,1847}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1843}, 0},
{{0,0,0,1843}, 0},	{{1,1,1843,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,1835,0,0}, 0},	{{0,0,1843,0}, 0},
{{-5247,1843,-5247,-5247}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,1829,0,0}, 0},	{{-26,-26,-26,-26}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1828}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,1823}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,1814}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,-2646,1812,0}, 0},	{{1,-2635,-2635,-5225}, 0},	{{1,1,1,-2631}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-6178,-2631,-2737,-6178}, 0},	{{1,-6179,-2738,-6179}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{-6179,-6179,-6179,59}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-66}, 0},
{{1,1,1,1}, 0},	{{-66,0,92,0}, 0},	{{1,1801,1801,-69}, 0},
{{1,1,1,1}, 0},	{{1,-2662,-2662,-2662}, 0},	{{1,-2662,-2662,-2662}, 0},
{{1,1,1,1}, 0},	{{-69,1801,-69,-69}, 0},	{{1,1795,1795,-75}, 0},
{{1,1,1,1795}, 0},	{{1,1790,1790,1790}, 0},	{{1,1790,1790,1790}, 0},
{{1,1,1,1}, 0},	{{-75,1796,-75,-75}, 0},	{{1,1,1,1}, 0},
{{1,-2662,-2662,-2662}, 0},	{{1,-2662,-2662,-2662}, 0},	{{1,1,1,1}, 0},
{{-2779,1792,-2779,-2779}, 0},	{{1,1,1,1}, 0},	{{1,-5257,-5257,-5257}, 0},
{{1,-5257,-5257,-5257}, 0},	{{1,1,1,1}, 0},	{{-2784,-2784,-2784,-2784}, 0},
{{1,-2667,-2667,-2667}, 0},	{{1,-2667,-2667,-2667}, 0},	{{1,1,1,1}, 0},
{{-2788,1,1784,-2788}, 0},	{{-2667,1784,-2667,-2667}, 254},	{{-2774,1786,-2774,-2774}, 0},
{{1,1744,1744,1744}, 0},	{{1,-6215,-6215,-6215}, 0},	{{1,1,1,1744}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,-6215,-6215}, 0},	{{-6215,-6215,-6215,1786}, 0},
{{0,0,0,1786}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-5278}, 0},
{{1,1,1,1}, 0},	{{-5278,-5278,-5278,1783}, 0},	{{1,5,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,7}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1779}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1779}, 0},	{{0,1779,0,0}, 0},	{{1,1,1,1}, 0},
{{1,-5222,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{-2787,-2787,-2787,0}, 0},	{{-2777,0,-2768,0}, 0},
{{1,-2768,-2768,-2768}, 0},	{{1,-2728,-2728,-2728}, 0},	{{1,-2728,-2728,0}, 0},
{{1,1,1,1}, 0},	{{-2768,-2768,1768,-2768}, 0},	{{-6254,-6254,-6254,-6254}, 254},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,1765,0}, 0},
{{0,0,0,0}, 160},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,1758,0,0}, 0},	{{1,-6267,-2757,-6267}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,-6267,-6267,0}, 0},	{{1,-6267,-6267,-6267}, 0},	{{-2768,-2768,-2768,-2768}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-6267,-6267,-6267,1759}, 0},	{{-6267,-6267,-6267,1759}, 0},
{{0,1759,0,0}, 0},	{{1,1,1,1}, 254},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2}, 0},	{{0,0,0,0}, 254},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 255},	{{-6296,-6296,-6296,1743}, 0},
{{0,0,0,1752}, 0},	{{-6287,-6287,-6287,1752}, 0},	{{-6287,-6287,-6287,1752}, 0},
{{0,0,0,1765}, 0},	{{1,0,0,0}, 0},	{{1,10,10,10}, 270},
{{-2713,11,1763,11}, 0},	{{1,0,0,0}, 0},	{{1,7,7,7}, 270},
{{-2662,0,1765,0}, 0},	{{1,-5429,-5429,-5429}, 0},	{{1,5,5,5}, 270},
{{-2665,0,1765,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 270},
{{-2668,0,0,0}, 0},	{{-2669,0,-2953,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,1761,0,0}, 0},	{{1,1750,1750,1755}, 0},
{{1,1750,1750,1750}, 0},	{{1,1759,1750,1750}, 0},	{{1,1,1,1}, 0},
{{-2956,-2956,-2956,1758}, 0},	{{-2728,-2728,-2728,1758}, 0},	{{0,0,0,1758}, 0},
{{1,1758,-5294,1760}, 0},	{{-5294,1760,0,0}, 0},	{{1,-5296,-5296,10}, 0},
{{1,1768,0,0}, 0},	{{0,1770,0,0}, 270},	{{-5299,-5299,-5299,1755}, 0},
{{1,2,19,0}, 0},	{{-2724,1775,0,0}, 270},	{{0,0,0,0}, 327},
{{-5303,-5303,-5303,1778}, 0},	{{1,0,0,0}, 0},	{{0,1777,0,0}, 270},
{{1,0,0,0}, 0},	{{1,1779,0,0}, 270},	{{0,0,0,1779}, 0},
{{1,1779,0,0}, 0},	{{0,1776,0,0}, 270},	{{1,1,1,0}, 0},
{{0,1783,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,1779}, 0},	{{-2742,0,0,0}, 0},	{{1,1778,1,1783}, 312},
{{1,1,1,1763}, 0},	{{1,1,1,1}, 0},	{{1,1781,1757,1757}, 0},
{{1,1,1,1782}, 0},	{{0,0,0,1782}, 0},	{{1,1,1,0}, 0},
{{0,0,0,1781}, 0},	{{-5327,2,0,0}, 0},	{{-2703,1780,41,0}, 0},
{{0,0,0,0}, 275},	{{-5330,2,0,0}, 0},	{{-2690,-2,38,0}, 0},
{{1,0,1,0}, 275},	{{0,0,1777,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-2733,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 300},	{{0,1788,0,0}, 0},
{{-5303,0,68,1788}, 0},	{{1,1790,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,79,0,0}, 0},
{{-4,-4,-4,-4}, 0},	{{-2729,-22,-2902,0}, 0},	{{1,1784,-2903,0}, 0},
{{-2741,-2741,8,-2741}, 270},	{{-2732,3,-2905,0}, 0},	{{1,1782,-2906,0}, 0},
{{-2744,-2744,-2744,-2744}, 270},	{{1,1,1,0}, 275},	{{0,1781,0,0}, 0},
{{-3,-30,-2910,0}, 0},	{{-2747,49,-2684,0}, 0},	{{-2748,0,51,56}, 0},
{{-2911,47,0,0}, 0},	{{1,-34,0,0}, 0},	{{-2752,-2752,2,-2752}, 270},
{{-9,-36,0,0}, 0},	{{-2753,0,46,0}, 0},	{{1,-2739,1774,-2705}, 275},
{{-2739,-2739,-2739,1774}, 0},	{{-2701,-2701,-2701,-2701}, 0},	{{1,1,38,38}, 276},
{{-2677,-2677,-2677,-2677}, 277},	{{1,-2769,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1760}, 0},	{{0,1760,0,0}, 0},	{{1,3,-2742,-2723}, 275},
{{1,3,5,-2723}, 0},	{{-2742,1764,0,0}, 0},	{{-2725,1,-2725,-2725}, 0},
{{1,1764,0,0}, 0},	{{-2725,17,-2725,1764}, 0},	{{1,1773,1773,0}, 0},
{{1,1774,1,1773}, 0},	{{0,1774,0,0}, 276},	{{1,14,14,14}, 276},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-2701,-2701,-2701}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-2701,-2701,-2701}, 0},	{{-2701,0,0,0}, 291},
{{-2757,0,0,0}, 0},	{{1,1,1,1}, 0},	{{-5395,-5395,-5395,1762}, 0},
{{1,1,1,1}, 276},	{{-2714,-2714,-2714,-2714}, 0},	{{0,0,0,0}, 272},
{{-2741,-1,0,0}, 0},	{{0,0,0,1760}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1756}, 0},	{{0,1756,0,0}, 0},	{{0,0,0,1758}, 0},
{{1,1,1,1}, 0},	{{0,1757,0,0}, 0},	{{0,0,0,1757}, 0},
{{-2737,-75,-75,-75}, 272},	{{1,-76,-76,-76}, 0},	{{1,1764,1,-76}, 0},
{{-76,-76,-76,-76}, 276},	{{1,1,1763,1763}, 276},	{{-2733,1763,-2733,-2733}, 277},
{{0,0,0,0}, 281},	{{1,1,1,1}, 276},	{{-2736,1,-2736,-2736}, 0},
{{-2736,-2736,-2736,-2736}, 279},	{{0,0,0,1759}, 0},	{{1,1760,-4518,0}, 64},
{{1,0,0,0}, 0},	{{-2651,-2651,-2651,0}, 0},	{{-2721,0,-2300,0}, 0},
{{1,0,376,0}, 0},	{{1,11,1757,0}, 0},	{{0,0,1757,66}, 117},
{{1,16,0,0}, 0},	{{-4696,-4696,-4696,-4696}, 0},	{{1,1,26,26}, 0},
{{1,1,26,26}, 0},	{{1,1,26,26}, 0},	{{1,1,-2632,15}, 0},
{{-5351,-5238,0,0}, 0},	{{1,0,0,0}, 0},	{{-4541,-4541,-4541,-4541}, 0},
{{0,0,1747,0}, 0},	{{0,0,1746,0}, 197},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1746}, 0},
{{0,0,0,1746}, 0},	{{-2589,-2589,-2589,-2589}, 0},	{{0,0,1745,0}, 60},
{{-6416,-5250,0,0}, 0},	{{-5267,-5251,0,0}, 0},	{{-5254,-5252,0,1743}, 0},
{{1,0,0,0}, 0},	{{-5251,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2728,1739,11,-2696}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,6,13}, 0},	{{-2732,-5263,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2705,-5268,0,0}, 0},	{{-2706,-5269,0,-2662}, 0},	{{1,55,-4563,0}, 64},
{{0,1727,0,0}, 0},	{{-2656,0,-1881,0}, 0},	{{-5405,-5273,0,0}, 0},
{{-2722,-5274,0,0}, 0},	{{-2712,-5275,0,1720}, 0},	{{0,1709,-4569,0}, 64},
{{1,-5637,-5637,-5637}, 0},	{{-1870,-1870,1721,-1870}, 0},	{{1,-2702,-2702,0}, 0},
{{1,-2702,-2702,-2702}, 0},	{{1,-2702,0,0}, 0},	{{-3157,1724,-3157,-3157}, 0},
{{1,1,1,1}, 0},	{{0,1724,0,0}, 0},	{{-5645,-5645,74,-5645}, 0},
{{1,-5646,89,-5646}, 0},	{{1,1,1723,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1723}, 0},
{{0,1723,1,0}, 197},	{{1,1696,1696,1696}, 0},	{{1,1696,1696,1696}, 0},
{{1,1696,1696,1696}, 0},	{{-2640,-2640,-2640,-2640}, 0},	{{0,0,0,0}, 199},
{{1,-4760,-4760,-4760}, 0},	{{1,-4760,-4760,-4760}, 0},	{{1,-4760,-4760,-4760}, 0},
{{1,1,1,86}, 0},	{{1,86,1717,1717}, 0},	{{1,1717,-3176,-3176}, 0},
{{1,1,1,-3176}, 0},	{{-3176,-3176,-3176,-3176}, 53},	{{-5419,-5306,0,1717}, 0},
{{-2565,-2559,-3181,-3181}, 0},	{{1,-5414,-2770,-2770}, 0},	{{1,-5414,-5414,-2700}, 0},
{{1,-5414,-5414,-5414}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1713}, 0},
{{1,145,145,-419}, 0},	{{1,-419,-419,-419}, 4},	{{1,-419,-419,-419}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2547,-2547,-2547,-2547}, 0},
{{-4230,-5400,-5400,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,1,0}, 0},	{{1,0,0,0}, 0},	{{-2507,-2507,-2507,-2507}, 0},
{{1,0,0,0}, 0},	{{-1880,-1880,-1880,-1880}, 0},	{{1,616,0,0}, 0},
{{1,1,1,1}, 0},	{{-1871,-1871,-1871,0}, 0},	{{0,1696,0,0}, 202},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1697}, 0},	{{1,-4635,-4635,-4635}, 0},	{{1,-4635,-4635,-4635}, 0},
{{1,-4635,-4635,-4635}, 0},	{{1,1,1694,1698}, 0},	{{1,1,1,1700}, 0},
{{1,1700,17,17}, 0},	{{1,1700,17,17}, 81},	{{-2668,-2668,-2668,-2668}, 82},
{{0,0,-3222,0}, 90},	{{1,1,1,1}, 0},	{{-3218,1698,-3218,-3218}, 0},
{{1,-3218,-3218,-3218}, 0},	{{-3218,1698,-3218,-3218}, 0},	{{1,1661,1661,0}, 0},
{{0,1,1697,0}, 0},	{{0,0,0,0}, 191},	{{1,-4561,-4561,-4561}, 0},
{{1,-4561,-4561,-4561}, 0},	{{1,-4561,-4561,-4561}, 0},	{{1,1,-3229,-3229}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2684,-2684,-2684,-2684}, 0},	{{0,0,-3238,0}, 60},	{{1,-4562,-4562,-4562}, 0},
{{1,-4562,-4562,-4562}, 0},	{{1,-4562,-4562,-4562}, 0},	{{1,1,1,-3238}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-3238}, 0},	{{1,-3238,-3238,-3238}, 0},
{{-3238,-3238,-3238,-3238}, 94},	{{1,0,0,0}, 0},	{{0,1685,0,0}, 0},
{{1,-4546,-4546,-4546}, 0},	{{1,-4546,-4546,-4546}, 0},	{{1,-4546,-4546,-4546}, 0},
{{1,1690,1691,-3248}, 0},	{{-18,-18,-18,1691}, 110},	{{0,0,-3254,0}, 114},
{{0,0,0,1690}, 0},	{{-3251,-3251,-3251,1}, 194},	{{-3251,-3251,-3251,1689}, 0},
{{1,-2719,-2719,-2719}, 0},	{{1,-2719,-2719,-2719}, 0},	{{1,-2719,-2719,-2719}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-3257,-3257,-3257}, 0},
{{-80,1683,-80,-3257}, 0},	{{0,0,0,0}, 189},	{{1,1,1632,1632}, 0},
{{-84,-2633,-3261,-3261}, 0},	{{-2717,-32,-32,-32}, 0},	{{-32,1679,-32,-32}, 0},
{{1,-4518,-4518,-4518}, 0},	{{1,-4518,-4518,-4518}, 0},	{{1,-4518,-4518,-4518}, 0},
{{1,-3269,-3269,-3269}, 0},	{{-2712,-3269,-3269,-3269}, 0},	{{-3274,0,1676,0}, 0},
{{-3271,-3271,-3271,1}, 0},	{{1,-3271,-3271,-3271}, 0},	{{1,1,-3271,-3271}, 0},
{{1,1,1,1}, 0},	{{1,1,-3271,-3271}, 0},	{{1,1,1,1}, 0},
{{-4517,1689,-4517,-4517}, 0},	{{1,-6272,-6272,-6272}, 0},	{{1,-6272,-6272,-6272}, 0},
{{1,-6272,-6272,-6272}, 0},	{{1,1,1,1}, 0},	{{-515,-515,-515,1690}, 0},
{{1,-3282,-3282,-3282}, 0},	{{1,-3282,-3282,-3282}, 0},	{{-3282,1694,-3282,-3282}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2707,1694,-2707,-2707}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1700}, 0},
{{1,-5433,-2865,-2865}, 0},	{{1,-5433,-5433,-2648}, 0},	{{1,-5433,-5433,-5433}, 0},
{{1,1,1,1}, 0},	{{-2663,-2663,-2663,-2663}, 0},	{{1,-3302,-3302,-3302}, 0},
{{1,-3302,-3302,-3302}, 0},	{{-3302,1693,-3302,-3302}, 0},	{{1,-6218,-5020,-5020}, 0},
{{1,-6218,-6218,-4348}, 0},	{{1,-6218,-6218,-6218}, 0},	{{1,1,1,1}, 0},
{{-123,-123,-123,-123}, 0},	{{1,-3309,-3309,-3309}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2653,1684,-2653,-2653}, 0},
{{1,-5434,-5434,-5434}, 0},	{{1,-5434,-5434,-5434}, 0},	{{1,-5434,-5434,-5434}, 0},
{{1,1,1,1}, 0},	{{1,-553,-553,-553}, 0},	{{-553,-553,-553,1687}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2648,1684,-2648,-2648}, 0},	{{1,-5538,-5538,-5538}, 0},	{{1,-5538,-5538,-5538}, 0},
{{1,-5538,-5538,-5538}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-563}, 0},	{{-563,-563,-563,-563}, 4},	{{-2693,1,1,1683}, 0},
{{1,-565,-565,-565}, 4},	{{1,-565,-565,-565}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-565}, 0},	{{-565,-565,-565,-565}, 181},	{{-4,-570,-570,-570}, 0},
{{1,-6610,-6610,-6610}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-6610}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1266,1266,1266}, 0},	{{1,1266,1266,1266}, 0},
{{1,1,1,1}, 8},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 186},	{{0,0,0,1662}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1659}, 0},
{{0,0,0,1659}, 0},	{{0,1672,0,0}, 0},	{{-6640,-6640,-6640,1672}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1680}, 0},	{{-2591,96,-2116,0}, 0},
{{1,0,145,0}, 0},	{{1,1,1,1}, 214},	{{-2576,-2576,-2576,-2576}, 0},
{{1,0,-2544,0}, 0},	{{-2873,-2873,-2873,-2873}, 214},	{{1,0,-2546,0}, 0},
{{1,1,1,1}, 214},	{{-2558,-2558,-2558,-2558}, 0},	{{0,0,1671,0}, 0},
{{1,1,1,1}, 0},	{{1,-5403,-5403,-5403}, 0},	{{1,-5403,0,0}, 0},
{{0,0,0,1671}, 0},	{{1,-5469,-5469,-5469}, 0},	{{1,-5469,-5469,-5469}, 0},
{{-5469,-2655,-5428,1669}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 207},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-5368}, 0},	{{1,1,1,1}, 0},
{{1,-5368,-5368,-5368}, 0},	{{1,0,0,0}, 0},	{{-5368,0,0,1669}, 0},
{{1,68,-2607,0}, 0},	{{1,-2713,-2713,-2713}, 0},	{{1,1,-2713,-2713}, 0},
{{1,-5434,-5434,-5434}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-5434}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-2590,0,0}, 0},
{{1,0,1,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 248},
{{1,0,-2592,0}, 0},	{{-2671,-2671,1644,49}, 214},	{{1,1,1,1}, 0},
{{1,1,1,-2665}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2665}, 0},
{{1,1,1,1}, 0},	{{-2665,-2665,-2665,1641}, 0},	{{1,35,0,0}, 0},
{{1,0,0,0}, 207},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1632}, 0},	{{1,1,1,-2747}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2747}, 0},	{{1,1,2,2}, 0},
{{-2722,-2722,3,1628}, 0},	{{1,1,1628,1629}, 0},	{{0,1629,0,0}, 0},
{{-5461,1630,-5461,-5461}, 0},	{{1,1629,-5462,-5462}, 0},	{{1,-5462,-5462,-5462}, 0},
{{-6473,1628,-6473,-6473}, 215},	{{1,1635,-5464,-5464}, 0},	{{-6475,-6475,-6475,-6475}, 243},
{{1,0,0,0}, 0},	{{1,0,0,0}, 207},	{{0,0,0,0}, 242},
{{1,0,-2628,0}, 0},	{{1,1,1,1}, 214},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2188,-2188,-2188,-2188}, 0},	{{0,1624,0,0}, 0},	{{1,0,-2636,0}, 0},
{{0,0,0,0}, 214},	{{1,0,77,0}, 0},	{{-318,-318,-318,-318}, 0},
{{0,0,0,1620}, 0},	{{0,0,0,1620}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2}, 0},
{{-2719,-2992,0,1616}, 0},	{{-2993,-2993,0,1615}, 0},	{{1,1617,1617,0}, 0},
{{1,0,0,0}, 0},	{{0,0,1617,0}, 231},	{{-2715,1617,0,0}, 0},
{{1,1,0,0}, 213},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 229},
{{-2849,-2849,-2849,-2849}, 226},	{{1,0,-2683,0}, 0},	{{0,1585,0,0}, 214},
{{-3031,-3031,0,0}, 0},	{{1,1,1,1}, 218},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 221},	{{1,1,-2727,-2727}, 0},	{{1,-2727,-2727,-2727}, 0},
{{-2727,-2727,1,4}, 212},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,327,0,0}, 81},	{{1,1,1,1}, 0},	{{1,1568,1570,0}, 0},
{{1,0,0,0}, 81},	{{1,1,1,1}, 0},	{{0,0,0,1570}, 0},
{{1,1,-4882,-4882}, 0},	{{1,-4882,-4882,-4882}, 0},	{{-4882,-4882,0,0}, 212},
{{1,1,-4877,-4877}, 0},	{{1,-4877,-4877,-4877}, 0},	{{-4877,-4877,-4877,0}, 212},
{{1,1,-2721,-2721}, 0},	{{1,-2721,-2721,-2721}, 0},	{{-2721,-4888,0,0}, 212},
{{0,0,0,0}, 114},	{{0,0,0,1565}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 215},	{{0,1564,0,0}, 0},
{{-3,1563,0,0}, 0},	{{1,-2890,0,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1555}, 0},	{{1,1,-4824,-4824}, 0},	{{1,-4824,-4824,-4824}, 0},
{{-4824,0,0,0}, 212},	{{0,0,0,1552}, 0},	{{0,0,0,1552}, 0},
{{1,-2629,1556,-2629}, 0},	{{1,-416,-416,-416}, 0},	{{1,-416,-416,-416}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2629,-2629,-2629,1552}, 0},
{{1,0,-2316,34}, 108},	{{-2646,204,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2239}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1547}, 0},
{{1,-2623,-4809,-5031}, 0},	{{1,1,1,1}, 145},	{{1,1,1,-5031}, 0},
{{1,1,1,1}, 0},	{{1,1543,-5031,-1983}, 0},	{{1,-4914,0,0}, 0},
{{0,1543,0,0}, 0},	{{1,1,1,-2591}, 0},	{{1,1,1,1}, 0},
{{-4649,1,-4645,-4645}, 0},	{{1,-4642,-2942,0}, 0},	{{0,1539,-1892,0}, 0},
{{1,216,-4876,0}, 0},	{{-399,221,-399,-399}, 0},	{{1,1,1537,-2655}, 0},
{{-2655,-2265,0,0}, 0},	{{-2668,-2266,-2338,1536}, 108},	{{-2669,-2267,0,1536}, 0},
{{0,0,0,0}, 135},	{{0,0,0,1535}, 0},	{{-2661,-2661,-2661,-2661}, 0},
{{0,0,0,1534}, 0},	{{1,1534,202,-2519}, 0},	{{-2166,-2166,-2166,-2166}, 145},
{{1,1,-2068,-5055}, 0},	{{-5055,-5055,-5055,-5055}, 145},	{{-2666,0,0,0}, 114},
{{0,0,0,1530}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 145},
{{0,0,0,1528}, 0},	{{0,0,0,1528}, 0},	{{0,0,0,1528}, 0},
{{-6483,-6483,-6483,1531}, 0},	{{-6483,-6483,-6483,1531}, 0},	{{-3508,-3508,101,-3508}, 0},
{{1,-2516,101,-2516}, 0},	{{1,-464,-464,-464}, 0},	{{1,-464,-464,-464}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2516,-2516,-2516,1529}, 0},
{{1,-2511,-2506,0}, 108},	{{-2515,4,-2511,0}, 0},	{{1,0,-2512,0}, 0},
{{1,1,1,1}, 0},	{{-2512,-2512,1525,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1522}, 0},
{{-5418,-5418,1522,-5418}, 0},	{{1,-4861,1,-5083}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-5083}, 0},	{{1,1,1,1}, 0},	{{1,-5083,-5083,-2035}, 0},
{{1,-4966,0,0}, 0},	{{0,1516,0,0}, 0},	{{-6831,-6831,1516,-6831}, 0},
{{1,-5079,-6477,0}, 0},	{{1,-6507,-6507,-6507}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,-2443,1512,-2443}, 0},	{{1,1,1,-6522}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-6522,-6522,-6522,1512}, 0},
{{1,-5091,-6489,0}, 0},	{{1,-2576,-2576,-2576}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,-6534,-6534,-6534}, 0},	{{1,-6534,-6534,-6534}, 0},
{{1,-2601,-2428,-2601}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2601}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-6534,-6534,-6534,1501}, 0},
{{-2446,-6541,-6541,-6541}, 0},	{{1,0,1500,0}, 0},	{{1,1500,1501,0}, 0},
{{0,1141,0,0}, 0},	{{1,1,1500,-2568}, 0},	{{-2568,-2339,0,0}, 0},
{{-2603,-2340,-2412,1462}, 108},	{{-2604,-2341,0,1462}, 0},	{{1,6,6,0}, 0},
{{1,1,1,1}, 0},	{{1,1495,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1494}, 0},	{{1,1,1,0}, 103},	{{1,1,1,1}, 0},
{{0,1492,0,0}, 0},	{{-2,-2,-2,0}, 135},	{{1,1,1,1}, 0},
{{1,1489,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1488}, 0},
{{-2661,-2661,-2661,-2661}, 176},	{{0,0,0,1487}, 0},	{{1,-4739,0,0}, 0},
{{0,161,0,0}, 0},	{{-1,-5018,0,0}, 0},	{{-5373,-5373,1,-5373}, 0},
{{1,1,1,1}, 0},	{{-5373,-2770,-6560,1482}, 0},	{{1,-5132,-6530,0}, 0},
{{1,-6560,-6560,-6560}, 0},	{{1,0,0,0}, 0},	{{1,-6560,-6560,-6560}, 0},
{{1,1,1,1}, 0},	{{1,-6575,-6575,-6575}, 0},	{{1,-6575,-6575,-6575}, 0},
{{1,1,1,1}, 0},	{{1,-6575,-6575,-6575}, 0},	{{-6575,-6575,1484,-6575}, 0},
{{1,1,1,1}, 0},	{{-5385,-2782,-6572,-2494}, 0},	{{-6582,1,-6582,-6582}, 0},
{{1,-6582,-6582,-6582}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-6582}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-6582,-6582,-6582,1477}, 0},
{{-6582,-6582,-6582,1477}, 0},	{{-2613,-2613,-2613,-2613}, 0},	{{0,0,0,1476}, 0},
{{-3607,0,0,0}, 90},	{{-3608,0,0,0}, 60},	{{-2616,0,0,0}, 114},
{{-3604,-3604,-3604,1473}, 0},	{{0,0,0,1473}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,1470,0,0}, 0},
{{0,0,0,1474}, 0},	{{0,0,0,1474}, 0},	{{1,-3612,-3612,-3612}, 0},
{{1,-3612,-3612,-3612}, 0},	{{-3612,-3612,-847,0}, 58},	{{-2591,-2591,1,-4981}, 0},
{{1,1,-848,-848}, 0},	{{1,1,1,1}, 0},	{{-4981,-4981,1477,-4981}, 0},
{{-4981,-4981,-4981,-4981}, 160},	{{-6737,-6737,-6737,-6737}, 161},	{{1,-5174,-6572,0}, 0},
{{1,1,-6602,-6602}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-6617,-6617,-6617,180}, 0},	{{1,1,1,1}, 0},	{{-5397,-5384,-6609,-2531}, 0},
{{1,-5181,-6579,0}, 0},	{{1,-2531,-2531,-2531}, 0},	{{1,-2095,0,0}, 0},
{{1,1,1,1}, 0},	{{1,-2482,-2482,-2482}, 0},	{{1,-2482,-2482,-2482}, 0},
{{-2577,-2577,-2577,-2577}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-6624,-6624,-6624,1457}, 0},
{{-6624,-6624,-6624,1457}, 0},	{{-6625,-6625,-6625,1457}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-6632}, 0},
{{1,1,1,1}, 0},	{{-6632,-6632,-6632,1452}, 0},	{{-6632,-6632,-6632,1452}, 0},
{{-6633,-6633,-6633,1452}, 0},	{{-6634,-6634,-6634,1452}, 0},	{{-6635,-6635,-6635,1452}, 0},
{{-6635,-6635,-6635,1452}, 0},	{{-2495,4,5,0}, 0},	{{-2458,3,4,0}, 0},
{{0,0,-2511,1363}, 108},	{{0,0,0,1363}, 0},	{{0,0,0,0}, 52},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2356,-2356,-2356,-2356}, 0},
{{-6645,-6645,-6645,1457}, 0},	{{-2498,-2498,-2498,1457}, 0},	{{-2498,0,1457,0}, 0},
{{0,0,0,-2217}, 119},	{{1,1,1,1}, 0},	{{1,1,1,-2442}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1455}, 0},	{{0,0,0,1455}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-5073,-5073,-5073,2}, 0},	{{-5069,-5069,-5074,1}, 0},
{{1,0,0,0}, 0},	{{1,1,-5382,0}, 0},	{{0,0,0,1447}, 53},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1441}, 0},	{{-2483,-2483,1,0}, 0},
{{0,0,0,0}, 129},	{{1,1,1,-2720}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2720}, 0},	{{1,1,1,1}, 0},	{{-2720,-2720,-2720,1438}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,5}, 0},	{{0,0,0,1433}, 0},
{{-2491,1433,-2491,0}, 0},	{{1,1,1,1}, 0},	{{-2491,0,1435,0}, 0},
{{0,0,0,0}, 139},	{{-5123,-2488,0,0}, 114},	{{0,0,-2253,0}, 136},
{{0,0,-2254,0}, 138},	{{0,0,0,1432}, 0},	{{0,0,0,1432}, 0},
{{0,0,0,1432}, 0},	{{-3159,-3159,-3159,-3159}, 128},	{{0,0,0,1440}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-6704,-6704,-6704,1433}, 0},	{{0,0,0,1448}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1448}, 0},	{{1,1,1,1}, 120},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2446,-2446,0,0}, 0},
{{0,0,0,0}, 120},	{{-2167,-2167,-2167,-2167}, 120},	{{0,0,0,1436}, 0},
{{1,1,1,1}, 0},	{{-6074,-6074,-6074,1436}, 0},	{{-5655,1436,-5655,-5655}, 0},
{{0,0,0,1437}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 88},	{{-2432,1,1377,0}, 0},	{{-2432,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,1434,0,0}, 0},	{{-2432,1,1434,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 82},	{{0,0,0,1432}, 0},
{{1,-5874,1437,-5874}, 0},	{{1,1,1,1}, 0},	{{-6885,1436,0,0}, 0},
{{0,0,0,0}, 83},	{{-2267,1,0,0}, 0},	{{0,0,1441,0}, 72},
{{1,-2462,0,0}, 0},	{{1,1,-5669,-5669}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-6923,-6923,-6923,1437}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 79},
{{1,1,1,1}, 0},	{{0,0,0,1429}, 0},	{{1,0,1,0}, 0},
{{0,0,0,1428}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1427}, 0},
{{0,0,0,1427}, 0},	{{-5178,1427,-5178,0}, 0},	{{-5906,-5906,-5906,1430}, 0},
{{0,0,0,1439}, 0},	{{0,1448,0,0}, 0},	{{0,0,0,1448}, 0},
{{1,0,1448,0}, 0},	{{0,0,0,1448}, 0},	{{0,0,0,1448}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,1455,0}, 0},
{{1,1461,1461,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1461}, 0},	{{0,0,0,1461}, 0},	{{0,0,0,1463}, 0},
{{0,0,0,1476}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1475}, 0},
{{1,1,-6796,-6796}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-6796,-6796,-6796,1469}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1468}, 0},
{{0,0,0,1468}, 0},	{{-6799,-6799,-6799,1468}, 0},	{{-6800,-6800,-6800,1468}, 0},
{{0,0,0,1468}, 0},	{{-6802,-6802,-6802,1468}, 0},	{{-6803,-6803,-6803,1468}, 0},
{{-6803,-6803,-6803,1468}, 0},	{{0,0,0,1469}, 0},	{{0,0,0,1469}, 0},
{{-6806,-6806,-6806,1469}, 0},	{{0,0,0,1470}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1469}, 0},	{{0,0,0,1469}, 0},	{{-6164,-6164,-6164,1469}, 0},
{{-6812,-6812,-6812,1469}, 0},	{{1,-6817,-6817,-6817}, 0},	{{-6817,-6817,-6817,1481}, 0},
{{-6815,-6815,-6815,1481}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1484}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1481,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,1481}, 0},
{{-6824,-6824,-6824,1481}, 0},	{{-6825,-6825,-6825,1494}, 0},	{{1,-5435,0,0}, 0},
{{1,1,1,1}, 5},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1503,1480,1512}, 0},	{{1,1480,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1519}, 0},	{{0,-4923,0,0}, 20},	{{0,0,0,1518}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1063}, 0},	{{1,-7109,-7109,0}, 0},	{{1,-7109,-7109,-7109}, 0},
{{1,1063,1063,1063}, 8},	{{1,1,1,1}, 0},	{{1,1063,1063,1063}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-7406,-7406,-7406,1515}, 0},	{{0,0,0,1515}, 0},	{{0,0,0,1532}, 0},
{{-2257,-2257,-2257,-2257}, 0},	{{-2261,-2261,28,0}, 0},	{{1,-2262,27,0}, 0},
{{1,0,12,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2197}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2197}, 0},	{{1,0,0,0}, 0},
{{0,0,0,1527}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 509},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{0,1523,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1526,1527,0}, 0},	{{1,1,1,1529}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 517},	{{1,-2277,-2277,-2277}, 0},
{{0,0,1526,0}, 0},	{{1,1,1,-2279}, 0},	{{1,1,1526,0}, 0},
{{0,1526,0,0}, 0},	{{1,-2239,4,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-2271,-2271,-2271,-2220}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 509},	{{-2178,0,-2,0}, 0},	{{1,0,1522,0}, 0},
{{-2283,-2283,-2283,-2283}, 509},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 514},	{{0,0,1522,0}, 0},	{{1,0,-9,0}, 0},
{{1,0,0,0}, 0},	{{0,1520,0,0}, 0},	{{1,-4946,-2277,-4946}, 0},
{{1,1,1,1}, 509},	{{0,1518,-2271,0}, 0},	{{1,-4949,-4949,-4949}, 0},
{{1,1,1,1}, 0},	{{-2257,-2257,1521,0}, 0},	{{1,-4952,-4952,-4952}, 0},
{{-4952,-4952,-4952,-4952}, 509},	{{1,1,1,1}, 0},	{{-2291,1519,-42,-2240}, 0},
{{0,0,0,1519}, 0},	{{1,1,1,1}, 0},	{{-4883,12,0,0}, 0},
{{1,1,1,1}, 0},	{{-2287,1516,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 508},	{{0,0,0,0}, 427},
{{0,0,0,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,1503,0,0}, 0},	{{0,0,1507,0}, 0},	{{0,1507,0,0}, 0},
{{0,0,0,1517}, 0},	{{0,1517,0,0}, 0},	{{-4933,-2262,-2219,0}, 0},
{{1,-2263,1526,0}, 0},	{{-4959,-4959,1528,-4959}, 0},	{{-4936,8,29,0}, 0},
{{-4937,7,-2223,0}, 0},	{{1,-2254,19,-4973}, 0},	{{1,-2254,-2254,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-4973}, 0},	{{1,1,1,1}, 0},
{{-4973,-4973,-4973,1524}, 0},	{{1,1,1,1}, 0},	{{1,1,6,6}, 0},
{{1,-2244,0,0}, 0},	{{-2244,-2244,-2244,0}, 502},	{{0,0,-4900,1531}, 0},
{{-2282,-2282,-2282,-2282}, 476},	{{0,0,0,1532}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 502},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{-2174,-2174,-2174,0}, 0},	{{-2272,-2272,-2272,0}, 476},
{{1,0,-2156,0}, 0},	{{-2156,0,0,0}, 500},	{{-4960,-2261,5,0}, 0},
{{-2194,-2261,-2261,-2261}, 0},	{{0,0,3,0}, 0},	{{1,1,1,-2263}, 0},
{{-2263,-2263,3,0}, 0},	{{1,1518,0,0}, 482},	{{0,0,0,1518}, 0},
{{-2241,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,9,0}, 0},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1505}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 492},
{{1,0,-2183,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1491}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,1484,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{1,0,0,0}, 0},
{{0,0,1481,0}, 0},	{{-2309,-2309,3,0}, 0},	{{-2304,-2304,-2304,1491}, 0},
{{0,0,0,1491}, 0},	{{-2199,0,0,0}, 0},	{{1,-2231,-2231,-2231}, 0},
{{0,0,0,1498}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1491}, 0},	{{0,0,0,0}, 483},	{{0,0,0,1490}, 0},
{{1,1,1,0}, 0},	{{-2201,0,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1483}, 0},	{{0,0,0,1483}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{0,1482,0,0}, 0},
{{0,1482,0,0}, 0},	{{1,0,1,0}, 0},	{{1,0,0,0}, 0},
{{0,1483,0,0}, 0},	{{1,-2347,0,0}, 0},	{{1,0,0,0}, 0},
{{0,1482,0,0}, 0},	{{-5035,1484,-5035,-5035}, 0},	{{0,0,0,1484}, 0},
{{-5036,-2350,0,1484}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1475}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1473,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,1471}, 0},	{{-2147,50,51,0}, 415},	{{1,54,58,0}, 0},
{{1,-1770,0,0}, 0},	{{1,1,0,0}, 450},	{{0,0,1467,0}, 0},
{{-2143,-1772,65,0}, 363},	{{-2110,-2104,2,0}, 415},	{{0,-2105,1,0}, 415},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,92,0,0}, 0},
{{-2188,0,0,0}, 430},	{{1,1,1,0}, 430},	{{-2097,-2097,-2097,-2097}, 0},
{{0,0,1461,0}, 0},	{{0,-1549,0,0}, 442},	{{0,0,0,1460}, 0},
{{-2093,-2093,-2093,-2093}, 0},	{{-2090,-2090,-2090,-2090}, 0},	{{0,0,1460,0}, 0},
{{-2188,1,1461,-4958}, 0},	{{1,1,1,1}, 0},	{{-4958,1,1479,-4958}, 0},
{{1,-4958,-4958,-4958}, 0},	{{1,1,1,1}, 0},	{{1,1481,1481,0}, 0},
{{1,-4958,-4958,0}, 0},	{{1,1,1,1}, 435},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 454},	{{-2074,-2074,-2074,-2074}, 0},	{{-2055,-2055,-2055,-2055}, 0},
{{1,9,-2173,0}, 0},	{{-2188,1463,0,0}, 423},	{{-2193,147,-2175,0}, 369},
{{-2191,230,-2176,0}, 0},	{{-2189,230,11,0}, 0},	{{-2153,-2147,0,0}, 369},
{{-2188,0,20,0}, 363},	{{1,1,1,-42}, 0},	{{-42,-42,-42,-42}, 446},
{{-2191,145,17,0}, 363},	{{-41,-41,-41,0}, 0},	{{1,0,15,0}, 363},
{{1,1,1,1}, 393},	{{1,1,1,0}, 0},	{{0,0,0,245}, 0},
{{1,-2187,1471,0}, 0},	{{0,0,0,0}, 452},	{{1,1,1,1}, 0},
{{1,1,-2128,-2128}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2128}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-2128,1464,0}, 0},
{{1,0,1,0}, 353},	{{0,0,0,0}, 445},	{{0,0,0,0}, 397},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-4983,-7037,0}, 0},
{{1,-4983,0,0}, 0},	{{1,-7037,-2074,-7037}, 0},	{{-7037,1,0,0}, 345},
{{1,1,1,1}, 424},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 444},	{{1,1,1,1}, 0},
{{-5048,1431,-5048,-5048}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 436},	{{-5067,-5067,-5067,-5067}, 427},	{{1,1,1,1}, 0},
{{1,1,1423,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 380},	{{1,1,1,1}, 0},
{{-2201,1416,-2201,-2201}, 0},	{{-1653,-1653,1416,-1653}, 0},	{{1,1,1,1}, 0},
{{-2196,1416,-2196,-2196}, 0},	{{0,0,0,1416}, 0},	{{1,1,1,1}, 0},
{{-2195,1415,-2195,-2195}, 0},	{{0,0,0,1415}, 0},	{{1,1,1,1}, 0},
{{-2192,1414,-2192,-2192}, 0},	{{1,1,1,1}, 0},	{{1,-276,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 434},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,1404,0}, 0},
{{1,2,0,0}, 427},	{{-2194,-2194,-2194,1408}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-2195,-2195,0,0}, 0},	{{-2195,-2195,-2195,-2195}, 366},	{{-5083,-5083,-5083,-5083}, 427},
{{1,1,1,1}, 0},	{{-2180,1411,-2180,-2180}, 0},	{{-2175,-2175,-2175,-2175}, 357},
{{0,0,0,0}, 428},	{{1,1,1,1}, 0},	{{-2164,1408,-2164,-2164}, 0},
{{-5081,-5081,-5081,-5081}, 427},	{{-5075,1,-5075,-5075}, 0},	{{-5075,-5075,-5075,-2157}, 427},
{{-2157,-2157,0,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,1399,0}, 0},	{{-5062,-5062,-5062,0}, 427},	{{-5057,-5057,-5057,0}, 427},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1391}, 0},
{{0,-129,0,0}, 415},	{{1,0,0,0}, 0},	{{0,1390,0,0}, 0},
{{-5000,1393,-5000,-5000}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-5000}, 0},
{{1,1,1,1}, 0},	{{-5000,-5000,0,1396}, 0},	{{0,-2285,0,0}, 415},
{{1,1,1,0}, 0},	{{0,0,1405,0}, 0},	{{0,3,0,0}, 369},
{{0,86,0,0}, 0},	{{-2151,86,-1934,0}, 0},	{{-1967,0,-123,0}, 363},
{{1,0,1,0}, 0},	{{0,0,0,1404}, 0},	{{1,0,0,0}, 0},
{{0,1404,0,0}, 0},	{{1,1,1,1}, 0},	{{-88,-88,-88,-88}, 0},
{{-5149,1403,-5149,-5149}, 0},	{{1,0,1,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1406}, 0},	{{1,1,1,1}, 0},
{{1,1,-5007,-5007}, 0},	{{1,1404,-2127,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-5153}, 0},	{{1,-5153,-5153,-5153}, 0},	{{-5007,1404,-5007,-5007}, 0},
{{-2115,-2420,9,-2420}, 363},	{{0,0,1405,0}, 0},	{{-2117,9,7,-2422}, 363},
{{-2124,90,-1991,0}, 0},	{{-4992,45,0,0}, 0},	{{1,0,0,0}, 404},
{{1,1,1,1}, 0},	{{0,1408,0,0}, 0},	{{0,0,0,1408}, 0},
{{-2428,-2590,0,0}, 397},	{{0,0,1407,0}, 0},	{{1,46,-24,-24}, 0},
{{1,1,-113,-113}, 0},	{{1,1,1,-113}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,46}, 0},
{{1,1,-2620,-2620}, 0},	{{-2620,0,-2524,0}, 380},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{-1798,-1798,-1798,0}, 0},
{{1,1,1,1}, 0},	{{0,1395,1396,0}, 0},	{{0,0,0,1397}, 0},
{{1,1397,1400,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,1400,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,1397}, 0},	{{0,0,0,1398}, 0},
{{-2071,-2621,13,-2621}, 363},	{{1,1,30,30}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1395}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 399},
{{-2080,8,4,-2630}, 363},	{{0,0,0,0}, 404},	{{1,1,1,1}, 0},
{{0,0,0,1391}, 0},	{{-2633,-2633,0,0}, 397},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{-1899,0,0,0}, 0},	{{1,1,-69,-69}, 0},
{{1,1,-158,-158}, 0},	{{1,1,1,-158}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,-2637,-2637}, 0},	{{0,0,-2569,0}, 380},	{{-2051,-79,-207,0}, 363},
{{1,0,-208,0}, 363},	{{0,0,0,0}, 393},	{{-2056,25,-2056,0}, 0},
{{0,-20,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-28,-28,-28,-28}, 0},
{{1,-4876,0,0}, 0},	{{-1933,-1933,-7188,-7188}, 399},	{{1,1,1,1}, 0},
{{1,-1864,-1864,-1864}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-1864}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1864,1360,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{-1862,-1862,-1862,0}, 399},	{{1,1,1,0}, 0},	{{0,0,0,0}, 396},
{{-1838,-1838,-1838,-1838}, 404},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1347}, 0},	{{0,0,0,1347}, 0},
{{0,0,0,1347}, 0},	{{1,-5236,0,0}, 0},	{{-2034,51,-4664,-4664}, 392},
{{1,1,1,1}, 358},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1831,-1831,-1831,-1831}, 0},
{{1,0,0,0}, 0},	{{-2011,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1342}, 0},	{{0,0,0,1342}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,0,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,1335}, 0},	{{0,0,0,0}, 374},	{{-7226,-7226,-7226,1334}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1326}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1325}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,0}, 0},
{{-1951,-1951,-1951,0}, 0},	{{-1951,-1951,-1951,-1951}, 366},	{{0,0,0,1319}, 0},
{{0,0,0,1319}, 0},	{{0,0,0,1319}, 0},	{{0,0,0,1319}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 382},	{{-2084,1,-4726,0}, 0},
{{-4656,-4656,-4656,-4656}, 354},	{{1,-1874,-4706,-4706}, 0},	{{1,-1874,-4706,-4706}, 0},
{{-1874,0,-1851,0}, 356},	{{0,0,0,1312}, 0},	{{0,0,0,1313}, 0},
{{1,0,0,0}, 0},	{{0,1313,0,0}, 0},	{{-7124,-7124,-7124,1317}, 0},
{{-7079,-7079,-7079,1329}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,1325,0,0}, 0},
{{0,0,0,1333}, 0},	{{0,0,0,1333}, 0},	{{-1841,1334,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,1326}, 0},
{{0,1324,0,0}, 0},	{{0,0,1325,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1264,-1264,-1264,-1264}, 0},
{{0,0,0,1319}, 0},	{{0,0,0,1319}, 0},	{{0,0,0,1319}, 0},
{{1,-4451,-4451,0}, 0},	{{1,1,1,-4451}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,1322,0,0}, 0},
{{1,1,1,1}, 0},	{{1,-4456,-4456,-4456}, 0},	{{1,-4456,-4456,-4456}, 0},
{{1,1,1,1}, 0},	{{-1869,1318,-1869,-1869}, 0},	{{-1713,1318,-1713,-1713}, 254},
{{-1759,1320,-1759,-1759}, 254},	{{-7996,-1780,-7996,-7996}, 254},	{{-4487,1321,-4487,-4487}, 0},
{{1,1315,-38,-38}, 0},	{{1,-4450,-4450,-4450}, 0},	{{-1781,-1781,-1781,1327}, 0},
{{1,-41,-41,-41}, 0},	{{1,-4559,-4559,-4559}, 0},	{{1,-1784,-1784,-41}, 0},
{{1,-1784,-1784,-1784}, 0},	{{1,1318,1,1318}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,-4559,-4559}, 0},	{{-4559,-4559,-4559,1324}, 0},
{{-8000,-8000,-8000,-8000}, 264},	{{0,1323,0,0}, 0},	{{1,-8013,-8013,-8013}, 0},
{{1,-8013,-8013,-8013}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-8013,-8013,-8013,1322}, 0},	{{1,0,0,0}, 0},	{{0,1327,0,0}, 0},
{{0,1334,0,0}, 0},	{{0,1334,0,0}, 0},	{{-4535,1338,-4535,-4535}, 0},
{{0,0,0,0}, 161},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 265},	{{-8025,-8025,-8025,1324}, 0},
{{-8025,-8025,-8025,1324}, 0},	{{0,0,0,1331}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,-8038,-8038,0}, 0},	{{1,1,1,-8038}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-8038,-8038,-8038,1332}, 0},
{{0,0,0,1332}, 0},	{{-8038,-8038,-8038,1339}, 0},	{{1,-8038,-8038,-8038}, 0},
{{1,1,1,1}, 0},	{{1,-7032,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1339}, 0},	{{0,0,0,1339}, 0},	{{1,1,1,6}, 0},
{{1,1,1,1}, 0},	{{1,10,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1350}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-4,-4,-4,-4}, 0},	{{1,-2,-2,-2}, 0},	{{1,-2,-2,-2}, 0},
{{-1756,-7,-7,-7}, 0},	{{0,0,0,1344}, 0},	{{-8,-8,-8,1344}, 0},
{{-4713,-4713,-4713,1344}, 0},	{{0,0,0,-1757}, 309},	{{0,0,0,1343}, 0},
{{1,3,0,0}, 0},	{{0,1344,0,0}, 270},	{{-1744,1344,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 325},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,1333,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,1332,0}, 0},
{{1,1336,1,27}, 312},	{{1,1339,1,7}, 0},	{{1,1,1,1}, 0},
{{1,1340,1,1}, 0},	{{-1755,-1755,-1755,-1755}, 0},	{{-1771,0,0,0}, 0},
{{1,1338,1,21}, 312},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-5,-5,-5,-5}, 0},	{{0,1337,0,17}, 312},	{{0,1341,0,0}, 0},
{{1,-1776,-1776,0}, 0},	{{1,6,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1337}, 0},	{{1,0,0,0}, 0},	{{0,0,0,59}, 0},
{{0,0,0,0}, 322},	{{1,1,1,1323}, 0},	{{1,1,1,1}, 0},
{{1,1332,1315,1315}, 0},	{{1,1,1,1333}, 0},	{{0,0,0,1333}, 0},
{{0,0,0,0}, 321},	{{1,-1779,-1779,2}, 0},	{{0,0,0,1331}, 0},
{{0,0,0,1331}, 0},	{{0,0,0,1331}, 0},	{{0,0,0,1331}, 0},
{{1,0,1331,0}, 275},	{{0,0,0,1331}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 301},	{{0,1310,0,0}, 0},
{{1,1310,0,0}, 0},	{{1,1,1,1}, 0},	{{0,1310,0,0}, 0},
{{-1788,-1788,-1788,-1788}, 272},	{{-27,0,0,0}, 275},	{{1,-1779,-1779,0}, 275},
{{-1128,1,0,0}, 0},	{{1,1306,0,0}, 0},	{{0,0,0,1306}, 0},
{{-4512,1315,-4512,-4478}, 0},	{{-4478,1315,0,0}, 0},	{{0,0,0,1317}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,1311,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,442,0}, 0},
{{0,0,0,1323}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1331}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1331}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,1331}, 0},	{{1,1,1,1}, 0},
{{0,2,0,0}, 0},	{{-1758,1329,-1758,-1758}, 276},	{{0,0,0,0}, 296},
{{1,-4565,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 290},
{{0,0,0,1325}, 0},	{{0,0,0,1327}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 286},	{{0,0,0,1324}, 0},
{{0,1325,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,1324}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1318}, 0},	{{1,1,1,1}, 276},
{{-4495,1,-4495,-4495}, 0},	{{-4495,-4495,-4495,-4495}, 281},	{{1,1,1,1}, 0},
{{0,1314,0,0}, 0},	{{1,0,0,0}, 0},	{{-3578,-3578,-3578,-3578}, 0},
{{0,28,1,0}, 197},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1744,-1744,-1744,-1744}, 0},	{{0,0,0,1}, 194},
{{0,0,0,1308}, 0},	{{0,0,78,0}, 0},	{{1,0,0,0}, 0},
{{-4214,0,0,0}, 0},	{{-4466,-6997,0,26}, 0},	{{0,0,0,1304}, 0},
{{1,-3590,-3590,-3590}, 0},	{{1,-3590,-3590,-3590}, 0},	{{1,-3590,-3590,-3590}, 0},
{{1,1,1,1306}, 0},	{{1,1,1,1306}, 0},	{{1,-4877,-4877,-4877}, 0},
{{-4877,-4877,-4877,-4877}, 81},	{{1,1,1,1}, 0},	{{-4880,1303,-4880,-4880}, 0},
{{1,1,1,0}, 0},	{{0,0,37,0}, 0},	{{1,-1721,-1721,-1721}, 0},
{{1,-1721,-1721,-1721}, 0},	{{1,-1721,-1721,-1721}, 0},	{{-4888,-4888,-4888,1299}, 0},
{{0,0,0,0}, 119},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,1295,0,0}, 0},	{{-1715,-4892,-4892,-4892}, 0},
{{1,-1572,-4892,-4892}, 0},	{{1,1,1,1}, 0},	{{-4892,1292,-4892,-4892}, 0},
{{1,0,0,0}, 0},	{{0,0,1292,0}, 0},	{{-1711,-1567,-1567,1292}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1292}, 0},	{{0,0,0,1292}, 0},
{{1,1,1,1294}, 0},	{{1,1294,-4906,-4906}, 0},	{{1,1294,-4906,-4906}, 81},
{{-4906,-4906,-4906,-4906}, 82},	{{1,1,1,1294}, 0},	{{1,1294,-4910,-4910}, 0},
{{-3,-4910,-4910,-4910}, 81},	{{-1698,1,1295,-1682}, 0},	{{-1698,-1682,-1682,-1682}, 0},
{{1,1,1,1}, 0},	{{-4367,1295,-4912,-4912}, 0},	{{1,1268,1268,-4915}, 0},
{{-4915,1,1294,-4915}, 0},	{{-4915,-4915,-4915,-4915}, 191},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 192},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1279}, 0},	{{-1707,-1707,-1707,-1707}, 110},	{{-4938,-4938,-4938,-4938}, 110},
{{-1708,-1708,-1708,1277}, 0},	{{0,0,0,1277}, 0},	{{-4939,-4939,-4939,1277}, 0},
{{-4939,-4939,-4939,-4939}, 189},	{{1,1,1,1}, 0},	{{1,1,-1620,-1620}, 0},
{{-1620,-1620,-1620,-1620}, 54},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 190},
{{1,-6205,-6205,-6205}, 0},	{{1,-6205,-6205,-6205}, 0},	{{1,-6205,-6205,-6205}, 0},
{{1,1,1,1}, 0},	{{1,1,-2203,-2203}, 0},	{{-2203,-2203,-2203,1249}, 0},
{{1,-2204,-2204,-2204}, 0},	{{1,-2204,-2204,-2204}, 0},	{{1,-2204,-2204,-2204}, 0},
{{1,1,1,1}, 0},	{{1,-2204,-2204,-2204}, 0},	{{1,1,1,1}, 0},
{{-2204,-2204,-2204,1243}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1689,1243,-1689,-1689}, 0},	{{1,-4400,-4400,-4400}, 0},	{{1,-4400,-4400,-4400}, 0},
{{1,-4400,-4400,-4400}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,-2219,-2219}, 0},	{{1,1,-2219,-2219}, 0},
{{1,-2219,-2219,-2219}, 44},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-4400,1234,-4400,-4400}, 0},	{{0,0,0,1244}, 0},	{{-4994,-4994,-4994,1244}, 0},
{{1,-4336,-4336,-4336}, 0},	{{1,-4336,-4336,-4336}, 0},	{{1,-4336,-4336,-4336}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2236}, 0},	{{1,-2236,-2236,-2236}, 0},	{{-2236,-2236,-2236,-2236}, 22},
{{-2239,-2239,-2239,1236}, 0},	{{1,-4331,-4331,-4331}, 0},	{{1,-4331,-4331,-4331}, 0},
{{1,-4331,-4331,-4331}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2246,-2246,1230,-2246}, 0},	{{1,-2247,-2247,-2247}, 0},
{{1,-2247,-2247,-2247}, 0},	{{1,-1681,1,-1681}, 0},	{{1,-1681,-1681,-2247}, 0},
{{1,1,1,1}, 181},	{{-2247,-2247,-2247,1225}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1222}, 0},	{{0,0,0,1222}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,1209}, 0},	{{0,0,0,0}, 20},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 8},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1193}, 0},	{{0,0,0,1193}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,1190}, 0},
{{0,0,0,1190}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 207},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,1}, 0},
{{0,0,0,1179}, 0},	{{1,1,1,-4314}, 0},	{{1,1,1,1}, 0},
{{-4314,-4314,1177,-4314}, 0},	{{1,-1589,0,0}, 0},	{{1,-4305,0,0}, 207},
{{0,0,0,0}, 246},	{{0,0,0,1175}, 0},	{{-4235,5,-7086,-7086}, 0},
{{0,1174,0,0}, 0},	{{-1528,1173,0,0}, 0},	{{1,1173,0,0}, 0},
{{0,0,0,0}, 243},	{{-1625,-1625,-7090,-7090}, 0},	{{1,-8100,0,0}, 0},
{{1,1,1,1}, 54},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,1164}, 0},	{{-3513,-3513,-3513,-3513}, 243},	{{0,0,0,0}, 226},
{{0,0,0,1162}, 0},	{{0,0,0,1162}, 0},	{{1,3,3,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 231},	{{1,0,0,0}, 0},
{{0,0,0,0}, 233},	{{0,1157,0,0}, 0},	{{0,0,0,0}, 228},
{{0,0,1163,0}, 0},	{{1,0,0,0}, 0},	{{-1239,-1239,-1239,-1239}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1162}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1162}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,1160}, 0},
{{-1561,0,0,0}, 0},	{{0,0,0,0}, 216},	{{0,0,0,0}, 209},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1153}, 0},	{{-4184,1154,0,0}, 114},
{{0,0,0,-1518}, 119},	{{0,0,0,1157}, 0},	{{1,-6456,0,0}, 0},
{{0,2,0,0}, 0},	{{0,0,0,1155}, 0},	{{0,0,0,1156}, 0},
{{-4191,-3801,0,0}, 114},	{{0,0,0,0}, 136},	{{0,0,0,0}, 138},
{{0,0,0,1154}, 0},	{{0,0,0,1157}, 0},	{{-1331,-1331,-1331,-1331}, 145},
{{0,0,0,1159}, 0},	{{0,0,0,1162}, 0},	{{0,0,0,1164}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,219,1164}, 0},
{{-1235,225,1165,0}, 0},	{{-8013,-8013,-8013,1170}, 0},	{{1,-6623,0,0}, 0},
{{1,1,1,1}, 5},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-1187,315,292,0}, 0},	{{-5037,-5037,-5037,-1432}, 119},	{{-4036,-4036,1165,-4036}, 0},
{{0,0,0,1165}, 0},	{{0,0,0,1165}, 0},	{{0,0,0,1165}, 0},
{{-8346,-7006,-8023,1166}, 0},	{{1,1,1,-8033}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-8033,-8033,-8033,1164}, 0},	{{-8033,-8033,-8033,1164}, 0},
{{-8034,-8034,-8034,1164}, 0},	{{-6448,1164,1165,-6448}, 0},	{{0,1165,0,0}, 0},
{{0,1167,0,0}, 0},	{{-4067,-3838,0,0}, 114},	{{-1493,-1493,-1493,-1493}, 176},
{{0,0,0,1168}, 0},	{{0,0,0,0}, 176},	{{0,0,0,1167}, 0},
{{0,0,0,1167}, 0},	{{1,-6613,-8011,0}, 0},	{{1,-8041,-8041,-8041}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,-8056,-8056}, 0},
{{1,-8056,-8056,-8056}, 0},	{{1,-8056,-8056,-8056}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-8056}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-8056,-8056,-8056,1159}, 0},	{{1,1,1,1}, 0},	{{-8058,-8058,-8058,1158}, 0},
{{-8058,-8058,-8058,1158}, 0},	{{-8058,-8058,-8058,1158}, 0},	{{0,0,0,1160}, 0},
{{-5076,-5076,-5076,1163}, 0},	{{0,0,0,1166}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 165},	{{0,0,0,1164}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,1160,0}, 0},	{{1,0,1164,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1164}, 0},
{{-6457,-6457,-6457,-6457}, 161},	{{-8080,-8080,-8080,1163}, 0},	{{-8080,-8080,-8080,1163}, 0},
{{-8081,-8081,-8081,1164}, 0},	{{-8083,-8083,-8083,1166}, 0},	{{-8083,-8083,-8083,1166}, 0},
{{-8084,-8084,-8084,1167}, 0},	{{-8085,-8085,-8085,1174}, 0},	{{-8086,-8086,-8086,1181}, 0},
{{1,-6696,0,0}, 0},	{{1,1,1,1}, 5},	{{1,1165,1165,1165}, 0},
{{1,1,1,1}, 0},	{{1,1165,1165,1165}, 0},	{{1,1165,1165,1165}, 0},
{{1,770,770,770}, 0},	{{1,1,1,1}, 155},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1181}, 0},	{{-8101,-8101,-8101,1181}, 0},
{{-3954,0,62,0}, 0},	{{1,0,1181,0}, 0},	{{1,1,1,1}, 0},
{{0,1180,0,0}, 0},	{{0,0,0,1180}, 0},	{{0,0,0,1180}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1182}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,1179,0,0}, 0},
{{-3643,-3836,0,0}, 0},	{{0,0,0,1189}, 0},	{{1,1,1,1}, 0},
{{1,1085,1085,0}, 0},	{{1,1,1,1187}, 0},	{{0,0,0,1187}, 0},
{{1,1,1,0}, 0},	{{0,0,0,1186}, 0},	{{0,0,0,1186}, 0},
{{0,0,0,1189}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1190,1190,1190}, 0},	{{1,1190,110,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1185}, 0},	{{0,0,0,1185}, 0},
{{1,-8136,-8136,-8136}, 0},	{{1,-8136,-8136,-8136}, 0},	{{1,-6746,0,0}, 0},
{{1,0,0,0}, 5},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1172}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1171}, 0},
{{0,0,0,1171}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1178}, 0},
{{-7509,-7509,-7509,1178}, 0},	{{1,1,1,1}, 0},	{{-7090,-7090,-7090,1177}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{-34,75,75,0}, 0},	{{0,0,0,0}, 86},	{{0,0,1120,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1166}, 0},
{{-8321,-8321,-8321,-8321}, 85},	{{1,1,1,1}, 54},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1158}, 0},
{{0,0,0,1158}, 0},	{{1,1,-8359,-8359}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-8359,-8359,-8359,1153}, 0},	{{0,0,0,1153}, 0},
{{0,0,0,1153}, 0},	{{0,0,0,1153}, 0},	{{0,0,0,0}, 91},
{{1,1,1,1}, 56},	{{1,1,1,0}, 0},	{{1,1,1,1151}, 0},
{{0,0,0,1151}, 0},	{{1,1,1,1}, 0},	{{1,-8346,0,0}, 0},
{{1,1,1,1}, 54},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,1142}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1133}, 0},
{{0,1133,0,0}, 0},	{{0,0,0,1133}, 0},	{{0,0,0,1133}, 0},
{{0,0,0,1133}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,8,0}, 0},	{{1,14,14,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1124}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1118}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1113}, 0},
{{0,0,0,1113}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 55},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1097}, 0},
{{0,0,0,1097}, 0},	{{0,0,0,1102}, 0},	{{-8264,-8264,-8264,1102}, 0},
{{0,0,0,1102}, 0},	{{0,0,0,0}, 49},	{{-8266,-8266,-8266,1101}, 0},
{{-8267,-8267,-8267,1102}, 0},	{{0,0,0,1103}, 0},	{{-8269,-8269,-8269,1104}, 0},
{{-8270,-8270,-8270,1105}, 0},	{{1,-6880,0,0}, 0},	{{-1444,-1444,-1444,-1444}, 46},
{{0,0,0,1104}, 0},	{{0,0,0,1105}, 0},	{{1,-6884,0,0}, 0},
{{0,0,0,0}, 37},	{{0,0,0,1104}, 0},	{{0,0,0,1108}, 0},
{{0,0,0,1108}, 0},	{{-7632,-7632,-7632,-7632}, 40},	{{1,-6890,0,0}, 0},
{{1,1,1,1}, 5},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,25,0}, 0},	{{1,25,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1099}, 0},	{{-8297,-8297,-8297,1099}, 0},	{{1,-6905,0,0}, 0},
{{1,1,1,1}, 5},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-1469,-14,10,0}, 0},	{{0,0,0,1094}, 0},	{{1,0,0,0}, 0},
{{0,0,0,1105}, 0},	{{0,0,0,1105}, 0},	{{1,-6914,0,0}, 0},
{{1,1,1,1}, 5},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1092}, 0},	{{1,-6928,0,0}, 0},	{{1,1,1,1}, 5},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1088,1097,1106}, 0},
{{1,-13,0,0}, 0},	{{1,-1492,-1492,-1492}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1106}, 0},
{{1,-22,0,0}, 0},	{{1,1,-46,-46}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1098}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1083}, 0},	{{0,0,0,1084}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1072}, 0},
{{-8920,-8920,-8920,1073}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1056}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1052}, 0},
{{0,0,0,1053}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 520},
{{-1524,-1524,-1524,-1524}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 519},	{{-1527,-1527,1044,0}, 0},	{{1,0,0,0}, 0},
{{0,1043,0,0}, 509},	{{-1519,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,1041,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,-1519,0}, 0},	{{1,1,1,1}, 514},
{{1,1,0,0}, 0},	{{0,0,0,0}, 515},	{{0,0,1036,0}, 0},
{{0,1036,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,1031,0,0}, 0},	{{1,1,1,1}, 0},	{{-3777,-1503,0,0}, 0},
{{-1560,0,0,0}, 427},	{{0,0,0,1028}, 0},	{{-3802,-3802,0,0}, 427},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1032}, 0},	{{0,1032,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,1030,0}, 0},	{{0,0,0,1036}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,1035,0}, 0},	{{1,0,0,0}, 482},
{{1,1,0,0}, 0},	{{0,0,1043,0}, 0},	{{1,1,1053,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{0,1051,0,0}, 0},
{{1,0,-3665,0}, 0},	{{1,0,0,0}, 500},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1044}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{0,1042,0,0}, 0},
{{0,0,0,1042}, 0},	{{0,0,0,1051}, 0},	{{0,0,0,0}, 496},
{{1,1,1,1}, 0},	{{0,0,0,1049}, 0},	{{0,0,0,1049}, 0},
{{1,1,1,1}, 0},	{{0,0,1048,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 487},	{{-3794,-3794,-3794,1042}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1022,1022,1022}, 0},	{{1,1022,0,0}, 0},
{{0,0,0,1033}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,-1496,0,0}, 0},	{{1,-1496,-1496,-1496}, 0},	{{-1496,-1496,-1496,1029}, 0},
{{0,0,0,1035}, 0},	{{0,0,0,1035}, 0},	{{0,0,0,1036}, 0},
{{1,0,0,0}, 0},	{{0,1035,0,0}, 0},	{{0,0,1035,0}, 0},
{{1,1,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{0,1033,0,0}, 0},	{{1,0,1,0}, 0},	{{0,1032,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,1031,0,0}, 0},
{{-6518,-3832,0,1031}, 0},	{{0,0,0,1035}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,1033,0,0}, 0},	{{0,0,0,1036}, 0},
{{-1471,1036,0,0}, 0},	{{0,0,0,1037}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1034}, 0},
{{0,0,0,1034}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{0,1034,0,0}, 0},	{{1,1,1,1}, 0},	{{0,1033,0,0}, 0},
{{1,1,1,1}, 0},	{{1,-1459,-6418,-6418}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 435},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 457},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 456},	{{1,0,0,0}, 0},	{{-1479,-1479,-1479,-1479}, 0},
{{1,1,-1495,0}, 0},	{{1,-3593,-3593,-3593}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-3593}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-3593,0,0}, 0},	{{1,999,999,0}, 0},	{{1,999,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 463},	{{0,0,0,0}, 453},	{{-1462,0,-1462,0}, 0},
{{-6478,0,0,0}, 427},	{{1,1,1,1}, 0},	{{-1421,982,-1421,-1421}, 0},
{{-3616,-3616,-3616,-3616}, 427},	{{1,1,1,1}, 0},	{{-3068,980,-3068,-3068}, 0},
{{0,0,0,-1415}, 427},	{{0,0,0,979}, 0},	{{-3609,-3609,-3609,-3609}, 427},
{{0,0,0,978}, 0},	{{-3605,-3605,-3605,-3605}, 427},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,973}, 0},	{{1,1,-3601,-6493}, 0},
{{1,-6493,-6493,-6493}, 0},	{{1,1,1,1}, 0},	{{1,-1405,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-3601,-3601,0}, 0},
{{1,1,1,1}, 0},	{{-3601,-3601,-3601,962}, 0},	{{-3590,-3590,-3590,-3590}, 427},
{{-3571,-3571,-3571,-3571}, 427},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,955}, 0},	{{1,1,1,1}, 0},	{{0,0,0,954}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,8}, 0},	{{1,1,1,-6392}, 0},	{{1,1,1,-6392}, 0},
{{1,1,1,1}, 0},	{{1,1,947,947}, 0},	{{1,0,0,0}, 0},
{{1,1,947,0}, 0},	{{0,0,947,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,948}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,0}, 0},
{{0,0,944,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,948}, 0},
{{1,1,1,1}, 0},	{{0,0,948,0}, 0},	{{1,1,1,1}, 0},
{{1,1,-6551,-6551}, 0},	{{1,947,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-6551}, 0},	{{1,-6551,-6551,-6551}, 0},	{{-6551,947,-6551,-6551}, 0},
{{0,0,0,948}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{-3530,945,-3530,-3530}, 0},	{{1,-3651,0,0}, 0},
{{1,1,1,1}, 464},	{{0,0,943,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 420},	{{0,0,0,944}, 0},
{{0,0,0,944}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,939,0}, 0},	{{0,939,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,938}, 0},	{{0,0,0,938}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,936,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{-1395,1,0,0}, 0},	{{0,0,0,933}, 0},
{{1,0,1,0}, 0},	{{0,0,0,933}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,930,0}, 0},
{{1,0,0,0}, 0},	{{-1669,-1669,0,0}, 399},	{{0,0,0,932}, 0},
{{0,0,932,0}, 0},	{{0,0,0,932}, 0},	{{0,0,0,932}, 0},
{{1,932,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,924}, 0},	{{0,0,0,924}, 0},	{{0,0,0,927}, 0},
{{0,0,0,928}, 0},	{{-8559,-8559,-8559,928}, 0},	{{0,0,0,929}, 0},
{{0,0,0,929}, 0},	{{0,0,0,929}, 0},	{{0,0,0,930}, 0},
{{0,0,0,930}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,936,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 355},	{{1,0,0,0}, 0},	{{0,0,0,0}, 350},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,928}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 340},	{{0,0,0,916}, 0},
{{-8407,-8407,-8407,917}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,910}, 0},	{{0,0,0,910}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 338},	{{0,0,912,0}, 0},	{{0,0,0,0}, 264},
{{1,0,0,0}, 0},	{{1,911,911,0}, 0},	{{1,911,911,0}, 0},
{{1,1,1,-5933}, 0},	{{-5933,-5933,-5933,911}, 0},	{{0,0,0,915}, 0},
{{0,0,0,0}, 268},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,907}, 0},	{{-3074,-3074,-3074,-3074}, 254},	{{0,-1352,0,0}, 254},
{{1,1,-1352,-1352}, 0},	{{1,-3030,-3030,-3030}, 0},	{{-1352,-1352,-1352,13}, 0},
{{1,-1355,-1355,-1355}, 0},	{{1,-3078,-3078,-3078}, 0},	{{-1355,-1355,-1355,901}, 0},
{{1,-1358,-1358,-1358}, 0},	{{1,-5807,-5807,-5807}, 0},	{{1,-3101,-3101,-1358}, 0},
{{1,-3101,-3101,-3101}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,-8315,-8315}, 0},	{{-8315,-8315,-8315,894}, 0},
{{1,1,-1364,-1364}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,-3041,-3041}, 0},	{{-3041,-3041,-3041,889}, 0},
{{-5882,-5882,-5882,-5882}, 264},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,885}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,880}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,873,0,0}, 0},	{{0,874,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,874}, 0},	{{-5872,-5872,-5872,874}, 0},
{{-9348,-9348,-9348,879}, 0},	{{1,-9348,-9348,-9348}, 0},	{{1,1,1,1}, 0},
{{1,-8342,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{-768,-768,-768,-768}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,863,0,0}, 0},	{{-9369,-9369,-9369,863}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,856}, 0},	{{1,-9376,-9376,-9376}, 0},
{{1,1,1,1}, 0},	{{1,-8370,0,0}, 0},	{{1,1,1,1}, 0},
{{1,541,541,541}, 0},	{{1,0,0,0}, 0},	{{1,-1337,-1337,-1337}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,844}, 0},	{{0,0,0,844}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,829}, 0},
{{0,0,0,829}, 0},	{{0,0,0,0}, 309},	{{0,0,0,-2}, 309},
{{-6056,-6056,-6056,827}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,109}, 0},	{{0,0,0,0}, 326},	{{1,0,0,0}, 0},
{{-1309,0,-1309,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 333},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 332},	{{1,810,1,9}, 0},	{{1,1,1,1}, 0},
{{1,811,1,1}, 0},	{{-1313,-1313,-1313,-1313}, 0},	{{1,1,1,1}, 0},
{{1,809,-1337,-1337}, 0},	{{-3093,-3093,-3093,809}, 0},	{{-1314,-3094,-3094,-3094}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-7,-7,-7,-7}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,801}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 323},	{{0,0,0,798}, 0},
{{1,-1330,-1330,2}, 0},	{{0,0,0,797}, 0},	{{0,0,0,797}, 0},
{{0,0,0,797}, 0},	{{0,0,0,797}, 0},	{{0,0,0,797}, 0},
{{0,0,0,797}, 0},	{{0,0,0,797}, 0},	{{0,799,0,0}, 0},
{{0,17,0,0}, 0},	{{0,798,0,0}, 272},	{{1,1,1,1}, 0},
{{-1268,798,-1268,0}, 0},	{{0,798,0,0}, 0},	{{0,0,0,798}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,798}, 0},	{{-5826,798,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 288},	{{0,0,0,798}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 297},
{{1,1,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,0}, 0},	{{1,777,777,777}, 0},	{{1,0,777,0}, 0},
{{0,0,0,777}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,770}, 0},
{{0,0,0,770}, 0},	{{-5801,-5801,-5801,-5801}, 296},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-1317,0,0,0}, 0},	{{0,0,0,766}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 283},	{{1,1,1,1}, 0},
{{0,0,0,764}, 0},	{{0,0,0,0}, 282},	{{0,0,0,764}, 0},
{{1,1,1,1}, 0},	{{1,763,0,0}, 0},	{{0,0,0,0}, 335},
{{0,0,0,762}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,758,0}, 0},	{{-1304,-1304,-1304,759}, 0},	{{-1304,-6182,759,-6182}, 0},
{{1,1,1,-6182}, 0},	{{-6182,-6182,27,-6182}, 0},	{{-6186,-6186,-6186,-6186}, 119},
{{0,0,0,758}, 0},	{{1,1,1,1}, 0},	{{-2385,757,-2385,-2385}, 0},
{{0,762,0,0}, 0},	{{1,-3422,-3422,-3422}, 0},	{{1,-3422,-3422,-3422}, 0},
{{1,-3422,1,-3422}, 0},	{{1,-3422,-3422,-3422}, 0},	{{-1174,-1174,-1174,-1174}, 0},
{{0,0,0,764}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 204},	{{-1292,1,742,-6199}, 0},	{{-1292,-6199,-6199,-6199}, 0},
{{1,1,1,1}, 0},	{{-6199,758,-6199,-6199}, 0},	{{-1292,1,758,-6203}, 0},
{{1,-6203,-6203,-6203}, 0},	{{1,1,1,1}, 82},	{{-6203,-6203,-6203,756}, 0},
{{1,-2976,757,-2976}, 0},	{{1,1,1,1}, 0},	{{-5661,756,-6206,-6206}, 0},
{{-6206,-6206,-6206,-6206}, 83},	{{1,1,1,-6208}, 0},	{{1,1,1,1}, 0},
{{-1291,754,-1291,0}, 0},	{{0,0,0,758}, 0},	{{-2984,-2984,-2984,758}, 0},
{{0,0,0,761}, 0},	{{1,-6215,1,-6215}, 0},	{{-6215,-6215,-6215,-6215}, 196},
{{-3451,-3451,-3451,761}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-4622,759,-4622,-4622}, 0},	{{1,-2931,-2931,-2931}, 0},	{{1,-2931,-2931,-2931}, 0},
{{1,-2931,-2931,-2931}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-3461,-3461,-3461,758}, 0},	{{1,-5633,-5633,-5633}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-5633}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,-2889,-2889}, 0},	{{-2889,-2889,-2889,-2889}, 187},
{{0,0,0,747}, 0},	{{1,1,1,1}, 0},	{{-1219,747,-1219,-1219}, 0},
{{-3474,-3474,-3474,750}, 0},	{{-3475,756,-3475,-3475}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2872,754,-2872,-2872}, 0},	{{0,0,0,758}, 0},
{{0,0,0,758}, 0},	{{0,0,0,758}, 0},	{{0,0,0,758}, 0},
{{0,0,0,758}, 0},	{{0,0,0,758}, 0},	{{0,0,0,758}, 0},
{{0,0,0,760}, 0},	{{1,-5490,-5490,-2769}, 0},	{{-5490,-5763,0,759}, 0},
{{0,0,0,761}, 0},	{{-1171,-1171,0,0}, 0},	{{-5587,-5587,-5587,-5587}, 243},
{{0,0,0,760}, 0},	{{0,0,0,760}, 0},	{{-1141,0,760,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,754}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,751}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,746}, 0},
{{0,0,0,746}, 0},	{{0,0,0,0}, 224},	{{1,1,1,1}, 0},
{{0,0,0,744}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,741}, 0},
{{0,0,0,741}, 0},	{{1,1,1,1}, 0},	{{0,0,0,742}, 0},
{{1,1,1,1}, 0},	{{0,0,0,741}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,157,157,157}, 0},	{{-1032,738,17,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{-1036,-927,13,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{-958,0,736,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,4}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-951,0,-944,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 148},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,728}, 0},	{{1,-7792,0,0}, 0},	{{-1168,-1168,-1168,-1168}, 46},
{{0,0,0,726}, 0},	{{0,0,0,726}, 0},	{{0,0,0,729}, 0},
{{1,1,1,1}, 0},	{{0,0,0,728}, 0},	{{1,-7760,-9158,0}, 0},
{{1,-9188,-9188,-9188}, 0},	{{1,0,0,0}, 0},	{{1,-9188,-9188,-9188}, 0},
{{-9203,-9203,-9203,724}, 0},	{{-9196,-9196,-9196,725}, 0},	{{-9196,-9196,-9196,725}, 0},
{{-9197,-9197,-9197,738}, 0},	{{-7611,751,-7611,0}, 0},	{{-7612,754,-7612,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{-1083,-1083,-1083,-1083}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,748}, 0},	{{0,0,0,748}, 0},	{{0,0,0,751}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,105,105,105}, 0},
{{-1140,751,0,0}, 0},	{{-9214,-9214,-9214,751}, 0},	{{-9215,-9215,-9215,751}, 0},
{{-9215,-9215,-9215,751}, 0},	{{1,-7825,0,0}, 0},	{{1,1,1,1}, 5},
{{-359,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{-1150,0,0,0}, 0},	{{1,-6238,-3473,0}, 0},
{{1,1,1,1}, 0},	{{1,-6238,-6238,-6238}, 0},	{{-1154,0,-3473,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,0,5,0}, 0},	{{1,0,0,0}, 0},	{{1,1,-1162,-1162}, 0},
{{1,741,742,741}, 0},	{{-1162,742,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,741}, 0},	{{0,0,0,741}, 0},
{{-9242,-9242,-9242,741}, 0},	{{1,-7852,0,0}, 0},	{{-26,-26,-26,-26}, 46},
{{1,-7854,0,0}, 0},	{{1,0,0,0}, 37},	{{0,0,0,0}, 159},
{{-9248,-9248,-9248,737}, 0},	{{1,-7858,0,0}, 0},	{{0,0,0,0}, 158},
{{1,-7860,0,0}, 0},	{{1,1,1,1}, 5},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 155},	{{1,-7868,0,0}, 0},
{{1,1,1,1}, 5},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 156},	{{1,-7876,0,0}, 0},	{{1,1,1,1}, 5},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,158,158,158}, 0},
{{1,0,0,0}, 0},	{{1,-410,-410,-410}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,708}, 0},
{{0,0,0,708}, 0},	{{1,-7891,0,0}, 0},	{{0,0,0,0}, 46},
{{0,0,0,0}, 85},	{{-1112,-1112,-1112,-1112}, 0},	{{0,0,0,704}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,626,705,626}, 0},
{{-1066,705,-1053,0}, 0},	{{0,0,0,705}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,694}, 0},	{{0,0,0,694}, 0},
{{0,0,0,1}, 139},	{{0,0,0,701}, 0},	{{0,0,0,701}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,698,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{-1078,-1078,-1078,0}, 0},	{{0,647,0,0}, 0},
{{-1079,-1079,-1079,-1079}, 130},	{{0,0,0,692}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 126},	{{0,0,0,689}, 0},
{{0,0,0,689}, 0},	{{1,1,1,1}, 49},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{0,0,0,681}, 0},	{{0,0,0,682}, 0},	{{-8686,-8686,-8686,-8686}, 122},
{{-8266,-8266,-8266,681}, 0},	{{0,0,0,683}, 0},	{{0,0,0,683}, 0},
{{1,1,1,1}, 0},	{{0,0,0,682}, 0},	{{-9511,-9511,-9511,682}, 0},
{{0,0,0,0}, 80},	{{0,0,0,0}, 75},	{{1,0,0,0}, 0},
{{0,0,0,0}, 92},	{{0,0,0,678}, 0},	{{0,0,0,678}, 0},
{{0,0,0,678}, 0},	{{0,0,0,678}, 0},	{{0,0,0,0}, 109},
{{0,0,0,677}, 0},	{{0,0,0,678}, 0},	{{0,0,0,678}, 0},
{{0,0,0,678}, 0},	{{0,0,0,678}, 0},	{{0,0,0,678}, 0},
{{0,0,0,678}, 0},	{{0,0,0,678}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,673}, 0},	{{0,0,0,0}, 43},
{{-9365,-9365,-9365,673}, 0},	{{0,0,0,0}, 50},	{{1,-7976,0,0}, 0},
{{-1085,-1085,-1085,-1085}, 46},	{{1,-7978,0,0}, 0},	{{-1072,-1072,-1072,-1072}, 46},
{{1,0,0,0}, 0},	{{0,0,0,0}, 47},	{{1,-7982,0,0}, 0},
{{-1067,-1067,-1067,-1067}, 46},	{{1,-7984,0,0}, 0},	{{-1055,-1055,-1055,-1055}, 46},
{{1,0,0,0}, 0},	{{0,0,0,0}, 38},	{{1,0,0,0}, 0},
{{0,0,0,0}, 39},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,655}, 0},
{{0,0,0,0}, 40},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,650}, 0},	{{0,0,0,650}, 0},	{{-9395,-9395,-9395,650}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,638}, 0},	{{0,0,0,639}, 0},	{{0,0,0,639}, 0},
{{0,0,0,641}, 0},	{{1,-1100,0,0}, 0},	{{1,-1124,-1124,-1124}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,633}, 0},	{{1,-1109,0,0}, 0},	{{1,-1109,-1109,-1109}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,625}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,617}, 0},	{{0,0,0,617}, 0},	{{0,0,0,617}, 0},
{{1,1,1,1}, 0},	{{0,0,0,616}, 0},	{{0,0,0,616}, 0},
{{1,1,1,1}, 0},	{{0,0,0,615}, 0},	{{-9992,-9992,-9992,616}, 0},
{{0,0,0,616}, 0},	{{1,1,1,1}, 0},	{{0,0,0,615}, 0},
{{0,0,0,615}, 0},	{{0,0,0,0}, 518},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,621,0}, 0},	{{0,621,0,0}, 0},
{{0,0,631,636}, 0},	{{0,636,0,0}, 0},	{{0,0,0,0}, 510},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,607,607,68}, 0},	{{1,607,0,0}, 0},
{{0,0,0,627}, 0},	{{0,0,0,627}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,619,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 525},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,604}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 524},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 505},	{{-1051,-1051,0,0}, 476},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 504},	{{0,0,0,576}, 0},
{{0,0,0,0}, 503},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,566}, 0},	{{0,0,0,0}, 497},
{{0,0,0,565}, 0},	{{0,0,0,568}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 488},
{{-59,-59,562,-59}, 0},	{{0,0,0,570}, 0},	{{1,-2524,-2524,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-2524,-2524,-2524}, 0},	{{1,1,1,1}, 0},	{{0,0,0,564}, 0},
{{0,0,0,564}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 477},
{{0,0,0,563}, 0},	{{0,0,564,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,563}, 0},	{{0,0,0,563}, 0},	{{1,0,0,0}, 0},
{{0,0,0,562}, 0},	{{0,0,0,562}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,558}, 0},	{{-840,-840,-840,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,556,0,0}, 0},
{{0,0,0,556}, 0},	{{1,1,1,1}, 0},	{{0,0,0,555}, 0},
{{0,0,0,555}, 0},	{{0,0,0,555}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{0,553,0,0}, 0},	{{0,0,0,0}, 460},
{{0,0,0,0}, 458},	{{-997,-997,0,0}, 0},	{{-997,-997,-997,-997}, 357},
{{-2402,-2402,-2402,-2402}, 427},	{{-4047,-4047,-4047,-4047}, 427},	{{0,0,0,547}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 441},	{{0,0,0,546}, 0},
{{-4562,-4562,-4562,546}, 0},	{{0,0,0,546}, 0},	{{0,0,0,546}, 0},
{{1,0,0,0}, 0},	{{-945,-945,-945,0}, 0},	{{-4482,-4482,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 473},	{{0,0,0,530}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,525,0,0}, 0},	{{1,1,1,1}, 0},
{{0,530,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,529}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,0,0,0}, 0},
{{0,537,0,0}, 0},	{{1,-4592,0,0}, 0},	{{-940,-940,-940,-940}, 0},
{{0,0,0,535}, 0},	{{-943,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 465},	{{0,0,0,523}, 0},	{{0,523,0,0}, 0},
{{0,0,0,523}, 0},	{{0,0,0,524}, 0},	{{0,0,0,524}, 0},
{{0,0,0,524}, 0},	{{0,0,0,524}, 0},	{{1,1,1,1}, 0},
{{0,0,0,523}, 0},	{{0,0,0,523}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,527}, 0},	{{0,0,0,528}, 0},	{{0,0,0,0}, 400},
{{0,0,0,528}, 0},	{{-911,506,0,0}, 0},	{{-930,-930,-930,-930}, 403},
{{0,0,0,527}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 389},	{{1,0,0,0}, 0},
{{0,0,0,0}, 407},	{{0,0,0,521}, 0},	{{1,0,-7158,0}, 0},
{{0,0,0,0}, 372},	{{0,0,0,519}, 0},	{{0,0,0,0}, 371},
{{1,0,1,0}, 0},	{{0,0,0,0}, 386},	{{0,0,0,517}, 0},
{{1,517,0,0}, 0},	{{1,-928,-928,-928}, 0},	{{1,1,1,1}, 0},
{{1,517,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{0,0,0,512}, 0},	{{0,0,0,0}, 384},	{{0,0,0,511}, 0},
{{1,1,1,1}, 0},	{{0,0,0,510}, 0},	{{1,0,-6842,0}, 0},
{{0,0,0,0}, 343},	{{0,0,0,509}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 338},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,505}, 0},	{{1,0,0,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{0,0,0,502}, 0},
{{1,-6843,-6843,-6843}, 0},	{{1,-6843,-6843,-6843}, 0},	{{1,-6843,-6843,-6843}, 0},
{{1,1,-6843,-6843}, 0},	{{-6843,-6843,-6843,502}, 0},	{{1,0,0,0}, 0},
{{0,0,0,508}, 0},	{{1,1,1,1}, 0},	{{0,0,0,507}, 0},
{{1,-2255,-2255,-2255}, 0},	{{-2255,516,-2255,-2255}, 0},	{{-9208,-9208,-9208,-9208}, 264},
{{-3929,-3929,-3929,-3929}, 264},	{{1,0,0,0}, 0},	{{0,516,0,0}, 0},
{{0,0,0,516}, 0},	{{1,1,1,1}, 0},	{{0,0,0,515}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,512}, 0},	{{0,0,0,512}, 0},
{{1,-6745,-6745,-6745}, 0},	{{1,-6745,-6745,-6745}, 0},	{{1,1,510,-863}, 0},
{{1,-6745,-6745,-6745}, 0},	{{1,1,1,1}, 0},	{{-863,-863,510,-863}, 0},
{{1,-10226,-10226,-10226}, 0},	{{1,1,1,1}, 0},	{{-466,-9220,0,0}, 0},
{{0,0,0,507}, 0},	{{-10231,-10231,-10231,507}, 0},	{{1,1,1,1}, 0},
{{0,0,0,506}, 0},	{{0,0,0,506}, 0},	{{0,0,0,506}, 0},
{{0,0,0,506}, 0},	{{0,0,0,506}, 0},	{{1,-6882,-6882,-6882}, 0},
{{-6882,-6882,-6882,-6882}, 310},	{{1,1,1,1}, 0},	{{1,504,-808,-808}, 0},
{{-2122,-2122,-2122,504}, 0},	{{-792,-2123,-2123,-2123}, 0},	{{-2121,-3901,-3901,1}, 0},
{{0,0,0,502}, 0},	{{0,0,0,502}, 0},	{{0,0,0,502}, 0},
{{0,0,0,503}, 0},	{{0,0,0,503}, 0},	{{0,0,0,503}, 0},
{{0,0,0,504}, 0},	{{0,0,0,505}, 0},	{{0,0,505,0}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 311},
{{0,16,0,0}, 0},	{{1,1,1,1}, 0},	{{0,500,0,0}, 0},
{{0,1,0,0}, 286},	{{0,0,0,499}, 0},	{{1,0,0,0}, 0},
{{1,1,1,498}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,498}, 0},
{{1,1,1,1}, 0},	{{1,0,498,0}, 0},	{{0,0,0,498}, 0},
{{0,0,0,498}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,0,0}, 0},	{{0,0,0,495}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 287},	{{-775,0,0,0}, 0},	{{0,0,0,492}, 0},
{{0,0,0,492}, 0},	{{0,0,0,492}, 0},	{{0,0,0,492}, 0},
{{1,-764,0,0}, 0},	{{0,0,0,0}, 285},	{{1,1,1,1}, 0},
{{0,0,0,489}, 0},	{{0,0,0,489}, 0},	{{0,0,0,0}, 334},
{{1,0,1,0}, 0},	{{0,0,0,0}, 196},	{{1,1,0,0}, 0},
{{0,0,0,485}, 0},	{{-2062,-6940,21,-6940}, 0},	{{1,-6940,485,-6940}, 0},
{{1,1,1,1}, 0},	{{-6940,484,-6940,-6940}, 0},	{{0,0,0,484}, 0},
{{1,-3141,-3141,-3141}, 0},	{{1,-3141,-3141,-3141}, 0},	{{1,-3141,-3141,-3141}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-4183,-4183,-4183,479}, 0},
{{1,-3590,-3590,-3590}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-3590,-3590,-3590,475}, 0},	{{0,0,0,475}, 0},
{{-6956,-6956,-6956,-6956}, 86},	{{-6960,-6960,465,-6960}, 0},	{{1,1,1,1}, 0},
{{-1657,474,-1657,-1657}, 0},	{{-6417,-6417,-6417,-6417}, 85},	{{1,1,1,1}, 54},
{{-1653,475,-1653,-1653}, 0},	{{1,-2044,-2044,-2044}, 0},	{{1,-2044,-2044,-2044}, 0},
{{1,-2044,-2044,-2044}, 0},	{{1,1,-4205,-4205}, 0},	{{-4205,-4205,-4205,-4205}, 192},
{{0,0,0,475}, 0},	{{1,1,1,1}, 0},	{{1,-6426,-6971,-6971}, 0},
{{1,1,1,1}, 54},	{{-1637,472,-1637,-1637}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 195},	{{-4211,-4211,-4211,474}, 0},
{{1,-5380,-5380,-5380}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-5380}, 0},
{{1,1,1,1}, 0},	{{-2376,-2376,-2376,476}, 0},	{{-4218,-4218,-4218,476}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 188},	{{1,-1965,-1965,-1965}, 0},
{{1,-1965,-1965,-1965}, 0},	{{1,-1965,-1965,-1965}, 0},	{{-4227,-4227,-4227,471}, 0},
{{1,1,1,-4223}, 0},	{{1,-4223,-4223,-4223}, 0},	{{1,1,1,1}, 0},
{{1,-4223,-4223,-4223}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1964,465,-1964,-1964}, 0},	{{-4230,-4230,-4230,-4230}, 20},	{{1,-3625,-3625,-3625}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-3625}, 0},	{{1,1,1,1}, 0},
{{-2396,-2396,-2396,466}, 0},	{{0,0,0,466}, 0},	{{0,466,0,0}, 0},
{{0,0,0,466}, 0},	{{0,0,0,466}, 0},	{{0,0,0,466}, 0},
{{0,0,0,466}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,-731}, 241},	{{0,0,0,465}, 0},	{{1,-1911,-1911,0}, 0},
{{1,0,0,0}, 0},	{{0,466,-1911,0}, 231},	{{1,0,0,0}, 0},
{{0,0,0,0}, 245},	{{0,0,0,471}, 0},	{{0,0,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,469}, 0},	{{0,0,0,469}, 0},
{{0,0,0,469}, 0},	{{0,0,0,469}, 0},	{{0,0,0,0}, 219},
{{1,1,0,0}, 0},	{{0,0,0,467}, 0},	{{0,0,0,467}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{-605,20,99,465}, 0},
{{0,0,0,465}, 0},	{{0,0,0,470}, 0},	{{1,1,1,1}, 130},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,472}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,467}, 0},	{{0,0,0,467}, 0},
{{0,0,0,467}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,464,0,0}, 0},	{{0,0,0,464}, 0},
{{0,0,0,468}, 0},	{{1,-9926,-9926,-9926}, 0},	{{-9926,-9926,472,-9926}, 0},
{{-9920,-9920,-9920,476}, 0},	{{1,-8530,0,0}, 0},	{{1,1,1,1}, 158},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,476}, 0},
{{1,-8544,0,0}, 0},	{{1,1,1,1}, 5},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,472,472,472}, 0},	{{1,0,0,0}, 0},
{{1,-1078,-1078,-1078}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,472}, 0},	{{1,1,1,1}, 56},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,469}, 0},
{{-749,-749,-749,-749}, 56},	{{0,0,0,468}, 0},	{{1,-646,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,465,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,462,0,0}, 0},	{{0,0,0,0}, 130},	{{-9964,-9964,-9964,461}, 0},
{{-9965,-9965,-9965,474}, 0},	{{1,-8575,0,0}, 0},	{{1,1,1,1}, 5},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 173},
{{0,2,0,0}, 0},	{{0,1,-740,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 164},	{{0,0,0,470}, 0},	{{0,0,0,470}, 0},
{{1,-8592,0,0}, 0},	{{-715,-715,-715,-715}, 46},	{{1,-8594,0,0}, 0},
{{1,0,0,0}, 5},	{{0,0,0,0}, 157},	{{0,0,0,465}, 0},
{{0,0,0,465}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,-77,-77,-77}, 0},	{{-1756,2,-1756,0}, 0},	{{-1763,385,0,0}, 0},
{{-1757,-1757,-1757,-1757}, 118},	{{0,0,0,0}, 116},	{{0,0,0,458}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 142},
{{0,0,0,449}, 0},	{{0,0,0,458}, 0},	{{0,0,0,0}, 131},
{{0,0,0,459}, 0},	{{0,0,0,459}, 0},	{{-687,-687,-687,-687}, 50},
{{1,1,1,1}, 0},	{{0,0,0,459}, 0},	{{0,0,0,0}, 122},
{{1,1,1,1}, 0},	{{1,-8477,0,0}, 0},	{{-8946,-8946,-8946,457}, 0},
{{0,0,0,0}, 87},	{{0,0,0,456}, 0},	{{0,0,0,458}, 0},
{{-10192,-10192,-10192,458}, 0},	{{0,0,0,458}, 0},	{{0,0,0,458}, 0},
{{0,0,0,460}, 0},	{{0,0,0,460}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 104},	{{0,0,0,458}, 0},	{{0,0,0,458}, 0},
{{0,0,0,461}, 0},	{{0,0,0,461}, 0},	{{0,0,0,461}, 0},
{{0,0,0,461}, 0},	{{0,0,0,461}, 0},	{{1,1,1,1}, 0},
{{0,0,0,460}, 0},	{{1,-8647,0,0}, 0},	{{0,0,0,0}, 42},
{{1,1,1,1}, 0},	{{0,0,0,465}, 0},	{{0,0,0,465}, 0},
{{0,0,0,465}, 0},	{{-10044,-10044,-10044,465}, 0},	{{1,1,1,1}, 0},
{{0,0,0,467}, 0},	{{0,0,0,468}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,468,0,0}, 0},	{{0,0,0,478}, 0},
{{0,0,0,478}, 0},	{{0,0,0,478}, 0},	{{0,0,0,478}, 0},
{{0,0,0,478}, 0},	{{0,0,0,478}, 0},	{{0,0,0,478}, 0},
{{0,0,0,479}, 0},	{{1,1,1,1}, 0},	{{0,0,0,478}, 0},
{{-10607,-10607,-10607,478}, 0},	{{0,0,0,478}, 0},	{{0,0,0,478}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-538}, 0},	{{1,1,0,0}, 0},
{{0,0,0,478}, 0},	{{0,0,0,478}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,469,0,0}, 0},
{{0,0,469,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,480,0,0}, 0},
{{0,0,0,0}, 513},	{{1,0,0,0}, 0},	{{0,0,0,478}, 0},
{{0,0,0,478}, 0},	{{0,0,0,478}, 0},	{{1,1,1,1}, 0},
{{0,0,478,0}, 0},	{{0,0,0,488}, 0},	{{0,0,0,488}, 0},
{{0,0,0,489}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 494},	{{1,0,0,0}, 0},
{{0,0,0,0}, 499},	{{1,-7532,-7532,-7532}, 0},	{{1,1,-620,-620}, 0},
{{1,1,-620,-620}, 0},	{{1,1,-620,-620}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-7532,-7532,-7532}, 0},	{{1,-7532,-7532,-7532}, 0},
{{-7532,-7532,-7532,475}, 0},	{{0,0,0,475}, 0},	{{0,0,0,475}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 484},	{{1,0,0,0}, 0},
{{0,0,0,0}, 474},	{{0,0,471,0}, 0},	{{0,0,0,472}, 0},
{{0,0,0,475}, 0},	{{0,0,0,477}, 0},	{{0,0,0,477}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{0,0,0,0}, 529},
{{0,0,0,474}, 0},	{{-460,0,0,0}, 0},	{{0,0,0,474}, 0},
{{0,0,0,474}, 0},	{{0,0,0,474}, 0},	{{0,0,0,0}, 461},
{{1,474,0,0}, 0},	{{0,0,0,0}, 438},	{{0,0,0,473}, 0},
{{-5107,-5107,-5107,474}, 0},	{{0,0,0,476}, 0},	{{0,0,0,0}, 426},
{{0,0,0,482}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 471},	{{0,476,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,465}, 0},
{{-535,0,0,0}, 0},	{{0,0,464,0}, 0},	{{0,0,0,466}, 0},
{{0,0,0,0}, 403},	{{1,1,1,1}, 0},	{{0,0,0,464}, 0},
{{0,0,0,464}, 0},	{{0,0,0,464}, 0},	{{0,0,0,472}, 0},
{{-522,472,-522,-522}, 0},	{{0,0,0,472}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,467}, 0},	{{1,0,0,0}, 0},
{{0,0,0,467}, 0},	{{1,-19,0,0}, 0},	{{0,0,0,0}, 422},
{{1,0,0,0}, 0},	{{0,0,0,0}, 405},	{{0,0,0,464}, 0},
{{0,0,0,464}, 0},	{{1,0,0,0}, 0},	{{-496,-496,-496,-496}, 0},
{{1,1,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-515,-515,0,0}, 0},	{{-515,0,0,0}, 384},	{{0,0,0,457}, 0},
{{0,0,0,457}, 0},	{{1,1,1,1}, 0},	{{0,0,0,458}, 0},
{{0,0,0,458}, 0},	{{1,1,1,1}, 0},	{{0,0,0,457}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{0,0,0,453}, 0},	{{1,-4588,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,446}, 0},	{{0,0,0,0}, 269},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,436}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,-1389,-1389}, 0},	{{-1389,-1389,-1389,433}, 0},	{{0,0,0,0}, 263},
{{0,0,0,432}, 0},	{{1,1,1,1}, 0},	{{0,0,0,432}, 0},
{{0,0,0,432}, 0},	{{0,0,0,432}, 0},	{{1,-4489,-4489,-4489}, 0},
{{1,1,1,1}, 0},	{{-1372,-1372,431,-1372}, 0},	{{-1372,-1372,-1372,-1372}, 160},
{{0,0,0,430}, 0},	{{-10737,-10737,-10737,430}, 0},	{{0,0,0,430}, 0},
{{0,0,0,430}, 0},	{{0,0,0,430}, 0},	{{0,0,0,430}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 310},	{{-1294,-2625,-2625,1}, 0},
{{0,0,0,427}, 0},	{{0,0,0,427}, 0},	{{0,0,0,427}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 324},	{{0,0,0,425}, 0},
{{0,0,0,426}, 0},	{{1,0,426,0}, 0},	{{0,0,0,0}, 317},
{{1,1,3,0}, 0},	{{0,0,424,0}, 0},	{{0,0,431,0}, 0},
{{0,0,0,0}, 313},	{{0,0,0,430}, 0},	{{0,0,0,430}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-496,0,424,0}, 0},	{{0,0,0,424}, 0},	{{0,0,0,424}, 0},
{{0,0,0,424}, 0},	{{0,0,0,424}, 0},	{{0,0,0,424}, 0},
{{0,0,0,424}, 0},	{{0,0,0,424}, 0},	{{0,0,424,0}, 292},
{{0,424,0,0}, 0},	{{0,0,0,424}, 0},	{{1,1,1,1}, 0},
{{0,0,0,423}, 0},	{{-7424,-7424,-7424,-7424}, 85},	{{-461,-461,-461,-461}, 0},
{{0,0,0,421}, 0},	{{1,-4661,-4661,-4661}, 0},	{{1,-4661,-4661,-4661}, 0},
{{1,1,1,1}, 0},	{{-4661,419,-4661,-4661}, 0},	{{0,0,0,423}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,421}, 0},
{{1,-2130,-2130,-2130}, 0},	{{1,-2130,-2130,-2130}, 0},	{{1,-2130,-2130,-2130}, 0},
{{-4675,-4675,-4675,418}, 0},	{{1,-2127,-2127,-2127}, 0},	{{1,-2127,-2127,-2127}, 0},
{{1,-2127,-2127,-2127}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-4679,-4679,-4679,413}, 0},	{{0,0,413,0}, 0},	{{1,-2108,-2108,-2108}, 0},
{{1,-2108,-2108,-2108}, 0},	{{1,-2108,-2108,-2108}, 0},	{{1,1,1,1}, 0},
{{1,1,-4686,-4686}, 0},	{{-4686,-4686,-4686,409}, 0},	{{1,1,1,1}, 0},
{{1,1,-4684,-4684}, 0},	{{1,1,1,1}, 0},	{{1,1,-4684,-4684}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2067,403,-2067,-2067}, 0},
{{-2851,-2851,-2851,409}, 0},	{{-4693,-4693,-4693,409}, 0},	{{-4697,-4697,-4697,410}, 0},
{{1,-2428,-2428,-2428}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2428}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2859}, 0},
{{-2859,-2859,-2859,404}, 0},	{{-2861,-2861,-2861,404}, 0},	{{0,0,0,404}, 0},
{{0,0,0,0}, 184},	{{0,0,0,403}, 0},	{{0,0,0,403}, 0},
{{0,0,0,403}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 241},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,399}, 0},	{{1,0,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,399}, 0},	{{0,0,0,399}, 0},	{{0,0,0,0}, 236},
{{0,0,0,400}, 0},	{{0,0,0,402}, 0},	{{0,0,0,0}, 220},
{{0,0,0,404}, 0},	{{0,0,0,404}, 0},	{{-1184,406,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,401}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,396,0,0}, 0},	{{0,0,0,396}, 0},
{{0,0,0,396}, 0},	{{0,0,0,396}, 0},	{{0,0,0,396}, 0},
{{0,0,0,0}, 118},	{{1,0,0,0}, 0},	{{1,1,1,-2311}, 0},
{{1,397,399,397}, 0},	{{1,397,-1148,0}, 0},	{{-2311,-2311,-2311,-2311}, 171},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,392,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-10397}, 0},	{{1,1,1,-10397}, 0},
{{1,1,1,1}, 0},	{{-10397,-10397,-10397,389}, 0},	{{1,-9005,0,0}, 0},
{{1,1,1,1}, 158},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,376}, 0},	{{0,0,0,376}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,368}, 0},	{{0,0,0,368}, 0},
{{0,0,0,368}, 0},	{{0,0,0,368}, 0},	{{0,0,0,0}, 178},
{{0,0,0,0}, 177},	{{1,-9034,0,0}, 0},	{{1,1,1,1}, 5},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,356}, 0},
{{1,-9048,0,0}, 0},	{{1,0,0,0}, 5},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 174},
{{0,0,0,344}, 0},	{{0,0,0,344}, 0},	{{0,0,0,344}, 0},
{{0,0,0,344}, 0},	{{0,0,0,344}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,337}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,335,0}, 0},
{{0,0,0,335}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 123},	{{1,1,1,1}, 0},	{{0,0,0,331}, 0},
{{-9402,331,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 84},	{{0,0,0,0}, 76},	{{-441,-8960,0,0}, 0},
{{0,0,0,326}, 0},	{{1,326,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,327,0}, 0},	{{0,0,0,327}, 0},	{{0,0,0,327}, 0},
{{0,0,0,327}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,329,0,0}, 0},	{{0,0,0,332}, 0},
{{0,0,0,332}, 0},	{{0,0,0,332}, 0},	{{0,0,0,332}, 0},
{{0,0,0,336}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,328}, 0},	{{0,0,0,328}, 0},	{{0,0,0,337}, 0},
{{0,0,0,339}, 0},	{{1,-9118,0,0}, 0},	{{1,0,0,0}, 5},
{{1,0,0,0}, 0},	{{0,0,0,336}, 0},	{{1,1,1,1}, 0},
{{0,0,0,336}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,334,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,334,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,334}, 0},
{{0,0,0,334}, 0},	{{0,0,0,334}, 0},	{{0,0,0,334}, 0},
{{0,0,0,334}, 0},	{{0,0,0,334}, 0},	{{0,0,0,334}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 30},	{{0,0,0,332}, 0},
{{0,0,0,347}, 0},	{{-11084,-11084,-11084,347}, 0},	{{0,0,0,347}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,338}, 0},	{{0,0,0,338}, 0},	{{0,0,0,338}, 0},
{{0,0,338,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 522},	{{0,0,0,0}, 512},
{{0,0,0,335}, 0},	{{0,0,0,335}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 527},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 526},
{{0,0,0,322}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 507},
{{0,0,0,320}, 0},	{{-8006,-8006,-8006,320}, 0},	{{0,0,0,320}, 0},
{{0,0,0,320}, 0},	{{1,1,1,1}, 0},	{{0,321,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{0,0,0,319}, 0},	{{1,0,1,0}, 0},	{{1,0,0,0}, 0},
{{0,322,0,0}, 0},	{{0,0,0,322}, 0},	{{0,0,0,322}, 0},
{{1,1,1,1}, 0},	{{0,0,0,321}, 0},	{{0,0,0,321}, 0},
{{0,0,0,321}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 462},
{{0,0,0,0}, 440},	{{1,0,0,0}, 0},	{{0,0,0,0}, 433},
{{1,1,1,1}, 0},	{{1,-5580,0,0}, 0},	{{0,0,0,0}, 432},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 429},	{{1,0,0,0}, 0},
{{0,0,0,0}, 472},	{{0,310,0,0}, 0},	{{0,0,0,312}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,310,0,0}, 0},
{{0,0,0,310}, 0},	{{0,0,0,310}, 0},	{{0,0,0,310}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 418},
{{0,301,0,0}, 0},	{{0,0,0,301}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{0,0,0,0}, 412},
{{1,0,0,0}, 0},	{{0,0,0,296}, 0},	{{1,1,1,1}, 0},
{{0,0,0,296}, 0},	{{0,0,0,296}, 0},	{{0,0,0,0}, 373},
{{0,0,0,295}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,293}, 0},	{{0,0,0,294}, 0},	{{0,0,0,294}, 0},
{{0,0,0,294}, 0},	{{-451,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,308,0}, 0},	{{0,0,0,309}, 0},	{{-1821,-1821,-1821,-1821}, 264},
{{1,0,0,0}, 0},	{{0,0,0,0}, 262},	{{0,0,0,306}, 0},
{{0,0,0,306}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 259},
{{-1802,-1802,-1802,-1802}, 161},	{{0,0,0,304}, 0},	{{-11166,-11166,-11166,317}, 0},
{{0,0,0,0}, 253},	{{0,0,0,320}, 0},	{{0,0,0,320}, 0},
{{0,0,0,335}, 0},	{{0,0,0,335}, 0},	{{0,0,0,335}, 0},
{{-421,0,-421,0}, 0},	{{1,-420,3,0}, 0},	{{0,0,3,0}, 317},
{{-424,0,332,0}, 0},	{{0,0,0,0}, 318},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{0,0,0,324}, 0},	{{0,0,0,0}, 315},	{{0,0,0,323}, 0},
{{0,0,0,325}, 0},	{{0,0,0,325}, 0},	{{0,0,0,325}, 0},
{{0,0,0,325}, 0},	{{0,0,0,0}, 304},	{{0,0,0,324}, 0},
{{0,0,0,327}, 0},	{{0,0,327,0}, 0},	{{0,0,0,0}, 292},
{{0,0,0,0}, 293},	{{0,0,0,325}, 0},	{{0,0,0,325}, 0},
{{0,0,0,329}, 0},	{{1,0,0,0}, 0},	{{0,0,328,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1419,324,-1419,-1419}, 0},	{{0,0,0,330}, 0},
{{0,0,0,0}, 203},	{{-5092,-5092,-5092,329}, 0},	{{-5091,-5091,-5091,329}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 193},	{{-5094,-5094,-5094,327}, 0},
{{1,-2469,-2469,-2469}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2469}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-3258,-3258,-3258,321}, 0},	{{-3259,-3259,-3259,321}, 0},	{{1,-5101,-5101,-5101}, 0},
{{-5101,-5101,-5101,-5101}, 188},	{{-5106,-5106,-5106,324}, 0},	{{-3262,-3262,-3262,324}, 0},
{{-3264,-3264,-3264,324}, 0},	{{0,0,0,324}, 0},	{{0,0,0,325}, 0},
{{0,0,0,327}, 0},	{{1,1,1,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 182},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 240},
{{0,0,0,316}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 244},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 232},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,307,0,0}, 0},	{{0,0,0,307}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,308}, 0},
{{0,0,0,0}, 151},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 150},	{{0,0,0,305}, 0},	{{0,0,0,306}, 0},
{{0,0,0,306}, 0},	{{0,0,0,306}, 0},	{{1,0,0,0}, 0},
{{1,1,1,-1546}, 0},	{{1,304,1,304}, 0},	{{1,1,-1542,0}, 0},
{{0,0,0,0}, 172},	{{1,1,0,0}, 0},	{{0,0,0,0}, 171},
{{-1,-1,-1546,0}, 0},	{{1,0,0,0}, 0},	{{0,298,0,0}, 0},
{{-10785,-10785,-10785,298}, 0},	{{0,0,0,298}, 0},	{{0,0,0,298}, 0},
{{0,0,0,298}, 0},	{{0,0,0,298}, 0},	{{0,0,0,298}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,295,0,0}, 0},	{{0,0,0,300}, 0},	{{0,0,0,300}, 0},
{{0,0,0,300}, 0},	{{0,0,0,304}, 0},	{{0,0,0,304}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 115},
{{0,0,0,316}, 0},	{{0,316,0,0}, 0},	{{0,0,0,321}, 0},
{{0,0,0,325}, 0},	{{0,0,0,325}, 0},	{{0,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,323,0}, 0},
{{0,0,323,0}, 0},	{{0,0,0,328}, 0},	{{0,0,0,330}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,329,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 105},	{{0,0,0,326}, 0},	{{0,0,0,330}, 0},
{{0,0,0,334}, 0},	{{1,0,329,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,324,0}, 0},	{{0,0,0,0}, 99},
{{0,0,0,333}, 0},	{{0,0,0,335}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,326}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 41},
{{0,0,0,323}, 0},	{{1,1,1,1}, 0},	{{0,0,337,0}, 0},
{{0,0,0,338}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,328}, 0},
{{0,0,0,328}, 0},	{{0,0,0,328}, 0},	{{0,0,0,329}, 0},
{{0,0,0,329}, 0},	{{0,0,0,329}, 0},	{{0,0,0,329}, 0},
{{0,0,0,336}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 23},
{{1,349,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,360}, 0},
{{1,302,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,360}, 0},	{{0,0,0,360}, 0},
{{-11430,-11430,-11430,-11430}, 14},	{{0,0,0,359}, 0},	{{0,0,0,378}, 0},
{{0,0,0,378}, 0},	{{0,378,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,364,0}, 0},	{{0,0,0,364}, 0},
{{0,0,0,364}, 0},	{{0,0,0,364}, 0},	{{0,0,0,364}, 0},
{{-8325,-8325,-8325,364}, 0},	{{0,0,0,364}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 484},	{{0,0,0,0}, 485},	{{1,1,1,1}, 0},
{{0,0,0,371}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,366}, 0},	{{0,0,0,366}, 0},	{{0,0,0,371}, 0},
{{0,0,0,371}, 0},	{{0,0,0,371}, 0},	{{0,0,0,371}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,364}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,362,0,0}, 0},	{{0,0,0,362}, 0},
{{0,0,363,0}, 0},	{{0,365,0,0}, 0},	{{0,0,0,0}, 419},
{{0,364,0,0}, 0},	{{0,0,0,364}, 0},	{{0,0,0,366}, 0},
{{1,1,1,1}, 0},	{{0,0,0,369}, 0},	{{0,0,0,369}, 0},
{{0,0,0,369}, 0},	{{0,0,0,380}, 0},	{{1,1,1,1}, 0},
{{0,0,0,379}, 0},	{{0,0,0,379}, 0},	{{0,0,0,379}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,378}, 0},	{{1,1,0,0}, 0},
{{0,0,0,378}, 0},	{{0,0,0,379}, 0},	{{0,379,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 260},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,364}, 0},	{{1,-10476,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 257},
{{0,0,0,359}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,220,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,105}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,351}, 0},	{{0,0,0,351}, 0},
{{0,0,0,351}, 0},	{{0,0,351,0}, 0},	{{0,0,0,0}, 320},
{{0,0,0,350}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,348,0,0}, 0},	{{0,0,0,348}, 0},	{{0,0,0,348}, 0},
{{0,0,0,348}, 0},	{{0,0,0,0}, 305},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,344,0}, 0},
{{0,0,344,0}, 0},	{{0,0,0,0}, 294},	{{0,0,0,352}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 96},	{{0,0,0,0}, 205},
{{0,0,350,0}, 0},	{{1,-1742,-1742,-1742}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-1742}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-3574,-3574,-3574,350}, 0},	{{0,0,0,350}, 0},
{{-5420,-5420,-5420,-5420}, 87},	{{-5419,-5419,-5419,349}, 0},	{{-5420,-5420,-5420,351}, 0},
{{-3578,-3578,-3578,351}, 0},	{{1,-3579,-3579,-3579}, 0},	{{1,-3579,-3579,-3579}, 0},
{{1,1,1,1}, 0},	{{1,-4844,-4844,-4844}, 0},	{{1,1,1,1}, 0},
{{-4844,-4844,-4844,346}, 0},	{{-5429,-5429,-5429,347}, 0},	{{-3585,-3585,-3585,347}, 0},
{{-3587,-3587,-3587,347}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 185},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 183},
{{0,0,0,0}, 14},	{{0,0,0,341}, 0},	{{0,0,0,0}, 239},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 249},	{{1,1,0,0}, 0},	{{0,0,0,0}, 152},
{{1,1,1,1}, 0},	{{0,0,0,333}, 0},	{{0,0,0,334}, 0},
{{0,0,0,334}, 0},	{{0,0,0,334}, 0},	{{-302,-302,0,0}, 0},
{{0,0,0,336}, 0},	{{-11082,-11082,-11082,337}, 0},	{{0,0,0,339}, 0},
{{0,0,0,339}, 0},	{{0,0,0,339}, 0},	{{0,0,0,339}, 0},
{{0,0,339,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,342}, 0},	{{0,0,0,342}, 0},	{{0,0,0,342}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 162},	{{0,0,0,338}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,330}, 0},	{{0,0,0,330}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,325}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,36,0}, 0},
{{0,0,0,0}, 98},	{{0,0,0,320}, 0},	{{1,1,1,1}, 0},
{{0,0,319,0}, 0},	{{0,0,0,0}, 113},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,315}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 111},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 97},	{{1,1,1,0}, 0},	{{0,0,0,0}, 106},
{{1,0,6,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 101},	{{1,0,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 102},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 100},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 59},
{{0,0,0,287}, 0},	{{0,0,0,287}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 23},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,272}, 0},
{{1,1,0,0}, 0},	{{0,271,0,0}, 0},	{{0,0,0,274}, 0},
{{0,0,0,274}, 0},	{{0,0,0,274}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 23},	{{0,0,0,272}, 0},	{{0,0,0,279}, 0},
{{0,0,0,286}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 23},
{{1,285,278,278}, 0},	{{1,1,1,1}, 0},	{{1,1,1,288}, 0},
{{1,270,278,278}, 0},	{{1,-326,-326,-326}, 0},	{{-326,-326,-326,-326}, 31},
{{1,0,0,0}, 0},	{{1,1,1,1}, 23},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,-33,-33}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,272}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,260}, 0},	{{1,-57,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,250}, 0},	{{0,0,0,250}, 0},	{{0,0,0,0}, 15},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,230}, 0},	{{0,0,0,230}, 0},
{{0,0,0,230}, 0},	{{0,230,0,0}, 0},	{{0,0,0,0}, 523},
{{0,0,0,229}, 0},	{{0,0,0,229}, 0},	{{0,0,0,231}, 0},
{{0,0,0,241}, 0},	{{-8688,-8688,-8688,251}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,240,240,240}, 0},
{{1,1,0,0}, 489},	{{0,0,0,240}, 0},	{{0,0,0,240}, 0},
{{0,0,0,240}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,235}, 0},	{{0,235,0,0}, 0},	{{0,235,0,0}, 0},
{{0,0,0,0}, 528},	{{0,0,0,234}, 0},	{{0,0,0,234}, 0},
{{0,0,0,234}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 468},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 466},
{{0,0,0,229}, 0},	{{0,231,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 416},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 412},
{{0,0,0,0}, 413},	{{0,0,0,223}, 0},	{{0,0,0,223}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,212}, 0},
{{0,0,0,212}, 0},	{{0,0,0,217}, 0},	{{0,0,0,0}, 341},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,202}, 0},	{{1,1,1,1}, 0},	{{0,0,0,201}, 0},
{{1,1,1,1}, 0},	{{0,0,0,201}, 0},	{{0,0,0,0}, 267},
{{0,0,0,0}, 261},	{{0,0,0,199}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,125,118,118}, 0},	{{1,1,1,1}, 0},
{{1,1,1,84}, 0},	{{1,118,118,118}, 0},	{{1,-357,-357,-357}, 0},
{{-357,-357,-357,-357}, 31},	{{0,0,0,191}, 0},	{{0,0,0,0}, 252},
{{-1105,0,190,0}, 0},	{{0,0,0,0}, 329},	{{0,0,0,189}, 0},
{{0,0,0,189}, 0},	{{0,194,0,0}, 0},	{{0,0,0,194}, 0},
{{0,0,194,0}, 306},	{{0,0,0,0}, 289},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,184,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 284},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,173}, 0},
{{-3923,-3923,-3923,173}, 0},	{{0,173,0,0}, 0},	{{1,1,1,1}, 0},
{{1,-5767,-5767,-5767}, 0},	{{-5767,-5767,-5767,-5767}, 84},	{{-5770,-5770,-5770,171}, 0},
{{-3928,-3928,-3928,171}, 0},	{{1,1,1,1}, 0},	{{-5189,-5189,-5189,170}, 0},
{{-5775,-5775,-5775,174}, 0},	{{-5196,-5196,-5196,175}, 0},	{{-3933,-3933,-3933,175}, 0},
{{0,0,0,177}, 0},	{{1,1,1,1}, 0},	{{0,0,0,178}, 0},
{{0,0,0,178}, 0},	{{0,0,0,182}, 0},	{{1,182,0,0}, 0},
{{1,1,1,1}, 146},	{{1,1,1,1}, 0},	{{-252,180,-252,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,179}, 0},	{{1,-10028,0,0}, 0},
{{1,0,0,0}, 5},	{{0,0,0,178}, 0},	{{0,0,0,179}, 0},
{{0,0,0,179}, 0},	{{0,0,0,180}, 0},	{{0,0,0,180}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,179}, 0},
{{0,0,0,179}, 0},	{{0,0,0,179}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 163},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,35,35,35}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,35,35,35}, 0},	{{1,-336,-336,-336}, 0},	{{-336,-336,-336,-336}, 31},
{{0,0,0,169}, 0},	{{0,0,0,169}, 0},	{{0,0,0,169}, 0},
{{0,0,0,0}, 124},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,166}, 0},	{{0,0,0,166}, 0},	{{0,0,0,166}, 0},
{{0,0,0,166}, 0},	{{0,0,0,166}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,163}, 0},
{{0,0,0,0}, 21},	{{0,0,0,162}, 0},	{{0,0,0,162}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 23},	{{1,9,9,9}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,9,9}, 0},
{{1,-294,-294,-294}, 0},	{{-294,-294,-294,-294}, 31},	{{1,0,0,0}, 0},
{{1,1,1,1}, 23},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 31},	{{1,0,0,0}, 0},	{{-7,-7,-7,-7}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-6}, 0},	{{1,-6,-6,-6}, 0},
{{1,-262,-262,-262}, 0},	{{-262,-262,-262,-262}, 31},	{{1,-17,-9,-9}, 0},
{{1,-254,-254,-254}, 0},	{{-254,-254,-254,-254}, 31},	{{0,0,0,136}, 0},
{{0,0,0,136}, 0},	{{0,0,0,136}, 0},	{{0,0,0,136}, 0},
{{0,0,0,136}, 0},	{{0,0,0,136}, 0},	{{0,0,0,136}, 0},
{{0,0,138,0}, 0},	{{0,138,0,0}, 0},	{{1,1,1,1}, 0},
{{1,137,0,0}, 0},	{{-224,-224,-224,-224}, 511},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 489},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-238,-238,0,0}, 0},
{{-8938,-8938,-8938,114}, 0},	{{0,0,0,124}, 0},	{{0,0,0,124}, 0},
{{0,0,0,125}, 0},	{{0,0,0,125}, 0},	{{0,0,0,125}, 0},
{{0,0,0,126}, 0},	{{0,0,0,128}, 0},	{{0,0,0,129}, 0},
{{0,0,0,129}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 421},	{{0,0,0,0}, 417},	{{0,0,0,125}, 0},
{{0,0,0,0}, 409},	{{0,0,0,124}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 385},	{{1,0,0,0}, 0},
{{0,0,0,0}, 344},	{{0,0,0,116}, 0},	{{1,1,1,1}, 0},
{{0,0,0,115}, 0},	{{0,0,0,115}, 0},	{{0,0,0,120}, 0},
{{0,0,0,120}, 0},	{{0,0,0,0}, 331},	{{0,0,0,119}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,114}, 0},
{{0,0,0,114}, 0},	{{0,0,0,0}, 306},	{{0,0,0,0}, 307},
{{0,0,0,112}, 0},	{{0,0,0,112}, 0},	{{-4095,-4095,-4095,112}, 0},
{{1,0,0,0}, 184},	{{0,0,0,0}, 198},	{{-5940,-5940,-5940,112}, 0},
{{-5363,-5363,-5363,114}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,-1076,-1076}, 0},	{{-1076,-1076,-1076,-1076}, 186},
{{1,1,-5948,-5948}, 0},	{{-5948,-5948,-5948,-5948}, 185},	{{-5370,-5370,-5370,107}, 0},
{{1,1,1,-5372}, 0},	{{1,-5372,-5372,-5372}, 0},	{{-5372,-5372,-5372,-5372}, 182},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,104,0}, 0},
{{0,0,0,104}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,-428,0}, 0},	{{0,0,0,0}, 154},
{{1,1,0,0}, 0},	{{0,0,0,0}, 146},	{{0,0,0,0}, 147},
{{1,1,1,1}, 0},	{{0,0,0,95}, 0},	{{1,1,1,1}, 0},
{{0,0,0,94}, 0},	{{0,0,0,94}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 168},	{{0,0,0,93}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,93,93,93}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,93,93,93}, 0},	{{1,-502,-502,-502}, 0},
{{-502,-502,-502,-502}, 166},	{{0,0,0,92}, 0},	{{0,0,0,92}, 0},
{{0,0,0,92}, 0},	{{0,0,0,99}, 0},	{{0,0,0,99}, 0},
{{0,0,0,99}, 0},	{{0,0,0,99}, 0},	{{0,0,0,99}, 0},
{{0,0,0,99}, 0},	{{0,0,0,99}, 0},	{{0,0,0,99}, 0},
{{0,0,0,99}, 0},	{{0,0,0,99}, 0},	{{0,0,0,99}, 0},
{{0,0,0,101}, 0},	{{0,0,0,101}, 0},	{{0,0,0,101}, 0},
{{0,0,0,101}, 0},	{{0,0,0,101}, 0},	{{0,0,0,101}, 0},
{{1,1,1,1}, 0},	{{1,4,0,0}, 0},	{{-118,-118,-118,-118}, 511},
{{0,0,0,99}, 0},	{{0,0,0,104}, 0},	{{0,0,0,0}, 511},
{{1,1,1,-135}, 0},	{{1,-9051,-9051,-9051}, 0},	{{1,1,1,1}, 0},
{{1,1,-135,-135}, 0},	{{1,1,-135,-135}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-9051,-9051,-9051}, 0},	{{-9051,-9051,-9051,-9051}, 489},	{{0,0,0,96}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 533},	{{0,0,0,94}, 0},
{{0,0,0,94}, 0},	{{1,1,1,1}, 0},	{{0,93,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 530},
{{1,0,0,0}, 0},	{{0,89,0,0}, 0},	{{0,0,0,90}, 0},
{{0,0,0,90}, 0},	{{0,0,0,0}, 410},	{{0,0,0,89}, 0},
{{0,0,0,89}, 0},	{{0,0,0,89}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 266},	{{0,0,0,83}, 0},
{{0,0,0,83}, 0},	{{0,0,0,83}, 0},	{{0,0,0,85}, 0},
{{0,0,0,85}, 0},	{{0,0,0,85}, 0},	{{0,0,0,85}, 0},
{{1,1,1,1}, 0},	{{1,-5471,-5471,-5471}, 0},	{{-5471,-5471,-5471,-5471}, 115},
{{1,1,1,1}, 0},	{{1,-6051,-6051,-6051}, 0},	{{-6051,-6051,-6051,-6051}, 111},
{{-5476,-5476,-5476,79}, 0},	{{1,1,1,1}, 0},	{{1,-5476,-5476,-5476}, 0},
{{-5476,-5476,-5476,-5476}, 183},	{{0,0,0,78}, 0},	{{0,0,0,85}, 0},
{{0,0,0,85}, 0},	{{0,0,0,85}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 169},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 166},
{{0,0,0,76}, 0},	{{0,0,0,76}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 175},	{{0,0,0,68}, 0},	{{0,0,68,0}, 0},
{{0,0,0,68}, 0},	{{0,0,0,68}, 0},	{{0,0,0,70}, 0},
{{0,0,0,70}, 0},	{{0,0,0,72}, 0},	{{0,0,0,73}, 0},
{{0,0,0,73}, 0},	{{0,0,0,73}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 33},	{{0,0,0,72}, 0},
{{0,0,0,72}, 0},	{{0,0,0,72}, 0},	{{0,0,0,72}, 0},
{{0,0,0,72}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 13},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,65}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,61,0,0}, 0},	{{0,0,0,61}, 0},
{{0,0,0,61}, 0},	{{0,0,0,62}, 0},	{{0,62,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,62,0}, 0},	{{0,0,0,69}, 0},
{{0,0,0,69}, 0},	{{0,0,0,69}, 0},	{{0,0,0,69}, 0},
{{0,0,0,69}, 0},	{{0,0,0,69}, 0},	{{0,0,0,71}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 316},
{{0,0,0,68}, 0},	{{0,0,0,0}, 299},	{{0,0,0,67}, 0},
{{0,0,0,67}, 0},	{{1,1,1,1}, 0},	{{1,1,-5554,-5554}, 0},
{{-5554,-5554,-5554,-5554}, 59},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,57}, 0},
{{0,0,0,0}, 149},	{{0,0,0,56}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 167},	{{0,0,0,63}, 0},	{{0,0,0,63}, 0},
{{0,0,0,67}, 0},	{{0,0,0,0}, 141},	{{0,0,0,66}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,65}, 0},
{{0,0,0,66}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 57},	{{1,0,0,0}, 0},	{{0,0,0,0}, 36},
{{0,0,0,72}, 0},	{{0,0,0,72}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 34},	{{0,0,0,69}, 0},
{{0,0,0,69}, 0},	{{0,0,0,69}, 0},	{{0,0,0,69}, 0},
{{0,0,0,69}, 0},	{{0,0,0,69}, 0},	{{0,0,0,0}, 516},
{{0,0,0,68}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 531},
{{0,0,0,66}, 0},	{{1,1,1,1}, 0},	{{0,65,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,58}, 0},	{{0,0,0,59}, 0},
{{0,0,0,0}, 469},	{{0,0,0,58}, 0},	{{0,0,0,58}, 0},
{{0,0,0,0}, 339},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 256},	{{0,0,0,54}, 0},	{{0,0,0,54}, 0},
{{0,0,0,54}, 0},	{{0,0,0,54}, 0},	{{0,0,0,55}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 170},	{{0,0,0,45}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 179},	{{0,0,0,41}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 140},	{{1,0,0,0}, 0},	{{0,0,0,0}, 143},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,26}, 0},
{{0,0,0,26}, 0},	{{0,0,0,26}, 0},	{{0,0,0,26}, 0},
{{0,0,0,26}, 0},	{{0,0,0,26}, 0},	{{0,0,0,26}, 0},
{{0,0,0,43}, 0},	{{0,0,0,43}, 0},	{{0,0,0,43}, 0},
{{0,43,0,0}, 0},	{{0,0,0,43}, 0},	{{1,1,1,1}, 0},
{{0,0,0,42}, 0},	{{0,0,0,42}, 0},	{{0,0,0,43}, 0},
{{0,0,0,43}, 0},	{{0,0,0,43}, 0},	{{0,0,0,44}, 0},
{{0,0,0,44}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 200},
{{0,0,0,42}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 180},
{{0,0,0,40}, 0},	{{0,0,0,41}, 0},	{{0,0,0,41}, 0},
{{0,0,0,42}, 0},	{{0,0,0,42}, 0},	{{0,0,0,43}, 0},
{{0,0,0,44}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 25},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,28}, 0},	{{0,0,0,28}, 0},	{{0,0,0,29}, 0},
{{0,0,0,29}, 0},	{{0,0,0,0}, 532},	{{0,0,0,30}, 0},
{{0,0,0,30}, 0},	{{1,1,1,1}, 0},	{{0,0,30,0}, 0},
{{0,0,0,37}, 0},	{{0,0,0,41}, 0},	{{1,0,0,0}, 0},
{{-27,-27,-27,-27}, 24},	{{0,40,0,0}, 0},	{{0,0,0,0}, 295},
{{0,0,0,39}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 24},
{{0,0,0,37}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 27},
{{0,0,0,35}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 29},
{{1,0,0,0}, 0},	{{-40,-40,-40,-40}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 25},	{{0,0,0,30}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 12},	{{0,0,0,28}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 490},	{{0,0,0,26}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 537},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,17}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,13,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 342},	{{0,0,0,0}, 298},
{{0,0,0,10}, 0},	{{0,0,0,10}, 0},	{{1,0,0,0}, 0},
{{0,0,0,9}, 0},	{{0,0,0,10}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 521},	{{0,0,0,8}, 0},	{{0,0,0,8}, 0},
{{0,0,0,0}, 401},	{{0,0,0,7}, 0},	{{0,0,0,7}, 0},
{{1,1,1,1}, 0},	{{0,0,0,6}, 0},	{{0,0,0,14}, 0},
{{0,0,0,14}, 0},	{{0,0,0,14}, 0},	{{0,0,0,14}, 0},
{{0,0,0,15}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,7}, 0},	{{0,0,0,7}, 0},	{{0,0,0,7}, 0},
{{0,0,0,7}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 247},
{{0,0,0,5}, 0},	{{0,0,0,5}, 0},	{{0,0,0,5}, 0},
{{0,0,0,5}, 0},	{{0,0,0,6}, 0},	{{0,0,6,0}, 0},
{{0,0,0,6}, 0},	{{0,0,0,6}, 0},	{{1,1,1,1}, 0},
{{0,0,0,5}, 0},	{{0,0,0,7}, 0},	{{0,0,0,0}, 112},
{{0,0,0,6}, 0},	{{0,0,0,6}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,4,0,0}, 0},	{{0,0,0,4}, 0},
{{0,0,0,4}, 0},	{{0,0,0,4}, 0},	{{0,0,0,0}, 534},
{{0,0,0,4}, 0},	{{0,0,0,4}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 26},	{{0,0,0,2}, 0},	{{0,0,0,10}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 535},
{{0,0,0,1}, 0},	{{0,0,0,1}, 0},	{{0,0,0,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 35},
};

static const attrib_rt_t idx_owl_defendpat[538] = {
{-1,0},	{268,0},	{263,1},	{189,2},
{437,0},	{434,0},	{375,0},	{408,6},
{409,7},	{362,0},	{401,0},	{438,10},
{25,0},	{199,0},	{363,0},	{48,0},
{400,0},	{398,16},	{399,17},	{438,0},
{192,0},	{285,0},	{425,0},	{350,0},
{410,0},	{351,24},	{17,0},	{351,0},
{352,0},	{351,28},	{98,0},	{417,0},
{15,0},	{56,32},	{56,0},	{31,0},
{105,0},	{40,5},	{22,0},	{40,0},
{62,0},	{208,0},	{227,5},	{215,0},
{388,0},	{376,0},	{44,5},	{44,0},
{396,0},	{37,0},	{62,49},	{176,0},
{180,51},	{177,0},	{195,0},	{51,0},
{371,0},	{101,0},	{49,0},	{71,0},
{432,0},	{370,0},	{374,61},	{366,62},
{364,63},	{414,0},	{358,0},	{357,0},
{368,0},	{372,68},	{398,69},	{399,70},
{367,71},	{482,0},	{483,0},	{28,0},
{140,0},	{365,0},	{91,77},	{194,0},
{133,0},	{174,0},	{173,0},	{188,54},
{128,0},	{138,0},	{188,0},	{124,0},
{197,0},	{175,0},	{337,60},	{69,0},
{132,0},	{347,0},	{433,0},	{349,0},
{52,0},	{53,96},	{58,97},	{57,98},
{58,0},	{57,100},	{57,0},	{168,0},
{104,0},	{236,0},	{460,0},	{202,0},
{484,0},	{147,0},	{178,0},	{166,0},
{142,0},	{146,0},	{308,60},	{161,0},
{224,0},	{485,0},	{170,0},	{204,0},
{88,0},	{361,0},	{21,0},	{11,0},
{394,0},	{332,53},	{23,0},	{333,53},
{332,0},	{333,0},	{8,0},	{150,0},
{200,0},	{96,132},	{97,133},	{217,134},
{217,0},	{96,0},	{217,137},	{478,0},
{149,0},	{70,0},	{164,0},	{153,0},
{243,0},	{169,0},	{55,0},	{54,0},
{214,0},	{159,0},	{218,0},	{170,148},
{228,0},	{9,0},	{58,153},	{1,0},
{14,0},	{24,0},	{4,5},	{18,0},
{415,0},	{416,0},	{53,0},	{39,0},
{61,0},	{46,0},	{27,0},	{249,0},
{33,0},	{34,0},	{155,0},	{113,0},
{114,0},	{13,0},	{118,0},	{119,0},
{397,0},	{106,0},	{107,131},	{270,0},
{486,0},	{356,0},	{102,0},	{68,0},
{171,0},	{206,0},	{198,0},	{384,0},
{45,0},	{184,53},	{304,0},	{187,0},
{182,0},	{139,0},	{251,0},	{162,0},
{126,0},	{336,0},	{250,0},	{203,0},
{127,0},	{74,0},	{335,0},	{205,0},
{154,0},	{135,0},	{321,0},	{81,0},
{73,0},	{3,0},	{95,0},	{86,0},
{85,211},	{403,0},	{163,0},	{112,0},
{10,0},	{271,0},	{269,217},	{125,0},
{129,0},	{191,0},	{340,0},	{341,222},
{213,0},	{256,0},	{196,0},	{90,0},
{90,226},	{306,0},	{111,0},	{108,230},
{121,0},	{108,0},	{172,0},	{485,234},
{152,0},	{258,0},	{257,237},	{328,0},
{248,0},	{487,0},	{38,0},	{120,0},
{103,0},	{35,0},	{90,242},	{234,0},
{377,0},	{233,0},	{412,0},	{422,0},
{0,0},	{207,0},	{273,0},	{274,0},
{63,0},	{59,0},	{406,0},	{240,0},
{241,0},	{137,0},	{219,0},	{477,0},
{109,0},	{181,0},	{468,0},	{5,0},
{334,0},	{235,0},	{185,0},	{354,0},
{446,0},	{267,0},	{360,273},	{359,274},
{110,0},	{272,0},	{448,0},	{449,278},
{404,0},	{449,0},	{201,0},	{179,0},
{237,0},	{165,283},	{239,0},	{29,0},
{466,0},	{134,0},	{232,0},	{275,0},
{122,0},	{123,0},	{141,0},	{143,0},
{316,0},	{315,0},	{231,0},	{463,0},
{76,0},	{378,0},	{451,0},	{452,302},
{453,303},	{474,0},	{473,0},	{144,0},
{222,0},	{223,308},	{131,0},	{255,0},
{115,0},	{454,0},	{225,0},	{454,314},
{47,0},	{450,0},	{454,317},	{225,317},
{454,319},	{455,0},	{216,0},	{467,0},
{288,0},	{379,0},	{380,0},	{327,0},
{226,0},	{454,328},	{450,328},	{454,330},
{309,0},	{420,0},	{151,0},	{190,334},
{78,0},	{424,0},	{20,0},	{100,0},
{79,0},	{41,0},	{26,0},	{30,336},
{244,0},	{392,0},	{393,345},	{390,346},
{390,0},	{391,348},	{12,0},	{391,337},
{82,0},	{83,352},	{84,0},	{2,0},
{16,0},	{343,0},	{84,357},	{342,0},
{392,359},	{471,0},	{469,361},	{186,362},
{345,0},	{346,0},	{439,0},	{353,0},
{470,0},	{472,368},	{305,0},	{19,0},
{319,0},	{99,0},	{348,0},	{302,0},
{282,0},	{281,376},	{283,0},	{303,0},
{386,0},	{291,0},	{339,0},	{42,0},
{43,383},	{32,0},	{430,0},	{287,0},
{264,0},	{265,388},	{242,0},	{77,353},
{92,391},	{435,0},	{87,0},	{344,394},
{156,0},	{317,0},	{77,0},	{92,398},
{320,0},	{445,0},	{440,0},	{441,402},
{444,0},	{387,0},	{475,0},	{36,0},
{427,0},	{405,0},	{299,0},	{260,0},
{261,411},	{262,0},	{427,368},	{472,414},
{252,0},	{136,0},	{167,0},	{298,0},
{313,0},	{253,0},	{481,0},	{325,0},
{322,0},	{355,0},	{64,0},	{447,0},
{391,0},	{50,0},	{436,0},	{311,0},
{65,431},	{389,0},	{326,0},	{312,0},
{318,0},	{210,0},	{209,437},	{211,0},
{212,439},	{259,0},	{426,430},	{395,0},
{411,0},	{183,0},	{310,0},	{278,0},
{276,447},	{277,448},	{395,449},	{330,446},
{329,451},	{130,446},	{314,0},	{292,0},
{312,455},	{419,0},	{456,0},	{459,0},
{457,459},	{457,0},	{148,0},	{385,0},
{75,0},	{421,0},	{300,0},	{307,0},
{66,0},	{229,0},	{160,0},	{293,0},
{284,0},	{294,0},	{30,0},	{480,0},
{479,475},	{60,0},	{80,0},	{413,0},
{442,0},	{279,0},	{280,481},	{423,0},
{286,0},	{331,0},	{323,0},	{418,0},
{297,0},	{72,0},	{428,0},	{429,0},
{94,0},	{443,0},	{67,0},	{464,0},
{465,495},	{465,0},	{6,0},	{60,498},
{402,0},	{369,0},	{373,501},	{458,0},
{93,0},	{301,0},	{7,0},	{60,506},
{382,0},	{324,0},	{117,0},	{431,0},
{461,0},	{462,0},	{116,0},	{381,0},
{247,0},	{338,0},	{145,517},	{383,0},
{193,0},	{476,0},	{295,0},	{296,0},
{289,0},	{89,0},	{290,0},	{407,0},
{157,0},	{245,0},	{254,0},	{246,0},
{238,0},	{158,0},	{230,0},	{266,0},
{220,0},	{221,536},	};

static dfa_rt_t dfa_owl_defendpat = {
 "owl_defendpat",
state_owl_defendpat,
idx_owl_defendpat};

struct pattern_db owl_defendpat_db = {
  -1,
  0,
  owl_defendpat
 ,& dfa_owl_defendpat
};
