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

static struct patval owl_attackpat0[] = {
  {758,1},	{721,1},	{757,3}
};

static struct patval owl_attackpat1[] = {
  {719,1},	{721,1},	{757,3}
};

static struct patval owl_attackpat2[] = {
  {685,1},	{684,1}
};

static struct patval owl_attackpat3[] = {
  {684,1}
};

static struct patval owl_attackpat4[] = {
  {685,1},	{647,1},	{610,1}
};

static struct patval owl_attackpat5[] = {
  {646,1},	{647,1},	{757,3},	{758,3}
};

static struct patval owl_attackpat6[] = {
  {647,1},	{685,1}
};

static struct patval owl_attackpat7[] = {
  {609,1},	{684,1},	{646,3}
};

static struct patval owl_attackpat8[] = {
  {719,1},	{758,1},	{684,1}
};

static struct patval owl_attackpat9[] = {
  {684,1}
};

static struct patval owl_attackpat10[] = {
  {684,1},	{720,3},	{721,3}
};

static struct patval owl_attackpat11[] = {
  {684,1}
};

static struct patval owl_attackpat12[] = {
  {685,1},	{648,1},	{647,1}
};

static struct patval owl_attackpat13[] = {
  {684,1},	{721,3}
};

static struct patval owl_attackpat14[] = {
  {685,1},	{684,1}
};

static struct patval owl_attackpat15[] = {
  {648,1},	{758,1},	{759,3}
};

static struct patval owl_attackpat16[] = {
  {687,1},	{684,1}
};

static struct patval owl_attackpat17[] = {
  {722,1},	{684,1}
};

static struct patval owl_attackpat18[] = {
  {721,1},	{685,1},	{648,1},	{758,1}
};

static struct patval owl_attackpat19[] = {
  {684,1},	{648,1},	{647,3},	{758,3}
};

static struct patval owl_attackpat20[] = {
  {722,1}
};

static struct patval owl_attackpat21[] = {
  {684,1},	{721,1}
};

static struct patval owl_attackpat22[] = {
  {684,1},	{647,1}
};

static struct patval owl_attackpat23[] = {
  {685,1},	{721,1}
};

static struct patval owl_attackpat24[] = {
  {685,1},	{647,1}
};

static struct patval owl_attackpat25[] = {
  {758,1}
};

static struct patval owl_attackpat26[] = {
  {684,1},	{648,3},	{647,3}
};

static struct patval owl_attackpat27[] = {
  {684,1},	{648,3},	{647,3},	{610,3},
  {611,3}
};

static struct patval owl_attackpat28[] = {
  {684,1},	{796,1},	{647,3},	{610,3},
  {648,3},	{611,3}
};

static struct patval owl_attackpat29[] = {
  {684,1},	{721,1}
};

static struct patval owl_attackpat30[] = {
  {684,1}
};

static struct patval owl_attackpat31[] = {
  {648,1},	{723,1},	{686,1},	{649,3}
};

static struct patval owl_attackpat32[] = {
  {684,1},	{683,1}
};

static struct patval owl_attackpat33[] = {
  {684,1}
};

static struct patval owl_attackpat34[] = {
  {684,1},	{648,3},	{647,3}
};

static struct patval owl_attackpat35[] = {
  {684,1},	{647,3},	{794,3},	{648,3},
  {795,3}
};

static struct patval owl_attackpat36[] = {
  {759,1}
};

static struct patval owl_attackpat37[] = {
  {683,1},	{647,1},	{646,3}
};

static struct patval owl_attackpat38[] = {
  {685,1},	{686,1},	{646,3},	{723,3}
};

static struct patval owl_attackpat39[] = {
  {684,1},	{647,1}
};

static struct patval owl_attackpat40[] = {
  {684,1},	{647,1}
};

static struct patval owl_attackpat41[] = {
  {758,1},	{721,1}
};

static struct patval owl_attackpat42[] = {
  {758,1},	{721,1}
};

static struct patval owl_attackpat43[] = {
  {758,1},	{721,1}
};

static struct patval owl_attackpat44[] = {
  {758,1},	{721,1}
};

static struct patval owl_attackpat45[] = {
  {685,1},	{647,1}
};

static struct patval owl_attackpat46[] = {
  {684,1},	{720,3},	{683,3},	{647,3}
};

static struct patval owl_attackpat47[] = {
  {684,1},	{720,3},	{683,3},	{647,3}
};

static struct patval owl_attackpat48[] = {
  {648,1},	{684,1},	{610,1}
};

static struct patval owl_attackpat49[] = {
  {758,1}
};

static struct patval owl_attackpat50[] = {
  {685,1},	{648,1}
};

static struct patval owl_attackpat51[] = {
  {759,1},	{721,1},	{760,3}
};

static struct patval owl_attackpat52[] = {
  {759,1},	{721,1},	{760,3}
};

static struct patval owl_attackpat53[] = {
  {648,1},	{723,1},	{685,1},	{721,1},
  {645,3},	{646,3}
};

static struct patval owl_attackpat54[] = {
  {686,1},	{722,1},	{723,3},	{610,3}
};

static struct patval owl_attackpat55[] = {
  {721,1}
};

static struct patval owl_attackpat56[] = {
  {647,1},	{685,1},	{794,3},	{795,3},
  {757,3}
};

static struct patval owl_attackpat57[] = {
  {721,1},	{649,3},	{650,3},	{648,3}
};

static struct patval owl_attackpat58[] = {
  {721,1},	{649,3},	{648,3}
};

static struct patval owl_attackpat59[] = {
  {648,1},	{721,1}
};

static struct patval owl_attackpat60[] = {
  {759,1}
};

static struct patval owl_attackpat61[] = {
  {650,1}
};

static struct patval owl_attackpat62[] = {
  {648,1}
};

static struct patval owl_attackpat63[] = {
  {684,1}
};

static struct patval owl_attackpat64[] = {
  {723,1}
};

static struct patval owl_attackpat65[] = {
  {684,1},	{722,1},	{721,3}
};

static struct patval owl_attackpat66[] = {
  {685,1},	{722,1},	{684,1},	{720,3}
};

static struct patval owl_attackpat67[] = {
  {684,1},	{685,1},	{683,3},	{686,3}
};

static struct patval owl_attackpat68[] = {
  {684,1},	{648,1},	{647,3}
};

static struct patval owl_attackpat69[] = {
  {760,1},	{686,1},	{723,3}
};

static struct patval owl_attackpat70[] = {
  {684,1}
};

static struct patval owl_attackpat71[] = {
  {646,1},	{684,1}
};

static struct patval owl_attackpat72[] = {
  {684,1}
};

static struct patval owl_attackpat73[] = {
  {685,1},	{722,3}
};

static struct patval owl_attackpat74[] = {
  {647,1},	{648,1},	{758,1}
};

static struct patval owl_attackpat75[] = {
  {684,1},	{722,1},	{720,1},	{611,3},
  {758,3}
};

static struct patval owl_attackpat76[] = {
  {684,1},	{721,3},	{758,3},	{648,3},
  {647,3}
};

static struct patval owl_attackpat77[] = {
  {684,1}
};

static struct patval owl_attackpat78[] = {
  {684,1}
};

static struct patval owl_attackpat79[] = {
  {684,1}
};

static struct patval owl_attackpat80[] = {
  {648,1},	{649,1}
};

static struct patval owl_attackpat81[] = {
  {648,1},	{649,1}
};

static struct patval owl_attackpat82[] = {
  {686,1},	{722,1},	{684,1},	{723,3},
  {721,3}
};

static struct patval owl_attackpat83[] = {
  {722,1},	{611,3},	{610,3},	{612,3}
};

static struct patval owl_attackpat84[] = {
  {722,1},	{611,3},	{612,3},	{610,3}
};

static struct patval owl_attackpat85[] = {
  {648,1},	{759,3},	{758,3}
};

static struct patval owl_attackpat86[] = {
  {649,1},	{685,1},	{645,3},	{686,3},
  {682,3},	{608,3}
};

static struct patval owl_attackpat87[] = {
  {684,1},	{648,1}
};

static struct patval owl_attackpat88[] = {
  {684,1},	{720,1}
};

static struct patval owl_attackpat89[] = {
  {684,1}
};

static struct patval owl_attackpat90[] = {
  {720,1},	{684,1},	{610,3},	{612,3},
  {611,3}
};

static struct patval owl_attackpat91[] = {
  {684,1},	{685,1},	{719,3},	{645,3},
  {682,3}
};

static struct patval owl_attackpat92[] = {
  {684,1}
};

static struct patval owl_attackpat93[] = {
  {684,1}
};

static struct patval owl_attackpat94[] = {
  {684,1}
};

static struct patval owl_attackpat95[] = {
  {684,1},	{688,3},	{651,3},	{725,3}
};

static struct patval owl_attackpat96[] = {
  {684,1}
};

static struct patval owl_attackpat97[] = {
  {684,1},	{723,1}
};

static struct patval owl_attackpat98[] = {
  {686,1},	{684,1},	{723,3}
};

static struct patval owl_attackpat99[] = {
  {684,1},	{687,3},	{650,3},	{724,3},
  {761,3}
};

static struct patval owl_attackpat100[] = {
  {721,1},	{685,1},	{722,3}
};

static struct patval owl_attackpat101[] = {
  {684,1},	{723,1}
};

static struct patval owl_attackpat102[] = {
  {684,1},	{723,1}
};

static struct patval owl_attackpat103[] = {
  {683,1},	{684,1},	{649,3},	{686,3},
  {760,3},	{723,3}
};

static struct patval owl_attackpat104[] = {
  {759,1},	{648,3},	{649,3}
};

static struct patval owl_attackpat105[] = {
  {648,1},	{759,1},	{686,3}
};

static struct patval owl_attackpat106[] = {
  {648,1},	{759,1},	{686,3}
};

static struct patval owl_attackpat107[] = {
  {721,1},	{684,1},	{687,1}
};

static struct patval owl_attackpat108[] = {
  {721,1},	{684,1},	{687,1}
};

static struct patval owl_attackpat109[] = {
  {720,1},	{683,1},	{685,1},	{722,1}
};

static struct patval owl_attackpat110[] = {
  {758,1},	{686,1}
};

static struct patval owl_attackpat111[] = {
  {684,1},	{758,3}
};

static struct patval owl_attackpat112[] = {
  {648,1},	{723,1},	{721,1},	{686,1}
};

static struct patval owl_attackpat113[] = {
  {720,1},	{757,1},	{684,1},	{759,1},
  {685,1}
};

static struct patval owl_attackpat114[] = {
  {646,1},	{683,1},	{720,1},	{610,1},
  {611,1},	{685,1}
};

static struct patval owl_attackpat115[] = {
  {684,1},	{722,1}
};

static struct patval owl_attackpat116[] = {
  {758,1},	{721,1}
};

static struct patval owl_attackpat117[] = {
  {648,1},	{649,1}
};

static struct patval owl_attackpat118[] = {
  {686,1},	{684,1}
};

static struct patval owl_attackpat119[] = {
  {611,1},	{684,1},	{647,3},	{612,3}
};

static struct patval owl_attackpat120[] = {
  {721,1},	{686,1},	{684,1},	{647,3},
  {649,3}
};

static struct patval owl_attackpat121[] = {
  {685,1},	{648,1},	{647,1},	{645,1}
};

static struct patval owl_attackpat122[] = {
  {684,1},	{758,3},	{760,3},	{759,3}
};

static struct patval owl_attackpat123[] = {
  {684,1},	{720,1},	{683,3}
};

static struct patval owl_attackpat124[] = {
  {684,1}
};

static struct patval owl_attackpat125[] = {
  {646,1},	{685,1},	{684,1},	{720,3}
};

static struct patval owl_attackpat126[] = {
  {758,1},	{721,1},	{684,1},	{759,1}
};

static struct patval owl_attackpat127[] = {
  {720,1},	{758,1},	{683,1}
};

static struct patval owl_attackpat128[] = {
  {758,1},	{683,1},	{720,1},	{796,1},
  {757,3},	{794,3}
};

static struct patval owl_attackpat129[] = {
  {721,1},	{684,1},	{722,1},	{683,3},
  {646,3}
};

static struct patval owl_attackpat130[] = {
  {648,1},	{684,1},	{650,3},	{649,3}
};

static struct patval owl_attackpat131[] = {
  {684,1}
};

static struct patval owl_attackpat132[] = {
  {684,1},	{647,1},	{611,3},	{610,3}
};

static struct patval owl_attackpat133[] = {
  {684,1},	{758,3},	{647,3}
};

static struct patval owl_attackpat134[] = {
  {721,1},	{684,1}
};

static struct patval owl_attackpat135[] = {
  {684,1}
};

static struct patval owl_attackpat136[] = {
  {610,1},	{684,1},	{647,3},	{611,3}
};

static struct patval owl_attackpat137[] = {
  {647,1},	{684,1}
};

static struct patval owl_attackpat138[] = {
  {684,1}
};

static struct patval owl_attackpat139[] = {
  {684,1},	{647,3}
};

static struct patval owl_attackpat140[] = {
  {684,1},	{721,1}
};

static struct patval owl_attackpat141[] = {
  {684,1},	{721,3}
};

static struct patval owl_attackpat142[] = {
  {647,1},	{721,1}
};

static struct patval owl_attackpat143[] = {
  {758,1},	{684,1}
};

static struct patval owl_attackpat144[] = {
  {758,1},	{684,1},	{647,1},	{720,3}
};

static struct patval owl_attackpat145[] = {
  {685,1},	{684,1},	{720,1},	{758,1}
};

static struct patval owl_attackpat146[] = {
  {649,1},	{684,1},	{647,1}
};

static struct patval owl_attackpat147[] = {
  {649,1},	{648,1},	{684,1},	{723,1}
};

static struct patval owl_attackpat148[] = {
  {721,1},	{647,1},	{684,1}
};

static struct patval owl_attackpat149[] = {
  {646,1},	{684,1},	{720,3},	{757,3}
};

static struct patval owl_attackpat150[] = {
  {686,1},	{720,1},	{684,1},	{685,1},
  {758,1}
};

static struct patval owl_attackpat151[] = {
  {648,1},	{647,1},	{722,1},	{685,1},
  {683,1}
};

static struct patval owl_attackpat152[] = {
  {684,1}
};

static struct patval owl_attackpat153[] = {
  {684,1},	{722,3}
};

static struct patval owl_attackpat154[] = {
  {721,1},	{759,1}
};

static struct patval owl_attackpat155[] = {
  {648,1},	{684,1},	{647,3}
};

static struct patval owl_attackpat156[] = {
  {684,1},	{647,3}
};

static struct patval owl_attackpat157[] = {
  {684,1},	{721,1},	{723,1},	{611,1},
  {648,1},	{759,1}
};

static struct patval owl_attackpat158[] = {
  {722,1},	{684,1},	{686,1},	{649,3}
};

static struct patval owl_attackpat159[] = {
  {722,1},	{684,1},	{686,1},	{610,3}
};

static struct patval owl_attackpat160[] = {
  {684,1},	{685,1},	{723,1},	{760,3}
};

static struct patval owl_attackpat161[] = {
  {686,1},	{722,1},	{684,1}
};

static struct patval owl_attackpat162[] = {
  {686,1},	{684,1}
};

static struct patval owl_attackpat163[] = {
  {722,1},	{684,1},	{686,1}
};

static struct patval owl_attackpat164[] = {
  {722,1},	{684,1},	{686,1}
};

static struct patval owl_attackpat165[] = {
  {684,1},	{722,1},	{648,3},	{686,3}
};

static struct patval owl_attackpat166[] = {
  {684,1},	{722,1},	{648,3},	{721,3}
};

static struct patval owl_attackpat167[] = {
  {684,1},	{722,1},	{648,3},	{686,3}
};

static struct patval owl_attackpat168[] = {
  {684,1},	{722,1},	{723,1},	{650,1},
  {687,1},	{721,3}
};

static struct patval owl_attackpat169[] = {
  {684,1},	{721,1},	{760,1},	{759,1}
};

static struct patval owl_attackpat170[] = {
  {686,1},	{723,1},	{684,1},	{721,1},
  {760,3},	{758,3}
};

static struct patval owl_attackpat171[] = {
  {684,1},	{685,1},	{757,1},	{795,1},
  {723,1},	{797,3},	{760,3}
};

static struct patval owl_attackpat172[] = {
  {686,1},	{684,1},	{721,1},	{649,3},
  {611,3},	{722,3}
};

static struct patval owl_attackpat173[] = {
  {722,1},	{686,1},	{684,1},	{649,3},
  {723,3},	{721,3}
};

static struct patval owl_attackpat174[] = {
  {610,1},	{721,1},	{685,1},	{611,1}
};

static struct patval owl_attackpat175[] = {
  {686,1},	{684,1},	{721,3},	{649,3},
  {722,3},	{647,3},	{723,3}
};

static struct patval owl_attackpat176[] = {
  {684,1},	{721,1},	{686,1},	{648,1},
  {723,1},	{759,1}
};

static struct patval owl_attackpat177[] = {
  {647,1},	{684,1},	{686,1},	{649,1},
  {722,1}
};

static struct patval owl_attackpat178[] = {
  {758,1},	{757,1},	{647,3},	{646,3}
};

static struct patval owl_attackpat179[] = {
  {684,1},	{721,1},	{686,1},	{648,1},
  {723,1}
};

static struct patval owl_attackpat180[] = {
  {758,1},	{720,1},	{684,1},	{648,1},
  {647,3},	{683,3},	{757,3}
};

static struct patval owl_attackpat181[] = {
  {686,1},	{722,1},	{684,1},	{723,3},
  {721,3}
};

static struct patval owl_attackpat182[] = {
  {720,1},	{721,1},	{646,3},	{683,3}
};

static struct patval owl_attackpat183[] = {
  {684,1}
};

static struct patval owl_attackpat184[] = {
  {609,1},	{721,1},	{720,1},	{646,3},
  {683,3}
};

static struct patval owl_attackpat185[] = {
  {684,1},	{757,1}
};

static struct patval owl_attackpat186[] = {
  {683,1},	{684,1}
};

static struct patval owl_attackpat187[] = {
  {647,1},	{685,1}
};

static struct patval owl_attackpat188[] = {
  {645,1},	{646,1},	{684,1}
};

static struct patval owl_attackpat189[] = {
  {686,1},	{684,1}
};

static struct patval owl_attackpat190[] = {
  {686,1},	{722,1},	{684,1},	{649,1}
};

static struct patval owl_attackpat191[] = {
  {684,1},	{686,1}
};

static struct patval owl_attackpat192[] = {
  {646,1},	{684,1},	{685,1}
};

static struct patval owl_attackpat193[] = {
  {646,1},	{684,1},	{685,1}
};

static struct patval owl_attackpat194[] = {
  {648,1},	{719,1},	{684,1},	{683,1},
  {682,1}
};

static struct patval owl_attackpat195[] = {
  {647,1},	{721,1}
};

static struct patval owl_attackpat196[] = {
  {647,1},	{721,1}
};

static struct patval owl_attackpat197[] = {
  {758,1},	{683,1},	{720,1},	{646,3}
};

static struct patval owl_attackpat198[] = {
  {683,1},	{647,1},	{685,1},	{720,3}
};

static struct patval owl_attackpat199[] = {
  {685,1},	{683,1},	{722,1}
};

static struct patval owl_attackpat200[] = {
  {646,1},	{648,1},	{684,1},	{721,1},
  {759,1}
};

static struct patval owl_attackpat201[] = {
  {646,1},	{722,1},	{684,1},	{721,1},
  {759,1}
};

static struct patval owl_attackpat202[] = {
  {722,1},	{683,1},	{721,1},	{684,1},
  {759,3}
};

static struct patval owl_attackpat203[] = {
  {646,1},	{760,1},	{684,1},	{721,1},
  {722,1}
};

static struct patval owl_attackpat204[] = {
  {647,1},	{683,1},	{722,1},	{684,1},
  {648,1}
};

static struct patval owl_attackpat205[] = {
  {647,1},	{684,1},	{721,1}
};

static struct patval owl_attackpat206[] = {
  {610,1},	{611,1},	{684,1}
};

static struct patval owl_attackpat207[] = {
  {758,1},	{720,1},	{684,1}
};

static struct patval owl_attackpat208[] = {
  {683,1},	{684,1},	{720,1},	{686,1}
};

static struct patval owl_attackpat209[] = {
  {683,1},	{684,1},	{720,1},	{686,1}
};

static struct patval owl_attackpat210[] = {
  {610,1},	{722,1},	{684,1}
};

static struct patval owl_attackpat211[] = {
  {720,1},	{758,1},	{647,1},	{684,1},
  {757,3}
};

static struct patval owl_attackpat212[] = {
  {648,1},	{686,1},	{720,1},	{684,1},
  {758,1}
};

static struct patval owl_attackpat213[] = {
  {720,1},	{758,1},	{648,1},	{684,1}
};

static struct patval owl_attackpat214[] = {
  {648,1},	{684,1},	{721,1},	{759,1},
  {797,3}
};

static struct patval owl_attackpat215[] = {
  {721,1},	{684,1},	{759,1},	{648,1},
  {612,3},	{760,3}
};

static struct patval owl_attackpat216[] = {
  {647,1},	{684,1},	{611,1},	{722,1},
  {760,3},	{612,3}
};

static struct patval owl_attackpat217[] = {
  {684,1},	{722,1}
};

static struct patval owl_attackpat218[] = {
  {684,1},	{722,1}
};

static struct patval owl_attackpat219[] = {
  {722,1},	{684,1}
};

static struct patval owl_attackpat220[] = {
  {722,1},	{684,1}
};

static struct patval owl_attackpat221[] = {
  {648,1},	{721,1}
};

static struct patval owl_attackpat222[] = {
  {648,1},	{721,1}
};

static struct patval owl_attackpat223[] = {
  {721,1},	{647,1}
};

static struct patval owl_attackpat224[] = {
  {721,1},	{647,1}
};

static struct patval owl_attackpat225[] = {
  {722,1},	{648,1}
};

static struct patval owl_attackpat226[] = {
  {684,1},	{686,1}
};

static struct patval owl_attackpat227[] = {
  {683,1},	{686,1}
};

static struct patval owl_attackpat228[] = {
  {649,1},	{684,1}
};

static struct patval owl_attackpat229[] = {
  {721,1},	{647,1},	{722,3},	{648,3}
};

static struct patval owl_attackpat230[] = {
  {646,1},	{722,1},	{684,1}
};

static struct patval owl_attackpat231[] = {
  {721,1},	{684,1}
};

static struct patval owl_attackpat232[] = {
  {685,1},	{647,3},	{795,3},	{832,3}
};

static struct patval owl_attackpat233[] = {
  {684,1},	{724,1},	{721,1},	{687,1}
};

static struct patval owl_attackpat234[] = {
  {684,1},	{724,1},	{721,1},	{687,1}
};

static struct patval owl_attackpat235[] = {
  {758,1},	{648,1},	{721,3}
};

static struct patval owl_attackpat236[] = {
  {758,1},	{648,1},	{721,3}
};

static struct patval owl_attackpat237[] = {
  {720,1},	{686,1},	{684,1},	{683,3}
};

static struct patval owl_attackpat238[] = {
  {758,1},	{686,1}
};

static struct patval owl_attackpat239[] = {
  {684,1},	{650,1}
};

static struct patval owl_attackpat240[] = {
  {684,1}
};

static struct patval owl_attackpat241[] = {
  {686,1},	{684,1}
};

static struct patval owl_attackpat242[] = {
  {684,1},	{686,1},	{610,1}
};

static struct patval owl_attackpat243[] = {
  {684,1},	{687,1},	{650,3},	{647,3},
  {613,3},	{724,3}
};

static struct patval owl_attackpat244[] = {
  {647,1},	{759,1},	{648,3}
};

static struct patval owl_attackpat245[] = {
  {647,1},	{759,1},	{648,3}
};

static struct patval owl_attackpat246[] = {
  {684,1},	{723,1}
};

static struct patval owl_attackpat247[] = {
  {648,1}
};

static struct patval owl_attackpat248[] = {
  {648,1}
};

static struct patval owl_attackpat249[] = {
  {684,1}
};

static struct patval owl_attackpat250[] = {
  {723,1},	{648,1}
};

static struct patval owl_attackpat251[] = {
  {685,1},	{721,1}
};

static struct patval owl_attackpat252[] = {
  {685,1},	{647,1},	{649,3},	{648,3}
};

static struct patval owl_attackpat253[] = {
  {685,1},	{721,1},	{647,1},	{648,3},
  {649,3},	{686,3}
};

static struct patval owl_attackpat254[] = {
  {647,1}
};

static struct patval owl_attackpat255[] = {
  {647,1}
};

static struct patval owl_attackpat256[] = {
  {647,1}
};

static struct patval owl_attackpat257[] = {
  {684,1},	{722,1}
};

static struct patval owl_attackpat258[] = {
  {720,1},	{684,1},	{683,3}
};

static struct patval owl_attackpat259[] = {
  {684,1}
};

static struct patval owl_attackpat260[] = {
  {685,1},	{647,1},	{648,1},	{610,3}
};

static struct patval owl_attackpat261[] = {
  {646,1},	{683,1}
};

static struct patval owl_attackpat262[] = {
  {723,1},	{760,3},	{646,3}
};

static struct patval owl_attackpat263[] = {
  {648,1},	{612,3},	{611,3},	{720,3}
};

static struct patval owl_attackpat264[] = {
  {684,1},	{685,1},	{646,3},	{760,3},
  {647,3}
};

static struct patval owl_attackpat265[] = {
  {683,1},	{722,1},	{684,1},	{723,3},
  {649,3},	{686,3}
};

static struct patval owl_attackpat266[] = {
  {722,1},	{647,1}
};

static struct patval owl_attackpat267[] = {
  {722,1},	{647,1}
};

static struct patval owl_attackpat268[] = {
  {646,1},	{684,1}
};

static struct patval owl_attackpat269[] = {
  {684,1},	{723,1}
};

static struct patval owl_attackpat270[] = {
  {684,1}
};

static struct patval owl_attackpat271[] = {
  {684,1},	{723,1}
};

static struct patval owl_attackpat272[] = {
  {684,1},	{723,1}
};

static struct patval owl_attackpat273[] = {
  {684,1},	{723,1}
};

static struct patval owl_attackpat274[] = {
  {758,1},	{648,1},	{721,3}
};

static struct patval owl_attackpat275[] = {
  {758,1},	{648,1},	{721,3}
};

static struct patval owl_attackpat276[] = {
  {647,1}
};

static struct patval owl_attackpat277[] = {
  {647,1},	{722,3},	{649,3},	{686,3},
  {723,3}
};

static struct patval owl_attackpat278[] = {
  {721,1},	{648,3},	{686,3},	{649,3}
};

static struct patval owl_attackpat279[] = {
  {685,1},	{647,1},	{683,1},	{759,3},
  {757,3},	{758,3}
};

static struct patval owl_attackpat280[] = {
  {684,1}
};

static struct patval owl_attackpat281[] = {
  {684,1},	{648,1}
};

static struct patval owl_attackpat282[] = {
  {684,1},	{648,1}
};

static struct patval owl_attackpat283[] = {
  {648,1},	{684,1},	{722,1},	{610,1}
};

static struct patval owl_attackpat284[] = {
  {720,1},	{684,1},	{683,1},	{649,3},
  {646,3}
};

static struct patval owl_attackpat285[] = {
  {721,1},	{683,1},	{722,1},	{646,3}
};

static struct patval owl_attackpat286[] = {
  {683,1},	{686,1}
};

static struct patval owl_attackpat287[] = {
  {722,1},	{759,1},	{760,1},	{684,1},
  {721,1}
};

static struct patval owl_attackpat288[] = {
  {758,1},	{759,3}
};

static struct patval owl_attackpat289[] = {
  {758,1}
};

static struct patval owl_attackpat290[] = {
  {647,1},	{721,1}
};

static struct patval owl_attackpat291[] = {
  {647,1},	{721,1}
};

static struct patval owl_attackpat292[] = {
  {647,1},	{721,1}
};

static struct patval owl_attackpat293[] = {
  {647,1},	{721,1}
};

static struct patval owl_attackpat294[] = {
  {611,1},	{721,1}
};

static struct patval owl_attackpat295[] = {
  {720,1},	{723,1}
};

static struct patval owl_attackpat296[] = {
  {648,1},	{685,1},	{645,3},	{682,3},
  {720,3},	{608,3}
};

static struct patval owl_attackpat297[] = {
  {686,1},	{722,1},	{610,3},	{572,3},
  {573,3},	{609,3}
};

static struct patval owl_attackpat298[] = {
  {758,1},	{684,1},	{720,1},	{757,3}
};

static struct patval owl_attackpat299[] = {
  {684,1},	{648,1},	{758,1}
};

static struct patval owl_attackpat300[] = {
  {684,1},	{648,1},	{758,1}
};

static struct patval owl_attackpat301[] = {
  {723,1},	{684,1}
};

static struct patval owl_attackpat302[] = {
  {723,1},	{684,1}
};

static struct patval owl_attackpat303[] = {
  {685,1}
};

static struct patval owl_attackpat304[] = {
  {684,1}
};

static struct patval owl_attackpat305[] = {
  {684,1}
};

static struct patval owl_attackpat306[] = {
  {684,1},	{722,1}
};

static struct patval owl_attackpat307[] = {
  {684,1},	{722,1}
};

static struct patval owl_attackpat308[] = {
  {722,1},	{684,1},	{647,1}
};

static struct patval owl_attackpat309[] = {
  {645,1},	{684,1}
};

static struct patval owl_attackpat310[] = {
  {721,1},	{684,1}
};

static struct patval owl_attackpat311[] = {
  {722,1},	{648,1}
};

static struct patval owl_attackpat312[] = {
  {647,1},	{648,1},	{685,1}
};

static struct patval owl_attackpat313[] = {
  {647,1},	{684,1}
};

static struct patval owl_attackpat314[] = {
  {684,1},	{686,1},	{721,1}
};

static struct patval owl_attackpat315[] = {
  {684,1},	{685,1},	{683,1},	{758,1}
};

static struct patval owl_attackpat316[] = {
  {721,1},	{647,1},	{720,1}
};

static struct patval owl_attackpat317[] = {
  {648,1},	{684,1}
};

static struct patval owl_attackpat318[] = {
  {647,1},	{684,1},	{721,1},	{759,1},
  {760,1}
};

static struct patval owl_attackpat319[] = {
  {721,1},	{684,1},	{612,1},	{611,1}
};

static struct patval owl_attackpat320[] = {
  {647,1},	{684,1},	{721,1},	{759,1},
  {760,1}
};

static struct patval owl_attackpat321[] = {
  {646,1},	{684,1},	{720,1},	{758,1},
  {759,1},	{683,3}
};

static struct patval owl_attackpat322[] = {
  {720,1},	{647,1},	{611,1},	{684,1},
  {683,3},	{610,3}
};

static struct patval owl_attackpat323[] = {
  {610,1},	{684,1},	{647,3},	{611,3}
};

static struct patval owl_attackpat324[] = {
  {758,1},	{684,1},	{759,3}
};

static struct patval owl_attackpat325[] = {
  {646,1},	{684,1},	{720,1},	{758,1},
  {759,1},	{683,3}
};

static struct patval owl_attackpat326[] = {
  {686,1},	{647,1},	{648,1},	{683,1}
};

static struct patval owl_attackpat327[] = {
  {683,1},	{647,1},	{648,1},	{686,1}
};

static struct patval owl_attackpat328[] = {
  {647,1},	{683,1},	{611,1},	{684,1},
  {612,3}
};

static struct patval owl_attackpat329[] = {
  {684,1},	{683,3}
};

static struct patval owl_attackpat330[] = {
  {683,1},	{684,1},	{757,3}
};

static struct patval owl_attackpat331[] = {
  {684,1},	{682,1},	{720,1}
};

static struct patval owl_attackpat332[] = {
  {759,1},	{684,1},	{721,1},	{760,1}
};

static struct patval owl_attackpat333[] = {
  {684,1},	{647,1},	{646,1}
};

static struct patval owl_attackpat334[] = {
  {684,1},	{722,1},	{720,1},	{721,1}
};

static struct patval owl_attackpat335[] = {
  {685,1},	{720,1},	{684,1},	{648,3}
};

static struct patval owl_attackpat336[] = {
  {758,1},	{720,1},	{759,1}
};

static struct patval owl_attackpat337[] = {
  {685,1},	{720,1},	{759,1},	{684,1},
  {648,3}
};

static struct patval owl_attackpat338[] = {
  {648,1},	{683,1},	{684,1}
};

static struct patval owl_attackpat339[] = {
  {646,1},	{721,1},	{684,1}
};

static struct patval owl_attackpat340[] = {
  {723,1},	{684,1},	{721,1}
};

static struct patval owl_attackpat341[] = {
  {647,1},	{684,1},	{722,1},	{723,1}
};

static struct patval owl_attackpat342[] = {
  {684,1}
};

static struct patval owl_attackpat343[] = {
  {648,1},	{686,1},	{722,1},	{684,1}
};

static struct patval owl_attackpat344[] = {
  {684,1},	{648,1}
};

static struct patval owl_attackpat345[] = {
  {720,1},	{684,1},	{648,1}
};

static struct patval owl_attackpat346[] = {
  {684,1},	{720,1},	{648,1},	{758,3},
  {757,3},	{649,3},	{686,3}
};

static struct patval owl_attackpat347[] = {
  {720,1},	{684,1},	{648,3},	{649,3}
};

static struct patval owl_attackpat348[] = {
  {646,1},	{683,1},	{648,1},	{684,1},
  {721,1},	{722,1}
};

static struct patval owl_attackpat349[] = {
  {683,1},	{647,1},	{685,1}
};

static struct patval owl_attackpat350[] = {
  {686,1},	{684,1},	{611,1},	{612,3},
  {721,3},	{647,3}
};

static struct patval owl_attackpat351[] = {
  {719,1},	{682,1},	{645,1},	{611,1},
  {610,1},	{721,1},	{609,1}
};

static struct patval owl_attackpat352[] = {
  {720,1},	{683,1},	{646,1},	{721,1},
  {611,1},	{612,1},	{610,1},	{722,1}
};

static struct patval owl_attackpat353[] = {
  {722,1},	{684,1},	{683,1}
};

static struct patval owl_attackpat354[] = {
  {685,1},	{721,1},	{720,1}
};

static struct patval owl_attackpat355[] = {
  {647,1},	{684,1},	{721,1},	{759,1},
  {686,1}
};

static struct patval owl_attackpat356[] = {
  {646,1},	{683,1},	{759,1},	{760,1},
  {648,1},	{721,1},	{758,3},	{720,3}
};

static struct patval owl_attackpat357[] = {
  {686,1},	{648,1},	{722,1},	{760,1},
  {684,1},	{723,3}
};

static struct patval owl_attackpat358[] = {
  {758,1},	{720,1},	{684,1},	{757,3},
  {759,3},	{683,3}
};

static struct patval owl_attackpat359[] = {
  {720,1},	{647,1},	{646,1},	{611,1},
  {610,3}
};

static struct patval owl_attackpat360[] = {
  {719,1},	{683,1},	{685,1},	{757,1},
  {684,1}
};

static struct patval owl_attackpat361[] = {
  {721,1},	{611,1},	{722,1},	{647,1},
  {684,1}
};

static struct patval owl_attackpat362[] = {
  {683,1},	{684,1},	{647,3},	{649,3},
  {720,3},	{648,3}
};

static struct patval owl_attackpat363[] = {
  {647,1},	{684,1},	{721,1},	{648,1}
};

static struct patval owl_attackpat364[] = {
  {684,1},	{648,1}
};

static struct patval owl_attackpat365[] = {
  {646,1},	{684,1},	{685,1},	{645,3},
  {722,3},	{682,3}
};

static struct patval owl_attackpat366[] = {
  {685,1},	{684,1},	{723,1},	{720,3},
  {757,3}
};

static struct patval owl_attackpat367[] = {
  {648,1},	{682,1},	{722,1},	{721,1},
  {720,1},	{684,1},	{645,3},	{683,3}
};

static struct patval owl_attackpat368[] = {
  {758,1},	{760,1},	{724,1},	{720,1},
  {759,1},	{684,1}
};

static struct patval owl_attackpat369[] = {
  {684,1},	{759,1},	{760,1},	{719,1},
  {724,1},	{758,1},	{720,1}
};

static struct patval owl_attackpat370[] = {
  {757,1},	{720,1},	{683,1},	{648,1},
  {685,1},	{684,1},	{759,1}
};

static struct patval owl_attackpat371[] = {
  {722,1},	{720,1},	{646,1},	{723,1},
  {684,1},	{758,1}
};

static struct patval owl_attackpat372[] = {
  {646,1},	{610,1},	{722,1},	{684,1},
  {685,1},	{723,3}
};

static struct patval owl_attackpat373[] = {
  {646,1},	{610,1},	{722,1},	{684,1},
  {685,1},	{723,3}
};

static struct patval owl_attackpat374[] = {
  {684,1}
};

static struct patval owl_attackpat375[] = {
  {758,1}
};

static struct patval owl_attackpat376[] = {
  {684,1}
};

static struct patval owl_attackpat377[] = {
  {684,1}
};

static struct patval owl_attackpat378[] = {
  {722,1},	{686,1},	{648,1},	{684,1}
};

static struct patval owl_attackpat379[] = {
  {722,1},	{686,1},	{648,1},	{684,1}
};

static struct patval owl_attackpat380[] = {
  {648,1},	{646,1},	{647,1},	{722,1},
  {684,1},	{686,1}
};

static struct patval owl_attackpat381[] = {
  {684,1},	{723,1},	{648,3},	{649,3}
};

static struct patval owl_attackpat382[] = {
  {684,1},	{648,1},	{722,1}
};

static struct patval owl_attackpat383[] = {
  {684,1},	{720,1},	{685,1}
};

static struct patval owl_attackpat384[] = {
  {647,1},	{684,1},	{722,1},	{686,1}
};

static struct patval owl_attackpat385[] = {
  {647,1},	{684,1},	{723,1},	{722,1}
};

static struct patval owl_attackpat386[] = {
  {649,1},	{648,1},	{684,1},	{722,1}
};

static struct patval owl_attackpat387[] = {
  {757,1},	{720,1},	{685,1},	{684,1}
};

static struct patval owl_attackpat388[] = {
  {649,1},	{648,1},	{722,1},	{684,1}
};

static struct patval owl_attackpat389[] = {
  {686,1},	{647,1},	{684,1},	{722,1},
  {610,3}
};

static struct patval owl_attackpat390[] = {
  {758,1},	{684,1},	{720,1},	{648,1}
};

static struct patval owl_attackpat391[] = {
  {611,1},	{647,1},	{684,1},	{721,1},
  {649,1}
};

static struct patval owl_attackpat392[] = {
  {611,1},	{647,1},	{684,1},	{721,1},
  {759,1},	{758,3}
};

static struct patval owl_attackpat393[] = {
  {722,1},	{720,1},	{684,1},	{758,1}
};

static struct patval owl_attackpat394[] = {
  {683,1},	{720,1},	{647,1},	{685,1},
  {759,1},	{758,3}
};

static struct patval owl_attackpat395[] = {
  {722,1},	{684,1},	{723,1},	{648,3},
  {647,3}
};

static struct patval owl_attackpat396[] = {
  {684,1},	{682,1},	{720,1},	{646,1},
  {721,3},	{719,3}
};

static struct pattern owl_attackpat[398];

static int
autohelperowl_attackpat0(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return  countlib(A)<4;
}

static int
autohelperowl_attackpat6(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);

  return  countlib(a)>2;
}

static int
autohelperowl_attackpat11(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return  (somewhere(color, 0, 1, a) || !somewhere(color, 0, 1, b));
}

static int
autohelperowl_attackpat14(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(722, trans, move);

  return  countlib(A)>2;
}

static int
autohelperowl_attackpat17(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(609, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);

  return somewhere(color, 0, 2, a, b);
}

static int
autohelperowl_attackpat18(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);
  c = AFFINE_TRANSFORM(756, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, a, a) || !play_attack_defend_n(color, 1, 4, move, a, b, c, move);
}

static int
autohelperowl_attackpat27(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);

  return !somewhere(OTHER_COLOR(color), 0, 1, a) || ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat28(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);

  return !ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat32(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return !play_attack_defend_n(color, 1, 2, move, a, move);
}

static int
autohelperowl_attackpat33(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_attackpat34(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);

  return countlib(a)>2;
}

static int
autohelperowl_attackpat35(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_attackpat37(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);

  return countlib(A)>1;
}

static int
autohelperowl_attackpat40(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return !play_attack_defend_n(color, 1, 2, move, a, move);
}

static int
autohelperowl_attackpat42(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return countlib(a)==2;
}

static int
autohelperowl_attackpat43(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(646, trans, move);

  return !play_attack_defend2_n(OTHER_COLOR(color), 0, 3, move, b, c, a, b);
}

static int
autohelperowl_attackpat45(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(645, trans, move);
  b = AFFINE_TRANSFORM(608, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);
  d = AFFINE_TRANSFORM(721, trans, move);
  e = AFFINE_TRANSFORM(610, trans, move);
  f = AFFINE_TRANSFORM(685, trans, move);
  A = AFFINE_TRANSFORM(609, trans, move);

  return (accuratelib(a, OTHER_COLOR(color), MAX_LIBERTIES, NULL)==1 || countlib(b)>2) && countlib(A)<=3 && accuratelib(e, color, MAX_LIBERTIES, NULL)>1&& play_attack_defend_n(color, 1, 6, move, c, a, d, e, f, A)&& play_attack_defend_n(color, 0, 4, move, c, a, e, move);
}

static int
autohelperowl_attackpat46(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);
  c = AFFINE_TRANSFORM(719, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);

  return  (owl_escape_value(b) <= 0 && owl_escape_value(c) <= 0) || !play_attack_defend_n(color, 1, 2, move, a, d);
}

static int
autohelperowl_attackpat47(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);

  return owl_escape_value(a) < 1;
}

static int
autohelperowl_attackpat49(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return countlib(B)<=3 && play_attack_defend_n(color, 1, 2, move, a, B);
}

static int
autohelperowl_attackpat50(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return  play_attack_defend_n(color, 1, 2, move, a, a);
}

static int
autohelperowl_attackpat52(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  C = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, a, C) || !play_attack_defend2_n(OTHER_COLOR(color), 0, 3, move, a, b, a, C);
}

static int
autohelperowl_attackpat53(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_attackpat54(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);

  return owl_escape_value(a)>0 && !play_attack_defend_n(color, 1, 3, move, a, b, move);
}

static int
autohelperowl_attackpat55(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return  play_attack_defend_n(OTHER_COLOR(color), 1, 1, move, a);
}

static int
autohelperowl_attackpat56(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_attackpat57(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(649, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) > 0;
}

static int
autohelperowl_attackpat58(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) > 0;
}

static int
autohelperowl_attackpat59(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return owl_escape_value(a) > 0;
}

static int
autohelperowl_attackpat60(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(611, trans, move);

  return owl_escape_value(a)+owl_escape_value(b) > 0;
}

static int
autohelperowl_attackpat62(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return  play_attack_defend_n(color, 1, 4, move, a, b, c, c);
}

static int
autohelperowl_attackpat63(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(719, trans, move);
  e = AFFINE_TRANSFORM(682, trans, move);

  return  accuratelib(d, OTHER_COLOR(color), MAX_LIBERTIES, NULL)<=2 && countlib(e)>3 && play_attack_defend_n(color, 1, 4, move, a, b, c, c);
}

static int
autohelperowl_attackpat67(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return  !play_attack_defend_n(color, 1, 1, move, move);
}

static int
autohelperowl_attackpat68(int trans, int move, int color, int action)
{
  int a, b, c, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);
  A = AFFINE_TRANSFORM(721, trans, move);

  return  (somewhere(OTHER_COLOR(color), 0, 1, a) || ! safe_move(a, color)) && !play_attack_defend_n(OTHER_COLOR(color), 0, 3, move, b, c, A);
}

static int
autohelperowl_attackpat72(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(609, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);

  return !play_connect_n(color, 0, 1, move, a, b);
}

static int
autohelperowl_attackpat73(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return play_connect_n(OTHER_COLOR(color), 0, 2, move, a, a, c) && play_connect_n(OTHER_COLOR(color), 0, 2, move, b, b, c);
}

static int
autohelperowl_attackpat74(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(757, trans, move);

  return !owl_goal_dragon(A);
}

static int
autohelperowl_attackpat77(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  return  play_attack_defend2_n(color, 0, 2, move, a, move, b) && !play_attack_defend_n(color, 1, 2, move, a, b);
}

static int
autohelperowl_attackpat78(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  return  play_attack_defend2_n(color, 0, 2, move, a, move, b);
}

static int
autohelperowl_attackpat79(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return countlib(a)<=2 || accuratelib(move, OTHER_COLOR(color), MAX_LIBERTIES, NULL)>2;
}

static int
autohelperowl_attackpat80(int trans, int move, int color, int action)
{
  int a, b, c, d, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(682, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);
  A = AFFINE_TRANSFORM(645, trans, move);

  return  play_attack_defend2_n(color, 0, 4, move, a, b, c, A, b) && play_attack_defend2_n(color, 0, 4, move, b, a, d, move, A);
}

static int
autohelperowl_attackpat81(int trans, int move, int color, int action)
{
  int a, b, c, d, e, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(682, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);
  e = AFFINE_TRANSFORM(721, trans, move);
  A = AFFINE_TRANSFORM(645, trans, move);

  return  owl_escape_value(e)>0 && play_attack_defend2_n(color, 0, 4, move, a, b, c, A, b) && play_attack_defend2_n(color, 0, 4, move, b, a, d, move, A);
}

static int
autohelperowl_attackpat83(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  return  (owl_escape_value(a)>0)||(owl_escape_value(b)>0);
}

static int
autohelperowl_attackpat84(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);
  c = AFFINE_TRANSFORM(719, trans, move);
  d = AFFINE_TRANSFORM(682, trans, move);

  return owl_escape_value(a)>0&& (!somewhere(OTHER_COLOR(color), 0, 2, b, c)    || somewhere(color, 0, 2, b, d)    || (somewhere(color, 0, 1, c) && !safe_move(d, OTHER_COLOR(color))));
}

static int
autohelperowl_attackpat85(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);
  e = AFFINE_TRANSFORM(610, trans, move);

  return owl_escape_value(a)>0 && (play_attack_defend_n(OTHER_COLOR(color), 1, 4, b, c, move, d, d) || !play_attack_defend_n(OTHER_COLOR(color), 0, 4, move, b, d, e, e));
}

static int
autohelperowl_attackpat86(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_attackpat87(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);

  return !(somewhere(color, 0, 1, a) && somewhere(color, 0, 1, b)) || somewhere(OTHER_COLOR(color), 0, 1, c);
}

static int
autohelperowl_attackpat89(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(609, trans, move);
  c = AFFINE_TRANSFORM(573, trans, move);
  d = AFFINE_TRANSFORM(572, trans, move);
  e = AFFINE_TRANSFORM(685, trans, move);

  return somewhere(color, 0, 4, a, b, c, d) && owl_escape_value(e) > 0;
}

static int
autohelperowl_attackpat90(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);
  c = AFFINE_TRANSFORM(649, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_attackpat91(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return owl_escape_value(a)>0;
}

static int
autohelperowl_attackpat92(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, g, h, i, j;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(611, trans, move);
  c = AFFINE_TRANSFORM(610, trans, move);
  d = AFFINE_TRANSFORM(719, trans, move);
  e = AFFINE_TRANSFORM(718, trans, move);
  f = AFFINE_TRANSFORM(717, trans, move);
  g = AFFINE_TRANSFORM(682, trans, move);
  h = AFFINE_TRANSFORM(681, trans, move);
  i = AFFINE_TRANSFORM(680, trans, move);
  j = AFFINE_TRANSFORM(648, trans, move);

  return owl_escape_value(a)>0&& ((somewhere(color, 0, 3, b, c, j) && somewhere(color, 0, 6, d, e, f, g, h, i))   || (somewhere(color, 0, 1, j) && owl_escape_value(d)==0 && owl_escape_value(e)==0));
}

static int
autohelperowl_attackpat93(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, g, h, i, j;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);
  c = AFFINE_TRANSFORM(681, trans, move);
  d = AFFINE_TRANSFORM(719, trans, move);
  e = AFFINE_TRANSFORM(718, trans, move);
  f = AFFINE_TRANSFORM(648, trans, move);
  g = AFFINE_TRANSFORM(611, trans, move);
  h = AFFINE_TRANSFORM(610, trans, move);
  i = AFFINE_TRANSFORM(574, trans, move);
  j = AFFINE_TRANSFORM(573, trans, move);

  return owl_escape_value(a)>0 && somewhere(color, 0, 5, f, g, h, i, j) && somewhere(color, 0, 4, b, c, d, e);
}

static int
autohelperowl_attackpat94(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, i, j, k;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);
  c = AFFINE_TRANSFORM(649, trans, move);
  d = AFFINE_TRANSFORM(612, trans, move);
  e = AFFINE_TRANSFORM(647, trans, move);
  f = AFFINE_TRANSFORM(611, trans, move);
  i = AFFINE_TRANSFORM(613, trans, move);
  j = AFFINE_TRANSFORM(650, trans, move);
  k = AFFINE_TRANSFORM(687, trans, move);

  return (somewhere(color, 0, 1, j) || (somewhere(color, 0, 1, i) && somewhere(color, 0, 1, k)))&& !play_attack_defend_n(color, 1, 7, move, a, b, c, d, e, f, move) && !play_attack_defend_n(color, 1, 5, move, a, b, e, f, move);
}

static int
autohelperowl_attackpat95(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, g, h, i, j, k;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(795, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);
  c = AFFINE_TRANSFORM(794, trans, move);
  d = AFFINE_TRANSFORM(757, trans, move);
  e = AFFINE_TRANSFORM(722, trans, move);
  f = AFFINE_TRANSFORM(610, trans, move);
  g = AFFINE_TRANSFORM(573, trans, move);
  h = AFFINE_TRANSFORM(609, trans, move);
  i = AFFINE_TRANSFORM(572, trans, move);
  j = AFFINE_TRANSFORM(608, trans, move);
  k = AFFINE_TRANSFORM(571, trans, move);

  return  somewhere(color, 0, 4, a, b, c, d) && owl_escape_value(e)>0 && somewhere(color, 0, 6, f, g, h, i, j, k);
}

static int
autohelperowl_attackpat96(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(760, trans, move);
  b = AFFINE_TRANSFORM(538, trans, move);
  c = AFFINE_TRANSFORM(537, trans, move);
  d = AFFINE_TRANSFORM(536, trans, move);
  e = AFFINE_TRANSFORM(757, trans, move);
  f = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(a)>0&& owl_escape_value(b)==0&& owl_escape_value(c)==0&& owl_escape_value(d)==0&& somewhere(color, 0, 2, e, f);
}

static int
autohelperowl_attackpat97(int trans, int move, int color, int action)
{
  int b, c, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);
  A = AFFINE_TRANSFORM(722, trans, move);

  return owl_escape_value(A)>0 && play_attack_defend2_n(color, 0, 2, move, b, move, c);
}

static int
autohelperowl_attackpat99(int trans, int move, int color, int action)
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
autohelperowl_attackpat100(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(758, trans, move);

  return  countlib(A)>1;
}

static int
autohelperowl_attackpat101(int trans, int move, int color, int action)
{
  int c, d, A;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(647, trans, move);
  d = AFFINE_TRANSFORM(648, trans, move);
  A = AFFINE_TRANSFORM(685, trans, move);

  return (owl_escape_value(A)>0) && play_attack_defend2_n(color, 0, 2, move, c, move, d);
}

static int
autohelperowl_attackpat102(int trans, int move, int color, int action)
{
  int c, d, A;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(647, trans, move);
  d = AFFINE_TRANSFORM(648, trans, move);
  A = AFFINE_TRANSFORM(646, trans, move);

  return (owl_escape_value(A)>0) && play_attack_defend2_n(color, 0, 2, move, c, move, d);
}

static int
autohelperowl_attackpat103(int trans, int move, int color, int action)
{
  int a, b, c, d, e;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(610, trans, move);
  c = AFFINE_TRANSFORM(609, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);
  e = AFFINE_TRANSFORM(648, trans, move);

  return owl_escape_value(e)>0 && !play_attack_defend2_n(OTHER_COLOR(color), 0, 3, move, a, b, c, d);
}

static int
autohelperowl_attackpat104(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_attackpat105(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);

  return (!owl_goal_dragon(b))&& !play_connect_n(OTHER_COLOR(color), 0, 1, move, a, b);
}

static int
autohelperowl_attackpat106(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);

  return (!owl_goal_dragon(a))&& !play_connect_n(OTHER_COLOR(color), 0, 1, move, a, b);
}

static int
autohelperowl_attackpat107(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);

  return (owl_escape_value(a) > 0);
}

static int
autohelperowl_attackpat108(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(719, trans, move);

  return (owl_escape_value(a) > 0);
}

static int
autohelperowl_attackpat109(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return owl_escape_value(a) > 0;
}

static int
autohelperowl_attackpat112(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return  ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat114(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return accuratelib(move, color, MAX_LIBERTIES, NULL)>1;
}

static int
autohelperowl_attackpat120(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(721, trans, move);
  A = AFFINE_TRANSFORM(720, trans, move);

  return countlib(A)<=3 && accuratelib(b, OTHER_COLOR(color), MAX_LIBERTIES, NULL) <= 2 && play_attack_defend_n(color, 1, 2, move, b, b);
}

static int
autohelperowl_attackpat122(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return owl_eyespace(a);
}

static int
autohelperowl_attackpat124(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);

  return somewhere(OTHER_COLOR(color), 0, 1, b) || play_attack_defend_n(color, 1, 2, a, b, a);
}

static int
autohelperowl_attackpat125(int trans, int move, int color, int action)
{
  int b, A, C, W;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(611, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);
  C = AFFINE_TRANSFORM(646, trans, move);
  W = AFFINE_TRANSFORM(648, trans, move);

  return  play_attack_defend_n(color, 1, 1, move, W) && !play_attack_defend_n(color, 1, 4, move, A, b, C, b);
}

static int
autohelperowl_attackpat126(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return !play_attack_defend_n(color, 1, 3, move, a, b, move);
}

static int
autohelperowl_attackpat127(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return !obvious_false_eye(a, OTHER_COLOR(color)) || !obvious_false_eye(b, color);
}

static int
autohelperowl_attackpat131(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);

  return !ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat132(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(610, trans, move);

  return !ATTACK_MACRO(a) && owl_proper_eye(b)&& (somewhere(OTHER_COLOR(color), 0, 1, c) || owl_proper_eye(c));
}

static int
autohelperowl_attackpat133(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(758, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return owl_eyespace(b) && !ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat136(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);

  return countlib(c) > 1 && !play_attack_defend_n(color, 1, 3, move, a, b, move);
}

static int
autohelperowl_attackpat137(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return owl_maxeye(b) > 0 && !play_attack_defend_n(color, 1, 1, move, a) && !obvious_false_eye(b, OTHER_COLOR(color));
}

static int
autohelperowl_attackpat138(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);

  return owl_maxeye(b)>0 && !play_attack_defend_n(color, 1, 1, move, a) && !obvious_false_eye(b, OTHER_COLOR(color));
}

static int
autohelperowl_attackpat139(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return owl_eyespace(b) && !play_attack_defend_n(color, 1, 2, move, b, a);
}

static int
autohelperowl_attackpat140(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(610, trans, move);
  d = AFFINE_TRANSFORM(609, trans, move);

  return owl_maxeye(b)==0&& ((somewhere(color, 0, 1, c) && owl_lunch(c))    || (somewhere(color, 0, 1, d) && owl_lunch(d)))&& !play_attack_defend_n(color, 1, 1, move, a) && !obvious_false_eye(b, OTHER_COLOR(color));
}

static int
autohelperowl_attackpat141(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  C = AFFINE_TRANSFORM(683, trans, move);

  return countlib(C)==2 && countstones(C)>1 && !play_attack_defend_n(color, 1, 1, move, a) && !obvious_false_eye(b, OTHER_COLOR(color));
}

static int
autohelperowl_attackpat143(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(609, trans, move);

  return !ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat144(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(609, trans, move);

  return countlib(A)==2;
}

static int
autohelperowl_attackpat145(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(795, trans, move);

  return countlib(a) > 1;
}

static int
autohelperowl_attackpat146(int trans, int move, int color, int action)
{
  int a, b, c, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);
  D = AFFINE_TRANSFORM(610, trans, move);

  return play_attack_defend_n(color, 1, 4, move, a, b, c, D);
}

static int
autohelperowl_attackpat147(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);

  return !play_attack_defend_n(color, 1, 2, a, move, move);
}

static int
autohelperowl_attackpat148(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(682, trans, move);

  return countlib(A) == 3;
}

static int
autohelperowl_attackpat149(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);
  C = AFFINE_TRANSFORM(609, trans, move);

  return  !ATTACK_MACRO(C) && (!somewhere(OTHER_COLOR(color), 0, 1, b) || (somewhere(OTHER_COLOR(color), 0, 1, b) && somewhere(color, 0, 1, a)));
}

static int
autohelperowl_attackpat150(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(645, trans, move);

  return  countlib(A) == 3;
}

static int
autohelperowl_attackpat151(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(610, trans, move);
  A = AFFINE_TRANSFORM(685, trans, move);

  return  play_attack_defend2_n(color, 0, 2, move, A, b, move);
}

static int
autohelperowl_attackpat153(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return !obvious_false_eye(a, OTHER_COLOR(color));
}

static int
autohelperowl_attackpat154(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(757, trans, move);

  return countlib(A)<3 && owl_eyespace(move);
}

static int
autohelperowl_attackpat155(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(609, trans, move);

  return  play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, a, a) && (somewhere(OTHER_COLOR(color), 0, 1, b) || !safe_move(b, color));
}

static int
autohelperowl_attackpat157(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return owl_proper_eye(a);
}

static int
autohelperowl_attackpat158(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(759, trans, move);

  return countlib(A)>1;
}

static int
autohelperowl_attackpat159(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(759, trans, move);

  return countlib(A)>1;
}

static int
autohelperowl_attackpat162(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);

  return owl_eyespace(a) && accuratelib(b, OTHER_COLOR(color), MAX_LIBERTIES, NULL) <= 2 && play_attack_defend_n(color, 1, 2, move, b, b);
}

static int
autohelperowl_attackpat163(int trans, int move, int color, int action)
{
  int a, b, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(759, trans, move);
  A = AFFINE_TRANSFORM(722, trans, move);

  return  (owl_topological_eye(a, board[A])<=2) && (owl_topological_eye(b, board[A])==2);
}

static int
autohelperowl_attackpat164(int trans, int move, int color, int action)
{
  int a, b, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  A = AFFINE_TRANSFORM(685, trans, move);

  return  (owl_topological_eye(a, board[A])==2) && ((owl_topological_eye(b, board[A])==2) || (owl_topological_eye(b, board[A])==3));
}

static int
autohelperowl_attackpat165(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return owl_topological_eye(a, board[B])==3 && does_attack(move, B);
}

static int
autohelperowl_attackpat166(int trans, int move, int color, int action)
{
  int a, b, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  A = AFFINE_TRANSFORM(682, trans, move);

  return  owl_topological_eye(a, board[A])==3 && safe_move(b, color) && safe_move(move, color) && play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, b, b);
}

static int
autohelperowl_attackpat167(int trans, int move, int color, int action)
{
  int a, b, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);
  A = AFFINE_TRANSFORM(647, trans, move);

  return  countlib(a)==2 && owl_topological_eye(b, board[A])==3;
}

static int
autohelperowl_attackpat170(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(572, trans, move);

  return !ATTACK_MACRO(b) && play_attack_defend_n(OTHER_COLOR(color), 1, 1, a, b);
}

static int
autohelperowl_attackpat171(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)==1;
}

static int
autohelperowl_attackpat172(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(760, trans, move);

  return !owl_proper_eye(move) && !ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat173(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend_n(OTHER_COLOR(color), 1, 1, move, a);
}

static int
autohelperowl_attackpat174(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(648, trans, move);
  A = AFFINE_TRANSFORM(685, trans, move);

  return  owl_big_eyespace(A) && play_attack_defend_n(color, 1, 1, move, b);
}

static int
autohelperowl_attackpat175(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return  1 || play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_attackpat176(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);

  return owl_mineye(move)==1 && accuratelib(b, OTHER_COLOR(color), MAX_LIBERTIES, NULL)==2 && !play_attack_defend_n(color, 1, 1, move, c) && !play_attack_defend_n(color, 1, 3, move, a, b, b);
}

static int
autohelperowl_attackpat177(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);

  return accuratelib(b, OTHER_COLOR(color), MAX_LIBERTIES, NULL)==2 && !play_attack_defend_n(color, 1, 1, move, c) && !play_attack_defend_n(color, 1, 3, move, a, b, b);
}

static int
autohelperowl_attackpat178(int trans, int move, int color, int action)
{
  int a, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(682, trans, move);

  return (owl_eyespace(a) || owl_eyespace(c))&& play_attack_defend_n(color, 1, 1, a, a) && play_attack_defend_n(OTHER_COLOR(color), 1, 1, move, a);
}

static int
autohelperowl_attackpat179(int trans, int move, int color, int action)
{
  int b, c, d, e, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(647, trans, move);
  e = AFFINE_TRANSFORM(720, trans, move);
  A = AFFINE_TRANSFORM(648, trans, move);

  return countlib(A) == 3 && !obvious_false_eye(d, OTHER_COLOR(color))&& play_attack_defend_n(color, 0, 3, move, b, c, move) && play_attack_defend_n(color, 0, 3, move, e, c, move)&& play_attack_defend2_n(color, 0, 5, move, c, b, d, e, b, e);
}

static int
autohelperowl_attackpat182(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);

  return  ATTACK_MACRO(A) && !play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_attackpat183(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return  does_attack(move, A);
}

static int
autohelperowl_attackpat188(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(645, trans, move);

  return  countlib(A)>2;
}

static int
autohelperowl_attackpat189(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return owl_eyespace(move);
}

static int
autohelperowl_attackpat190(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  C = AFFINE_TRANSFORM(722, trans, move);

  return  countlib(C) <= 3 && owl_proper_eye(a) && owl_proper_eye(b);
}

static int
autohelperowl_attackpat191(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return owl_eyespace(move);
}

static int
autohelperowl_attackpat192(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(649, trans, move);
  d = AFFINE_TRANSFORM(723, trans, move);

  return (!ATTACK_MACRO(a) && accuratelib(d, color, MAX_LIBERTIES, NULL)>=3)|| (!ATTACK_MACRO(b) && accuratelib(c, color, MAX_LIBERTIES, NULL)>=3);
}

static int
autohelperowl_attackpat193(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(685, trans, move);
  B = AFFINE_TRANSFORM(647, trans, move);

  return countlib(B) == 3 && owl_big_eyespace(move) && accuratelib(move, color, MAX_LIBERTIES, NULL)>2 && accuratelib(a, color, MAX_LIBERTIES, NULL)>1;
}

static int
autohelperowl_attackpat195(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return countlib(a)==1 && countlib(b)==1 && countlib(c)<=2;
}

static int
autohelperowl_attackpat196(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return countlib(a)<=2 && countlib(b)==1 && countlib(c)<=2;
}

static int
autohelperowl_attackpat198(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  B = AFFINE_TRANSFORM(609, trans, move);

  return countlib(a) == 1 && countlib(B) > 1;
}

static int
autohelperowl_attackpat200(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(718, trans, move);

  return !somewhere(color, 0, 1, a) || !DEFEND_MACRO(a);
}

static int
autohelperowl_attackpat201(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(718, trans, move);

  return !somewhere(color, 0, 1, a) || !DEFEND_MACRO(a);
}

static int
autohelperowl_attackpat202(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return !DEFEND_MACRO(a);
}

static int
autohelperowl_attackpat203(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return accuratelib(a, OTHER_COLOR(color), MAX_LIBERTIES, NULL) == 2;
}

static int
autohelperowl_attackpat205(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return !obvious_false_eye(a, OTHER_COLOR(color)) && owl_maxeye(move)>1;
}

static int
autohelperowl_attackpat206(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(609, trans, move);

  return countlib(A)==2;
}

static int
autohelperowl_attackpat208(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(647, trans, move);
  A = AFFINE_TRANSFORM(645, trans, move);

  return countlib(A)==2 && !safe_move(b, color);
}

static int
autohelperowl_attackpat209(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);

  return !safe_move(a, color);
}

static int
autohelperowl_attackpat210(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);
  b = AFFINE_TRANSFORM(795, trans, move);

  return somewhere(color, 0, 2, a, b);
}

static int
autohelperowl_attackpat216(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return play_attack_defend_n(color, 0, 1, move, A)!=WIN;
}

static int
autohelperowl_attackpat217(int trans, int move, int color, int action)
{
  int a, B, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);
  C = AFFINE_TRANSFORM(721, trans, move);

  return (owl_escape_value(B)>0 || owl_escape_value(C)>0)&& !play_attack_defend2_n(color, 1, 1, move, move, a);
}

static int
autohelperowl_attackpat218(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);

  return  !play_attack_defend2_n(color, 1, 1, move, move, a);
}

static int
autohelperowl_attackpat219(int trans, int move, int color, int action)
{
  int a, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(719, trans, move);

  return  !safe_move(a, color) && !play_attack_defend2_n(color, 1, 3, move, NO_MOVE, a, a, c) && !play_attack_defend_n(color, 1, 2, move, a, move);
}

static int
autohelperowl_attackpat220(int trans, int move, int color, int action)
{
  int a, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(719, trans, move);

  return  !safe_move(a, color) && !play_attack_defend2_n(color, 1, 3, move, NO_MOVE, a, a, c);
}

static int
autohelperowl_attackpat221(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  C = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(C)>0 && play_attack_defend2_n(OTHER_COLOR(color), 1, 2, move, a, a, b);
}

static int
autohelperowl_attackpat222(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  C = AFFINE_TRANSFORM(647, trans, move);

  return owl_escape_value(C)>0 && play_attack_defend2_n(OTHER_COLOR(color), 1, 2, move, a, a, b);
}

static int
autohelperowl_attackpat224(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return countlib(a) <= 2;
}

static int
autohelperowl_attackpat225(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_attackpat226(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return (owl_escape_value(a)>0 || owl_escape_value(b)>0) && play_attack_defend_n(color, 1, 2, move, c, c);
}

static int
autohelperowl_attackpat227(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);

  return play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, a, a);
}

static int
autohelperowl_attackpat228(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend_n(color, 1, 2, move, a, B);
}

static int
autohelperowl_attackpat229(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_attackpat230(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(648, trans, move);

  return  !safe_move(a, color) && countlib(b)>1;
}

static int
autohelperowl_attackpat231(int trans, int move, int color, int action)
{
  int b, c, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(648, trans, move);
  c = AFFINE_TRANSFORM(610, trans, move);
  A = AFFINE_TRANSFORM(647, trans, move);

  return  owl_escape_value(b)>0 && play_attack_defend2_n(color, 0, 3, move, A, b, c, b) && play_attack_defend2_n(color, 0, 3, move, A, b, b, move);
}

static int
autohelperowl_attackpat232(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(794, trans, move);
  B = AFFINE_TRANSFORM(757, trans, move);

  return somewhere(OTHER_COLOR(color), 0, 2, A, B) && owl_escape_value(A) + owl_escape_value(B) > 0;
}

static int
autohelperowl_attackpat233(int trans, int move, int color, int action)
{
  int e, f, g, A, B;
  UNUSED(color);
  UNUSED(action);

  e = AFFINE_TRANSFORM(683, trans, move);
  f = AFFINE_TRANSFORM(720, trans, move);
  g = AFFINE_TRANSFORM(721, trans, move);
  A = AFFINE_TRANSFORM(682, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return  (owl_escape_value(A) > 0 || owl_escape_value(B) > 0) && play_attack_defend2_n(color, 0, 4, move, g, f, e, f, move);
}

static int
autohelperowl_attackpat234(int trans, int move, int color, int action)
{
  int e, f, g, A, B;
  UNUSED(color);
  UNUSED(action);

  e = AFFINE_TRANSFORM(683, trans, move);
  f = AFFINE_TRANSFORM(720, trans, move);
  g = AFFINE_TRANSFORM(721, trans, move);
  A = AFFINE_TRANSFORM(682, trans, move);
  B = AFFINE_TRANSFORM(685, trans, move);

  return  (owl_escape_value(A) > 0 || owl_escape_value(B) > 0) && play_attack_defend2_n(color, 0, 4, move, g, f, e, f, move);
}

static int
autohelperowl_attackpat235(int trans, int move, int color, int action)
{
  int c, d, e, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);
  e = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(757, trans, move);

  return  (owl_escape_value(A) > 0 || owl_escape_value(B) > 0) && ((somewhere(OTHER_COLOR(color), 0, 1, d) && play_attack_defend2_n(OTHER_COLOR(color), 1, 2, move, c, c, e))     || (!somewhere(OTHER_COLOR(color), 0, 1, d) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 3, move, c, d, c, e)));
}

static int
autohelperowl_attackpat236(int trans, int move, int color, int action)
{
  int c, d, e, A, B;
  UNUSED(color);
  UNUSED(action);

  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);
  e = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(757, trans, move);

  return  (owl_escape_value(A) > 0 || owl_escape_value(B) > 0) && ((somewhere(OTHER_COLOR(color), 0, 1, d) && play_attack_defend2_n(OTHER_COLOR(color), 1, 2, move, c, c, e))     || (!somewhere(OTHER_COLOR(color), 0, 1, d) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 3, move, c, d, c, e)));
}

static int
autohelperowl_attackpat237(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  C = AFFINE_TRANSFORM(648, trans, move);

  return !play_attack_defend_n(color, 1, 2, move, a, move)&& (somewhere(color, 0, 1, b) || !play_attack_defend_n(color, 1, 2, move, b, move))&& !ATTACK_MACRO(C);
}

static int
autohelperowl_attackpat239(int trans, int move, int color, int action)
{
  int b, c, d, e, f, g, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);
  d = AFFINE_TRANSFORM(722, trans, move);
  e = AFFINE_TRANSFORM(723, trans, move);
  f = AFFINE_TRANSFORM(758, trans, move);
  g = AFFINE_TRANSFORM(759, trans, move);
  A = AFFINE_TRANSFORM(686, trans, move);

  return !owl_goal_dragon(A) && !play_attack_defend2_n(color, 1, 5, move, b, c, d, e, c, e)&& (somewhere(color, 0, 1, f) || !play_attack_defend2_n(color, 1, 5, move, d, b, f, g, b, g));
}

static int
autohelperowl_attackpat240(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f, g, h, i;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(688, trans, move);
  b = AFFINE_TRANSFORM(651, trans, move);
  c = AFFINE_TRANSFORM(614, trans, move);
  d = AFFINE_TRANSFORM(577, trans, move);
  e = AFFINE_TRANSFORM(540, trans, move);
  f = AFFINE_TRANSFORM(539, trans, move);
  g = AFFINE_TRANSFORM(538, trans, move);
  h = AFFINE_TRANSFORM(537, trans, move);
  i = AFFINE_TRANSFORM(536, trans, move);

  return (owl_escape_value(a)>0) + (owl_escape_value(b)>0)+(owl_escape_value(c)>0) + (owl_escape_value(d)>0)+(owl_escape_value(e)>0) + (owl_escape_value(f)>0)+(owl_escape_value(g)>0) + (owl_escape_value(h)>0)+(owl_escape_value(i)>0) < 2;
}

static int
autohelperowl_attackpat241(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(685, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return !owl_goal_dragon(A) && !play_connect_n(color, 1, 1, move, A, B);
}

static int
autohelperowl_attackpat242(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(722, trans, move);
  B = AFFINE_TRANSFORM(646, trans, move);

  return !play_connect_n(color, 1, 1, move, A, B);
}

static int
autohelperowl_attackpat243(int trans, int move, int color, int action)
{
  int a, B, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);
  C = AFFINE_TRANSFORM(686, trans, move);

  return play_connect_n(color, 0, 2, move, a, B, C);
}

static int
autohelperowl_attackpat244(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);
  B = AFFINE_TRANSFORM(758, trans, move);

  return owl_strong_dragon(B) && !play_connect_n(OTHER_COLOR(color), 0, 1, move, A, B);
}

static int
autohelperowl_attackpat245(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(758, trans, move);
  B = AFFINE_TRANSFORM(646, trans, move);

  return owl_strong_dragon(B) && !play_connect_n(OTHER_COLOR(color), 0, 1, move, A, B);
}

static int
autohelperowl_attackpat246(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(646, trans, move);

  return owl_escape_value(c)>0 && play_attack_defend2_n(OTHER_COLOR(color), 1, 2, move, a, a, b);
}

static int
autohelperowl_attackpat247(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);

  return  play_break_through_n(OTHER_COLOR(color), 2, move, a, b, a, c) == WIN;
}

static int
autohelperowl_attackpat248(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(685, trans, move);

  return  countlib(b)<=4 && countlib(c)<=4 && play_break_through_n(OTHER_COLOR(color), 2, move, a, b, a, c) == WIN;
}

static int
autohelperowl_attackpat249(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(647, trans, move);

  return  vital_chain(A) && vital_chain(B) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 1, move, A, B);
}

static int
autohelperowl_attackpat250(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);

  return !play_attack_defend2_n(OTHER_COLOR(color), 0, 3, move, a, b, a, c);
}

static int
autohelperowl_attackpat251(int trans, int move, int color, int action)
{
  int a, A, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  A = AFFINE_TRANSFORM(686, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return  play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, a, B) && !play_attack_defend_n(color, 0, 1, move, A);
}

static int
autohelperowl_attackpat252(int trans, int move, int color, int action)
{
  int a, b, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  A = AFFINE_TRANSFORM(648, trans, move);

  return !ATTACK_MACRO(A) && play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, a, b);
}

static int
autohelperowl_attackpat253(int trans, int move, int color, int action)
{
  int a, A, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  A = AFFINE_TRANSFORM(611, trans, move);
  B = AFFINE_TRANSFORM(647, trans, move);

  return !ATTACK_MACRO(A) && ATTACK_MACRO(a) && !play_attack_defend_n(color, 0, 1, move, B);
}

static int
autohelperowl_attackpat254(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return  vital_chain(a) && vital_chain(b) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 1, move, a, b);
}

static int
autohelperowl_attackpat255(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(648, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(611, trans, move);

  return countlib(c)>2 && vital_chain(b) && vital_chain(c)&& play_attack_defend_n(color, 1, 2, move, a, a) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 1, a, b, c);
}

static int
autohelperowl_attackpat256(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(646, trans, move);
  c = AFFINE_TRANSFORM(610, trans, move);

  return countlib(c)>2 && vital_chain(b) && vital_chain(c)&& play_attack_defend_n(color, 1, 2, move, a, a) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 1, a, b, c);
}

static int
autohelperowl_attackpat257(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(B) > 0 && does_defend(move, a);
}

static int
autohelperowl_attackpat258(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(646, trans, move);
  b = AFFINE_TRANSFORM(609, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);

  return  somewhere(color, 0, 2, a, b) && ATTACK_MACRO(c);
}

static int
autohelperowl_attackpat261(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);

  return  ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat262(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(681, trans, move);
  b = AFFINE_TRANSFORM(573, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_attackpat263(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(796, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);

  return owl_escape_value(a)>0 || owl_escape_value(b)>0;
}

static int
autohelperowl_attackpat265(int trans, int move, int color, int action)
{
  int a, b, C, D;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  C = AFFINE_TRANSFORM(722, trans, move);
  D = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(C)>0 && owl_goal_dragon(D) && !play_attack_defend2_n(OTHER_COLOR(color), 0, 1, move, a, b);
}

static int
autohelperowl_attackpat266(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return !play_attack_defend2_n(OTHER_COLOR(color), 0, 1, move, a, b);
}

static int
autohelperowl_attackpat267(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return !play_attack_defend2_n(OTHER_COLOR(color), 0, 1, move, a, b);
}

static int
autohelperowl_attackpat268(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(610, trans, move);

  return  ATTACK_MACRO(A) && !play_attack_defend_n(color, 1, 1, move, A);
}

static int
autohelperowl_attackpat269(int trans, int move, int color, int action)
{
  int a, b, c, D, E;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  D = AFFINE_TRANSFORM(720, trans, move);
  E = AFFINE_TRANSFORM(685, trans, move);

  return (owl_escape_value(a)>0 || owl_escape_value(b)>0)&& ((somewhere(color, 0, 1, E) || somewhere(OTHER_COLOR(color), 0, 1, E)) || owl_escape_value(a) < 0)&& !play_attack_defend2_n(color, 1, 3, move, c, D, move, D);
}

static int
autohelperowl_attackpat270(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);

  return !same_string(a, b) && (countlib(a) <= 4 || countlib(b) <= 4 || countlib(c) <= 4);
}

static int
autohelperowl_attackpat271(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return !owl_goal_dragon(b) && !play_connect_n(color, 1, 1, move, a, b);
}

static int
autohelperowl_attackpat272(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return !owl_goal_dragon(a) && !play_connect_n(color, 1, 1, move, a, b);
}

static int
autohelperowl_attackpat273(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return countlib(a) == 2 && !play_connect_n(color, 1, 1, move, a, b);
}

static int
autohelperowl_attackpat274(int trans, int move, int color, int action)
{
  int a, b, c, d, E;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(757, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);
  E = AFFINE_TRANSFORM(683, trans, move);

  return  (owl_escape_value(a) > 0 || owl_escape_value(b) > 0) && play_attack_defend2_n(OTHER_COLOR(color), 1, 3, move, c, d, c, E);
}

static int
autohelperowl_attackpat275(int trans, int move, int color, int action)
{
  int a, b, c, d, E;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(757, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);
  E = AFFINE_TRANSFORM(683, trans, move);

  return  (owl_escape_value(a) > 0 || owl_escape_value(b) > 0) && play_attack_defend2_n(OTHER_COLOR(color), 1, 3, move, c, d, c, E);
}

static int
autohelperowl_attackpat276(int trans, int move, int color, int action)
{
  int b, c, d, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(758, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);
  d = AFFINE_TRANSFORM(721, trans, move);
  A = AFFINE_TRANSFORM(720, trans, move);

  return (owl_escape_value(c) > 0 || owl_escape_value(b) > 0)&& play_attack_defend2_n(color, 0, 2, move, d, A, move);
}

static int
autohelperowl_attackpat277(int trans, int move, int color, int action)
{
  int b, c, d, e, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);
  d = AFFINE_TRANSFORM(685, trans, move);
  e = AFFINE_TRANSFORM(647, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);

  return (owl_escape_value(d) > 0 || owl_escape_value(b) > 0 || owl_escape_value(c) > 0)&& !play_attack_defend2_n(color, 0, 2, e, move, A, e);
}

static int
autohelperowl_attackpat278(int trans, int move, int color, int action)
{
  int b, c, d, e, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(610, trans, move);
  c = AFFINE_TRANSFORM(611, trans, move);
  d = AFFINE_TRANSFORM(648, trans, move);
  e = AFFINE_TRANSFORM(647, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);

  return (owl_escape_value(d) > 0 || owl_escape_value(b) > 0 || owl_escape_value(c) > 0)&& play_connect_n(OTHER_COLOR(color), 1, 2, e, move, e, A)&& play_connect_n(color, 0, 2, move, e, e, A);
}

static int
autohelperowl_attackpat280(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);

  return  vital_chain(a) && vital_chain(b) && play_attack_defend2_n(OTHER_COLOR(color), 1, 1, move, a, b) && !play_connect_n(OTHER_COLOR(color), 1, 1, move, a, b);
}

static int
autohelperowl_attackpat281(int trans, int move, int color, int action)
{
  int b, c, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(646, trans, move);

  return  (ATTACK_MACRO(A) != WIN || (countstones(A)<=2 && does_attack(move, A))) && (!owl_goal_dragon(b) || !owl_goal_dragon(c));
}

static int
autohelperowl_attackpat282(int trans, int move, int color, int action)
{
  int b, c, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(646, trans, move);

  return  (ATTACK_MACRO(A) != WIN || (countstones(A)<=2 && does_attack(move, A))) && (!owl_goal_dragon(b) || !owl_goal_dragon(c));
}

static int
autohelperowl_attackpat283(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(721, trans, move);
  c = AFFINE_TRANSFORM(722, trans, move);
  d = AFFINE_TRANSFORM(648, trans, move);

  return  owl_escape_value(a) > 0 && play_attack_defend_n(color, 1, 1, move, b) && !play_attack_defend_n(color, 1, 3, move, c, d, d);
}

static int
autohelperowl_attackpat284(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return play_attack_defend_n(OTHER_COLOR(color), 1, 2, move, a, B);
}

static int
autohelperowl_attackpat286(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);
  B = AFFINE_TRANSFORM(649, trans, move);

  return owl_strong_dragon(A) && !play_connect_n(OTHER_COLOR(color), 0, 1, move, A, B);
}

static int
autohelperowl_attackpat288(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(610, trans, move);
  b = AFFINE_TRANSFORM(611, trans, move);
  c = AFFINE_TRANSFORM(612, trans, move);
  d = AFFINE_TRANSFORM(649, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) +owl_escape_value(c) + owl_escape_value(d) > 0;
}

static int
autohelperowl_attackpat289(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(611, trans, move);
  b = AFFINE_TRANSFORM(612, trans, move);
  c = AFFINE_TRANSFORM(613, trans, move);
  d = AFFINE_TRANSFORM(650, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) +owl_escape_value(c) + owl_escape_value(d) > 0;
}

static int
autohelperowl_attackpat290(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(646, trans, move);

  return  countlib(a) == 1 && owl_escape_value(B) > 0;
}

static int
autohelperowl_attackpat291(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);

  return  countlib(a) == 1 && owl_escape_value(B) > 0;
}

static int
autohelperowl_attackpat292(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return  countlib(a) == 1;
}

static int
autohelperowl_attackpat293(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return  countlib(a) == 1;
}

static int
autohelperowl_attackpat294(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(610, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(A)>0 && !play_connect_n(OTHER_COLOR(color), 0, 1, move, A, B) && !play_connect_n(color, 1, 1, move, A, B);
}

static int
autohelperowl_attackpat295(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(686, trans, move);
  B = AFFINE_TRANSFORM(683, trans, move);

  return owl_escape_value(A)>0 && !play_connect_n(OTHER_COLOR(color), 0, 1, move, A, B) && !play_connect_n(color, 1, 1, move, A, B);
}

static int
autohelperowl_attackpat296(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(645, trans, move);
  b = AFFINE_TRANSFORM(682, trans, move);
  c = AFFINE_TRANSFORM(719, trans, move);

  return owl_escape_value(a) + owl_escape_value(b) + owl_escape_value(c) > 0;
}

static int
autohelperowl_attackpat298(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  b = AFFINE_TRANSFORM(759, trans, move);
  c = AFFINE_TRANSFORM(796, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);

  return play_attack_defend_n(color, 1, 1, b, d) && play_attack_defend_n(color, 1, 2, move, a, a)&& play_attack_defend_n(color, 1, 4, move, b, NO_MOVE, a, a) && !play_attack_defend_n(color, 1, 2, move, b, c);
}

static int
autohelperowl_attackpat299(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(A) > 0 && play_connect_n(OTHER_COLOR(color), 0, 1, move, A, B) != WIN;
}

static int
autohelperowl_attackpat300(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);
  B = AFFINE_TRANSFORM(720, trans, move);

  return owl_escape_value(B) > 0 && play_connect_n(OTHER_COLOR(color), 0, 1, move, A, B) != WIN;
}

static int
autohelperowl_attackpat301(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return !play_connect_n(color, 1, 1, move, a, b);
}

static int
autohelperowl_attackpat302(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(722, trans, move);

  return !play_connect_n(color, 1, 1, move, a, b);
}

static int
autohelperowl_attackpat303(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(720, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return  (countlib(a)==1) && (countlib(B)==1);
}

static int
autohelperowl_attackpat304(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countstones(A)>3 && countlib(A)==1;
}

static int
autohelperowl_attackpat305(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countstones(A)<=3 && countlib(A)==1 && accuratelib(move, color, MAX_LIBERTIES, NULL) > 1;
}

static int
autohelperowl_attackpat306(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return countstones(A)>3 && does_attack(move, A);
}

static int
autohelperowl_attackpat307(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);

  return countstones(A)<=3 && does_attack(move, A)&& (accuratelib(move, color, MAX_LIBERTIES, NULL) > 1 || is_ko_point(move));
}

static int
autohelperowl_attackpat308(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(721, trans, move);

  return  does_attack(move, A);
}

static int
autohelperowl_attackpat310(int trans, int move, int color, int action)
{
  UNUSED(trans);
  UNUSED(color);
  UNUSED(action);

  UNUSED(move);

  return owl_proper_eye(move);
}

static int
autohelperowl_attackpat311(int trans, int move, int color, int action)
{
  int a, B, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(647, trans, move);
  C = AFFINE_TRANSFORM(721, trans, move);

  return ATTACK_MACRO(a) && !play_attack_defend_n(color, 1, 1, move, a) && !play_attack_defend2_n(color, 0, 1, move, B, C);
}

static int
autohelperowl_attackpat312(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(643, trans, move);
  b = AFFINE_TRANSFORM(644, trans, move);

  return  somewhere(color, 0, 2, a, b);
}

static int
autohelperowl_attackpat316(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return DEFEND_MACRO(a) != WIN;
}

static int
autohelperowl_attackpat317(int trans, int move, int color, int action)
{
  int b, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(720, trans, move);
  A = AFFINE_TRANSFORM(647, trans, move);

  return countlib(A)==2 && !obvious_false_eye(b, OTHER_COLOR(color));
}

static int
autohelperowl_attackpat323(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(720, trans, move);

  return countlib(a)>1 && !obvious_false_eye(b, OTHER_COLOR(color));
}

static int
autohelperowl_attackpat330(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(609, trans, move);

  return !ATTACK_MACRO(a);
}

static int
autohelperowl_attackpat333(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(645, trans, move);

  return countlib(A) == 4 && ATTACK_MACRO(A) != WIN;
}

static int
autohelperowl_attackpat334(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(757, trans, move);

  return countlib(A) == 2 && ATTACK_MACRO(A) != WIN;
}

static int
autohelperowl_attackpat335(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(646, trans, move);

  return !ATTACK_MACRO(A);
}

static int
autohelperowl_attackpat337(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(682, trans, move);

  return !ATTACK_MACRO(A);
}

static int
autohelperowl_attackpat348(int trans, int move, int color, int action)
{
  int a, A;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(722, trans, move);
  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)<=3 && DEFEND_MACRO(a) != WIN;
}

static int
autohelperowl_attackpat349(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(757, trans, move);

  return play_attack_defend_n(color, 1, 1, a, a);
}

static int
autohelperowl_attackpat350(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);

  return play_attack_defend_n(color, 0, 2, move, a, move);
}

static int
autohelperowl_attackpat351(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(609, trans, move);
  B = AFFINE_TRANSFORM(610, trans, move);

  return !somewhere(OTHER_COLOR(color), 0, 1, a) || (countlib(B) <= 6);
}

static int
autohelperowl_attackpat353(int trans, int move, int color, int action)
{
  int a, b;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(573, trans, move);

  return play_attack_defend_n(color, 1, 1, a, a) != 0 && !play_attack_defend_n(color, 1, 1, a, b);
}

static int
autohelperowl_attackpat354(int trans, int move, int color, int action)
{
  int a, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(759, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);

  return play_attack_defend_n(color, 1, 1, a, c) != 0 || play_attack_defend_n(color, 1, 1, a, a);
}

static int
autohelperowl_attackpat355(int trans, int move, int color, int action)
{
  int a, b, c, d;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(757, trans, move);
  c = AFFINE_TRANSFORM(720, trans, move);
  d = AFFINE_TRANSFORM(758, trans, move);

  return !play_attack_defend_n(color, 1, 3, move, a, b, b) && play_attack_defend_n(color, 0, 2, move, c, d);
}

static int
autohelperowl_attackpat367(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(645, trans, move);
  B = AFFINE_TRANSFORM(719, trans, move);

  return countlib(a)==1 && countlib(B)<=3 && DEFEND_MACRO(a)!=WIN;
}

static int
autohelperowl_attackpat368(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(722, trans, move);

  return !ATTACK_MACRO(A);
}

static int
autohelperowl_attackpat369(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(722, trans, move);

  return !ATTACK_MACRO(A);
}

static int
autohelperowl_attackpat370(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(718, trans, move);

  return countlib(A)==3;
}

static int
autohelperowl_attackpat372(int trans, int move, int color, int action)
{
  int a;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);

  return is_proper_eye_space(a);
}

static int
autohelperowl_attackpat373(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(685, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);

  return is_proper_eye_space(a) && play_attack_defend_n(color, 0, 3, move, b, c, move);
}

static int
autohelperowl_attackpat376(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)==2 && accuratelib(move, color, MAX_LIBERTIES, NULL)>1 && finish_ko_helper(A);
}

static int
autohelperowl_attackpat377(int trans, int move, int color, int action)
{
  int A;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(683, trans, move);

  return countlib(A)==2 && accuratelib(move, color, MAX_LIBERTIES, NULL)>1 && finish_ko_helper(A);
}

static int
autohelperowl_attackpat378(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return owl_escape_value(A) > 0 || owl_escape_value(B) > 0;
}

static int
autohelperowl_attackpat379(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(721, trans, move);

  return owl_escape_value(A) > 0 || owl_escape_value(B) > 0;
}

static int
autohelperowl_attackpat380(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(614, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);

  return !ATTACK_MACRO(a) && !play_attack_defend_n(OTHER_COLOR(color), 0, 1, b, c);
}

static int
autohelperowl_attackpat381(int trans, int move, int color, int action)
{
  int a, b, c;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  c = AFFINE_TRANSFORM(648, trans, move);

  return !safe_move(a, color) && play_attack_defend_n(color, 0, 2, move, a, move) && !play_attack_defend_n(color, 1, 3, move, b, c, c);
}

static int
autohelperowl_attackpat382(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(683, trans, move);
  C = AFFINE_TRANSFORM(682, trans, move);

  return !play_attack_defend_n(color, 0, 3, move, a, b, C);
}

static int
autohelperowl_attackpat383(int trans, int move, int color, int action)
{
  int a, b, C;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  b = AFFINE_TRANSFORM(647, trans, move);
  C = AFFINE_TRANSFORM(610, trans, move);

  return !play_attack_defend_n(color, 0, 3, move, a, b, C);
}

static int
autohelperowl_attackpat384(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(758, trans, move);

  return !play_attack_defend_n(color, 0, 3, move, NO_MOVE, a, B);
}

static int
autohelperowl_attackpat385(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(721, trans, move);
  B = AFFINE_TRANSFORM(758, trans, move);

  return !play_attack_defend_n(color, 0, 3, move, NO_MOVE, a, B);
}

static int
autohelperowl_attackpat386(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(683, trans, move);
  B = AFFINE_TRANSFORM(682, trans, move);

  return !play_attack_defend_n(color, 0, 3, move, NO_MOVE, a, B);
}

static int
autohelperowl_attackpat387(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  B = AFFINE_TRANSFORM(610, trans, move);

  return !play_attack_defend_n(color, 0, 3, move, NO_MOVE, a, B);
}

static int
autohelperowl_attackpat391(int trans, int move, int color, int action)
{
  int b, c, d, e, f, A;
  UNUSED(color);
  UNUSED(action);

  b = AFFINE_TRANSFORM(571, trans, move);
  c = AFFINE_TRANSFORM(647, trans, move);
  d = AFFINE_TRANSFORM(646, trans, move);
  e = AFFINE_TRANSFORM(609, trans, move);
  f = AFFINE_TRANSFORM(683, trans, move);
  A = AFFINE_TRANSFORM(608, trans, move);

  return countlib(A)==3 && !ATTACK_MACRO(b) && !play_attack_defend_n(color, 1, 5, move, c, d, e, f, f);
}

static int
autohelperowl_attackpat392(int trans, int move, int color, int action)
{
  int a, b, c, d, e, f;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(647, trans, move);
  b = AFFINE_TRANSFORM(758, trans, move);
  c = AFFINE_TRANSFORM(721, trans, move);
  d = AFFINE_TRANSFORM(720, trans, move);
  e = AFFINE_TRANSFORM(683, trans, move);
  f = AFFINE_TRANSFORM(794, trans, move);

  return play_attack_defend_n(color, 1, 6, move, a, b, c, d, e, e) && !play_attack_defend_n(color, 1, 1, move, f);
}

static int
autohelperowl_attackpat393(int trans, int move, int color, int action)
{
  int e, A, B, C, D;
  UNUSED(color);
  UNUSED(action);

  e = AFFINE_TRANSFORM(685, trans, move);
  A = AFFINE_TRANSFORM(797, trans, move);
  B = AFFINE_TRANSFORM(686, trans, move);
  C = AFFINE_TRANSFORM(760, trans, move);
  D = AFFINE_TRANSFORM(722, trans, move);

  return countlib(A) > 2 && !play_attack_defend_n(color, 0, 7, move, NO_MOVE, B, NO_MOVE, C, NO_MOVE, D, e);
}

static int
autohelperowl_attackpat395(int trans, int move, int color, int action)
{
  int A, B;
  UNUSED(color);
  UNUSED(action);

  A = AFFINE_TRANSFORM(757, trans, move);
  B = AFFINE_TRANSFORM(756, trans, move);

  return  countlib(A) == 2 && countlib(B) > 1 && accuratelib(move, color, MAX_LIBERTIES, NULL) > 1;
}

static int
autohelperowl_attackpat396(int trans, int move, int color, int action)
{
  int a, B;
  UNUSED(color);
  UNUSED(action);

  a = AFFINE_TRANSFORM(682, trans, move);
  B = AFFINE_TRANSFORM(644, trans, move);

  return  owl_proper_eye(a) && !ATTACK_MACRO(B);
}

static struct pattern_attribute attributes[] = {
#ifdef HAVE_TRANSPARENT_UNIONS
  {LAST_ATTRIBUTE,{.offset=0}},
  {THREATENS_TO_CAPTURE,{.offset=757}},
  {LAST_ATTRIBUTE,{.offset=0}},
  {THREATENS_EYE,{.offset=682}},
  {LAST_ATTRIBUTE,{.offset=0}}
#else
  {LAST_ATTRIBUTE,0.0,0},
  {THREATENS_TO_CAPTURE,0.0,757},
  {LAST_ATTRIBUTE,0.0,0},
  {THREATENS_EYE,0.0,682},
  {LAST_ATTRIBUTE,0.0,0}
#endif
};

static struct pattern owl_attackpat[] = {
  {owl_attackpat0,3,8, "A1",-1,-2,2,2,3,4,0x2,683,
    { 0xfdffffff, 0xfcfcfcf4, 0xfffffc00, 0xffffff3f, 0xfcfcfcf0, 0xfffffd00, 0xffffff7f, 0xfcffffff},
    { 0x041a0000, 0x00102420, 0x00904000, 0x60100000, 0x24100000, 0x001a0400, 0x00106020, 0x40900000}
   , 0x20,80.000000,attributes+0,1,NULL,autohelperowl_attackpat0,0,0.010000},
  {owl_attackpat1,3,8, "A2",-2,-2,2,2,4,4,0x2,683,
    { 0xfdffffff, 0xfffffff7, 0xfffffcfc, 0xffffff3f, 0xfffffff0, 0xfffffdff, 0xffffff7f, 0xfcffffff},
    { 0x00180000, 0x00102200, 0x00900080, 0x20100000, 0x22100000, 0x00180008, 0x00102000, 0x00900000}
   , 0x0,65.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat2,2,8, "A3",-1,-2,2,1,3,3,0x2,720,
    { 0xfcfcf000, 0xffff3f00, 0x3fffffff, 0xf0fcfcfc, 0x3fffffff, 0xf0fcfcfc, 0xfcfcf000, 0xffff3f00},
    { 0x00242000, 0x00a11000, 0x20600010, 0x10280000, 0x10a10000, 0x20240010, 0x00281000, 0x00602000}
   , 0x0,65.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat3,1,8, "A101",-1,0,2,2,3,2,0x2,721,
    { 0x3f3f3800, 0x00ffbf3f, 0xb0f0f0f0, 0xf8fc0000, 0xbfff0000, 0x383f3f3f, 0x00fcf8f0, 0xf0f0b000},
    { 0x00201000, 0x00600000, 0x10200000, 0x00240000, 0x00600000, 0x10200000, 0x00240000, 0x00201000}
   , 0x0,70.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat4,3,8, "A102",-1,-2,2,2,3,4,0x2,721,
    { 0xfcffffff, 0xfcfcfcf0, 0xffffff00, 0xffffffff, 0xfcfcfcfc, 0xfffffc00, 0xffffff3f, 0xffffffff},
    { 0x40902000, 0x24900000, 0x201a0500, 0x00186060, 0x00902424, 0x20904000, 0x60180000, 0x051a2000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat5,4,8, "A103",-2,-2,1,1,3,3,0x2,720,
    { 0xfdfdfc00, 0xfcfeff14, 0xfcfcfce0, 0xfcfcfc00, 0xfffefc00, 0xfcfdfd2c, 0xfcfcfc50, 0xfcfcfc00},
    { 0x80900000, 0x28100100, 0x00180840, 0x0010a000, 0x01102800, 0x00908004, 0xa0100000, 0x08180000}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat6,2,8, "A104",-1,-2,2,1,3,3,0x2,721,
    { 0xfcffffff, 0xfcfcfcf0, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfffffc00, 0xffffff3f, 0xfcfcfcfc},
    { 0x40902000, 0x24900000, 0x20180400, 0x00186000, 0x00902400, 0x20904000, 0x60180000, 0x04182000}
   , 0x0,90.000000,attributes+0,1,NULL,autohelperowl_attackpat6,0,0.010000},
  {owl_attackpat7,3,8, "A105",-1,-3,2,2,3,5,0x2,721,
    { 0x7fffffff, 0xf4fcfcfc, 0xfffff700, 0xffff7fff, 0xfcfcf4fc, 0xffff7f00, 0x7fffffff, 0xf7ffffff},
    { 0x10200000, 0x00240000, 0x00201200, 0x00600080, 0x00240008, 0x00201000, 0x00600000, 0x12200000}
   , 0x0,99.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat8,3,8, "A106",-2,-2,1,1,3,3,0x2,683,
    { 0xffffff00, 0xfcfcfffc, 0xfcfcfcc0, 0xfcfcfc00, 0xfffcfc00, 0xffffff0c, 0xfcfcfcfc, 0xfcfcfc00},
    { 0x40620000, 0x14200220, 0x00240480, 0x00205000, 0x02201400, 0x00624008, 0x50200020, 0x04240000}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat9,1,8, "A107",-1,0,2,4,3,4,0x2,686,
    { 0x00ffffff, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xffff0000, 0x3f3f3f3f, 0x00fcfcfc},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat10,3,8, "A108",-1,-1,1,1,2,2,0x2,646,
    { 0xf4f4fc00, 0xfcfcd400, 0xfc7c7c00, 0x5cfcfc00, 0xd4fcfc00, 0xfcf4f400, 0xfcfc5c00, 0x7c7cfc00},
    { 0x00600000, 0x10200000, 0x00240000, 0x00201000, 0x00201000, 0x00600000, 0x10200000, 0x00240000}
   , 0x20,70.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat11,1,8, "A109",-1,0,2,2,3,2,0x2,685,
    { 0x00f8fcf8, 0xf0f0e000, 0xffbf0000, 0x2e3f3f3f, 0xe0f0f0f0, 0xfcf80000, 0x3f3f2e00, 0x00bfffbf},
    { 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200400, 0x00204000}
   , 0x0,79.000000,attributes+0,1,NULL,autohelperowl_attackpat11,3,0.016000},
  {owl_attackpat12,3,8, "A110",-1,-1,2,2,3,3,0x2,721,
    { 0xfeffffff, 0xfcfcfcf8, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfffffe00, 0xffffffbf, 0xfcfcfcfc},
    { 0x4090a000, 0xa4900000, 0x28180400, 0x00186800, 0x0090a400, 0xa0904000, 0x68180000, 0x04182800}
   , 0x0,85.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat13,2,8, "A111",-2,0,2,3,4,3,0x2,686,
    { 0x0037ffff, 0xc0f0d0f0, 0xff700000, 0x1f3f0f0e, 0xd0f0c0c0, 0xff370000, 0x0f3f1f3f, 0x0070fffe},
    { 0x00200000, 0x00200000, 0x01200000, 0x00200004, 0x00200040, 0x00200000, 0x00200000, 0x00200100}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat14,2,8, "A112",-1,-2,2,1,3,3,0x2,683,
    { 0xfcfcf000, 0xffff3f00, 0x3fffffff, 0xf0fcfcfc, 0x3fffffff, 0xf0fcfcfc, 0xfcfcf000, 0xffff3f00},
    { 0x00242000, 0x00a11000, 0x20600010, 0x10280000, 0x10a10000, 0x20240010, 0x00281000, 0x00602000}
   , 0x0,79.000000,attributes+0,1,NULL,autohelperowl_attackpat14,3,0.010000},
  {owl_attackpat15,3,8, "A113",-2,-3,1,0,3,3,0x8,685,
    { 0x003ffdff, 0xc0f0f070, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xfd3f0000, 0x0f3f3f37, 0x00f0fcfc},
    { 0x00128000, 0x80100020, 0x08100000, 0x00100800, 0x00108000, 0x80120000, 0x08100020, 0x00100800}
   , 0x80,99.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat16,2,8, "A114",0,-2,3,1,3,3,0x8,686,
    { 0x00fcfcfc, 0xf0f0f000, 0xffff0000, 0x3f3f3f3f, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0x00ffffff},
    { 0x00200004, 0x00200000, 0x00200000, 0x01200000, 0x00200000, 0x00200000, 0x00200100, 0x00200040}
   , 0x80,99.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat17,2,8, "A115",0,-3,3,1,3,4,0x2,648,
    { 0x00f0fcfc, 0xf0f0c000, 0xff3f0000, 0x0f3f3f3f, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0f00, 0x003fffff},
    { 0x00200800, 0x00208000, 0x80200000, 0x08200000, 0x80200000, 0x08200000, 0x00200800, 0x00208000}
   , 0x0,85.000000,attributes+0,1,NULL,autohelperowl_attackpat17,3,0.010000},
  {owl_attackpat18,4,8, "A201",-1,-2,2,2,3,4,0x2,611,
    { 0xffffffff, 0xfcfcfcfc, 0xffffff00, 0xffffffff, 0xfcfcfcfc, 0xffffff00, 0xffffffff, 0xffffffff},
    { 0x055aa000, 0x90902424, 0x28944000, 0x60181800, 0x24909000, 0xa05a0500, 0x18186060, 0x40942800}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_attackpat18,0,1.600000},
  {owl_attackpat19,4,8, "A203",-1,-2,1,1,2,3,0x2,721,
    { 0x0c7dff00, 0xd0f0fcd0, 0xfcf4c000, 0xfc3c1c00, 0xfcf0d000, 0xff7d0c00, 0x1c3cfc1c, 0xc0f4fc00},
    { 0x04208000, 0x80200400, 0x08204000, 0x40200800, 0x04208000, 0x80200400, 0x08204000, 0x40200800}
   , 0x80,60.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat20,1,8, "A204",0,-2,2,2,2,4,0x2,685,
    { 0x0030fcff, 0xc0f0c000, 0xfc300000, 0x0f3f0f03, 0xc0f0c000, 0xfc300000, 0x0f3f0f03, 0x0030fcff},
    { 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x80100000, 0x08100000, 0x00100800, 0x00108000}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat21,2,8, "A205",-1,-1,1,1,2,2,0x2,647,
    { 0xb0fcfc00, 0xf8fcf000, 0xfcfc3800, 0x3cfcbc00, 0xf0fcf800, 0xfcfcb000, 0xbcfc3c00, 0x38fcfc00},
    { 0x10280000, 0x00242000, 0x00a01000, 0x20600000, 0x20240000, 0x00281000, 0x00602000, 0x10a00000}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat22,2,8, "A205b",-1,-1,1,1,2,2,0x2,721,
    { 0x38fcfc00, 0xf0fcf800, 0xfcfcb000, 0xbcfc3c00, 0xf8fcf000, 0xfcfc3800, 0x3cfcbc00, 0xb0fcfc00},
    { 0x10a01000, 0x20640000, 0x10281000, 0x00642000, 0x00642000, 0x10a01000, 0x20640000, 0x10281000}
   , 0x0,70.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat23,2,8, "A206",-1,-1,2,1,3,2,0x2,648,
    { 0x30bcfcfc, 0xe0fcf000, 0xfcf83000, 0x3fff2f00, 0xf0fce000, 0xfcbc3000, 0x2fff3f00, 0x30f8fcfc},
    { 0x10182000, 0x00942000, 0x20901000, 0x20580000, 0x20940000, 0x20181000, 0x00582000, 0x10902000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat24,2,8, "A206b",-1,-1,2,1,3,2,0x2,722,
    { 0x3cfcfcfc, 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00, 0xf0fcfcfc},
    { 0x04902000, 0x20900400, 0x20184000, 0x40182000, 0x04902000, 0x20900400, 0x20184000, 0x40182000}
   , 0x0,78.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat25,1,8, "A207",0,0,2,2,2,2,0x2,722,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00120000, 0x00100020, 0x00100000, 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100000}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat26,3,8, "A207b",0,-2,2,1,2,3,0x2,722,
    { 0x007f7f3f, 0x50f0f0f0, 0xf4f40000, 0x3f3f1400, 0xf0f05000, 0x7f7f0000, 0x143f3f3f, 0x00f4f4f0},
    { 0x00210000, 0x00200010, 0x00200000, 0x00200000, 0x00200000, 0x00210000, 0x00200010, 0x00200000}
   , 0x0,58.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat27,5,8, "A207c",0,-3,2,2,2,5,0x2,722,
    { 0x007f7f3f, 0x50f0f0f0, 0xf5f50000, 0x3f3f1414, 0xf0f05050, 0x7f7f0000, 0x143f3f3f, 0x00f5f5f0},
    { 0x00210000, 0x00200010, 0x00200000, 0x00200000, 0x00200000, 0x00210000, 0x00200010, 0x00200000}
   , 0x0,78.000000,attributes+0,1,NULL,autohelperowl_attackpat27,3,0.610000},
  {owl_attackpat28,6,8, "A207d",0,-3,2,2,2,5,0x2,722,
    { 0x007f7f3f, 0x50f0f0f0, 0xf5f50000, 0x3f3f1414, 0xf0f05050, 0x7f7f0000, 0x143f3f3f, 0x00f5f5f0},
    { 0x00210000, 0x00200010, 0x00200000, 0x00200000, 0x00200000, 0x00210000, 0x00200010, 0x00200000}
   , 0x80,60.000000,attributes+0,1,NULL,autohelperowl_attackpat28,3,1.000000},
  {owl_attackpat29,2,8, "A208a",-1,-2,1,0,2,2,0x2,686,
    { 0x00bcbcfc, 0xa0f0f000, 0xf8f80000, 0x3f3f2b00, 0xf0f0a000, 0xbcbc0000, 0x2b3f3f00, 0x00f8f8fc},
    { 0x00280004, 0x00202000, 0x00a00000, 0x21200000, 0x20200000, 0x00280000, 0x00202100, 0x00a00040}
   , 0x0,55.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat30,1,8, "A208b",-1,-2,1,0,2,2,0x2,686,
    { 0x00f8f8fc, 0xf0f0a000, 0xbcbc0000, 0x2b3f3f00, 0xa0f0f000, 0xf8f80000, 0x3f3f2b00, 0x00bcbcfc},
    { 0x00200040, 0x00200000, 0x00200000, 0x00200100, 0x00200000, 0x00200000, 0x01200000, 0x00200004}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat31,4,8, "A208c",-1,0,2,2,3,2,0x2,722,
    { 0x003ffe7e, 0xc0f0f0b0, 0xfcf00000, 0x3f3f0d00, 0xf0f0c000, 0xfe3f0000, 0x0d3f3f3a, 0x00f0fcf4},
    { 0x00108028, 0x80100000, 0x08100000, 0x02120800, 0x00108000, 0x80100000, 0x08120200, 0x001008a0}
   , 0x0,56.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat32,2,8, "A208d",-1,-2,1,0,2,2,0x2,647,
    { 0xf0f0a000, 0xbcbc0000, 0x2b3f3f00, 0x00f8f8fc, 0x00bcbcfc, 0xa0f0f000, 0xf8f80000, 0x3f3f2b00},
    { 0x20200000, 0x00280000, 0x00202100, 0x00a00040, 0x00280004, 0x00202000, 0x00a00000, 0x21200000}
   , 0x0,56.000000,attributes+0,1,NULL,autohelperowl_attackpat32,3,1.000000},
  {owl_attackpat33,1,8, "A208e",-1,-2,1,0,2,2,0x2,647,
    { 0xf0f0a000, 0xbcbc0000, 0x2b3f3f00, 0x00f8f8fc, 0x00bcbcfc, 0xa0f0f000, 0xf8f80000, 0x3f3f2b00},
    { 0x00200000, 0x00200000, 0x00200100, 0x00200040, 0x00200004, 0x00200000, 0x00200000, 0x01200000}
   , 0x0,56.000000,attributes+0,1,NULL,autohelperowl_attackpat33,3,1.000000},
  {owl_attackpat34,3,8, "A209",-1,-1,1,2,2,3,0x2,721,
    { 0x3a7f7f00, 0x50fcf8f8, 0xf4f4b000, 0xbcfc1400, 0xf8fc5000, 0x7f7f3a00, 0x14fcbcbc, 0xb0f4f400},
    { 0x10200000, 0x00240000, 0x00201000, 0x00600000, 0x00240000, 0x00201000, 0x00600000, 0x10200000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_attackpat34,3,0.010000},
  {owl_attackpat35,5,8, "A210",-1,-1,1,3,2,4,0x2,721,
    { 0x3c7f7f00, 0x50fcfcf0, 0xf4f4f000, 0xfcfc1400, 0xfcfc5000, 0x7f7f3c00, 0x14fcfc3c, 0xf0f4f400},
    { 0x14200000, 0x00240400, 0x00205000, 0x40600000, 0x04240000, 0x00201400, 0x00604000, 0x50200000}
   , 0x80,85.000000,attributes+0,1,NULL,autohelperowl_attackpat35,3,0.010000},
  {owl_attackpat36,1,8, "A211",0,-1,3,2,3,3,0x2,723,
    { 0x0038bfbf, 0x80f0e0c0, 0xf8b00000, 0x2f3f0a00, 0xe0f08000, 0xbf380000, 0x0a3f2f0f, 0x00b0f8f8},
    { 0x00100200, 0x00100080, 0x00100000, 0x00100000, 0x00100000, 0x02100000, 0x00100008, 0x00100000}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat37,3,8, "A214",-1,-1,1,2,2,3,0x1,685,
    { 0x7cfcfc3c, 0xf4fcfc00, 0xfcfcf400, 0xffff7c00, 0xfcfcf400, 0xfcfc7c00, 0x7cffff00, 0xf4fcfcf0},
    { 0x20904000, 0x60180000, 0x04182000, 0x00902400, 0x00186000, 0x40902000, 0x24900000, 0x20180400}
   , 0x0,85.000000,attributes+0,1,NULL,autohelperowl_attackpat37,0,0.010000},
  {owl_attackpat38,4,8, "A215",-1,-1,2,2,3,3,0x2,647,
    { 0x40f8fcf4, 0xf4f0e000, 0xffbf0700, 0x2d3f7fff, 0xe0f0f4fc, 0xfcf84000, 0x7f3f2d00, 0x07bfff7f},
    { 0x00102420, 0x00904000, 0x60100000, 0x041a0000, 0x40900000, 0x24100000, 0x001a0400, 0x00106020}
   , 0x80,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat39,2,8, "A216",-1,-1,2,1,3,2,0x2,722,
    { 0x0cfcfcfc, 0xf0f0fc00, 0xfcfcc000, 0xff3f3f00, 0xfcf0f000, 0xfcfc0c00, 0x3f3fff00, 0xc0fcfcfc},
    { 0x04a40000, 0x20201400, 0x00684000, 0x50202000, 0x14202000, 0x00a40400, 0x20205000, 0x40680000}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat40,2,8, "A216b",-1,-1,2,1,3,2,0x2,685,
    { 0x0cfcfcfc, 0xf0f0fc00, 0xfcfcc000, 0xff3f3f00, 0xfcf0f000, 0xfcfc0c00, 0x3f3fff00, 0xc0fcfcfc},
    { 0x04a40000, 0x20201400, 0x00684000, 0x50202000, 0x14202000, 0x00a40400, 0x20205000, 0x40680000}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_attackpat40,3,1.000000},
  {owl_attackpat41,2,8, "A217",0,-1,2,2,2,3,0x2,685,
    { 0x003fffff, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3f0000, 0x0f3f3f3f, 0x00f0fcfc},
    { 0x001a0000, 0x00102020, 0x00900000, 0x20100000, 0x20100000, 0x001a0000, 0x00102020, 0x00900000}
   , 0x0,40.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat42,2,8, "A217b",0,-1,2,2,2,3,0x2,685,
    { 0x003fffff, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3f0000, 0x0f3f3f3f, 0x00f0fcfc},
    { 0x001a0000, 0x00102020, 0x00900000, 0x20100000, 0x20100000, 0x001a0000, 0x00102020, 0x00900000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_attackpat42,0,0.010000},
  {owl_attackpat43,2,8, "A217c",0,-1,2,2,2,3,0x2,685,
    { 0x00ffffff, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xffff0000, 0x3f3f3f3f, 0x00fcfcfc},
    { 0x001a0000, 0x00102020, 0x00900000, 0x20100000, 0x20100000, 0x001a0000, 0x00102020, 0x00900000}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_attackpat43,0,3.000000},
  {owl_attackpat44,2,8, "A218",-1,-1,2,2,3,3,0x2,685,
    { 0xffffffff, 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xffffff00, 0xffffffff, 0xfcfcfcfc},
    { 0x051a0000, 0x00102424, 0x00904000, 0x60100000, 0x24100000, 0x001a0500, 0x00106060, 0x40900000}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat45,2,8, "A219",-1,-1,2,2,3,3,0x2,722,
    { 0xfcfcfffc, 0xfcfcfcc0, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfffcfc00, 0xffffff0c, 0xfcfcfcfc},
    { 0x40902000, 0x24900000, 0x20180400, 0x00186000, 0x00902400, 0x20904000, 0x60180000, 0x04182000}
   , 0x10,70.000000,attributes+0,1,NULL,autohelperowl_attackpat45,0,0.277760},
  {owl_attackpat46,4,8, "A220",-2,-1,1,2,3,3,0x2,721,
    { 0x177fff00, 0xd0f4f4fc, 0xfcf45000, 0x7c7c1c00, 0xf4f4d000, 0xff7f1700, 0x1c7c7cfc, 0x50f4fc00},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat46,3,0.376000},
  {owl_attackpat47,4,8, "A221",-2,-1,1,3,3,4,0x2,758,
    { 0x177fff00, 0xd0f4f4fc, 0xfcf45000, 0x7c7c1c00, 0xf4f4d000, 0xff7f1700, 0x1c7c7cfc, 0x50f4fc00},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_attackpat47,3,0.010000},
  {owl_attackpat48,3,8, "A222",-2,-2,1,3,3,5,0x2,721,
    { 0xeaffff00, 0xfefbfaf8, 0xffffacb8, 0xbcbcfc3c, 0xfafbfef0, 0xffffeab8, 0xfcbcbcbc, 0xacffff00},
    { 0x40608000, 0x94210000, 0x08260410, 0x00205820, 0x00219420, 0x80604010, 0x58200000, 0x04260800}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat49,1,8, "A223",0,0,2,2,2,2,0x2,759,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00120000, 0x00100020, 0x00100000, 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat49,0,0.610000},
  {owl_attackpat50,2,8, "A224",-1,-1,2,2,3,3,0x2,722,
    { 0x00fcffff, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0f, 0x00fcfcfc},
    { 0x0050a000, 0x90900000, 0x28140000, 0x00181800, 0x00909000, 0xa0500000, 0x18180000, 0x00142800}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat50,0,1.000000},
  {owl_attackpat51,3,8, "A225",0,-1,2,2,2,3,0x2,685,
    { 0x003cfffd, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0d, 0x00f0fcfc},
    { 0x00180200, 0x00102080, 0x00900000, 0x20100000, 0x20100000, 0x02180000, 0x00102008, 0x00900000}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat52,3,8, "A226",0,-1,2,2,2,3,0x2,685,
    { 0x00fcfffd, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0d, 0x00fcfcfc},
    { 0x00180200, 0x00102080, 0x00900000, 0x20100000, 0x20100000, 0x02180000, 0x00102008, 0x00900000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat52,0,2.800000},
  {owl_attackpat53,6,8, "A227",-1,-2,1,2,2,4,0x2,683,
    { 0x7cfcfc0c, 0xf5ffff00, 0xfcfcf4f4, 0xfffc7c00, 0xfffff500, 0xfcfc7c7c, 0x7cfcff00, 0xf4fcfcc0},
    { 0x0058a008, 0x90902000, 0x28940000, 0x22181800, 0x20909000, 0xa0580000, 0x18182200, 0x00942880}
   , 0x80,35.000000,attributes+0,1,NULL,autohelperowl_attackpat53,0,0.010000},
  {owl_attackpat54,4,8, "A227b",0,-1,2,2,2,3,0x2,648,
    { 0x00f0fcf4, 0xf0f0c000, 0xff3d0000, 0x0d3f3f1f, 0xc0f0f0d0, 0xfcf00000, 0x3f3f0d00, 0x003dff7f},
    { 0x00100820, 0x00108000, 0x80100000, 0x08120000, 0x80100000, 0x08100000, 0x00120800, 0x00108020}
   , 0x80,65.000000,attributes+0,1,NULL,autohelperowl_attackpat54,0,0.610000},
  {owl_attackpat55,1,8, "A228",0,-2,1,0,1,2,0x2,685,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat55,0,1.000000},
  {owl_attackpat56,5,8, "A229",-1,-3,1,1,2,4,0x2,721,
    { 0x3dffff00, 0xf0fcfcf4, 0xfcfcf000, 0xfcfc3c00, 0xfcfcf000, 0xffff3d00, 0x3cfcfc7c, 0xf0fcfc00},
    { 0x10902000, 0x20940000, 0x20181000, 0x00582000, 0x00942000, 0x20901000, 0x20580000, 0x10182000}
   , 0x80,80.000000,attributes+0,1,NULL,autohelperowl_attackpat56,0,0.019600},
  {owl_attackpat57,4,8, "A229b",-1,-3,1,0,2,3,0x2,685,
    { 0x003c7c7c, 0x40f0f000, 0xf4f00000, 0x3f3f0500, 0xf0f04000, 0x7c3c0000, 0x053f3f00, 0x00f0f4f4},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x80,79.000000,attributes+0,1,NULL,autohelperowl_attackpat57,0,0.016000},
  {owl_attackpat58,3,8, "A229c",-1,-2,1,0,2,2,0x2,685,
    { 0x003c7c7c, 0x40f0f000, 0xf4f00000, 0x3f3f0500, 0xf0f04000, 0x7c3c0000, 0x053f3f00, 0x00f0f4f4},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x0,79.000000,attributes+0,1,NULL,autohelperowl_attackpat58,0,0.016000},
  {owl_attackpat59,2,8, "A229d",-1,-1,1,0,2,1,0x2,685,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00188000, 0x80102000, 0x08900000, 0x20100800, 0x20108000, 0x80180000, 0x08102000, 0x00900800}
   , 0x80,79.000000,attributes+0,1,NULL,autohelperowl_attackpat59,0,0.010000},
  {owl_attackpat60,1,8, "A230",0,-1,2,2,2,3,0x2,722,
    { 0x0038ffff, 0xc0f0e0c0, 0xfcb00000, 0x2f3f0f00, 0xe0f0c000, 0xff380000, 0x0f3f2f0f, 0x00b0fcfc},
    { 0x00100200, 0x00100080, 0x00100000, 0x00100000, 0x00100000, 0x02100000, 0x00100008, 0x00100000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat60,0,0.016000},
  {owl_attackpat61,1,8, "A231",-1,0,1,3,2,3,0x0,686,
    { 0x003cfcfc, 0xc0f0f000, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xfc3c0000, 0x0f3f3f00, 0x00f0fcfc},
    { 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000, 0x00100000}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat62,1,8, "A232",0,-1,3,2,3,3,0x2,686,
    { 0x003cfcff, 0xc0f0f000, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xfc3c0000, 0x0f3f3f03, 0x00f0fcfc},
    { 0x00148000, 0x80101000, 0x08500000, 0x10100800, 0x10108000, 0x80140000, 0x08101000, 0x00500800}
   , 0x80,80.000000,attributes+0,1,NULL,autohelperowl_attackpat62,0,1.000000},
  {owl_attackpat63,1,8, "A232b",-1,0,2,2,3,2,0x2,722,
    { 0x0f3f3f3f, 0x00f0fcfc, 0xf0f0c000, 0xff3f0000, 0xfcf00000, 0x3f3f0f00, 0x003fffff, 0xc0f0f0f0},
    { 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat63,3,0.416000},
  {owl_attackpat64,1,8, "A233",0,-1,3,2,3,3,0x2,686,
    { 0x00fcfcfc, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0c, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0x00fcfffc},
    { 0x00140008, 0x00101000, 0x00500000, 0x12100000, 0x10100000, 0x00140000, 0x00101200, 0x00500080}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat65,3,8, "A234",-1,0,2,1,3,1,0x2,648,
    { 0x00f4fc00, 0xf0f0d000, 0xff7f0000, 0x1c3c3c3c, 0xd0f0f0f0, 0xfcf40000, 0x3c3c1c00, 0x007fff00},
    { 0x00201800, 0x00608000, 0x90200000, 0x08240000, 0x80600000, 0x18200000, 0x00240800, 0x00209000}
   , 0x80,20.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat66,4,8, "A235",-1,-1,1,3,2,4,0x2,758,
    { 0xf73f3f00, 0x0cfcf4fc, 0xf0f07c00, 0x7cfcc000, 0xf4fc0c00, 0x3f3ff700, 0xc0fc7cfc, 0x7cf0f000},
    { 0x00202900, 0x00a08040, 0xa0200000, 0x08280000, 0x80a00000, 0x29200000, 0x00280804, 0x0020a000}
   , 0x0,77.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat67,4,8, "A236",-1,0,2,2,3,2,0x1,758,
    { 0x1f3f3f1f, 0x00f4fcfc, 0xf0f0d000, 0xff7d0000, 0xfcf40000, 0x3f3f1f00, 0x007dffff, 0xd0f0f0d0},
    { 0x00202004, 0x00a00000, 0x20200000, 0x01280000, 0x00a00000, 0x20200000, 0x00280100, 0x00202040}
   , 0x0,66.000000,attributes+0,1,NULL,autohelperowl_attackpat67,3,1.000000},
  {owl_attackpat68,3,8, "A237",-1,-1,1,2,2,3,0x2,721,
    { 0x0f7ffe00, 0xd0f0fcbc, 0xfcf4c000, 0xfc3c1c00, 0xfcf0d000, 0xfe7f0f00, 0x1c3cfcf8, 0xc0f4fc00},
    { 0x04218000, 0x80200410, 0x08204000, 0x40200800, 0x04208000, 0x80210400, 0x08204010, 0x40200800}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat68,3,0.970000},
  {owl_attackpat69,3,8, "A238",0,-1,3,2,3,3,0x2,758,
    { 0x2b3f0f37, 0x0038f8fc, 0xc0f0a000, 0xbdb30000, 0xf8380000, 0x0f3f2b00, 0x00b3bdff, 0xa0f0c070},
    { 0x00100022, 0x00100000, 0x00100000, 0x00120000, 0x00100000, 0x00100000, 0x00120002, 0x00100020}
   , 0x0,55.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat70,1,8, "A239",0,-1,2,1,2,2,0x2,685,
    { 0x00f8fcfc, 0xf0f0e000, 0xfcbc0000, 0x2f3f3f00, 0xe0f0f000, 0xfcf80000, 0x3f3f2f00, 0x00bcfcfc},
    { 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200400, 0x00204000}
   , 0x0,85.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat71,2,8, "A240",-1,-2,1,1,2,3,0x2,647,
    { 0xf0fcfc00, 0xfcfcf000, 0xfefe3c00, 0x3cfcfc28, 0xf0fcfca0, 0xfcfcf000, 0xfcfc3c00, 0x3cfefe00},
    { 0x90240000, 0x08241000, 0x00601800, 0x10608000, 0x10240800, 0x00249000, 0x80601000, 0x18600000}
   , 0x80,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat72,1,8, "A241",0,-2,2,1,2,3,0x2,685,
    { 0x00fcf8fc, 0xf0f0b000, 0xbeff0000, 0x3b3f3f3b, 0xb0f0f0b0, 0xf8fc0000, 0x3f3f3b00, 0x00ffbeff},
    { 0x00240000, 0x00201000, 0x00610000, 0x10200010, 0x10200010, 0x00240000, 0x00201000, 0x00610000}
   , 0x0,37.000000,attributes+0,1,NULL,autohelperowl_attackpat72,3,10.000000},
  {owl_attackpat73,2,8, "A242",-1,-3,1,1,2,4,0x2,647,
    { 0xe0f0f400, 0xfcf84000, 0x7f3f2f00, 0x04bcfcfc, 0x40f8fcfc, 0xf4f0e000, 0xfcbc0400, 0x2f3f7f00},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_attackpat73,0,16.000000},
  {owl_attackpat74,3,8, "A301",0,-1,1,2,1,3,0x2,685,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00928000, 0xa0100020, 0x08180000, 0x00102800, 0x0010a000, 0x80920000, 0x28100020, 0x00180800}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_attackpat74,0,0.010000},
  {owl_attackpat75,5,8, "A302",-1,-2,1,2,2,4,0x2,648,
    { 0xbcfdfe00, 0xf8fcfc90, 0xfdfcf800, 0xfcfcbc04, 0xfcfcf840, 0xfefdbc00, 0xbcfcfc18, 0xf8fcfd00},
    { 0x18600800, 0x10248800, 0x80249000, 0x88601000, 0x88241000, 0x08601800, 0x10608800, 0x90248000}
   , 0x0,30.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat76,5,8, "A305",0,-1,2,3,2,4,0x2,686,
    { 0x00757fff, 0x50f0d0d0, 0xf4740000, 0x1f3f1700, 0xd0f05000, 0x7f750000, 0x173f1f1f, 0x0074f4fc},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x80,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat77,1,8, "A401",-1,0,1,3,2,3,0x0,721,
    { 0x0f3f3f00, 0x00f0fcfc, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0f00, 0x003cfcfc, 0xc0f0f000},
    { 0x00201000, 0x00600000, 0x10200000, 0x00240000, 0x00600000, 0x10200000, 0x00240000, 0x00201000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat77,3,3.600000},
  {owl_attackpat78,1,8, "A401a",-1,0,1,3,2,3,0x0,721,
    { 0x0f3f3f00, 0x00f0fcfc, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0f00, 0x003cfcfc, 0xc0f0f000},
    { 0x00201000, 0x00600000, 0x10200000, 0x00240000, 0x00600000, 0x10200000, 0x00240000, 0x00201000}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_attackpat78,3,3.000000},
  {owl_attackpat79,1,8, "A402",-1,0,2,3,3,3,0x0,722,
    { 0x0f3f3f00, 0x00f0fcfc, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0f00, 0x003cfcfc, 0xc0f0f000},
    { 0x00201000, 0x00600000, 0x10200000, 0x00240000, 0x00600000, 0x10200000, 0x00240000, 0x00201000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_attackpat79,3,0.040000},
  {owl_attackpat80,2,8, "A403",-1,0,1,2,2,2,0x0,723,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00508080, 0x90100000, 0x08140000, 0x00101a00, 0x00109000, 0x80500000, 0x1a100000, 0x00140808}
   , 0x0,55.000000,attributes+0,1,NULL,autohelperowl_attackpat80,0,4.800000},
  {owl_attackpat81,2,8, "A403b",-2,0,1,2,3,2,0x0,723,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00508080, 0x90100000, 0x08140000, 0x00101a00, 0x00109000, 0x80500000, 0x1a100000, 0x00140808}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat81,0,2.890000},
  {owl_attackpat82,5,4, "A404",-1,0,1,2,2,2,0x0,648,
    { 0x00f4fcf4, 0xf0f0d000, 0xfc7c0000, 0x1d3f3f00, 0xd0f0f000, 0xfcf40000, 0x3f3f1d00, 0x007cfc7c},
    { 0x00200820, 0x00208000, 0x80200000, 0x08220000, 0x80200000, 0x08200000, 0x00220800, 0x00208020}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat83,4,8, "A406",-2,-2,1,0,3,2,0x0,685,
    { 0x00f0fcfc, 0xf0f0c000, 0xfd3d0000, 0x0f3f3f15, 0xc0f0f050, 0xfcf00000, 0x3f3f0f00, 0x003dfdfd},
    { 0x00100804, 0x00108000, 0x80100000, 0x09100000, 0x80100000, 0x08100000, 0x00100900, 0x00108040}
   , 0x0,85.000000,attributes+0,1,NULL,autohelperowl_attackpat83,0,0.016000},
  {owl_attackpat84,4,8, "A406b",-2,-3,1,1,3,4,0x0,685,
    { 0xa0f0fcfc, 0xf8f8c000, 0xfd3d2800, 0x0fbfbf15, 0xc0f8f850, 0xfcf0a000, 0xbfbf0f00, 0x283dfdfd},
    { 0x00100800, 0x00108000, 0x80100000, 0x08100000, 0x80100000, 0x08100000, 0x00100800, 0x00108000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat84,0,0.151360},
  {owl_attackpat85,3,8, "A406c",-2,-2,1,0,3,2,0x0,723,
    { 0x00fdfdfc, 0xf0f0f050, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfdfd0000, 0x3f3f3f14, 0x00fcfcfc},
    { 0x00508000, 0x90100000, 0x08140000, 0x00101800, 0x00109000, 0x80500000, 0x18100000, 0x00140800}
   , 0x0,81.000000,attributes+0,1,NULL,autohelperowl_attackpat85,0,0.970000},
  {owl_attackpat86,6,8, "A406d",-2,-3,2,1,4,4,0x0,647,
    { 0xf8f8f0d0, 0xfdfd2800, 0x3fbfbf15, 0xa0fdfffc, 0x28fdfdfd, 0xf0f8f850, 0xfffda000, 0xbfbf3f1c},
    { 0x00102080, 0x00900000, 0x20100000, 0x00180200, 0x00900000, 0x20100000, 0x02180000, 0x00102008}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat86,0,0.010000},
  {owl_attackpat87,2,8, "A407",-1,-2,2,1,3,3,0x0,721,
    { 0xfcfcfc00, 0xffffff00, 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xfcfcfcfc, 0xfcfcfc00, 0xfcfcfc00},
    { 0x00208400, 0x80204000, 0x48200000, 0x04200800, 0x40208000, 0x84200000, 0x08200400, 0x00204800}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat87,3,0.019600},
  {owl_attackpat88,2,8, "A407b",-1,-2,2,1,3,3,0x0,648,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xfeffff00, 0xfffffff8, 0xfcfcfcbc, 0xfcfcfc00, 0xffffff00, 0xfffffefc},
    { 0x48200000, 0x04200800, 0x00218500, 0x80204050, 0x08200414, 0x00204800, 0x40208000, 0x85210000}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat89,1,8, "A408",-2,-3,3,0,5,3,0x0,686,
    { 0x00fefffe, 0xf0f0f0e0, 0xfcff0000, 0x3f3f3f30, 0xf0f0f030, 0xfffe0000, 0x3f3f3f2e, 0x00fffcfc},
    { 0x00200100, 0x00200040, 0x00200000, 0x00200000, 0x00200000, 0x01200000, 0x00200004, 0x00200000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_attackpat89,3,0.016000},
  {owl_attackpat90,5,8, "A409",-2,-2,1,2,3,4,0x0,647,
    { 0xfcfcfcf8, 0xfefffc00, 0xfdfdfc38, 0xfeffff15, 0xfcfffe50, 0xfcfcfcb0, 0xfffffe00, 0xfcfdfdbd},
    { 0x48200410, 0x04214800, 0x40208410, 0x84214000, 0x48210400, 0x04204810, 0x40218400, 0x84204010}
   , 0x80,80.000000,attributes+0,1,NULL,autohelperowl_attackpat90,3,0.019600},
  {owl_attackpat91,5,4, "A410",-2,-1,1,1,3,2,0x0,683,
    { 0xfcfc3000, 0x3dfd3d00, 0x30fcfc54, 0xf0fcf000, 0x3dfd3d00, 0x30fcfc54, 0xf0fcf000, 0xfcfc3000},
    { 0x00642000, 0x10a01000, 0x20640000, 0x10281000, 0x10a01000, 0x20640000, 0x10281000, 0x00642000}
   , 0x200,90.000000,attributes+0,1,NULL,autohelperowl_attackpat91,3,0.010000},
  {owl_attackpat92,1,8, "A411",-3,-4,1,3,4,7,0x0,722,
    { 0x0a3fbfaf, 0x80f0fafa, 0xf8f08080, 0xbf3e0a00, 0xfaf08000, 0xbf3f0a0a, 0x0a3ebfbf, 0x80f0f8e8},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,79.000000,attributes+0,1,NULL,autohelperowl_attackpat92,3,0.023834},
  {owl_attackpat93,1,8, "A411a",-3,-4,2,2,5,6,0x0,722,
    { 0x0a3fbfaf, 0x80f0fafa, 0xfaf08080, 0xbf3e0a0a, 0xfaf08080, 0xbf3f0a0a, 0x0a3ebfbf, 0x80f0faea},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,79.000000,attributes+0,1,NULL,autohelperowl_attackpat93,3,0.019600},
  {owl_attackpat94,1,8, "A413a",-3,-2,0,3,3,5,0x0,646,
    { 0xf0f0f0b0, 0xffff0000, 0x3f3f3f3f, 0x00fffefe, 0x00ffffff, 0xf0f0f0f0, 0xfeff0000, 0x3f3f3f3a},
    { 0x00200010, 0x00200000, 0x00200000, 0x00210000, 0x00200000, 0x00200000, 0x00210000, 0x00200010}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_attackpat94,3,0.365200},
  {owl_attackpat95,4,8, "A414",-4,-3,0,3,4,6,0x0,686,
    { 0x00fcfefe, 0xf0f0f080, 0xfefc0000, 0x3f3f3f0a, 0xf0f0f080, 0xfefc0000, 0x3f3f3f0a, 0x00fcfefe},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,82.000000,attributes+0,1,NULL,autohelperowl_attackpat95,3,0.019600},
  {owl_attackpat96,1,8, "A414a",-3,-3,0,3,3,6,0x0,722,
    { 0x00feffff, 0xf0f0f0e0, 0xfffe0000, 0x3f3f3f2f, 0xf0f0f0e0, 0xfffe0000, 0x3f3f3f2f, 0x00feffff},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_attackpat96,3,0.023056},
  {owl_attackpat97,2,8, "A415",-1,-2,1,0,2,2,0x0,685,
    { 0x00fcfcbc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3e00, 0xf0f0f000, 0xfcfc0000, 0x3e3f3f00, 0x00fcfcf8},
    { 0x00240008, 0x00201000, 0x00600000, 0x12200000, 0x10200000, 0x00240000, 0x00201200, 0x00600080}
   , 0x80,80.000000,attributes+0,1,NULL,autohelperowl_attackpat97,3,1.810000},
  {owl_attackpat98,3,8, "A416",-1,-2,1,2,2,4,0x0,683,
    { 0xfcfc3c34, 0x3cfffc00, 0xf0fcfc30, 0xfdfff000, 0xfcff3c00, 0x3cfcfc30, 0xf0fffd00, 0xfcfcf070},
    { 0x00600020, 0x10200000, 0x00240000, 0x00221000, 0x00201000, 0x00600000, 0x10220000, 0x00240020}
   , 0x0,65.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat99,5,8, "A417",0,-1,3,2,3,3,0x0,722,
    { 0x003fffbf, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0e00, 0xf0f0c000, 0xff3f0000, 0x0e3f3f3f, 0x00f0fcf8},
    { 0x00214000, 0x40200010, 0x04200000, 0x00200400, 0x00204000, 0x40210000, 0x04200010, 0x00200400}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat99,3,0.019600},
  {owl_attackpat100,3,8, "A418",-1,-2,1,1,2,3,0x0,647,
    { 0xfcfcf400, 0xfcfc7c00, 0x7fffff00, 0xf4fcfcfc, 0x7cfcfcfc, 0xf4fcfc00, 0xfcfcf400, 0xffff7f00},
    { 0x04182000, 0x00902400, 0x21904000, 0x60180004, 0x24900040, 0x20180400, 0x00186000, 0x40902100}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat100,0,0.010000},
  {owl_attackpat101,2,8, "A419",0,0,1,2,1,2,0x0,722,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00200018, 0x00200000, 0x00200000, 0x02210000, 0x00200000, 0x00200000, 0x00210200, 0x00200090}
   , 0x80,68.000000,attributes+0,1,NULL,autohelperowl_attackpat101,3,1.810000},
  {owl_attackpat102,2,8, "A419b",0,0,1,2,1,2,0x0,722,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00200018, 0x00200000, 0x00200000, 0x02210000, 0x00200000, 0x00200000, 0x00210200, 0x00200090}
   , 0x80,68.000000,attributes+0,1,NULL,autohelperowl_attackpat102,3,1.810000},
  {owl_attackpat103,6,8, "A420",-1,-1,2,2,3,3,0x0,722,
    { 0x3effff55, 0xf0fcfcf8, 0xfcfcf000, 0xfdfd3d00, 0xfcfcf000, 0xffff3e00, 0x3dfdfdbd, 0xf0fcfc54},
    { 0x20611000, 0x10680010, 0x10242000, 0x00a41000, 0x00681000, 0x10612000, 0x10a40010, 0x20241000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat103,3,1.810000},
  {owl_attackpat104,3,8, "A421",-1,-2,2,0,3,2,0x0,722,
    { 0x003c7f7f, 0x40f0f0c0, 0xf4f00000, 0x3f3f0500, 0xf0f04000, 0x7f3c0000, 0x053f3f0f, 0x00f0f4f4},
    { 0x00100201, 0x00100080, 0x00100000, 0x00100000, 0x00100000, 0x02100000, 0x00100009, 0x00100000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat104,0,0.016000},
  {owl_attackpat105,3,8, "A422",0,-1,2,2,2,3,0x0,685,
    { 0x0038ff18, 0xc0f0e0c0, 0xfcb00000, 0x2e3d0c00, 0xe0f0c000, 0xff380000, 0x0c3d2e0c, 0x00b0fc90},
    { 0x00108200, 0x80100080, 0x08100000, 0x00100800, 0x00108000, 0x82100000, 0x08100008, 0x00100800}
   , 0x0,85.000000,attributes+0,1,NULL,autohelperowl_attackpat105,0,6.010000},
  {owl_attackpat106,3,8, "A422a",0,-1,2,2,2,3,0x0,685,
    { 0x0038ff18, 0xc0f0e0c0, 0xfcb00000, 0x2e3d0c00, 0xe0f0c000, 0xff380000, 0x0c3d2e0c, 0x00b0fc90},
    { 0x00108200, 0x80100080, 0x08100000, 0x00100800, 0x00108000, 0x82100000, 0x08100008, 0x00100800}
   , 0x0,85.000000,attributes+0,1,NULL,autohelperowl_attackpat106,0,6.010000},
  {owl_attackpat107,3,8, "A423",-1,0,1,3,2,3,0x0,686,
    { 0x003c3cfc, 0x00f0f000, 0xf0f00000, 0x3f3f0300, 0xf0f00000, 0x3c3c0000, 0x033f3f00, 0x00f0f0fc},
    { 0x00280040, 0x00202000, 0x00a00000, 0x20200100, 0x20200000, 0x00280000, 0x01202000, 0x00a00004}
   , 0x80,61.000000,attributes+0,1,NULL,autohelperowl_attackpat107,3,0.010000},
  {owl_attackpat108,3,8, "A423a",-1,0,1,3,2,3,0x0,686,
    { 0x003c3cfc, 0x00f0f000, 0xf0f00000, 0x3f3f0300, 0xf0f00000, 0x3c3c0000, 0x033f3f00, 0x00f0f0fc},
    { 0x00280040, 0x00202000, 0x00a00000, 0x20200100, 0x20200000, 0x00280000, 0x01202000, 0x00a00004}
   , 0x0,61.000000,attributes+0,1,NULL,autohelperowl_attackpat108,3,0.010000},
  {owl_attackpat109,4,8, "A424",-1,-1,1,2,2,3,0x0,648,
    { 0xfcfcfc00, 0xfcfcfc00, 0xfffefc00, 0xfcfcfc2c, 0xfcfcfce0, 0xfcfcfc00, 0xfcfcfc00, 0xfcfeff00},
    { 0x68102800, 0x04988800, 0xa010a400, 0x88984000, 0x88980400, 0x28106800, 0x40988800, 0xa410a000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat109,0,0.010000},
  {owl_attackpat110,2,4, "A425",0,0,2,2,2,2,0x0,722,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00120021, 0x00100020, 0x00100000, 0x00120000, 0x00100000, 0x00120000, 0x00120021, 0x00100020}
   , 0x20,90.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat111,2,8, "A501",0,-2,2,1,2,3,0x2,722,
    { 0x003dffff, 0xc0f0f0d0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3d0000, 0x0f3f3f1f, 0x00f0fcfc},
    { 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400}
   , 0x80,75.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat112,4,8, "A502",-1,0,1,2,2,2,0x2,685,
    { 0x003cfcbc, 0xc0f0f000, 0xfcf00000, 0x3f3f0e00, 0xf0f0c000, 0xfc3c0000, 0x0e3f3f00, 0x00f0fcf8},
    { 0x00188028, 0x80102000, 0x08900000, 0x22120800, 0x20108000, 0x80180000, 0x08122200, 0x009008a0}
   , 0xa0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat112,0,1.000000},
  {owl_attackpat113,5,8, "A503",-1,0,1,2,2,2,0x2,721,
    { 0x0f3f3f00, 0x00f0fcfc, 0xf0f0c000, 0xfc3c0000, 0xfcf00000, 0x3f3f0f00, 0x003cfcfc, 0xc0f0f000},
    { 0x0a212200, 0x00a00898, 0x20208000, 0x80280000, 0x08a00000, 0x22210a00, 0x00288098, 0x80202000}
   , 0x90,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat114,6,8, "A503b",-1,-2,1,1,2,3,0x2,722,
    { 0xfcfcfc00, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfcf0, 0xfcfcfc00, 0xfcfcfc00, 0xfcffff00},
    { 0xa8102000, 0x08980800, 0x2212a800, 0x80988028, 0x089808a0, 0x2010a800, 0x80988000, 0xa8122200}
   , 0x10,32.000000,attributes+0,1,NULL,autohelperowl_attackpat114,0,0.050000},
  {owl_attackpat115,2,8, "A504",0,0,1,1,1,1,0x2,721,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00201800, 0x00608000, 0x90200000, 0x08240000, 0x80600000, 0x18200000, 0x00240800, 0x00209000}
   , 0x80,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat116,2,8, "A505",0,-1,2,2,2,3,0x2,722,
    { 0x003fffff, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3f0000, 0x0f3f3f3f, 0x00f0fcfc},
    { 0x001a0000, 0x00102020, 0x00900000, 0x20100000, 0x20100000, 0x001a0000, 0x00102020, 0x00900000}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat117,2,8, "A506",-1,0,1,2,2,2,0x2,685,
    { 0x003cfcfc, 0xc0f0f000, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xfc3c0000, 0x0f3f3f00, 0x00f0fcfc},
    { 0x00108080, 0x80100000, 0x08100000, 0x00100a00, 0x00108000, 0x80100000, 0x0a100000, 0x00100808}
   , 0x0,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat118,2,8, "A507",-1,0,1,2,2,2,0x2,685,
    { 0x00f0fcf0, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0x003cfc3c},
    { 0x00200420, 0x00204000, 0x40200000, 0x04220000, 0x40200000, 0x04200000, 0x00220400, 0x00204020}
   , 0x80,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat119,4,8, "A508",0,-2,2,2,2,4,0x2,685,
    { 0x007effff, 0xd0f0f0e0, 0xfff40000, 0x3f3f1f0d, 0xf0f0d0c0, 0xff7e0000, 0x1f3f3f2f, 0x00f4fffd},
    { 0x00200100, 0x00200040, 0x02200000, 0x00200008, 0x00200080, 0x01200000, 0x00200004, 0x00200200}
   , 0x80,65.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat120,5,8, "A509",-1,0,1,2,2,2,0x2,685,
    { 0x007cfc7c, 0xd0f0f000, 0xfcf40000, 0x3f3f1d00, 0xf0f0d000, 0xfc7c0000, 0x1d3f3f00, 0x00f4fcf4},
    { 0x00280024, 0x00202000, 0x00a00000, 0x21220000, 0x20200000, 0x00280000, 0x00222100, 0x00a00060}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat120,3,0.400000},
  {owl_attackpat121,4,8, "A510",-1,-2,1,2,2,4,0x2,683,
    { 0xfcfcfcfc, 0xffffff00, 0xfcfcfcfc, 0xffffff00, 0xffffff00, 0xfcfcfcfc, 0xffffff00, 0xfcfcfcfc},
    { 0x0090a410, 0xa2904000, 0x68180008, 0x04192800, 0x4090a200, 0xa4900080, 0x28190400, 0x00186810}
   , 0x80,55.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat122,4,8, "A511",0,-1,2,2,2,3,0x2,685,
    { 0x003dfdfd, 0xc0f0f050, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xfd3d0000, 0x0f3f3f15, 0x00f0fcfc},
    { 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_attackpat122,3,0.010000},
  {owl_attackpat123,3,8, "A512",-1,-2,1,1,2,3,0x2,685,
    { 0x1c38fcfc, 0xc0f4ec00, 0xfcb0d000, 0xef7f0f00, 0xecf4c000, 0xfc381c00, 0x0f7fef00, 0xd0b0fcfc},
    { 0x08204000, 0x40200800, 0x04208000, 0x80200400, 0x08204000, 0x40200800, 0x04208000, 0x80200400}
   , 0x0,70.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat124,1,8, "A513",-2,0,1,2,3,2,0x4,722,
    { 0x003f3f00, 0x00f0f0f0, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3f3f0000, 0x003c3c3c, 0x00f0f000},
    { 0x00201000, 0x00600000, 0x10200000, 0x00240000, 0x00600000, 0x10200000, 0x00240000, 0x00201000}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat124,3,0.610000},
  {owl_attackpat125,4,8, "A514",-1,-1,2,1,3,2,0x4,721,
    { 0xf7ffbf00, 0xbcfcf4fc, 0xf8fc7c00, 0x7cfcf800, 0xf4fcbc00, 0xbffff700, 0xf8fc7cfc, 0x7cfcf800},
    { 0x80602400, 0x18a04000, 0x60240800, 0x04289000, 0x40a01800, 0x24608000, 0x90280400, 0x08246000}
   , 0x10,45.000000,attributes+0,1,NULL,autohelperowl_attackpat125,3,1.600000},
  {owl_attackpat126,4,8, "A515",0,-2,1,2,1,4,0x2,647,
    { 0x00ffff00, 0xf0f0f0f0, 0xffff0000, 0x3c3c3c3c, 0xf0f0f0f0, 0xffff0000, 0x3c3c3c3c, 0x00ffff00},
    { 0x002a1600, 0x006060a0, 0x50a10000, 0x24240010, 0x60600010, 0x162a0000, 0x00242428, 0x00a15000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_attackpat126,3,1.000000},
  {owl_attackpat127,3,8, "A516",-1,-2,1,2,2,4,0x2,721,
    { 0xffffff00, 0xfcfcfcfc, 0xfffffe00, 0xfcfcfcbc, 0xfcfcfcf8, 0xffffff00, 0xfcfcfcfc, 0xfeffff00},
    { 0x68120000, 0x04180820, 0x0010a400, 0x80904000, 0x08180400, 0x00126800, 0x40908020, 0xa4100000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_attackpat127,0,0.016000},
  {owl_attackpat128,6,8, "A517",-1,-2,1,3,2,5,0x2,647,
    { 0xfdffff00, 0xfcfcfcf4, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfcf0, 0xfffffd00, 0xfcfcfc7c, 0xfcffff00},
    { 0x68120000, 0x04180820, 0x0010a400, 0x80904000, 0x08180400, 0x00126800, 0x40908020, 0xa4100000}
   , 0x0,5.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat129,5,8, "A518",-1,-3,1,1,2,4,0x2,610,
    { 0x50fcfc00, 0xf4f4f000, 0xffff1700, 0x3c7c7cfc, 0xf0f4f4fc, 0xfcfc5000, 0x7c7c3c00, 0x17ffff00},
    { 0x00280800, 0x0020a000, 0x80a00000, 0x28200000, 0xa0200000, 0x08280000, 0x00202800, 0x00a08000}
   , 0x0,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat130,4,8, "A601",-1,0,1,3,2,3,0x1,723,
    { 0x003cfc7c, 0xc0f0f000, 0xfcf00000, 0x3f3f0d00, 0xf0f0c000, 0xfc3c0000, 0x0d3f3f00, 0x00f0fcf4},
    { 0x00248000, 0x80201000, 0x08600000, 0x10200800, 0x10208000, 0x80240000, 0x08201000, 0x00600800}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat131,1,8, "A602",-1,0,1,1,2,1,0x5,685,
    { 0x00fcbc00, 0xb0f0f000, 0xf8fc0000, 0x3c3c3800, 0xf0f0b000, 0xbcfc0000, 0x383c3c00, 0x00fcf800},
    { 0x00600000, 0x10200000, 0x00240000, 0x00201000, 0x00201000, 0x00600000, 0x10200000, 0x00240000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_attackpat131,3,1.000000},
  {owl_attackpat132,4,8, "A603",0,-2,1,2,1,4,0x2,685,
    { 0x00ffff00, 0xf0f0f0f0, 0xfdfd0000, 0x3c3c3c14, 0xf0f0f050, 0xffff0000, 0x3c3c3c3c, 0x00fdfd00},
    { 0x00a10000, 0x20200010, 0x00280000, 0x00202000, 0x00202000, 0x00a10000, 0x20200010, 0x00280000}
   , 0x10,35.000000,attributes+0,1,NULL,autohelperowl_attackpat132,3,1.011760},
  {owl_attackpat133,3,8, "A603b",0,-1,1,2,1,3,0x2,685,
    { 0x007dff00, 0xd0f0f0d0, 0xfcf40000, 0x3c3c1c00, 0xf0f0d000, 0xff7d0000, 0x1c3c3c1c, 0x00f4fc00},
    { 0x00200100, 0x00200040, 0x00200000, 0x00200000, 0x00200000, 0x01200000, 0x00200004, 0x00200000}
   , 0x10,35.000000,attributes+0,1,NULL,autohelperowl_attackpat133,3,0.610000},
  {owl_attackpat134,2,8, "A604",0,-1,1,3,1,4,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0x00ffff00},
    { 0x00280000, 0x00202000, 0x00a00000, 0x20200000, 0x20200000, 0x00280000, 0x00202000, 0x00a00000}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat135,1,8, "A605",0,-1,1,2,1,3,0xa,685,
    { 0x00fcfc00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0x00ffff00},
    { 0x00200000, 0x00200000, 0x00210000, 0x00200010, 0x00200010, 0x00200000, 0x00200000, 0x00210000}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat136,4,8, "A606",0,-2,1,2,1,4,0x2,685,
    { 0x007fff00, 0xd0f0f0f0, 0xfdf70000, 0x3c3c1c34, 0xf0f0d070, 0xff7f0000, 0x1c3c3c3c, 0x00f7fd00},
    { 0x00214000, 0x40200010, 0x04220000, 0x00200420, 0x00204020, 0x40210000, 0x04200010, 0x00220400}
   , 0x10,50.000000,attributes+0,1,NULL,autohelperowl_attackpat136,3,0.610000},
  {owl_attackpat137,2,8, "A607a",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00a40000, 0x20201000, 0x00680000, 0x10202000, 0x10202000, 0x00a40000, 0x20201000, 0x00680000}
   , 0x10,36.000000,attributes+0,1,NULL,autohelperowl_attackpat137,3,0.613600},
  {owl_attackpat138,1,8, "A607b",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00600000, 0x10200000, 0x00240000, 0x00201000, 0x00201000, 0x00600000, 0x10200000, 0x00240000}
   , 0x10,36.000000,attributes+0,1,NULL,autohelperowl_attackpat138,3,0.613600},
  {owl_attackpat139,2,8, "A607c",0,-1,1,1,1,2,0x2,685,
    { 0x007cfc00, 0xd0f0f000, 0xfcf40000, 0x3c3c1c00, 0xf0f0d000, 0xfc7c0000, 0x1c3c3c00, 0x00f4fc00},
    { 0x00240400, 0x00205000, 0x40600000, 0x14200000, 0x50200000, 0x04240000, 0x00201400, 0x00604000}
   , 0x0,55.000000,attributes+0,1,NULL,autohelperowl_attackpat139,3,0.610000},
  {owl_attackpat140,2,8, "A607d",0,-1,1,2,1,3,0x2,722,
    { 0x003fbf00, 0x80f0f0f0, 0xf8f00000, 0x3c3c0800, 0xf0f08000, 0xbf3f0000, 0x083c3c3c, 0x00f0f800},
    { 0x00290000, 0x00202010, 0x00a00000, 0x20200000, 0x20200000, 0x00290000, 0x00202010, 0x00a00000}
   , 0x10,36.000000,attributes+0,1,NULL,autohelperowl_attackpat140,3,0.101283},
  {owl_attackpat141,2,8, "A608",0,-1,1,1,1,2,0x2,685,
    { 0x00f4fc00, 0xf0f0d000, 0xfc7c0000, 0x1c3c3c00, 0xd0f0f000, 0xfcf40000, 0x3c3c1c00, 0x007cfc00},
    { 0x00600000, 0x10200000, 0x00240000, 0x00201000, 0x00201000, 0x00600000, 0x10200000, 0x00240000}
   , 0x10,75.000000,attributes+0,1,NULL,autohelperowl_attackpat141,3,0.378160},
  {owl_attackpat142,2,8, "A609",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00980000, 0x20102000, 0x00980000, 0x20102000, 0x20102000, 0x00980000, 0x20102000, 0x00980000}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat143,2,8, "A610",0,-2,1,1,1,3,0x2,722,
    { 0x00ff3f00, 0x30f0f0f0, 0xf0fc0000, 0x3c3c3000, 0xf0f03000, 0x3fff0000, 0x303c3c3c, 0x00fcf000},
    { 0x00620000, 0x10200020, 0x00240000, 0x00201000, 0x00201000, 0x00620000, 0x10200020, 0x00240000}
   , 0x10,55.000000,attributes+0,1,NULL,autohelperowl_attackpat143,3,1.000000},
  {owl_attackpat144,4,8, "A611",-1,-1,1,2,2,3,0x2,722,
    { 0x34ffff00, 0xf0fcf4f0, 0xfcfc7000, 0x7cfc3c00, 0xf4fcf000, 0xffff3400, 0x3cfc7c3c, 0x70fcfc00},
    { 0x10a24000, 0x60240020, 0x04281000, 0x00602400, 0x00246000, 0x40a21000, 0x24600020, 0x10280400}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat144,3,0.010000},
  {owl_attackpat145,4,8, "A612",-1,-1,1,2,2,3,0x2,648,
    { 0xbcffff00, 0xf8fcfcf0, 0xfcfcf800, 0xfcfcbc00, 0xfcfcf800, 0xffffbc00, 0xbcfcfc3c, 0xf8fcfc00},
    { 0x18622100, 0x10a40860, 0x20249000, 0x80681000, 0x08a41000, 0x21621800, 0x10688024, 0x90242000}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_attackpat145,3,0.010000},
  {owl_attackpat146,3,8, "A613",-1,-2,1,1,2,3,0x2,721,
    { 0x3cfcfcfc, 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00, 0xf0fcfcfc},
    { 0x10a00080, 0x20240000, 0x00281000, 0x00602200, 0x00242000, 0x00a01000, 0x22600000, 0x10280008}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_attackpat146,3,1.000000},
  {owl_attackpat147,4,8, "A614",-1,-2,1,1,2,3,0x2,721,
    { 0x3cfcfcfc, 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00, 0xf0fcfcfc},
    { 0x10608088, 0x90240000, 0x08241000, 0x02601a00, 0x00249000, 0x80601000, 0x1a600200, 0x10240888}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_attackpat147,3,1.000000},
  {owl_attackpat148,3,4, "A615",0,-2,2,2,2,4,0x2,686,
    { 0x00fffcfc, 0xf0f0f030, 0xfcff0000, 0x3f3f3f30, 0xf0f0f030, 0xfcff0000, 0x3f3f3f30, 0x00fffcfc},
    { 0x00a90000, 0x20202010, 0x00a90000, 0x20202010, 0x20202010, 0x00a90000, 0x20202010, 0x00a90000}
   , 0x10,65.000000,attributes+0,1,NULL,autohelperowl_attackpat148,3,0.010000},
  {owl_attackpat149,4,8, "A616",-1,-2,2,1,3,3,0x4,722,
    { 0xf5ffbf00, 0xbcfcf4f4, 0xf8fc7c00, 0x7cfcf800, 0xf4fcbc00, 0xbffff500, 0xf8fc7c7c, 0x7cfcf800},
    { 0x80600000, 0x18200000, 0x00240800, 0x00209000, 0x00201800, 0x00608000, 0x90200000, 0x08240000}
   , 0x10,45.000000,attributes+0,1,NULL,autohelperowl_attackpat149,3,1.011760},
  {owl_attackpat150,5,8, "A617",-1,0,2,2,3,2,0x2,723,
    { 0x3c3f3f3f, 0x00fcfcf0, 0xf0f0f000, 0xffff0000, 0xfcfc0000, 0x3f3f3c00, 0x00ffff3f, 0xf0f0f0f0},
    { 0x18222120, 0x00a40860, 0x20209000, 0x806a0000, 0x08a40000, 0x21221800, 0x006a8024, 0x90202020}
   , 0x10,50.000000,attributes+0,1,NULL,autohelperowl_attackpat150,3,0.010000},
  {owl_attackpat151,5,8, "A618",-1,-1,1,1,2,2,0x2,720,
    { 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00},
    { 0x6090a800, 0xa4988000, 0xa8182400, 0x08986800, 0x8098a400, 0xa8906000, 0x68980800, 0x2418a800}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat151,0,3.000000},
  {owl_attackpat152,1,8, "A619",0,-1,1,0,1,1,0xa,721,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,75.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat153,2,8, "A620",0,-1,1,1,1,2,0x2,648,
    { 0x00fcf400, 0xf0f07000, 0x7cfc0000, 0x343c3c00, 0x70f0f000, 0xf4fc0000, 0x3c3c3400, 0x00fc7c00},
    { 0x00241000, 0x00601000, 0x10600000, 0x10240000, 0x10600000, 0x10240000, 0x00241000, 0x00601000}
   , 0x10,65.000000,attributes+0,1,NULL,autohelperowl_attackpat153,3,0.010000},
  {owl_attackpat154,2,8, "A621",0,-2,1,2,1,4,0x2,648,
    { 0x00bcff00, 0xe0f0f0c0, 0xfff80000, 0x3c3c2c0c, 0xf0f0e0c0, 0xffbc0000, 0x2c3c3c0c, 0x00f8ff00},
    { 0x00180200, 0x00102080, 0x00900000, 0x20100000, 0x20100000, 0x02180000, 0x00102008, 0x00900000}
   , 0x10,10.000000,attributes+0,1,NULL,autohelperowl_attackpat154,0,0.016000},
  {owl_attackpat155,3,8, "A622",0,-1,1,2,1,3,0x2,722,
    { 0x007ffe00, 0xd0f0f0b0, 0xfcf40000, 0x3c3c1c00, 0xf0f0d000, 0xfe7f0000, 0x1c3c3c38, 0x00f4fc00},
    { 0x00218000, 0x80200010, 0x08200000, 0x00200800, 0x00208000, 0x80210000, 0x08200010, 0x00200800}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_attackpat155,3,1.366000},
  {owl_attackpat156,2,8, "A623",0,-2,2,2,2,4,0xa,649,
    { 0x007fffff, 0xd0f0f0f0, 0xfff70000, 0x3f3f1f3f, 0xf0f0d0f0, 0xff7f0000, 0x1f3f3f3f, 0x00f7ffff},
    { 0x00210100, 0x00200050, 0x00200000, 0x00200000, 0x00200000, 0x01210000, 0x00200014, 0x00200000}
   , 0x0,65.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat157,6,8, "A626",0,-2,2,3,2,5,0x2,649,
    { 0x003fffff, 0xc0f0f0f0, 0xfff00000, 0x3f3f0f0f, 0xf0f0c0c0, 0xff3f0000, 0x0f3f3f3f, 0x00f0ffff},
    { 0x00298208, 0x80202090, 0x0aa00000, 0x22200808, 0x20208080, 0x82290000, 0x08202218, 0x00a00a80}
   , 0x10,75.000000,attributes+0,1,NULL,autohelperowl_attackpat157,3,0.010000},
  {owl_attackpat158,4,8, "A701",-1,-2,1,1,2,3,0x0,647,
    { 0xf8fcfc70, 0xfcfcf800, 0xfcfcbc00, 0xbcfffd00, 0xf8fcfc00, 0xfcfcf800, 0xfdffbc00, 0xbcfcfc34},
    { 0x10240820, 0x00249000, 0x80601000, 0x18620000, 0x90240000, 0x08241000, 0x00621800, 0x10608020}
   , 0x0,79.000000,attributes+0,1,NULL,autohelperowl_attackpat158,3,0.010000},
  {owl_attackpat159,4,8, "A702",-1,-2,2,1,3,3,0x0,647,
    { 0xf8fcfcf0, 0xfcfcf800, 0xfcfdbc00, 0xbcffff10, 0xf8fcfc10, 0xfcfcf800, 0xffffbc00, 0xbcfdfc3c},
    { 0x50240820, 0x04249000, 0x80601400, 0x18624000, 0x90240400, 0x08245000, 0x40621800, 0x14608020}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat159,3,0.010000},
  {owl_attackpat160,4,8, "A703",0,-1,2,2,2,3,0x0,721,
    { 0x0c3f3f0d, 0x00f0fcf0, 0xf0f0c000, 0xff3c0000, 0xfcf00000, 0x3f3f0c00, 0x003cff3d, 0xc0f0f0c0},
    { 0x04202008, 0x00a00400, 0x20204000, 0x42280000, 0x04a00000, 0x20200400, 0x00284200, 0x40202080}
   , 0x0,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat161,3,8, "A704",-1,-1,1,2,2,3,0x0,647,
    { 0xf0fcfc30, 0xfcfcf000, 0xfcfc3c00, 0x3cfffc00, 0xf0fcfc00, 0xfcfcf000, 0xfcff3c00, 0x3cfcfc30},
    { 0x10241820, 0x00649000, 0x90601000, 0x18660000, 0x90640000, 0x18241000, 0x00661800, 0x10609020}
   , 0x80,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat162,2,8, "A705b",-1,0,1,2,2,2,0x0,685,
    { 0x0030fc30, 0xc0f0c000, 0xfc300000, 0x0c3f0c00, 0xc0f0c000, 0xfc300000, 0x0c3f0c00, 0x0030fc30},
    { 0x00200020, 0x00200000, 0x00200000, 0x00220000, 0x00200000, 0x00200000, 0x00220000, 0x00200020}
   , 0x80,61.000000,attributes+0,1,NULL,autohelperowl_attackpat162,3,0.400000},
  {owl_attackpat163,3,8, "A706",-1,0,1,2,2,2,0x0,648,
    { 0x0030fc3c, 0xc0f0c000, 0xfc300000, 0x0f3f0c00, 0xc0f0c000, 0xfc300000, 0x0c3f0f00, 0x0030fcf0},
    { 0x00200820, 0x00208000, 0x80200000, 0x08220000, 0x80200000, 0x08200000, 0x00220800, 0x00208020}
   , 0x80,70.000000,attributes+0,1,NULL,autohelperowl_attackpat163,3,0.016000},
  {owl_attackpat164,3,8, "A707",-1,0,1,2,2,2,0x0,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00204820, 0x40208000, 0x84200000, 0x08220400, 0x80204000, 0x48200000, 0x04220800, 0x00208420}
   , 0x80,70.000000,attributes+0,1,NULL,autohelperowl_attackpat164,3,0.019600},
  {owl_attackpat165,4,8, "A708",0,-1,2,1,2,2,0x0,721,
    { 0x003c7c10, 0x40f0f000, 0xf4f00000, 0x3c3d0400, 0xf0f04000, 0x7c3c0000, 0x043d3c00, 0x00f0f410},
    { 0x00200800, 0x00208000, 0x80200000, 0x08200000, 0x80200000, 0x08200000, 0x00200800, 0x00208000}
   , 0x20,80.000000,attributes+0,1,NULL,autohelperowl_attackpat165,3,0.610000},
  {owl_attackpat166,4,8, "A709",-1,0,1,2,2,2,0x0,686,
    { 0x00347c3c, 0x40f0d000, 0xf4700000, 0x1f3f0400, 0xd0f04000, 0x7c340000, 0x043f1f00, 0x0070f4f0},
    { 0x00200800, 0x00208000, 0x80200000, 0x08200000, 0x80200000, 0x08200000, 0x00200800, 0x00208000}
   , 0x80,45.000000,attributes+0,1,NULL,autohelperowl_attackpat166,3,1.186000},
  {owl_attackpat167,4,8, "A710",0,-1,2,1,2,2,0x0,721,
    { 0x003c7c10, 0x40f0f000, 0xf4f00000, 0x3c3d0400, 0xf0f04000, 0x7c3c0000, 0x043d3c00, 0x00f0f410},
    { 0x00200800, 0x00208000, 0x80200000, 0x08200000, 0x80200000, 0x08200000, 0x00200800, 0x00208000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_attackpat167,3,0.016000},
  {owl_attackpat168,6,8, "A711",-1,0,1,3,2,3,0x0,648,
    { 0x00f4fcfc, 0xf0f0d000, 0xfc7c0000, 0x1f3f3f00, 0xd0f0f000, 0xfcf40000, 0x3f3f1f00, 0x007cfcfc},
    { 0x00600808, 0x10208000, 0x80240000, 0x0a201000, 0x80201000, 0x08600000, 0x10200a00, 0x00248080}
   , 0x80,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat169,4,8, "A712",0,-1,3,2,3,3,0x0,686,
    { 0x003cffff, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f00, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0f, 0x00f0fcfc},
    { 0x00280202, 0x00202080, 0x00a00000, 0x20200000, 0x20200000, 0x02280000, 0x0020200a, 0x00a00000}
   , 0x80,60.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat170,6,8, "A713",-1,0,2,2,3,2,0x0,759,
    { 0x00fdff3d, 0xf0f0f0d0, 0xfcfc0000, 0x3f3f3c00, 0xf0f0f000, 0xfffd0000, 0x3c3f3f1d, 0x00fcfcf0},
    { 0x00684028, 0x50202000, 0x04a40000, 0x22221400, 0x20205000, 0x40680000, 0x14222200, 0x00a404a0}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat170,3,1.600000},
  {owl_attackpat171,7,8, "A714",0,-1,3,2,3,3,0x0,758,
    { 0x0f3f3f0d, 0x00f0fcfc, 0xf0f0c000, 0xff3c0000, 0xfcf00000, 0x3f3f0f00, 0x003cfffd, 0xc0f0f0c0},
    { 0x06202008, 0x00a00408, 0x20204000, 0x42280000, 0x04a00000, 0x20200600, 0x00284280, 0x40202080}
   , 0x80,82.000000,attributes+0,1,NULL,autohelperowl_attackpat171,3,0.010000},
  {owl_attackpat172,6,8, "A715",0,-2,2,1,2,3,0x0,647,
    { 0x00fcf47c, 0xf0f07000, 0x7dfc0000, 0x373f3d04, 0x70f0f040, 0xf4fc0000, 0x3d3f3700, 0x00fc7df4},
    { 0x00280024, 0x00202000, 0x00a00000, 0x21220000, 0x20200000, 0x00280000, 0x00222100, 0x00a00060}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_attackpat172,3,0.610000},
  {owl_attackpat173,6,8, "A716",-1,0,1,2,2,2,0x0,648,
    { 0x00f4fc74, 0xf0f0d000, 0xfc7c0000, 0x1d3f3d00, 0xd0f0f000, 0xfcf40000, 0x3d3f1d00, 0x007cfc74},
    { 0x00600820, 0x10208000, 0x80240000, 0x08221000, 0x80201000, 0x08600000, 0x10220800, 0x00248020}
   , 0x80,50.000000,attributes+0,1,NULL,autohelperowl_attackpat173,3,1.000000},
  {owl_attackpat174,4,8, "A717",-1,-1,1,2,2,3,0x0,647,
    { 0x30fcf000, 0xf0fc3000, 0x3fff3000, 0x30fc3c3c, 0x30fcf0f0, 0xf0fc3000, 0x3cfc3000, 0x30ff3f00},
    { 0x00182000, 0x00902000, 0x22920000, 0x20180028, 0x209000a0, 0x20180000, 0x00182000, 0x00922200}
   , 0x90,75.000000,attributes+0,1,NULL,autohelperowl_attackpat174,0,0.610000},
  {owl_attackpat175,7,8, "A718",0,-1,2,2,2,3,0x0,648,
    { 0x0074f474, 0xd0f05000, 0x7f740000, 0x153f1d0c, 0x50f0d0c0, 0xf4740000, 0x1d3f1500, 0x00747f74},
    { 0x00200020, 0x00200000, 0x01200000, 0x00220004, 0x00200040, 0x00200000, 0x00220000, 0x00200120}
   , 0x80,50.000000,attributes+0,1,NULL,autohelperowl_attackpat175,3,1.000000},
  {owl_attackpat176,6,8, "A719",0,-1,2,2,2,3,0x0,722,
    { 0x003fff3f, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xff3f0000, 0x0c3f3f3f, 0x00f0fcf0},
    { 0x00298228, 0x80202090, 0x08a00000, 0x22220800, 0x20208000, 0x82290000, 0x08222218, 0x00a008a0}
   , 0x10,50.000000,attributes+0,1,NULL,autohelperowl_attackpat176,3,0.616000},
  {owl_attackpat177,5,8, "A719b",0,-1,2,1,2,2,0x8,685,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00a408a0, 0x20209000, 0x80680000, 0x18222200, 0x90202000, 0x08a40000, 0x22221800, 0x00688028}
   , 0x10,50.000000,attributes+0,1,NULL,autohelperowl_attackpat177,3,1.010000},
  {owl_attackpat178,4,8, "A720",-2,-2,2,1,4,3,0x0,721,
    { 0x7f7ffc3c, 0xd4fcff3c, 0xfcf4f4c0, 0xffff5c00, 0xfffcd400, 0xfc7f7f0c, 0x5cfffff0, 0xf4f4fcf0},
    { 0x02120014, 0x00100028, 0x00100000, 0x01110000, 0x00100000, 0x00120200, 0x001101a0, 0x00100050}
   , 0x80,40.000000,attributes+0,1,NULL,autohelperowl_attackpat178,0,0.592000},
  {owl_attackpat179,5,8, "A721",0,-1,2,2,2,3,0x0,722,
    { 0x003fff3f, 0xc0f0f0f0, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xff3f0000, 0x0c3f3f3f, 0x00f0fcf0},
    { 0x00288028, 0x80202000, 0x08a00000, 0x22220800, 0x20208000, 0x80280000, 0x08222200, 0x00a008a0}
   , 0x10,45.000000,attributes+0,1,NULL,autohelperowl_attackpat179,3,0.980800},
  {owl_attackpat180,7,8, "A801",-1,-1,1,2,2,3,0x2,722,
    { 0x1d7fff00, 0xd0f4fcf4, 0xfcf4d000, 0xfc7c1c00, 0xfcf4d000, 0xff7f1d00, 0x1c7cfc7c, 0xd0f4fc00},
    { 0x08228100, 0x80200860, 0x08208000, 0x80200800, 0x08208000, 0x81220800, 0x08208024, 0x80200800}
   , 0x20,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat181,5,8, "A802",-1,0,1,2,2,2,0x2,648,
    { 0x00f4fcf4, 0xf0f0d000, 0xfc7c0000, 0x1d3f3f00, 0xd0f0f000, 0xfcf40000, 0x3f3f1d00, 0x007cfc7c},
    { 0x00200860, 0x00208000, 0x80200000, 0x08220100, 0x80200000, 0x08200000, 0x01220800, 0x00208024}
   , 0x20,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat182,4,8, "A803",-1,-1,1,2,2,3,0x2,722,
    { 0x5cbfff00, 0xe4f4fcf0, 0xfcf8d400, 0xfc7c6c00, 0xfcf4e400, 0xffbf5c00, 0x6c7cfc3c, 0xd4f8fc00},
    { 0x08190000, 0x00102810, 0x00908000, 0xa0100000, 0x28100000, 0x00190800, 0x0010a010, 0x80900000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat182,0,1.600000},
  {owl_attackpat183,1,8, "A804",0,-1,1,2,1,3,0x2,685,
    { 0x00fcfa00, 0xf0f0b080, 0xbcfc0000, 0x383c3c00, 0xb0f0f000, 0xfafc0000, 0x3c3c3808, 0x00fcbc00},
    { 0x00244000, 0x40201000, 0x04600000, 0x10200400, 0x10204000, 0x40240000, 0x04201000, 0x00600400}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat183,3,1.000000},
  {owl_attackpat184,5,8, "A805",-1,-2,1,2,2,4,0x2,722,
    { 0x5cbfff00, 0xe4f4fcf0, 0xfffbd700, 0xfc7c6cfc, 0xfcf4e4fc, 0xffbf5c00, 0x6c7cfc3c, 0xd7fbff00},
    { 0x08190000, 0x00102810, 0x00908200, 0xa0100080, 0x28100008, 0x00190800, 0x0010a010, 0x82900000}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat185,2,8, "A806",-1,-1,1,2,2,3,0x2,721,
    { 0xffffff00, 0xfcfcfcfc, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfcfc, 0xfcfcfc00},
    { 0x42600000, 0x14200008, 0x00240400, 0x00205000, 0x00201400, 0x00604200, 0x50200080, 0x04240000}
   , 0x80,75.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat186,2,8, "A807",-1,-1,1,1,2,2,0x2,721,
    { 0x3cfcfc00, 0xf0fcfc00, 0xfcfcf000, 0xfcfc3c00, 0xfcfcf000, 0xfcfc3c00, 0x3cfcfc00, 0xf0fcfc00},
    { 0x20601000, 0x10680000, 0x10242000, 0x00a41000, 0x00681000, 0x10602000, 0x10a40000, 0x20241000}
   , 0x0,65.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat187,2,8, "A808",0,-1,1,2,1,3,0xa,722,
    { 0x00fcfc00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0x00ffff00},
    { 0x00906000, 0x60900000, 0x24190000, 0x00182410, 0x00906010, 0x60900000, 0x24180000, 0x00192400}
   , 0x0,60.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat188,3,8, "A809",-1,-2,1,2,2,4,0x2,721,
    { 0xfcfcfc0c, 0xffffff00, 0xfcfcfcfc, 0xfffcfc00, 0xffffff00, 0xfcfcfcfc, 0xfcfcff00, 0xfcfcfcc0},
    { 0x80205000, 0x4a610100, 0x14200858, 0x00248400, 0x01614a00, 0x50208094, 0x84240000, 0x08201400}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat188,3,0.010000},
  {owl_attackpat189,2,8, "A810",-1,0,1,2,2,2,0x0,648,
    { 0x0030fc30, 0xc0f0c000, 0xfc300000, 0x0c3f0c00, 0xc0f0c000, 0xfc300000, 0x0c3f0c00, 0x0030fc30},
    { 0x00200420, 0x00204000, 0x40200000, 0x04220000, 0x40200000, 0x04200000, 0x00220400, 0x00204020}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat189,3,0.010000},
  {owl_attackpat190,4,8, "A811",-1,0,1,2,2,2,0x0,648,
    { 0x00fcfcf0, 0xf0f0f000, 0xfcfc0000, 0x3c3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3c00, 0x00fcfc3c},
    { 0x002008a0, 0x00208000, 0x80200000, 0x08220200, 0x80200000, 0x08200000, 0x02220800, 0x00208028}
   , 0x10,65.000000,attributes+0,1,NULL,autohelperowl_attackpat190,3,0.019600},
  {owl_attackpat191,2,8, "A812",-2,-1,1,1,3,2,0x2,721,
    { 0xbcfcfc3c, 0xf8fcfc00, 0xfcfcf800, 0xffffbc00, 0xfcfcf800, 0xfcfcbc00, 0xbcffff00, 0xf8fcfcf0},
    { 0x00604020, 0x50200000, 0x04240000, 0x00221400, 0x00205000, 0x40600000, 0x14220000, 0x00240420}
   , 0x80,40.000000,attributes+0,1,NULL,autohelperowl_attackpat191,3,0.010000},
  {owl_attackpat192,3,8, "A813",-1,-1,1,1,2,2,0x2,683,
    { 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00},
    { 0x80642000, 0x18a01000, 0x20640800, 0x10289000, 0x10a01800, 0x20648000, 0x90281000, 0x08642000}
   , 0x90,85.000000,attributes+0,1,NULL,autohelperowl_attackpat192,3,1.400800},
  {owl_attackpat193,3,8, "A814",-1,-1,1,1,2,2,0x2,721,
    { 0xfcfc3c00, 0x3cfcfc00, 0xf0fcfc00, 0xfcfcf000, 0xfcfc3c00, 0x3cfcfc00, 0xf0fcfc00, 0xfcfcf000},
    { 0x80602000, 0x18a00000, 0x20240800, 0x00289000, 0x00a01800, 0x20608000, 0x90280000, 0x08242000}
   , 0x10,35.000000,attributes+0,1,NULL,autohelperowl_attackpat193,3,0.044800},
  {owl_attackpat194,5,8, "A901",-1,-1,1,2,2,3,0xa,722,
    { 0x3c3cfc00, 0xc0ffff00, 0xfcf0f0f0, 0xfcfc0c00, 0xffffc000, 0xfc3c3c3c, 0x0cfcfc00, 0xf0f0fc00},
    { 0x20249000, 0x806a1200, 0x186020a0, 0x10a40800, 0x126a8000, 0x90242028, 0x08a41000, 0x20601800}
   , 0x10,70.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat195,2,8, "A902",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00984400, 0x60106000, 0x44980000, 0x24102400, 0x60106000, 0x44980000, 0x24102400, 0x00984400}
   , 0x10,70.000000,attributes+0,1,NULL,autohelperowl_attackpat195,0,0.019600},
  {owl_attackpat196,2,8, "A902b",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00984400, 0x60106000, 0x44980000, 0x24102400, 0x60106000, 0x44980000, 0x24102400, 0x00984400}
   , 0x10,30.000000,attributes+0,1,NULL,autohelperowl_attackpat196,0,0.019600},
  {owl_attackpat197,4,8, "A903",-1,-1,1,2,2,3,0xa,722,
    { 0x7cffff00, 0xf4fcfcf0, 0xfcfcf400, 0xfcfc7c00, 0xfcfcf400, 0xffff7c00, 0x7cfcfc3c, 0xf4fcfc00},
    { 0x28120000, 0x00180820, 0x0010a000, 0x80900000, 0x08180000, 0x00122800, 0x00908020, 0xa0100000}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat198,4,8, "A904",-1,-1,1,1,2,2,0xa,722,
    { 0x34fcfc00, 0xf0fcf400, 0xfcfc7000, 0x7cfc3c00, 0xf4fcf000, 0xfcfc3400, 0x3cfc7c00, 0x70fcfc00},
    { 0x20906000, 0x60980000, 0x24182000, 0x00982400, 0x00986000, 0x60902000, 0x24980000, 0x20182400}
   , 0x10,55.000000,attributes+0,1,NULL,autohelperowl_attackpat198,0,0.016000},
  {owl_attackpat199,3,8, "A905",-1,-1,1,1,2,2,0xa,646,
    { 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00},
    { 0x24102800, 0x00988400, 0xa0106000, 0x48980000, 0x84980000, 0x28102400, 0x00984800, 0x6010a000}
   , 0x10,36.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat200,5,8, "A906a",-1,-1,2,2,3,3,0xa,649,
    { 0xc0fcffff, 0xfcf0f0c0, 0xfcfc0c00, 0x3f3fff00, 0xf0f0fc00, 0xfffcc000, 0xff3f3f0f, 0x0cfcfcfc},
    { 0x80289204, 0x88602080, 0x18a00800, 0x21248800, 0x20608800, 0x92288000, 0x88242108, 0x08a01840}
   , 0x10,32.000000,attributes+0,1,NULL,autohelperowl_attackpat200,3,0.610000},
  {owl_attackpat201,5,8, "A906b",-1,-1,2,2,3,3,0xa,649,
    { 0xc0fcffff, 0xfcf0f0c0, 0xfcfc0c00, 0x3f3fff00, 0xf0f0fc00, 0xfffcc000, 0xff3f3f0f, 0x0cfcfcfc},
    { 0x80281a04, 0x0860a080, 0x90a00800, 0x29248000, 0xa0600800, 0x1a288000, 0x80242908, 0x08a09040}
   , 0x10,32.000000,attributes+0,1,NULL,autohelperowl_attackpat201,3,0.610000},
  {owl_attackpat202,5,8, "A907",-1,-1,2,2,3,3,0xa,648,
    { 0xf0fcfdff, 0xfcfcf040, 0xfcfc3c00, 0x3fffff00, 0xf0fcfc00, 0xfdfcf000, 0xffff3f07, 0x3cfcfcfc},
    { 0x20680800, 0x1028a000, 0x80a42000, 0x28a01000, 0xa0281000, 0x08682000, 0x10a02800, 0x20a48000}
   , 0x10,65.000000,attributes+0,1,NULL,autohelperowl_attackpat202,3,1.000000},
  {owl_attackpat203,5,8, "A908",-1,-1,2,2,3,3,0xa,686,
    { 0xc0fcfcff, 0xfcf0f000, 0xfcfc0c00, 0x3f3fff00, 0xf0f0fc00, 0xfcfcc000, 0xff3f3f03, 0x0cfcfcfc},
    { 0x80681842, 0x1860a000, 0x90a40800, 0x28249100, 0xa0601800, 0x18688000, 0x91242802, 0x08a49004}
   , 0x10,35.000000,attributes+0,1,NULL,autohelperowl_attackpat203,3,0.050000},
  {owl_attackpat204,5,8, "A909",-1,-1,2,1,3,2,0xa,723,
    { 0x3cfcfcfc, 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00, 0xf0fcfcfc},
    { 0x20a49810, 0xa0689000, 0x98682000, 0x18a52800, 0x9068a000, 0x98a42000, 0x28a51800, 0x20689810}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat205,3,8, "A910",0,-1,1,1,1,2,0x6,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00a80000, 0x20202000, 0x00a80000, 0x20202000, 0x20202000, 0x00a80000, 0x20202000, 0x00a80000}
   , 0x10,25.000000,attributes+0,1,NULL,autohelperowl_attackpat205,3,0.016000},
  {owl_attackpat206,3,8, "A911",0,-2,1,1,1,3,0x6,685,
    { 0x00f8fc00, 0xf0f0e000, 0xffbf0000, 0x2c3c3c3c, 0xe0f0f0f0, 0xfcf80000, 0x3c3c2c00, 0x00bfff00},
    { 0x00200000, 0x00200000, 0x02220000, 0x00200028, 0x002000a0, 0x00200000, 0x00200000, 0x00220200}
   , 0x10,25.000000,attributes+0,1,NULL,autohelperowl_attackpat206,3,0.010000},
  {owl_attackpat207,3,8, "A912",-1,-2,1,1,2,3,0x2,722,
    { 0xbfffff00, 0xf8fcfcfc, 0xfcfcf800, 0xfcfcbc00, 0xfcfcf800, 0xffffbf00, 0xbcfcfcfc, 0xf8fcfc00},
    { 0x19620000, 0x10240824, 0x00249000, 0x80601000, 0x08241000, 0x00621900, 0x10608060, 0x90240000}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat208,4,8, "A913",0,-1,1,2,1,3,0x2,722,
    { 0x3c3c3c3c, 0x00fcfc00, 0xf0f0f000, 0xffff0000, 0xfcfc0000, 0x3c3c3c00, 0x00ffff00, 0xf0f0f0f0},
    { 0x28200020, 0x00280800, 0x0020a000, 0x80a20000, 0x08280000, 0x00202800, 0x00a28000, 0xa0200020}
   , 0x10,80.000000,attributes+0,1,NULL,autohelperowl_attackpat208,3,0.610000},
  {owl_attackpat209,4,8, "A914",0,-1,1,2,1,3,0x2,722,
    { 0x3c3c3c3c, 0x00fcfc00, 0xf0f0f000, 0xffff0000, 0xfcfc0000, 0x3c3c3c00, 0x00ffff00, 0xf0f0f0f0},
    { 0x28200020, 0x00280800, 0x0020a000, 0x80a20000, 0x08280000, 0x00202800, 0x00a28000, 0xa0200020}
   , 0x10,25.000000,attributes+0,1,NULL,autohelperowl_attackpat209,3,1.000000},
  {owl_attackpat210,3,8, "A915",0,-2,2,2,2,4,0x2,648,
    { 0x00fafeff, 0xf0f0e0a0, 0xffbf0000, 0x2f3f3f3f, 0xe0f0f0f0, 0xfefa0000, 0x3f3f2f2b, 0x00bfffff},
    { 0x00200800, 0x00208000, 0x80220000, 0x08200020, 0x80200020, 0x08200000, 0x00200800, 0x00228000}
   , 0x10,85.000000,attributes+0,1,NULL,autohelperowl_attackpat210,3,0.010000},
  {owl_attackpat211,5,8, "A916",-1,-1,1,2,2,3,0x2,722,
    { 0x0dffff00, 0xf0f0fcf4, 0xfcfcc000, 0xfc3c3c00, 0xfcf0f000, 0xffff0d00, 0x3c3cfc7c, 0xc0fcfc00},
    { 0x08a20000, 0x20200820, 0x00288000, 0x80202000, 0x08202000, 0x00a20800, 0x20208020, 0x80280000}
   , 0x10,65.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat212,5,4, "A917",-1,-2,2,1,3,3,0x0,722,
    { 0x0c3ffc30, 0xc0f0fc30, 0xfcf0c000, 0xfc3f0c00, 0xfcf0c000, 0xfc3f0c00, 0x0c3ffc30, 0xc0f0fc30},
    { 0x08228020, 0x80200820, 0x08208000, 0x80220800, 0x08208000, 0x80220800, 0x08228020, 0x80200820}
   , 0x10,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat213,4,8, "A918",-1,-2,2,1,3,3,0x0,722,
    { 0x0c3ffc00, 0xc0f0fc30, 0xfcf0c000, 0xfc3c0c00, 0xfcf0c000, 0xfc3f0c00, 0x0c3cfc30, 0xc0f0fc00},
    { 0x08228000, 0x80200820, 0x08208000, 0x80200800, 0x08208000, 0x80220800, 0x08208020, 0x80200800}
   , 0x10,40.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat214,5,8, "A919",0,-2,2,3,2,5,0x2,686,
    { 0x003cffff, 0xc0f0f0c0, 0xfff20000, 0x3f3f0f2f, 0xf0f0c0e0, 0xff3c0000, 0x0f3f3f0f, 0x00f2ffff},
    { 0x00288200, 0x80202080, 0x09a00000, 0x20200804, 0x20208040, 0x82280000, 0x08202008, 0x00a00900}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat215,6,8, "A920",0,-2,2,2,2,4,0x2,686,
    { 0x003cfffd, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f01, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0d, 0x00f0fcfd},
    { 0x00288204, 0x80202080, 0x08a00000, 0x21200800, 0x20208000, 0x82280000, 0x08202108, 0x00a00840}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat216,6,8, "A921",0,-2,2,2,2,4,0x2,685,
    { 0x00f0fcfd, 0xf0f0c000, 0xff3c0000, 0x0f3f3f0d, 0xc0f0f0c0, 0xfcf00000, 0x3f3f0f01, 0x003cfffd},
    { 0x00a00840, 0x20208000, 0x82280000, 0x08202108, 0x80202080, 0x08a00000, 0x21200800, 0x00288204}
   , 0x10,30.000000,attributes+0,1,NULL,autohelperowl_attackpat216,3,1.000000},
  {owl_attackpat217,2,8, "A1001",0,0,1,1,1,1,0x0,685,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00240800, 0x00209000, 0x80600000, 0x18200000, 0x90200000, 0x08240000, 0x00201800, 0x00608000}
   , 0xa0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat217,3,1.096000},
  {owl_attackpat218,2,8, "A1001b",0,0,1,1,1,1,0x0,685,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00240800, 0x00209000, 0x80600000, 0x18200000, 0x90200000, 0x08240000, 0x00201800, 0x00608000}
   , 0xa0,50.000000,attributes+0,1,NULL,autohelperowl_attackpat218,3,3.000000},
  {owl_attackpat219,2,8, "A1002",-1,-3,1,0,2,3,0x0,686,
    { 0x003c3c30, 0x00f0f000, 0xf0f00000, 0x3c3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3c00, 0x00f0f030},
    { 0x00240800, 0x00209000, 0x80600000, 0x18200000, 0x90200000, 0x08240000, 0x00201800, 0x00608000}
   , 0x80,75.000000,attributes+0,1,NULL,autohelperowl_attackpat219,3,3.160000},
  {owl_attackpat220,2,8, "A1003",-1,-3,1,0,2,3,0x0,686,
    { 0x003c3c30, 0x00f0f000, 0xf0f00000, 0x3c3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3c00, 0x00f0f030},
    { 0x00240800, 0x00209000, 0x80600000, 0x18200000, 0x90200000, 0x08240000, 0x00201800, 0x00608000}
   , 0x80,55.000000,attributes+0,1,NULL,autohelperowl_attackpat220,3,2.800000},
  {owl_attackpat221,2,8, "A1005",-1,-1,1,0,2,1,0x0,685,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00188000, 0x80102000, 0x08900000, 0x20100800, 0x20108000, 0x80180000, 0x08102000, 0x00900800}
   , 0x80,90.000000,attributes+0,1,NULL,autohelperowl_attackpat221,0,1.810000},
  {owl_attackpat222,2,8, "A1005b",-1,-1,1,0,2,1,0x0,685,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00188000, 0x80102000, 0x08900000, 0x20100800, 0x20108000, 0x80180000, 0x08102000, 0x00900800}
   , 0x80,90.000000,attributes+0,1,NULL,autohelperowl_attackpat222,0,1.810000},
  {owl_attackpat223,2,8, "A1006",0,-1,2,1,2,2,0x0,685,
    { 0x00fcfc30, 0xf0f0f000, 0xfcfc0000, 0x3c3f3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3f3c00, 0x00fcfc30},
    { 0x00980000, 0x20102000, 0x00980000, 0x20102000, 0x20102000, 0x00980000, 0x20102000, 0x00980000}
   , 0x80,70.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat224,2,8, "A1006b",0,-1,2,1,2,2,0x0,685,
    { 0x00fcfc30, 0xf0f0f000, 0xfcfc0000, 0x3c3f3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3f3c00, 0x00fcfc30},
    { 0x00980000, 0x20102000, 0x00980000, 0x20102000, 0x20102000, 0x00980000, 0x20102000, 0x00980000}
   , 0x80,75.000000,attributes+0,1,NULL,autohelperowl_attackpat224,0,0.010000},
  {owl_attackpat225,2,8, "A1008",-1,-1,0,1,1,2,0x0,685,
    { 0x0030fc00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0x0030fc00},
    { 0x00108800, 0x80108000, 0x88100000, 0x08100800, 0x80108000, 0x88100000, 0x08100800, 0x00108800}
   , 0x80,80.000000,attributes+0,1,NULL,autohelperowl_attackpat225,0,0.016000},
  {owl_attackpat226,2,8, "A1008b",-1,0,1,2,2,2,0x0,685,
    { 0x00bcbcb0, 0xa0f0f000, 0xf8f80000, 0x3c3f2a00, 0xf0f0a000, 0xbcbc0000, 0x2a3f3c00, 0x00f8f838},
    { 0x00240020, 0x00201000, 0x00600000, 0x10220000, 0x10200000, 0x00240000, 0x00221000, 0x00600020}
   , 0x80,80.000000,attributes+0,1,NULL,autohelperowl_attackpat226,3,0.376000},
  {owl_attackpat227,2,8, "A1009",0,-1,1,2,1,3,0x2,685,
    { 0x3c3c3c3c, 0x00fcfc00, 0xf0f0f000, 0xffff0000, 0xfcfc0000, 0x3c3c3c00, 0x00ffff00, 0xf0f0f0f0},
    { 0x20100020, 0x00180000, 0x00102000, 0x00920000, 0x00180000, 0x00102000, 0x00920000, 0x20100020}
   , 0x80,55.000000,attributes+0,1,NULL,autohelperowl_attackpat227,0,1.000000},
  {owl_attackpat228,2,8, "A1010",-1,-2,1,0,2,2,0x2,685,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00600080, 0x10200000, 0x00240000, 0x00201200, 0x00201000, 0x00600000, 0x12200000, 0x00240008}
   , 0x80,75.000000,attributes+0,1,NULL,autohelperowl_attackpat228,3,1.000000},
  {owl_attackpat229,4,8, "A1011",0,-1,1,1,1,2,0x2,685,
    { 0x00fc7400, 0x70f07000, 0x74fc0000, 0x343c3400, 0x70f07000, 0x74fc0000, 0x343c3400, 0x00fc7400},
    { 0x00980000, 0x20102000, 0x00980000, 0x20102000, 0x20102000, 0x00980000, 0x20102000, 0x00980000}
   , 0x80,80.000000,attributes+0,1,NULL,autohelperowl_attackpat229,0,0.016000},
  {owl_attackpat230,3,8, "A1012",-1,-1,1,2,2,3,0x0,721,
    { 0xf0ffbc00, 0xbcfcf030, 0xf8fc3c00, 0x3cfcf800, 0xf0fcbc00, 0xbcfff000, 0xf8fc3c30, 0x3cfcf800},
    { 0x80611800, 0x18608010, 0x90240800, 0x08249000, 0x80601800, 0x18618000, 0x90240810, 0x08249000}
   , 0x80,45.000000,attributes+0,1,NULL,autohelperowl_attackpat230,3,1.006000},
  {owl_attackpat231,2,8, "A1013",-1,0,1,2,2,2,0x0,722,
    { 0x003cfc30, 0xc0f0f000, 0xfcf00000, 0x3c3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3c00, 0x00f0fc30},
    { 0x00284000, 0x40202000, 0x04a00000, 0x20200400, 0x20204000, 0x40280000, 0x04202000, 0x00a00400}
   , 0x0,10.000000,attributes+0,1,NULL,autohelperowl_attackpat231,3,2.890000},
  {owl_attackpat232,4,8, "A1014",0,-4,1,1,1,5,0x2,722,
    { 0x007fff00, 0xd0f0f0f0, 0xfcf40000, 0x3c3c1c00, 0xf0f0d000, 0xff7f0000, 0x1c3c3c3c, 0x00f4fc00},
    { 0x00102000, 0x00900000, 0x20100000, 0x00180000, 0x00900000, 0x20100000, 0x00180000, 0x00102000}
   , 0x80,55.000000,attributes+0,1,NULL,autohelperowl_attackpat232,0,0.019600},
  {owl_attackpat233,4,8, "A1015",0,0,1,3,1,3,0x0,686,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00280000, 0x00202000, 0x00a00000, 0x20200000, 0x20200000, 0x00280000, 0x00202000, 0x00a00000}
   , 0x80,75.000000,attributes+0,1,NULL,autohelperowl_attackpat233,3,1.096000},
  {owl_attackpat234,4,8, "A1015a",0,0,1,3,1,3,0x0,686,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00280000, 0x00202000, 0x00a00000, 0x20200000, 0x20200000, 0x00280000, 0x00202000, 0x00a00000}
   , 0x80,75.000000,attributes+0,1,NULL,autohelperowl_attackpat234,3,1.096000},
  {owl_attackpat235,3,8, "A1016",0,-2,1,1,1,3,0x2,685,
    { 0x0037fe00, 0xc0f0d0b0, 0xfc700000, 0x1c3c0c00, 0xd0f0c000, 0xfe370000, 0x0c3c1c38, 0x0070fc00},
    { 0x00128000, 0x80100020, 0x08100000, 0x00100800, 0x00108000, 0x80120000, 0x08100020, 0x00100800}
   , 0x80,75.000000,attributes+0,1,NULL,autohelperowl_attackpat235,0,0.902176},
  {owl_attackpat236,3,8, "A1016a",0,-2,1,1,1,3,0x2,685,
    { 0x0037fe00, 0xc0f0d0b0, 0xfc700000, 0x1c3c0c00, 0xd0f0c000, 0xfe370000, 0x0c3c1c38, 0x0070fc00},
    { 0x00128000, 0x80100020, 0x08100000, 0x00100800, 0x00108000, 0x80120000, 0x08100020, 0x00100800}
   , 0x80,75.000000,attributes+0,1,NULL,autohelperowl_attackpat236,0,0.902176},
  {owl_attackpat237,4,8, "A1017",-1,-1,0,2,1,3,0x0,722,
    { 0x1c3c3c38, 0x00f4fc00, 0xf0f0d000, 0xfe7f0000, 0xfcf40000, 0x3c3c1c00, 0x007ffe00, 0xd0f0f0b0},
    { 0x08200020, 0x00200800, 0x00208000, 0x80220000, 0x08200000, 0x00200800, 0x00228000, 0x80200020}
   , 0x80,65.000000,attributes+0,1,NULL,autohelperowl_attackpat237,3,1.582000},
  {owl_attackpat238,2,8, "A1018",0,0,2,2,2,2,0x0,722,
    { 0x003f3f3e, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3e, 0x00f0f0f0},
    { 0x00120020, 0x00100020, 0x00100000, 0x00120000, 0x00100000, 0x00120000, 0x00120020, 0x00100020}
   , 0x80,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat239,2,8, "A1019",-1,0,1,3,2,3,0x0,648,
    { 0x00fcf8fc, 0xf0f0b000, 0xbcfc0000, 0x3b3f3f00, 0xb0f0f000, 0xf8fc0000, 0x3f3f3b00, 0x00fcbcfc},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x80,65.000000,attributes+0,1,NULL,autohelperowl_attackpat239,3,2.461600},
  {owl_attackpat240,1,4, "A1020",-3,-1,1,3,4,4,0x0,720,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xffffffff, 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xffffffff},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat240,3,0.024748},
  {owl_attackpat241,2,8, "A1021",-1,0,1,2,2,2,0x0,685,
    { 0x00303cfc, 0x00f0c000, 0xf0300000, 0x0f3f0300, 0xc0f00000, 0x3c300000, 0x033f0f00, 0x0030f0fc},
    { 0x00200460, 0x00204000, 0x40200000, 0x04220100, 0x40200000, 0x04200000, 0x01220400, 0x00204024}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat241,3,6.010000},
  {owl_attackpat242,3,8, "A1022",-2,-1,1,2,3,3,0x0,648,
    { 0xfcfcfcf8, 0xfcfcfc00, 0xfffffe00, 0xfeffffbf, 0xfcfcfcf8, 0xfcfcfc00, 0xfffffe00, 0xfeffffbf},
    { 0x00200020, 0x00200000, 0x00220000, 0x00220021, 0x00200020, 0x00200000, 0x00220000, 0x00220021}
   , 0x80,55.000000,attributes+0,1,NULL,autohelperowl_attackpat242,3,10.000000},
  {owl_attackpat243,6,8, "A1023",0,-1,3,2,3,3,0x0,685,
    { 0x0070fcf0, 0xd0f0c000, 0xfc340000, 0x0c3f1f00, 0xc0f0d000, 0xfc700000, 0x1f3f0c00, 0x0034fc3c},
    { 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200400, 0x00204000}
   , 0x80,45.000000,attributes+0,1,NULL,autohelperowl_attackpat243,3,10.000000},
  {owl_attackpat244,3,8, "A1024a",0,-1,1,2,1,3,0x2,685,
    { 0x00fc7f00, 0x70f0f0c0, 0xf4fc0000, 0x3c3c3400, 0xf0f07000, 0x7ffc0000, 0x343c3c0c, 0x00fcf400},
    { 0x00900200, 0x20100080, 0x00180000, 0x00102000, 0x00102000, 0x02900000, 0x20100008, 0x00180000}
   , 0x2880,90.000000,attributes+0,1,NULL,autohelperowl_attackpat244,0,6.010000},
  {owl_attackpat245,3,8, "A1024b",0,-1,1,2,1,3,0x2,685,
    { 0x00fe7f00, 0x70f0f0e0, 0xf4fc0000, 0x3c3c3400, 0xf0f07000, 0x7ffe0000, 0x343c3c2c, 0x00fcf400},
    { 0x00900200, 0x20100080, 0x00180000, 0x00102000, 0x00102000, 0x02900000, 0x20100008, 0x00180000}
   , 0x2800,90.000000,attributes+0,1,NULL,autohelperowl_attackpat245,0,6.010000},
  {owl_attackpat246,2,8, "A1100",0,0,2,1,2,1,0x0,722,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00240018, 0x00201000, 0x00600000, 0x12210000, 0x10200000, 0x00240000, 0x00211200, 0x00600090}
   , 0x0,90.000000,attributes+0,1,NULL,autohelperowl_attackpat246,3,1.810000},
  {owl_attackpat247,1,4, "A1101",-1,0,1,2,2,2,0x0,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00108010, 0x80100000, 0x08100000, 0x00110800, 0x00108000, 0x80100000, 0x08110000, 0x00100810}
   , 0x0,93.000000,attributes+0,1,NULL,autohelperowl_attackpat247,0,5.000000},
  {owl_attackpat248,1,4, "A1101b",-1,0,1,2,2,2,0x0,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00108010, 0x80100000, 0x08100000, 0x00110800, 0x00108000, 0x80100000, 0x08110000, 0x00100810}
   , 0x0,94.000000,attributes+0,1,NULL,autohelperowl_attackpat248,0,1.816000},
  {owl_attackpat249,1,8, "A1101c",-1,-1,0,1,1,2,0x0,685,
    { 0x0030fc00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0x0030fc00},
    { 0x00204400, 0x40204000, 0x44200000, 0x04200400, 0x40204000, 0x44200000, 0x04200400, 0x00204400}
   , 0x0,81.000000,attributes+0,1,NULL,autohelperowl_attackpat249,3,1.160000},
  {owl_attackpat250,2,8, "A1102",-1,0,1,2,2,2,0x0,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00108018, 0x80100000, 0x08100000, 0x02110800, 0x00108000, 0x80100000, 0x08110200, 0x00100890}
   , 0x80,95.000000,attributes+0,1,NULL,autohelperowl_attackpat250,0,3.000000},
  {owl_attackpat251,2,8, "A1104",-1,-1,1,1,2,2,0x0,683,
    { 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00},
    { 0x04182400, 0x00906400, 0x60904000, 0x64180000, 0x64900000, 0x24180400, 0x00186400, 0x40906000}
   , 0x80,85.000000,attributes+0,1,NULL,autohelperowl_attackpat251,0,1.600000},
  {owl_attackpat252,4,8, "A1105",-1,-1,2,1,3,2,0x2,721,
    { 0xfcfc7c7c, 0x7cfcfc00, 0xf4fcfc00, 0xfffff500, 0xfcfc7c00, 0x7cfcfc00, 0xf5ffff00, 0xfcfcf4f4},
    { 0x40902400, 0x24904000, 0x60180400, 0x04186000, 0x40902400, 0x24904000, 0x60180400, 0x04186000}
   , 0xa0,85.000000,attributes+0,1,NULL,autohelperowl_attackpat252,0,1.600000},
  {owl_attackpat253,6,8, "A1106",-1,-1,2,2,3,3,0x2,758,
    { 0xfcff7f5f, 0x7cfcfcf0, 0xf4fcfc00, 0xfffdf500, 0xfcfc7c00, 0x7ffffc00, 0xf5fdff3f, 0xfcfcf4d4},
    { 0x50982400, 0x24946000, 0x60981400, 0x24586000, 0x60942400, 0x24985000, 0x60582400, 0x14986000}
   , 0x80,70.000000,attributes+0,1,NULL,autohelperowl_attackpat253,0,1.960000},
  {owl_attackpat254,1,4, "A1107",-1,0,1,2,2,2,0x0,685,
    { 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00},
    { 0x00904000, 0x60100000, 0x04180000, 0x00102400, 0x00106000, 0x40900000, 0x24100000, 0x00180400}
   , 0x0,95.000000,attributes+0,1,NULL,autohelperowl_attackpat254,0,1.160000},
  {owl_attackpat255,1,8, "A1107b",-2,0,1,1,3,1,0x0,721,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00904000, 0x60100000, 0x04180000, 0x00102400, 0x00106000, 0x40900000, 0x24100000, 0x00180400}
   , 0x0,96.000000,attributes+0,1,NULL,autohelperowl_attackpat255,0,0.662800},
  {owl_attackpat256,1,8, "A1107c",-1,0,1,1,2,1,0x0,722,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00904000, 0x60100000, 0x04180000, 0x00102400, 0x00106000, 0x40900000, 0x24100000, 0x00180400}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_attackpat256,0,0.662800},
  {owl_attackpat257,2,8, "A1108",0,-1,1,1,1,2,0x0,648,
    { 0x003cfc00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0x00f0fc00},
    { 0x00241800, 0x00609000, 0x90600000, 0x18240000, 0x90600000, 0x18240000, 0x00241800, 0x00609000}
   , 0x0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat257,3,0.610000},
  {owl_attackpat258,3,8, "A1109",-1,-2,2,2,3,4,0x2,685,
    { 0x1cbcffff, 0xe0f4fcc0, 0xfffad000, 0xff7f2f2f, 0xfcf4e0e0, 0xffbc1c00, 0x2f7fff0f, 0xd0faffff},
    { 0x08240100, 0x00201840, 0x00608000, 0x90200000, 0x18200000, 0x01240800, 0x00209004, 0x80600000}
   , 0x80,65.000000,attributes+0,1,NULL,autohelperowl_attackpat258,3,0.610000},
  {owl_attackpat259,1,8, "A1110",0,-3,1,2,1,5,0x2,648,
    { 0x00fcfa00, 0xf0f0b080, 0xbfff0000, 0x383c3c3c, 0xb0f0f0f0, 0xfafc0000, 0x3c3c3808, 0x00ffbf00},
    { 0x00241000, 0x00601000, 0x10600000, 0x10240000, 0x10600000, 0x10240000, 0x00241000, 0x00601000}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat260,4,8, "A1111",-2,-2,2,2,4,4,0x4,683,
    { 0xfcffffff, 0xfffffcf0, 0xfffdff3c, 0xffffffdf, 0xfcffffdc, 0xfffffcf0, 0xffffff3f, 0xfffdffff},
    { 0x4090a400, 0xa4904000, 0x68180400, 0x04186800, 0x4090a400, 0xa4904000, 0x68180400, 0x04186800}
   , 0x0,65.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat261,2,8, "A1112",-1,-1,1,2,2,3,0x2,648,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfcfc},
    { 0xa0100040, 0x08180000, 0x00102800, 0x00908100, 0x00180800, 0x0010a000, 0x81900000, 0x28100004}
   , 0x0,50.000000,attributes+0,1,NULL,autohelperowl_attackpat261,0,1.000000},
  {owl_attackpat262,3,8, "A1113",-2,-2,2,2,4,4,0x0,722,
    { 0x7ffffcfd, 0xf4fcfc3c, 0xfcfcf400, 0xffff7f00, 0xfcfcf400, 0xfcff7f00, 0x7ffffff1, 0xf4fcfcfc},
    { 0x00110018, 0x00100010, 0x00100000, 0x02110000, 0x00100000, 0x00110000, 0x00110210, 0x00100090}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_attackpat262,0,0.016000},
  {owl_attackpat263,4,8, "A1114",-2,-2,2,2,4,4,0x0,647,
    { 0xf4fcfc3c, 0xfcfcf400, 0xfdff7f00, 0x7ffffcf5, 0xf4fcfc7c, 0xfcfcf400, 0xfcff7f00, 0x7ffffdf1},
    { 0x00108010, 0x80100000, 0x08110000, 0x00110810, 0x00108010, 0x80100000, 0x08110000, 0x00110810}
   , 0x0,81.000000,attributes+0,1,NULL,autohelperowl_attackpat263,0,0.016000},
  {owl_attackpat264,5,8, "A1115",-1,-1,2,2,3,3,0x0,721,
    { 0x4f7ffffd, 0xd4f0fcfc, 0xfcf4c400, 0xff3f5f00, 0xfcf0d400, 0xff7f4f00, 0x5f3ffffd, 0xc4f4fcfc},
    { 0x04206410, 0x40a04400, 0x64204000, 0x44290400, 0x44a04000, 0x64200400, 0x04294400, 0x40206410}
   , 0x0,81.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat265,6,8, "A1116",-1,-1,2,1,3,2,0x0,648,
    { 0x30fcfc54, 0xf0fcf000, 0xfcfc3000, 0x3dfd3d00, 0xf0fcf000, 0xfcfc3000, 0x3dfd3d00, 0x30fcfc54},
    { 0x20641800, 0x10689000, 0x90642000, 0x18a41000, 0x90681000, 0x18642000, 0x10a41800, 0x20649000}
   , 0x80,90.000000,attributes+0,1,NULL,autohelperowl_attackpat265,3,1.096000},
  {owl_attackpat266,2,8, "A1117",-1,-1,0,1,1,2,0x0,685,
    { 0x00f0fc00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0x003cfc00},
    { 0x00904800, 0x60108000, 0x84180000, 0x08102400, 0x80106000, 0x48900000, 0x24100800, 0x00188400}
   , 0xa0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat266,0,3.000000},
  {owl_attackpat267,2,8, "A1117a",-1,-1,0,1,1,2,0x0,685,
    { 0x00f0fc00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0x003cfc00},
    { 0x00904800, 0x60108000, 0x84180000, 0x08102400, 0x80106000, 0x48900000, 0x24100800, 0x00188400}
   , 0xa0,80.000000,attributes+0,1,NULL,autohelperowl_attackpat267,0,3.000000},
  {owl_attackpat268,2,8, "A1118",-1,-1,1,1,2,2,0x2,721,
    { 0xf0fcfc00, 0xfcfcf000, 0xfcfc3c00, 0x3cfcfc00, 0xf0fcfc00, 0xfcfcf000, 0xfcfc3c00, 0x3cfcfc00},
    { 0x90600000, 0x18240000, 0x00241800, 0x00609000, 0x00241800, 0x00609000, 0x90600000, 0x18240000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat268,3,1.600000},
  {owl_attackpat269,2,8, "A1119",0,0,1,2,1,2,0x0,685,
    { 0x00383c0c, 0x00f0e000, 0xf0b00000, 0x2f3c0000, 0xe0f00000, 0x3c380000, 0x003c2f00, 0x00b0f0c0},
    { 0x00200008, 0x00200000, 0x00200000, 0x02200000, 0x00200000, 0x00200000, 0x00200200, 0x00200080}
   , 0xa0,36.000000,attributes+0,1,NULL,autohelperowl_attackpat269,3,0.256336},
  {owl_attackpat270,1,8, "A1121",-1,0,1,2,2,2,0x0,685,
    { 0x003cfc3c, 0xc0f0f000, 0xfcf00000, 0x3f3f0c00, 0xf0f0c000, 0xfc3c0000, 0x0c3f3f00, 0x00f0fcf0},
    { 0x00244004, 0x40201000, 0x04600000, 0x11200400, 0x10204000, 0x40240000, 0x04201100, 0x00600440}
   , 0x80,35.000000,attributes+0,1,NULL,autohelperowl_attackpat270,3,0.021760},
  {owl_attackpat271,2,8, "A1122",0,0,2,1,2,1,0x0,685,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00200008, 0x00200000, 0x00200000, 0x02200000, 0x00200000, 0x00200000, 0x00200200, 0x00200080}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat271,3,6.010000},
  {owl_attackpat272,2,8, "A1122a",0,0,2,1,2,1,0x0,685,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00200008, 0x00200000, 0x00200000, 0x02200000, 0x00200000, 0x00200000, 0x00200200, 0x00200080}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat272,3,6.010000},
  {owl_attackpat273,2,8, "A1122b",0,0,2,1,2,1,0x0,685,
    { 0x003c3c3c, 0x00f0f000, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3c3c0000, 0x003f3f00, 0x00f0f0f0},
    { 0x00200008, 0x00200000, 0x00200000, 0x02200000, 0x00200000, 0x00200000, 0x00200200, 0x00200080}
   , 0x80,76.000000,attributes+0,1,NULL,autohelperowl_attackpat273,3,6.010000},
  {owl_attackpat274,3,8, "A1123",0,-2,1,1,1,3,0x2,685,
    { 0x0037fe00, 0xc0f0d0b0, 0xfc700000, 0x1c3c0c00, 0xd0f0c000, 0xfe370000, 0x0c3c1c38, 0x0070fc00},
    { 0x00128000, 0x80100020, 0x08100000, 0x00100800, 0x00108000, 0x80120000, 0x08100020, 0x00100800}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat274,0,1.096000},
  {owl_attackpat275,3,8, "A1123a",0,-2,1,1,1,3,0x2,685,
    { 0x0037fe00, 0xc0f0d0b0, 0xfc700000, 0x1c3c0c00, 0xd0f0c000, 0xfe370000, 0x0c3c1c38, 0x0070fc00},
    { 0x00128000, 0x80100020, 0x08100000, 0x00100800, 0x00108000, 0x80120000, 0x08100020, 0x00100800}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat275,0,1.096000},
  {owl_attackpat276,1,8, "A1124",0,-1,2,1,2,2,0x0,648,
    { 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0x003c3c00},
    { 0x00900000, 0x20100000, 0x00180000, 0x00102000, 0x00102000, 0x00900000, 0x20100000, 0x00180000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_attackpat276,0,1.096000},
  {owl_attackpat277,5,8, "A1124a",0,-1,2,1,2,2,0x0,685,
    { 0x00f0f454, 0xf0f04000, 0x7c3c0000, 0x053d3d00, 0x40f0f000, 0xf4f00000, 0x3d3d0500, 0x003c7c54},
    { 0x00900000, 0x20100000, 0x00180000, 0x00102000, 0x00102000, 0x00900000, 0x20100000, 0x00180000}
   , 0x0,70.000000,attributes+0,1,NULL,autohelperowl_attackpat277,0,0.667600},
  {owl_attackpat278,4,8, "A1124b",0,-1,2,1,2,2,0x0,722,
    { 0x003c7c50, 0x40f0f000, 0xf4f00000, 0x3c3d0500, 0xf0f04000, 0x7c3c0000, 0x053d3c00, 0x00f0f414},
    { 0x00180000, 0x00102000, 0x00900000, 0x20100000, 0x20100000, 0x00180000, 0x00102000, 0x00900000}
   , 0x80,70.000000,attributes+0,1,NULL,autohelperowl_attackpat278,0,3.475600},
  {owl_attackpat279,6,8, "A1125",-2,-1,1,2,3,3,0x0,721,
    { 0x3dfdfd20, 0xf0fcfc54, 0xfcfcf000, 0xfcfe3c00, 0xfcfcf000, 0xfdfd3d00, 0x3cfefc54, 0xf0fcfc20},
    { 0x24902400, 0x20984400, 0x60186000, 0x44982000, 0x44982000, 0x24902400, 0x20984400, 0x60186000}
   , 0x80,76.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat280,1,4, "A1126",-1,-1,0,1,1,2,0x0,685,
    { 0x0030fc00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0x0030fc00},
    { 0x00204400, 0x40204000, 0x44200000, 0x04200400, 0x40204000, 0x44200000, 0x04200400, 0x00204400}
   , 0x0,55.000000,attributes+0,1,NULL,autohelperowl_attackpat280,3,3.320000},
  {owl_attackpat281,2,8, "A1127",-1,-1,0,1,1,2,0x0,685,
    { 0x00f0fc00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0x003cfc00},
    { 0x00608400, 0x90204000, 0x48240000, 0x04201800, 0x40209000, 0x84600000, 0x18200400, 0x00244800}
   , 0x20,70.000000,attributes+0,1,NULL,autohelperowl_attackpat281,3,1.369456},
  {owl_attackpat282,2,8, "A1127a",-1,-1,0,1,1,2,0x0,685,
    { 0x00f0fc00, 0xf0f0c000, 0xfc3c0000, 0x0c3c3c00, 0xc0f0f000, 0xfcf00000, 0x3c3c0c00, 0x003cfc00},
    { 0x00608400, 0x90204000, 0x48240000, 0x04201800, 0x40209000, 0x84600000, 0x18200400, 0x00244800}
   , 0x20,70.000000,attributes+0,1,NULL,autohelperowl_attackpat282,3,1.369456},
  {owl_attackpat283,4,8, "A1128",0,-1,1,2,1,3,0x0,647,
    { 0x00fcfc00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0x00ffff00},
    { 0x00248800, 0x80209000, 0x88620000, 0x18200820, 0x90208020, 0x88240000, 0x08201800, 0x00628800}
   , 0x80,80.000000,attributes+0,1,NULL,autohelperowl_attackpat283,3,0.970000},
  {owl_attackpat284,5,8, "A1129",-1,-1,2,2,3,3,0x0,648,
    { 0x7fffff7c, 0xf4fcfcfc, 0xfcfcf400, 0xffff7d00, 0xfcfcf400, 0xffff7f00, 0x7dfffffc, 0xf4fcfcf4},
    { 0x29641000, 0x10681804, 0x1064a000, 0x90a41000, 0x18681000, 0x10642900, 0x10a49040, 0xa0641000}
   , 0x80,86.000000,attributes+0,1,NULL,autohelperowl_attackpat284,3,1.000000},
  {owl_attackpat285,4,8, "A1130",-2,-3,2,1,4,4,0x0,686,
    { 0x7cfeffff, 0xf4fcfce0, 0xfffef400, 0xffff7f2f, 0xfcfcf4e0, 0xfffe7c00, 0x7fffff2f, 0xf4feffff},
    { 0x24580800, 0x1018a400, 0x80946000, 0x68901000, 0xa4181000, 0x08582400, 0x10906800, 0x60948000}
   , 0x80,65.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat286,2,8, "A1131",0,-1,1,2,1,3,0x2,721,
    { 0x303c3c30, 0x00fcf000, 0xf0f03000, 0x3cff0000, 0xf0fc0000, 0x3c3c3000, 0x00ff3c00, 0x30f0f030},
    { 0x20100020, 0x00180000, 0x00102000, 0x00920000, 0x00180000, 0x00102000, 0x00920000, 0x20100020}
   , 0x0,90.000000,attributes+0,1,NULL,autohelperowl_attackpat286,0,6.010000},
  {owl_attackpat287,5,8, "A1132",-1,-1,2,2,3,3,0xa,648,
    { 0xf0fcffff, 0xfcfcf0c0, 0xfcfc3c00, 0x3fffff00, 0xf0fcfc00, 0xfffcf000, 0xffff3f0f, 0x3cfcfcfc},
    { 0x10681a06, 0x1064a080, 0x90a41000, 0x29641000, 0xa0641000, 0x1a681000, 0x1064290a, 0x10a49040}
   , 0x0,70.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat288,2,8, "A1133a",0,-1,4,2,4,3,0x0,723,
    { 0x003f3d3f, 0x00f0f070, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3d3f0000, 0x003f3f37, 0x00f0f0f0},
    { 0x00120000, 0x00100020, 0x00100000, 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_attackpat288,0,0.021760},
  {owl_attackpat289,1,8, "A1133b",0,-1,4,2,4,3,0x0,722,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00120000, 0x00100020, 0x00100000, 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100000}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat289,0,0.021760},
  {owl_attackpat290,2,8, "A1134",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00980400, 0x20106000, 0x40980000, 0x24102000, 0x60102000, 0x04980000, 0x20102400, 0x00984000}
   , 0x80,75.000000,attributes+0,1,NULL,autohelperowl_attackpat290,0,0.016000},
  {owl_attackpat291,2,8, "A1134b",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00980400, 0x20106000, 0x40980000, 0x24102000, 0x60102000, 0x04980000, 0x20102400, 0x00984000}
   , 0x80,75.000000,attributes+0,1,NULL,autohelperowl_attackpat291,0,0.016000},
  {owl_attackpat292,2,8, "A1134c",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00980400, 0x20106000, 0x40980000, 0x24102000, 0x60102000, 0x04980000, 0x20102400, 0x00984000}
   , 0x80,40.000000,attributes+0,1,NULL,autohelperowl_attackpat292,0,0.010000},
  {owl_attackpat293,2,8, "A1134d",0,-1,1,1,1,2,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00980400, 0x20106000, 0x40980000, 0x24102000, 0x60102000, 0x04980000, 0x20102400, 0x00984000}
   , 0x80,40.000000,attributes+0,1,NULL,autohelperowl_attackpat293,0,0.010000},
  {owl_attackpat294,2,8, "A1135",0,-2,1,1,1,3,0x2,685,
    { 0x00fcfc00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0x00ffff00},
    { 0x00180000, 0x00102000, 0x02900000, 0x20100008, 0x20100080, 0x00180000, 0x00102000, 0x00900200}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat294,0,9.610001},
  {owl_attackpat295,2,8, "A1136",-1,0,2,2,3,2,0x0,721,
    { 0x0c3f3c0c, 0x00f0fc30, 0xf0f0c000, 0xff3c0000, 0xfcf00000, 0x3c3f0c00, 0x003cff30, 0xc0f0f0c0},
    { 0x08110008, 0x00100810, 0x00108000, 0x82100000, 0x08100000, 0x00110800, 0x00108210, 0x80100080}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat295,0,9.610001},
  {owl_attackpat296,6,8, "A1137",-2,-2,1,1,3,3,0x0,647,
    { 0xf4fcfc00, 0xfdfdf400, 0xfcff7f15, 0x7cfcfcf0, 0xf4fdfd3d, 0xfcfcf450, 0xfcfc7c00, 0x7ffffc00},
    { 0x0010a400, 0x80904000, 0x68100000, 0x04180800, 0x40908000, 0xa4100000, 0x08180400, 0x00106800}
   , 0x0,79.000000,attributes+0,1,NULL,autohelperowl_attackpat296,0,0.019600},
  {owl_attackpat297,6,8, "A1138",-1,-3,2,1,3,4,0x2,648,
    { 0xc0f0fcfc, 0xfcf0c000, 0xff3d0d00, 0x0f3fff5f, 0xc0f0fcd4, 0xfcf0c000, 0xff3f0f00, 0x0d3dffff},
    { 0x00101820, 0x00508000, 0x90100000, 0x08160000, 0x80500000, 0x18100000, 0x00160800, 0x00109020}
   , 0x0,30.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat298,4,8, "A1139",-1,-1,2,2,3,3,0x0,647,
    { 0xfdffbf0c, 0xbcfcfcf4, 0xf8fcfc00, 0xfffcf800, 0xfcfcbc00, 0xbffffd00, 0xf8fcff7c, 0xfcfcf8c0},
    { 0x18260104, 0x00241860, 0x00609000, 0x91600000, 0x18240000, 0x01261800, 0x00609124, 0x90600040}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_attackpat298,3,2.176000},
  {owl_attackpat299,3,8, "A1140a",0,-1,1,2,1,3,0x2,722,
    { 0x003ffe00, 0xc0f0f0b0, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfe3f0000, 0x0c3c3c38, 0x00f0fc00},
    { 0x00269000, 0x80601020, 0x18600000, 0x10240800, 0x10608000, 0x90260000, 0x08241020, 0x00601800}
   , 0x0,40.000000,attributes+0,1,NULL,autohelperowl_attackpat299,3,6.010000},
  {owl_attackpat300,3,8, "A1140b",0,-1,1,2,1,3,0x2,722,
    { 0x003ffe00, 0xc0f0f0b0, 0xfcf00000, 0x3c3c0c00, 0xf0f0c000, 0xfe3f0000, 0x0c3c3c38, 0x00f0fc00},
    { 0x00269000, 0x80601020, 0x18600000, 0x10240800, 0x10608000, 0x90260000, 0x08241020, 0x00601800}
   , 0x0,40.000000,attributes+0,1,NULL,autohelperowl_attackpat300,3,6.010000},
  {owl_attackpat301,2,8, "A1141",-1,0,2,2,3,2,0x0,685,
    { 0x3c3f3e3c, 0x00fcfcb0, 0xf0f0f000, 0xffff0000, 0xfcfc0000, 0x3e3f3c00, 0x00ffff38, 0xf0f0f0f0},
    { 0x14210008, 0x00240410, 0x00205000, 0x42600000, 0x04240000, 0x00211400, 0x00604210, 0x50200080}
   , 0x80,76.000000,attributes+0,1,NULL,autohelperowl_attackpat301,3,10.000000},
  {owl_attackpat302,2,8, "A1141b",-1,0,2,2,3,2,0x0,685,
    { 0x3c3f3e3c, 0x00fcfcb0, 0xf0f0f000, 0xffff0000, 0xfcfc0000, 0x3e3f3c00, 0x00ffff38, 0xf0f0f0f0},
    { 0x14210008, 0x00240410, 0x00205000, 0x42600000, 0x04240000, 0x00211400, 0x00604210, 0x50200080}
   , 0x80,76.000000,attributes+0,1,NULL,autohelperowl_attackpat302,3,10.000000},
  {owl_attackpat303,1,8, "A1201",0,-1,1,1,1,2,0x0,648,
    { 0x0030fc00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0x0030fc00},
    { 0x00102400, 0x00904000, 0x60100000, 0x04180000, 0x40900000, 0x24100000, 0x00180400, 0x00106000}
   , 0x0,75.000000,attributes+0,1,NULL,autohelperowl_attackpat303,0,0.016000},
  {owl_attackpat304,1,8, "A1203",-1,-1,0,1,1,2,0x0,685,
    { 0x00fc3000, 0x30f03000, 0x30fc0000, 0x303c3000, 0x30f03000, 0x30fc0000, 0x303c3000, 0x00fc3000},
    { 0x00640000, 0x10201000, 0x00640000, 0x10201000, 0x10201000, 0x00640000, 0x10201000, 0x00640000}
   , 0x10,80.000000,attributes+0,1,NULL,autohelperowl_attackpat304,3,0.016000},
  {owl_attackpat305,1,8, "A1204",-1,-1,0,1,1,2,0x0,685,
    { 0x00fc3000, 0x30f03000, 0x30fc0000, 0x303c3000, 0x30f03000, 0x30fc0000, 0x303c3000, 0x00fc3000},
    { 0x00640000, 0x10201000, 0x00640000, 0x10201000, 0x10201000, 0x00640000, 0x10201000, 0x00640000}
   , 0x10,30.000000,attributes+0,1,NULL,autohelperowl_attackpat305,3,0.034000},
  {owl_attackpat306,2,8, "A1205",-1,0,0,1,1,1,0x0,721,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00201800, 0x00608000, 0x90200000, 0x08240000, 0x80600000, 0x18200000, 0x00240800, 0x00209000}
   , 0x10,75.000000,attributes+0,1,NULL,autohelperowl_attackpat306,3,0.610000},
  {owl_attackpat307,2,8, "A1206",-1,0,0,1,1,1,0x0,721,
    { 0x003c3c00, 0x00f0f000, 0xf0f00000, 0x3c3c0000, 0xf0f00000, 0x3c3c0000, 0x003c3c00, 0x00f0f000},
    { 0x00201800, 0x00608000, 0x90200000, 0x08240000, 0x80600000, 0x18200000, 0x00240800, 0x00209000}
   , 0x90,30.000000,attributes+0,1,NULL,autohelperowl_attackpat307,3,0.630160},
  {owl_attackpat308,3,8, "A1207",-1,-2,1,0,2,2,0x0,685,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00a40800, 0x20209000, 0x80680000, 0x18202000, 0x90202000, 0x08a40000, 0x20201800, 0x00688000}
   , 0x80,45.000000,attributes+0,1,NULL,autohelperowl_attackpat308,3,1.000000},
  {owl_attackpat309,2,8, "A1208",-2,-2,1,1,3,3,0x2,683,
    { 0xfcfcbc00, 0xbfffff00, 0xfafefffc, 0xfcfcf8e8, 0xffffbfac, 0xbcfcfcfc, 0xf8fcfc00, 0xfffefa00},
    { 0x00201000, 0x02600000, 0x10200108, 0x00240040, 0x00600204, 0x10200080, 0x00240000, 0x01201000}
   , 0x80,40.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat310,2,8, "A1209",0,-1,1,2,1,3,0x2,758,
    { 0x00ffff00, 0xf0f0f0f0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xffff0000, 0x3c3c3c3c, 0x00fcfc00},
    { 0x00681000, 0x10602000, 0x10a40000, 0x20241000, 0x20601000, 0x10680000, 0x10242000, 0x00a41000}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_attackpat310,3,0.010000},
  {owl_attackpat311,2,8, "A1210",0,-1,1,1,1,2,0x0,685,
    { 0x0030fc00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0xc0f0c000, 0xfc300000, 0x0c3c0c00, 0x0030fc00},
    { 0x00108800, 0x80108000, 0x88100000, 0x08100800, 0x80108000, 0x88100000, 0x08100800, 0x00108800}
   , 0x0,65.000000,attributes+0,1,NULL,autohelperowl_attackpat311,0,2.680000},
  {owl_attackpat312,3,8, "A1301",-2,-2,3,3,5,5,0xa,723,
    { 0xeaffffff, 0xfffaf8f8, 0xffffaf2f, 0xbfbfffff, 0xf8faffff, 0xffffeae0, 0xffbfbfbf, 0xafffffff},
    { 0x4094a000, 0xa4901000, 0x28580400, 0x10186800, 0x1090a400, 0xa0944000, 0x68181000, 0x04582800}
   , 0x0,90.000000,attributes+0,1,NULL,autohelperowl_attackpat312,0,0.010000},
  {owl_attackpat313,2,8, "A1302",-1,-2,1,1,2,3,0xa,685,
    { 0x3cfcfcfc, 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00, 0xf0fcfcfc},
    { 0x10a00000, 0x20240000, 0x00281000, 0x00602000, 0x00242000, 0x00a01000, 0x20600000, 0x10280000}
   , 0x10,30.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat314,3,8, "A1303",-1,-2,1,1,2,3,0xa,648,
    { 0x20fcfcfc, 0xf0f8f000, 0xfcfc2000, 0x3fbf3f00, 0xf0f8f000, 0xfcfc2000, 0x3fbf3f00, 0x20fcfcfc},
    { 0x00280020, 0x00202000, 0x00a00000, 0x20220000, 0x20200000, 0x00280000, 0x00222000, 0x00a00020}
   , 0x10,90.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat315,4,8, "A1303b",-1,-2,1,1,2,3,0xa,721,
    { 0x3fff3f00, 0x30fcfcfc, 0xf0fcf000, 0xfcfc3000, 0xfcfc3000, 0x3fff3f00, 0x30fcfcfc, 0xf0fcf000},
    { 0x20622400, 0x10a84020, 0x60242000, 0x04a81000, 0x40a81000, 0x24622000, 0x10a80420, 0x20246000}
   , 0x10,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat316,3,8, "A1303c",-1,-1,1,2,2,3,0xa,685,
    { 0xfcfefc00, 0xfcfcfc20, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcfefc00, 0xfcfcfc20, 0xfcfcfc00},
    { 0x08980000, 0x20102800, 0x00988000, 0xa0102000, 0x28102000, 0x00980800, 0x2010a000, 0x80980000}
   , 0x10,85.000000,attributes+0,1,NULL,autohelperowl_attackpat316,0,1.000000},
  {owl_attackpat317,2,8, "A1304",0,-1,1,1,1,2,0xa,685,
    { 0x00fcfc00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfcfc0000, 0x3c3c3c00, 0x00fcfc00},
    { 0x00608000, 0x90200000, 0x08240000, 0x00201800, 0x00209000, 0x80600000, 0x18200000, 0x00240800}
   , 0x10,60.000000,attributes+0,1,NULL,autohelperowl_attackpat317,3,0.016000},
  {owl_attackpat318,5,8, "A1305",0,-1,2,2,2,3,0xa,685,
    { 0x00fcffff, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0f, 0x00fcfcfc},
    { 0x00a80202, 0x20202080, 0x00a80000, 0x20202000, 0x20202000, 0x02a80000, 0x2020200a, 0x00a80000}
   , 0x10,90.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat319,4,8, "A1305b",0,-1,2,2,2,3,0xa,685,
    { 0x00fcfcfc, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0f, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0x00fcffff},
    { 0x00280000, 0x00202000, 0x02a00000, 0x2020000a, 0x20200080, 0x00280000, 0x00202000, 0x00a00202}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat320,5,8, "A1306",0,-1,2,2,2,3,0xa,686,
    { 0x00fcffff, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0f, 0x00fcfcfc},
    { 0x00a80202, 0x20202080, 0x00a80000, 0x20202000, 0x20202000, 0x02a80000, 0x2020200a, 0x00a80000}
   , 0x10,85.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat321,6,8, "A1307",-1,-1,1,2,2,3,0xa,722,
    { 0xdcffff00, 0xfcf4fcf0, 0xfcfcdc00, 0xfc7cfc00, 0xfcf4fc00, 0xffffdc00, 0xfc7cfc3c, 0xdcfcfc00},
    { 0x88221200, 0x086008a0, 0x10208800, 0x80248000, 0x08600800, 0x12228800, 0x80248028, 0x88201000}
   , 0x10,85.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat322,6,8, "A1308",-1,-1,1,2,2,3,0xa,685,
    { 0x1cfcfc00, 0xf0f4fc00, 0xfffdd000, 0xfc7c3c1c, 0xfcf4f0d0, 0xfcfc1c00, 0x3c7cfc00, 0xd0fdff00},
    { 0x08a00000, 0x20200800, 0x02288000, 0x80202008, 0x08202080, 0x00a00800, 0x20208000, 0x80280200}
   , 0x10,90.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat323,4,8, "A1309",0,-1,1,2,1,3,0xa,685,
    { 0x007cfc00, 0xd0f0f000, 0xfdf70000, 0x3c3c1c34, 0xf0f0d070, 0xfc7c0000, 0x1c3c3c00, 0x00f7fd00},
    { 0x00204000, 0x40200000, 0x04220000, 0x00200420, 0x00204020, 0x40200000, 0x04200000, 0x00220400}
   , 0x10,90.000000,attributes+0,1,NULL,autohelperowl_attackpat323,3,0.016000},
  {owl_attackpat324,3,8, "A1310",0,-1,1,2,1,3,0xa,647,
    { 0x00fffd00, 0xf0f0f070, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfdff0000, 0x3c3c3c34, 0x00fcfc00},
    { 0x00221400, 0x00604020, 0x50200000, 0x04240000, 0x40600000, 0x14220000, 0x00240420, 0x00205000}
   , 0x10,30.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat325,6,8, "A1310b",-1,-1,1,2,2,3,0xa,648,
    { 0xdcffff00, 0xfcf4fcf0, 0xfcfcdc00, 0xfc7cfc00, 0xfcf4fc00, 0xffffdc00, 0xfc7cfc3c, 0xdcfcfc00},
    { 0x88221600, 0x086048a0, 0x50208800, 0x84248000, 0x48600800, 0x16228800, 0x80248428, 0x88205000}
   , 0x10,31.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat326,4,8, "A1311",-1,-1,1,2,2,3,0xa,722,
    { 0xfcfcfc3c, 0xfcfcfc00, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcffff00, 0xfcfcfcf0},
    { 0x20908020, 0xa0180000, 0x08182000, 0x00922800, 0x0018a000, 0x80902000, 0x28920000, 0x20180820}
   , 0x10,80.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat327,4,8, "A1311b",-1,-1,1,3,2,4,0xa,721,
    { 0xfcfcfc3c, 0xfcfcfc00, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc00, 0xfcfcfc00, 0xfcffff00, 0xfcfcfcf0},
    { 0x20908020, 0xa0180000, 0x08182000, 0x00922800, 0x0018a000, 0x80902000, 0x28920000, 0x20180820}
   , 0x10,81.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat328,5,8, "A1312",-1,-1,2,2,3,3,0xa,685,
    { 0x3cfcfcfc, 0xf0fcfc00, 0xfffcf000, 0xffff3f0d, 0xfcfcf0c0, 0xfcfc3c00, 0x3fffff00, 0xf0fcfffd},
    { 0x24a00000, 0x20280400, 0x02286000, 0x40a02008, 0x04282080, 0x00a02400, 0x20a04000, 0x60280200}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat329,2,8, "A1313",-1,-2,2,3,3,5,0xa,722,
    { 0x1f3fffaf, 0xc3f7ffff, 0xfcf0d0fc, 0xff7e0e00, 0xfff7c300, 0xff3f1fff, 0x0e7effff, 0xd0f0fce8},
    { 0x00204000, 0x40200000, 0x04200000, 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x00200400}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat330,3,8, "A1314",-1,-2,1,1,2,3,0xa,722,
    { 0x3dffbf00, 0xb0fcfcf4, 0xf8fcf000, 0xfcfc3800, 0xfcfcb000, 0xbfff3d00, 0x38fcfc7c, 0xf0fcf800},
    { 0x20600000, 0x10280000, 0x00242000, 0x00a01000, 0x00281000, 0x00602000, 0x10a00000, 0x20240000}
   , 0x10,45.000000,attributes+0,1,NULL,autohelperowl_attackpat330,3,1.000000},
  {owl_attackpat331,3,8, "A1315",-2,-1,1,2,3,3,0xa,721,
    { 0xfcffff00, 0xfffffff0, 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00, 0xfffffcfc, 0xfcfcfc3c, 0xfcfcfc00},
    { 0x08210000, 0x00220910, 0x00208060, 0x80200000, 0x09220000, 0x00210824, 0x00208010, 0x80200000}
   , 0x0,55.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat332,4,8, "A1316",0,-1,2,2,2,3,0xa,685,
    { 0x00fcffff, 0xf0f0f0c0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfffc0000, 0x3f3f3f0f, 0x00fcfcfc},
    { 0x00280206, 0x00202080, 0x00a00000, 0x21200000, 0x20200000, 0x02280000, 0x0020210a, 0x00a00040}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat333,3,8, "A1317",-1,-1,1,2,2,3,0xa,685,
    { 0xfcfcfc00, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfcf0, 0xfcfcfc00, 0xfcfcfc00, 0xfcffff00},
    { 0x80a00000, 0x28200000, 0x01290800, 0x0020a014, 0x00202850, 0x00a08000, 0xa0200000, 0x08290100}
   , 0x10,55.000000,attributes+0,1,NULL,autohelperowl_attackpat333,3,0.610000},
  {owl_attackpat334,4,8, "A1318",-1,-1,1,2,2,3,0xa,647,
    { 0xfcffff00, 0xfcfcfcf0, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfc00},
    { 0x08291900, 0x0060a850, 0x90a08000, 0xa8240000, 0xa8600000, 0x19290800, 0x0024a814, 0x80a09000}
   , 0x10,55.000000,attributes+0,1,NULL,autohelperowl_attackpat334,3,0.610000},
  {owl_attackpat335,4,8, "A1319",-1,-2,2,1,3,3,0xa,758,
    { 0x3f3f7fff, 0x40fcfcfc, 0xf4f0f000, 0xffff0700, 0xfcfc4000, 0x7f3f3f00, 0x07ffffff, 0xf0f0f4fc},
    { 0x18202000, 0x00a40800, 0x20209000, 0x80680000, 0x08a40000, 0x20201800, 0x00688000, 0x90202000}
   , 0x10,61.000000,attributes+0,1,NULL,autohelperowl_attackpat335,3,1.000000},
  {owl_attackpat336,3,8, "A1319b",-1,0,2,2,3,2,0xa,685,
    { 0x3f3f3f3f, 0x00fcfcfc, 0xf0f0f000, 0xffff0000, 0xfcfc0000, 0x3f3f3f00, 0x00ffffff, 0xf0f0f0f0},
    { 0x09120200, 0x001008a4, 0x00108000, 0x80100000, 0x08100000, 0x02120900, 0x00108068, 0x80100000}
   , 0x10,30.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat337,5,8, "A1319c",-1,-2,2,1,3,3,0xa,722,
    { 0x3f3f7fff, 0x40fcfcfc, 0xf4f0f000, 0xffff0700, 0xfcfc4000, 0x7f3f3f00, 0x07ffffff, 0xf0f0f4fc},
    { 0x18212200, 0x00a40890, 0x20209000, 0x80680000, 0x08a40000, 0x22211800, 0x00688018, 0x90202000}
   , 0x10,61.000000,attributes+0,1,NULL,autohelperowl_attackpat337,3,1.000000},
  {owl_attackpat338,3,8, "A1320",-1,-1,1,1,2,2,0xa,722,
    { 0x3c3cfc00, 0xc0fcfc00, 0xfcf0f000, 0xfcfc0c00, 0xfcfcc000, 0xfc3c3c00, 0x0cfcfc00, 0xf0f0fc00},
    { 0x20249000, 0x80681000, 0x18602000, 0x10a40800, 0x10688000, 0x90242000, 0x08a41000, 0x20601800}
   , 0x10,80.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat339,3,8, "A1321",-1,-1,1,1,2,2,0xa,648,
    { 0xc0fcfc00, 0xfcf0f000, 0xfcfc0c00, 0x3c3cfc00, 0xf0f0fc00, 0xfcfcc000, 0xfc3c3c00, 0x0cfcfc00},
    { 0x80281000, 0x08602000, 0x10a00800, 0x20248000, 0x20600800, 0x10288000, 0x80242000, 0x08a01000}
   , 0x10,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat340,3,8, "A1322",-1,-2,1,0,2,2,0xa,648,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00280008, 0x00202000, 0x00a00000, 0x22200000, 0x20200000, 0x00280000, 0x00202200, 0x00a00080}
   , 0x10,40.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat341,4,8, "A1323",0,-1,3,1,3,2,0xa,649,
    { 0x00fcfcfc, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xfcfc0000, 0x3f3f3f00, 0x00fcfcfc},
    { 0x00a40808, 0x20209000, 0x80680000, 0x1a202000, 0x90202000, 0x08a40000, 0x20201a00, 0x00688080}
   , 0x10,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat342,1,8, "A1324",-3,-2,2,2,5,4,0xa,647,
    { 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff, 0xffffffff},
    { 0x40200000, 0x04210000, 0x00200410, 0x00204000, 0x00210400, 0x00204010, 0x40200000, 0x04200000}
   , 0x0,90.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat343,4,8, "A1325",-1,-1,2,2,3,3,0x6,721,
    { 0xffffff3f, 0xfcfcfcfc, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc00, 0xffffff00, 0xfcffffff, 0xfcfcfcf0},
    { 0x54208820, 0x84248400, 0x88205400, 0x48624800, 0x84248400, 0x88205400, 0x48624800, 0x54208820}
   , 0x0,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat344,2,8, "A1326",-2,-2,2,2,4,4,0x9,611,
    { 0xffffffff, 0xfcfcfefe, 0xffffff80, 0xffffffff, 0xfefcfcfc, 0xffffff0a, 0xffffffff, 0xffffffff},
    { 0x50208000, 0x84240000, 0x08211400, 0x00604810, 0x00248410, 0x80205000, 0x48600000, 0x14210800}
   , 0x0,85.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat345,3,8, "A1327",-2,-2,3,2,5,4,0x9,646,
    { 0xffffff80, 0xffffffff, 0xffffffff, 0xfcfcfefe, 0xffffffff, 0xffffffff, 0xfefcfcfc, 0xffffff0a},
    { 0x09219400, 0x80604814, 0x58208000, 0x84240800, 0x48608000, 0x94210900, 0x08248450, 0x80205800}
   , 0x90,85.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat346,7,8, "A1328",-1,-2,2,1,3,3,0xa,722,
    { 0x0d39ef5f, 0xc0b0ecd4, 0xecb0c000, 0xef390d00, 0xecb0c000, 0xef390d00, 0x0d39ef5f, 0xc0b0ecd4},
    { 0x08208000, 0x80200800, 0x08208000, 0x80200800, 0x08208000, 0x80200800, 0x08208000, 0x80200800}
   , 0x10,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat347,4,8, "A1329",-1,-1,2,1,3,2,0xa,722,
    { 0x0c3c7c6c, 0x40f0fc00, 0xf4f0c000, 0xff3e0500, 0xfcf04000, 0x7c3c0c00, 0x053eff00, 0xc0f0f4e4},
    { 0x08241004, 0x00601800, 0x10608000, 0x91240000, 0x18600000, 0x10240800, 0x00249100, 0x80601040}
   , 0x10,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat348,6,8, "A1330",-1,-1,2,1,3,2,0xa,647,
    { 0xf0fcfcec, 0xfcfcf000, 0xfcfc3c00, 0x3ffeff00, 0xf0fcfc00, 0xfcfcf000, 0xfffe3f00, 0x3cfcfcec},
    { 0xa0289844, 0x8868a000, 0x98a02800, 0x29a48900, 0xa0688800, 0x9828a000, 0x89a42900, 0x28a09844}
   , 0x10,75.000000,attributes+0,1,NULL,autohelperowl_attackpat348,3,0.610000},
  {owl_attackpat349,3,8, "A1331",-1,-1,1,1,2,2,0xa,648,
    { 0x3cfcfc00, 0xf0fcfc00, 0xfcfcf000, 0xfcfc3c00, 0xfcfcf000, 0xfcfc3c00, 0x3cfcfc00, 0xf0fcfc00},
    { 0x24902400, 0x20984400, 0x60186000, 0x44982000, 0x44982000, 0x24902400, 0x20984400, 0x60186000}
   , 0x10,55.000000,attributes+0,1,NULL,autohelperowl_attackpat349,0,1.000000},
  {owl_attackpat350,6,8, "A1332",0,-1,2,2,2,3,0xa,648,
    { 0x0074fcfc, 0xd0f0d000, 0xff740000, 0x1f3f1f0d, 0xd0f0d0c0, 0xfc740000, 0x1f3f1f00, 0x0074fffd},
    { 0x00200420, 0x00204000, 0x42200000, 0x04220008, 0x40200080, 0x04200000, 0x00220400, 0x00204220}
   , 0x10,55.000000,attributes+0,1,NULL,autohelperowl_attackpat350,3,1.000000},
  {owl_attackpat351,7,8, "A1333",-2,-1,1,2,3,3,0xa,683,
    { 0xfcfcfc00, 0xffffff00, 0xfffffffc, 0xfcfcfcfc, 0xfffffffc, 0xfcfcfcfc, 0xfcfcfc00, 0xffffff00},
    { 0x00580000, 0x12122200, 0x029602a8, 0x201010a8, 0x221212a8, 0x005800a8, 0x10102000, 0x02960200}
   , 0x10,55.000000,attributes+0,1,NULL,autohelperowl_attackpat351,0,0.016000},
  {owl_attackpat352,8,8, "A1334",-1,-1,2,2,3,3,0xa,649,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xfffffc00, 0xffffff3f, 0xfcfcfcf0, 0xfcfcfc00, 0xffffff00, 0xfcffffff},
    { 0xa8185800, 0x4858a800, 0x9692a800, 0xa894842a, 0xa85848a0, 0x5818a800, 0x8494a800, 0xa8929602}
   , 0x10,55.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat353,3,8, "A1335",-1,-2,1,1,2,3,0xa,758,
    { 0x3fffff00, 0xf0fcfcfc, 0xfcfcf000, 0xfcfc3c00, 0xfcfcf000, 0xffff3f00, 0x3cfcfcfc, 0xf0fcfc00},
    { 0x20605800, 0x50688000, 0x94242000, 0x08a41400, 0x80685000, 0x58602000, 0x14a40800, 0x20249400}
   , 0x10,41.000000,attributes+0,1,NULL,autohelperowl_attackpat353,3,1.600000},
  {owl_attackpat354,3,8, "A1335b",-1,-1,1,2,2,3,0xa,647,
    { 0xfcffff00, 0xfcfcfcf0, 0xfcfcfc00, 0xfcfcfc00, 0xfcfcfc00, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfc00},
    { 0x08192100, 0x00902850, 0x20908000, 0xa0180000, 0x28900000, 0x21190800, 0x0018a014, 0x80902000}
   , 0x10,41.000000,attributes+0,1,NULL,autohelperowl_attackpat354,0,1.600000},
  {owl_attackpat355,5,8, "A1336",0,-1,2,2,2,3,0xa,649,
    { 0x00ffffff, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xffff0000, 0x3f3f3f3f, 0x00fcfcfc},
    { 0x00a90224, 0x20202090, 0x00a80000, 0x21222000, 0x20202000, 0x02a90000, 0x20222118, 0x00a80060}
   , 0x10,35.000000,attributes+0,1,NULL,autohelperowl_attackpat355,3,1.600000},
  {owl_attackpat356,8,8, "A1337",-1,-1,2,2,3,3,0xa,686,
    { 0xf4fdfffb, 0xfcfcf4d0, 0xfcfc7c00, 0x7effff00, 0xf4fcfc00, 0xfffdf400, 0xffff7e1f, 0x7cfcfcbc},
    { 0xa0189602, 0x88586080, 0x58902800, 0x24948800, 0x60588800, 0x9618a000, 0x8894240a, 0x28905800}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat357,6,8, "A1338",-2,0,2,2,4,2,0xa,758,
    { 0x00fffff7, 0xf0f0f0f0, 0xffff0000, 0x3d3f3f3e, 0xf0f0f0f0, 0xffff0000, 0x3f3f3d3f, 0x00ffff7e},
    { 0x00608962, 0x90208040, 0x89250000, 0x08221914, 0x80209050, 0x89600000, 0x19220806, 0x00258924}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat358,6,8, "A1339",-1,0,1,2,2,2,0xa,722,
    { 0x1d3f3d00, 0x00f4fc74, 0xf0f0d000, 0xfc7c0000, 0xfcf40000, 0x3d3f1d00, 0x007cfc74, 0xd0f0f000},
    { 0x08220000, 0x00200820, 0x00208000, 0x80200000, 0x08200000, 0x00220800, 0x00208020, 0x80200000}
   , 0x10,75.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat359,5,8, "A1340",-1,-1,1,2,2,3,0xa,685,
    { 0xfcfcfc00, 0xfcfcfc00, 0xfffdfc00, 0xfcfcfc1c, 0xfcfcfcd0, 0xfcfcfc00, 0xfcfcfc00, 0xfcfdff00},
    { 0x88900000, 0x28100800, 0x02188800, 0x8010a008, 0x08102880, 0x00908800, 0xa0108000, 0x88180200}
   , 0x10,40.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat360,5,8, "A1341",-2,0,2,2,4,2,0x6,759,
    { 0x3f3f3f3f, 0x00fcfffc, 0xf0f0f0c0, 0xffff0000, 0xfffc0000, 0x3f3f3f0c, 0x00ffffff, 0xf0f0f0f0},
    { 0x22202000, 0x00a80208, 0x20202080, 0x00a80000, 0x02a80000, 0x20202208, 0x00a80080, 0x20202000}
   , 0x10,40.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat361,5,8, "A1342",-2,-2,2,0,4,2,0x8,686,
    { 0x00fcffff, 0xf0f0f0c0, 0xffff0000, 0x3f3f3f3f, 0xf0f0f0f0, 0xfffc0000, 0x3f3f3f0f, 0x00ffffff},
    { 0x00a80900, 0x2020a040, 0x82a90000, 0x28202018, 0xa0202090, 0x09a80000, 0x20202804, 0x00a98200}
   , 0x90,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat362,6,8, "A1343",-1,-2,1,1,2,3,0xa,722,
    { 0x347c7c7c, 0x50fcf400, 0xf4f47000, 0x7fff1500, 0xf4fc5000, 0x7c7c3400, 0x15ff7f00, 0x70f4f4f4},
    { 0x20200000, 0x00280000, 0x00202000, 0x00a00000, 0x00280000, 0x00202000, 0x00a00000, 0x20200000}
   , 0x10,46.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat363,4,8, "A1344",0,-1,1,2,1,3,0x2,722,
    { 0x00fcff00, 0xf0f0f0c0, 0xfcfc0000, 0x3c3c3c00, 0xf0f0f000, 0xfffc0000, 0x3c3c3c0c, 0x00fcfc00},
    { 0x00a88100, 0xa0202040, 0x08a80000, 0x20202800, 0x2020a000, 0x81a80000, 0x28202004, 0x00a80800}
   , 0x10,46.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat364,2,8, "A1345",-1,-2,1,1,2,3,0xa,685,
    { 0xfcfcfcfc, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfc00, 0xfcfcfc00, 0xffffff00, 0xfcfcfcfc},
    { 0x54208000, 0x84240400, 0x08205400, 0x40604800, 0x04248400, 0x80205400, 0x48604000, 0x54200800}
   , 0x10,46.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat365,6,8, "A1346",-1,-1,1,2,2,3,0x6,720,
    { 0xfc3c3400, 0x0dfd7f00, 0x70f0fcd4, 0xf4fcc000, 0x7ffd0d00, 0x343cfc5c, 0xc0fcf400, 0xfcf07000},
    { 0x80202000, 0x08a00000, 0x20200800, 0x00288000, 0x00a00800, 0x20208000, 0x80280000, 0x08202000}
   , 0x10,75.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat366,5,8, "A1347",-1,-2,2,0,3,2,0xa,759,
    { 0x053f3f0f, 0x00f0f4f4, 0xf0f04000, 0x7f3c0000, 0xf4f00000, 0x3f3f0500, 0x003c7f7f, 0x40f0f0c0},
    { 0x00202009, 0x00a00000, 0x20200000, 0x02280000, 0x00a00000, 0x20200000, 0x00280201, 0x00202080}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat367,8,8, "A1348",-2,-1,1,1,3,2,0xa,685,
    { 0xdcfcfc00, 0xfdf7fc00, 0xfcfcdc34, 0xfc7cfc00, 0xfcf7fd00, 0xfcfcdc70, 0xfc7cfc00, 0xdcfcfc00},
    { 0x48688800, 0x9422a800, 0x88a48420, 0xa8205800, 0xa8229400, 0x88684820, 0x5820a800, 0x84a48800}
   , 0x10,75.000000,attributes+0,1,NULL,autohelperowl_attackpat367,3,0.376000},
  {owl_attackpat368,6,8, "A1349a",-2,0,3,2,5,2,0xa,686,
    { 0x3f3f3f3f, 0x00fffffc, 0xf0f0f0f0, 0xffff0000, 0xffff0000, 0x3f3f3f3c, 0x00ffffff, 0xf0f0f0f0},
    { 0x09220202, 0x002009a4, 0x00208040, 0x80200000, 0x09200000, 0x02220904, 0x0020806a, 0x80200000}
   , 0x10,75.000000,attributes+0,1,NULL,autohelperowl_attackpat368,3,1.000000},
  {owl_attackpat369,7,8, "A1349b",-3,0,3,2,6,2,0xa,686,
    { 0x3f3f3f3f, 0x00ffffff, 0xf0f0f0f0, 0xffff0000, 0xffff0000, 0x3f3f3f3f, 0x00ffffff, 0xf0f0f0f0},
    { 0x09220202, 0x00210aa5, 0x00208090, 0x80200000, 0x0a210000, 0x02220919, 0x0020806a, 0x80200000}
   , 0x10,75.000000,attributes+0,1,NULL,autohelperowl_attackpat369,3,1.000000},
  {owl_attackpat370,7,8, "A1350",-1,-2,2,1,3,3,0xa,723,
    { 0x3f3fffff, 0xc0fcfcfc, 0xfcf0f000, 0xffff0f00, 0xfcfcc000, 0xff3f3f00, 0x0fffffff, 0xf0f0fcfc},
    { 0x2a21a240, 0x80a80898, 0x2820a000, 0x80a80900, 0x08a88000, 0xa2212a00, 0x09a88098, 0xa0202804}
   , 0x10,75.000000,attributes+0,1,NULL,autohelperowl_attackpat370,3,0.010000},
  {owl_attackpat371,6,8, "A1351",-2,-1,2,2,4,3,0xa,648,
    { 0xfcfffcfc, 0xfffffc30, 0xfcfcfc3c, 0xffffff00, 0xfcffff00, 0xfcfffcf0, 0xffffff30, 0xfcfcfcfc},
    { 0x98220808, 0x09258820, 0x80209814, 0x8a608000, 0x88250900, 0x08229850, 0x80608a20, 0x98208080}
   , 0x10,75.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat372,6,8, "A1352a",-1,-2,2,1,3,3,0xa,648,
    { 0xc0f0fcf4, 0xfcf0c000, 0xff3f0c00, 0x0d3fff3f, 0xc0f0fcf0, 0xfcf0c000, 0xff3f0d00, 0x0c3fff7f},
    { 0x80202800, 0x08a08000, 0xa0220800, 0x08288020, 0x80a00820, 0x28208000, 0x80280800, 0x0822a000}
   , 0x10,55.000000,attributes+0,1,NULL,autohelperowl_attackpat372,3,0.010000},
  {owl_attackpat373,6,8, "A1352b",-1,-2,2,1,3,3,0xa,648,
    { 0xc0f0fcf4, 0xfcf0c000, 0xff3f0c00, 0x0d3fff3f, 0xc0f0fcf0, 0xfcf0c000, 0xff3f0d00, 0x0c3fff7f},
    { 0x80202800, 0x08a08000, 0xa0220800, 0x08288020, 0x80a00820, 0x28208000, 0x80280800, 0x0822a000}
   , 0x10,75.000000,attributes+0,1,NULL,autohelperowl_attackpat373,3,0.610000},
  {owl_attackpat374,1,4, "A1401",0,0,3,3,3,3,0x6,722,
    { 0x003f3f3f, 0x00f0f0f0, 0xf0f00000, 0x3f3f0000, 0xf0f00000, 0x3f3f0000, 0x003f3f3f, 0x00f0f0f0},
    { 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000, 0x00200000}
   , 0x0,46.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat375,1,8, "A1403",0,-2,3,1,3,3,0x6,722,
    { 0x00fffffe, 0xf0f0f0f0, 0xfcfc0000, 0x3f3f3f00, 0xf0f0f000, 0xffff0000, 0x3f3f3f3e, 0x00fcfcfc},
    { 0x00120000, 0x00100020, 0x00100000, 0x00100000, 0x00100000, 0x00120000, 0x00100020, 0x00100000}
   , 0x0,55.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat376,1,8, "A1501",-1,0,0,1,1,1,0x0,685,
    { 0x00303c00, 0x00f0c000, 0xf0300000, 0x0c3c0000, 0xc0f00000, 0x3c300000, 0x003c0c00, 0x0030f000},
    { 0x00200400, 0x00204000, 0x40200000, 0x04200000, 0x40200000, 0x04200000, 0x00200400, 0x00204000}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_attackpat376,3,0.058000},
  {owl_attackpat377,1,4, "A1502",0,0,0,2,0,2,0x0,685,
    { 0x00303030, 0x00f00000, 0x30300000, 0x003f0000, 0x00f00000, 0x30300000, 0x003f0000, 0x00303030},
    { 0x00200010, 0x00200000, 0x00200000, 0x00210000, 0x00200000, 0x00200000, 0x00210000, 0x00200010}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_attackpat377,3,0.058000},
  {owl_attackpat378,4,8, "A1503",-2,-1,1,1,3,2,0x0,685,
    { 0x30fcfcf0, 0xf0fcf000, 0xfcfc3000, 0x3cff3f00, 0xf0fcf000, 0xfcfc3000, 0x3fff3c00, 0x30fcfc3c},
    { 0x10648860, 0x90249000, 0x88641000, 0x18621900, 0x90249000, 0x88641000, 0x19621800, 0x10648824}
   , 0x90,75.000000,attributes+0,1,NULL,autohelperowl_attackpat378,3,0.016000},
  {owl_attackpat379,4,8, "A1503a",-2,-1,1,1,3,2,0x0,685,
    { 0x30fcfcf0, 0xf0fcf000, 0xfcfc3000, 0x3cff3f00, 0xf0fcf000, 0xfcfc3000, 0x3fff3c00, 0x30fcfc3c},
    { 0x10648860, 0x90249000, 0x88641000, 0x18621900, 0x90249000, 0x88641000, 0x19621800, 0x10648824}
   , 0x90,75.000000,attributes+0,1,NULL,autohelperowl_attackpat379,3,0.016000},
  {owl_attackpat380,6,8, "A1504",-1,-2,1,2,2,4,0x2,719,
    { 0xfcfcfcfc, 0xffffff00, 0xfcfcfcfc, 0xffffff00, 0xffffff00, 0xfcfcfcfc, 0xffffff00, 0xfcfcfcfc},
    { 0x90a08860, 0xa9248000, 0x88281804, 0x0862a900, 0x8024a900, 0x88a09040, 0xa9620800, 0x18288824}
   , 0x0,60.000000,attributes+0,1,NULL,autohelperowl_attackpat380,3,1.600000},
  {owl_attackpat381,4,8, "A1601",-1,0,1,2,2,2,0x2,722,
    { 0x003c7c7c, 0x40f0f000, 0xf4f00000, 0x3f3f0500, 0xf0f04000, 0x7c3c0000, 0x053f3f00, 0x00f0f4f4},
    { 0x00200008, 0x00200000, 0x00200000, 0x02200000, 0x00200000, 0x00200000, 0x00200200, 0x00200080}
   , 0x10,35.000000,attributes+0,1,NULL,autohelperowl_attackpat381,3,1.960000},
  {owl_attackpat382,3,8, "A1602",-1,-2,1,1,2,3,0x2,686,
    { 0x30fcfcfc, 0xf0fcf000, 0xfcfc3000, 0x3fff3f00, 0xf0fcf000, 0xfcfc3000, 0x3fff3f00, 0x30fcfcfc},
    { 0x10608800, 0x90248000, 0x88241000, 0x08601800, 0x80249000, 0x88601000, 0x18600800, 0x10248800}
   , 0x90,55.000000,attributes+0,1,NULL,autohelperowl_attackpat382,3,1.000000},
  {owl_attackpat383,3,8, "A1603",-1,-2,1,1,2,3,0x2,758,
    { 0x3fff3f00, 0x30fcfcfc, 0xf0fcf000, 0xfcfc3000, 0xfcfc3000, 0x3fff3f00, 0x30fcfcfc, 0xf0fcf000},
    { 0x18602000, 0x10a40800, 0x20249000, 0x80681000, 0x08a41000, 0x20601800, 0x10688000, 0x90242000}
   , 0x90,55.000000,attributes+0,1,NULL,autohelperowl_attackpat383,3,1.000000},
  {owl_attackpat384,4,8, "A1604",0,-2,2,2,2,4,0x2,648,
    { 0x00fcfffc, 0xf0f0f0c0, 0xfffc0000, 0x3f3f3f0f, 0xf0f0f0c0, 0xfffc0000, 0x3f3f3f0c, 0x00fcffff},
    { 0x00a40920, 0x20209040, 0x81680000, 0x18222004, 0x90202040, 0x09a40000, 0x20221804, 0x00688120}
   , 0x90,55.000000,attributes+0,1,NULL,autohelperowl_attackpat384,3,1.000000},
  {owl_attackpat385,4,8, "A1605",0,-2,2,2,2,4,0x2,648,
    { 0x00fcfffc, 0xf0f0f0c0, 0xfffc0000, 0x3f3f3f0f, 0xf0f0f0c0, 0xfffc0000, 0x3f3f3f0c, 0x00fcffff},
    { 0x00a40908, 0x20209040, 0x81680000, 0x1a202004, 0x90202040, 0x09a40000, 0x20201a04, 0x00688180}
   , 0x90,55.000000,attributes+0,1,NULL,autohelperowl_attackpat385,3,1.000000},
  {owl_attackpat386,4,8, "A1606",-1,-2,1,1,2,3,0x2,686,
    { 0x30fcfcfc, 0xf0fcf000, 0xfcfc3000, 0x3fff3f00, 0xf0fcf000, 0xfcfc3000, 0x3fff3f00, 0x30fcfcfc},
    { 0x10608880, 0x90248000, 0x88241000, 0x08601a00, 0x80249000, 0x88601000, 0x1a600800, 0x10248808}
   , 0x90,35.000000,attributes+0,1,NULL,autohelperowl_attackpat386,3,1.000000},
  {owl_attackpat387,4,8, "A1607",-1,-2,1,1,2,3,0x2,758,
    { 0x3fff3f00, 0x30fcfcfc, 0xf0fcf000, 0xfcfc3000, 0xfcfc3000, 0x3fff3f00, 0x30fcfcfc, 0xf0fcf000},
    { 0x1a602000, 0x10a40808, 0x20249000, 0x80681000, 0x08a41000, 0x20601a00, 0x10688080, 0x90242000}
   , 0x10,35.000000,attributes+0,1,NULL,autohelperowl_attackpat387,3,1.000000},
  {owl_attackpat388,4,8, "A1608",-1,-2,1,1,2,3,0x2,685,
    { 0x3cfcfcfc, 0xf0fcfc00, 0xfcfcf000, 0xffff3f00, 0xfcfcf000, 0xfcfc3c00, 0x3fffff00, 0xf0fcfcfc},
    { 0x14608880, 0x90248400, 0x88245000, 0x48601a00, 0x84249000, 0x88601400, 0x1a604800, 0x50248808}
   , 0x10,45.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat389,5,8, "A1608b",0,-2,2,2,2,4,0x2,723,
    { 0x00fcffff, 0xf0f0f0c0, 0xfffd0000, 0x3f3f3f1f, 0xf0f0f0d0, 0xfffc0000, 0x3f3f3f0f, 0x00fdffff},
    { 0x00a40921, 0x20209040, 0x80680000, 0x18222000, 0x90202000, 0x09a40000, 0x20221805, 0x00688020}
   , 0x10,50.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat390,4,8, "A1609",-1,-2,1,2,2,4,0x2,722,
    { 0xfcffff00, 0xfcfcfcf0, 0xfffffc00, 0xfcfcfc3c, 0xfcfcfcf0, 0xfffffc00, 0xfcfcfc3c, 0xfcffff00},
    { 0x58228000, 0x84240820, 0x09219400, 0x80604814, 0x08248450, 0x80225800, 0x48608020, 0x94210900}
   , 0x10,35.000000,attributes+0,0,NULL,NULL,3,0.000000},
  {owl_attackpat391,5,8, "A1610",0,-2,2,2,2,4,0x2,723,
    { 0x00fcffff, 0xf0f0f0c0, 0xffff0000, 0x3f3f3f3f, 0xf0f0f0f0, 0xfffc0000, 0x3f3f3f0f, 0x00ffffff},
    { 0x00a80180, 0x20202040, 0x02a90000, 0x20202218, 0x20202090, 0x01a80000, 0x22202004, 0x00a90208}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat391,3,0.970000},
  {owl_attackpat392,6,8, "A1611",0,-2,2,3,2,5,0x2,686,
    { 0x00fdffff, 0xf0f0f0d0, 0xffff0000, 0x3f3f3f3f, 0xf0f0f0f0, 0xfffd0000, 0x3f3f3f1f, 0x00ffffff},
    { 0x00a80200, 0x20202080, 0x02a90000, 0x20202018, 0x20202090, 0x02a80000, 0x20202008, 0x00a90200}
   , 0x0,35.000000,attributes+0,1,NULL,autohelperowl_attackpat392,3,1.600000},
  {owl_attackpat393,4,8, "A1612",-1,-1,1,3,2,4,0x2,683,
    { 0x3c3f3f00, 0x00fcfcf0, 0xf0f0f000, 0xfcfc0000, 0xfcfc0000, 0x3f3f3c00, 0x00fcfc3c, 0xf0f0f000},
    { 0x08220800, 0x00208820, 0x80208000, 0x88200000, 0x88200000, 0x08220800, 0x00208820, 0x80208000}
   , 0x0,45.000000,attributes+0,1,NULL,autohelperowl_attackpat393,3,0.610000},
  {owl_attackpat394,6,8, "A1613",-1,-1,1,2,2,3,0x2,722,
    { 0x3cfdff00, 0xf0fcfcd0, 0xfcfcf000, 0xfcfc3c00, 0xfcfcf000, 0xfffd3c00, 0x3cfcfc1c, 0xf0fcfc00},
    { 0x28906200, 0x60980880, 0x2418a000, 0x80982400, 0x08986000, 0x62902800, 0x24988008, 0xa0182400}
   , 0x10,75.000000,attributes+0,0,NULL,NULL,0,0.000000},
  {owl_attackpat395,5,8, "AC01",0,-1,2,1,2,2,0x2,649,
    { 0x007c7cfc, 0x50f0f000, 0xf4f40000, 0x3f3f1700, 0xf0f05000, 0x7c7c0000, 0x173f3f00, 0x00f4f4fc},
    { 0x00240808, 0x00209000, 0x80600000, 0x1a200000, 0x90200000, 0x08240000, 0x00201a00, 0x00608080}
   , 0x110,25.000000,attributes+1,1,NULL,autohelperowl_attackpat395,3,0.034000},
  {owl_attackpat396,6,8, "AE01",-2,-1,1,1,3,2,0xa,685,
    { 0xfcf4fc00, 0xffffdd00, 0xfc7cfc7c, 0xdcfcfc00, 0xddffff00, 0xfcf4fcf4, 0xfcfcdc00, 0xfc7cfc00},
    { 0x88200000, 0x09220800, 0x00208824, 0x80208000, 0x08220900, 0x00208860, 0x80208000, 0x88200000}
   , 0x110,20.000000,attributes+3,1,NULL,autohelperowl_attackpat396,3,0.610000},
  {NULL, 0,0,NULL,0,0,0,0,0,0,0,0,{0,0,0,0,0,0,0,0},{0,0,0,0,0,0,0,0},0,0.0,NULL,0,NULL,NULL,0,0.0}
};

#include "dfa-mkpat.h"
static const state_rt_t state_owl_attackpat[9415] = {
{{0,0,0,0}, 0},	{{0,1,28,0}, 0},	{{1,95,99,0}, 0},
{{1,112,126,0}, 0},	{{1,139,141,146}, 0},	{{1,150,154,166}, 0},
{{1,169,172,195}, 0},	{{1,0,196,0}, 0},	{{1,219,226,166}, 0},
{{1,234,235,271}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,274,274,277}, 0},
{{1,0,0,0}, 0},	{{1,112,274,0}, 0},	{{1,1,277,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,278,0}, 0},	{{1,278,298,0}, 0},
{{1,309,321,336}, 0},	{{1,338,403,413}, 0},	{{1,463,513,522}, 0},
{{1,542,619,631}, 0},	{{1,638,658,0}, 0},	{{1,676,687,522}, 0},
{{1,692,738,798}, 0},	{{1,837,841,413}, 0},	{{1,842,1,843}, 0},
{{1,403,403,413}, 0},	{{1,856,860,896}, 0},	{{1,922,963,975}, 0},
{{1,0,986,0}, 0},	{{1,986,522,522}, 0},	{{1,987,798,798}, 0},
{{1,1002,896,896}, 0},	{{1,692,738,1002}, 0},	{{1,1,843,843}, 0},
{{1,1,843,843}, 0},	{{1,1,1,1011}, 0},	{{1,1,1,843}, 0},
{{1,338,338,1027}, 0},	{{1,1,860,1042}, 0},	{{1,1043,1,1066}, 0},
{{1,1088,463,0}, 0},	{{1,922,463,0}, 0},	{{1,738,798,798}, 0},
{{1,860,896,896}, 0},	{{1,738,798,798}, 0},	{{1,1,463,463}, 0},
{{1,1,1,1}, 0},	{{1,1,1,692}, 0},	{{1,1,692,692}, 0},
{{1,1,1,1011}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1011}, 0},
{{1,1,1,1077}, 0},	{{1,1,338,338}, 149},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1043,1,1043}, 0},	{{1,1043,1,1066}, 0},
{{1,1072,1072,922}, 0},	{{1,1072,860,463}, 0},	{{1,738,798,798}, 0},
{{1,1,463,463}, 0},	{{1,1,1,1}, 150},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,692}, 0},
{{1,1,1,692}, 0},	{{1,1,1,1}, 151},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,738,738,738}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 153},	{{1,1051,1054,0}, 0},	{{1,1,1051,0}, 0},
{{1,1053,1053,1053}, 0},	{{0,0,1053,0}, 0},	{{1,1055,1059,0}, 0},
{{1,1068,1071,1074}, 0},	{{1,1075,1078,1049}, 0},	{{1,1084,1085,1095}, 0},
{{1,1102,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,0,1,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,1095,0}, 0},	{{1,1,1119,1119}, 0},	{{1,1121,1130,0}, 0},
{{1,1141,1142,1141}, 0},	{{1,0,85,0}, 0},	{{1,1142,1143,0}, 0},
{{1,1,1,1160}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1121}, 0},	{{1,0,0,1161}, 0},
{{1,0,1163,0}, 0},	{{1,1,0,0}, 0},	{{0,0,1172,0}, 0},
{{1,1180,1190,1193}, 0},	{{1,1194,1203,1215}, 0},	{{1,1218,1220,1228}, 0},
{{1,0,71,0}, 0},	{{1,1215,1234,1215}, 0},	{{1,1180,1234,1239}, 0},
{{1,1180,1180,1180}, 0},	{{1,1180,1180,1180}, 0},	{{1,1180,1180,1180}, 0},
{{1,1180,1180,1180}, 0},	{{1,1,1,1242}, 0},	{{1,1,1,0}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 68},	{{1,12,1245,1246}, 0},
{{-137,1248,34,57}, 0},	{{1,1250,1251,1254}, 0},	{{1,1246,1254,1257}, 0},
{{1,0,1259,0}, 0},	{{1,79,86,26}, 0},	{{-139,94,95,1265}, 0},
{{1,1267,1271,1275}, 0},	{{1,1278,1280,50}, 0},	{{1,0,1254,0}, 0},
{{1,1281,1282,1275}, 0},	{{-144,-144,90,126}, 0},	{{1,1237,1281,46}, 0},
{{1,0,1281,0}, 0},	{{1,70,1287,17}, 0},	{{-148,85,1296,122}, 0},
{{1,1299,1302,1313}, 0},	{{1,1320,1322,1320}, 0},	{{1,1331,73,13}, 0},
{{1,1332,1333,1341}, 40},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1344,1344,1347}, 0},
{{1,0,1322,0}, 0},	{{1,-41,1344,0}, 0},	{{-152,-152,124,-152}, 41},
{{1,1346,1348,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1348}, 0},
{{0,1348,1349,0}, 0},	{{1,0,1353,0}, 0},	{{1,1218,1353,1218}, 0},
{{0,1361,1367,0}, 0},	{{1,0,1372,0}, 0},	{{1,1,1378,1}, 0},
{{1,1342,1386,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,1387,0}, 0},
{{1,0,1327,0}, 0},	{{0,0,1389,0}, 0},	{{1,0,1389,0}, 0},
{{1,1,1,1389}, 0},	{{1,1,1,1204}, 0},	{{1,1,1,1}, 0},
{{1,1,1204,1204}, 0},	{{1,1235,1,0}, 0},	{{1,1204,1204,1389}, 0},
{{1,1400,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 15},	{{1,1399,1400,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{-106,0,0,0}, 0},
{{1,1412,1413,1430}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1431,0,0}, 0},	{{1,1431,1,0}, 0},	{{0,0,1431,0}, 0},
{{-232,-232,1441,-232}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1442}, 0},	{{1,40,40,1446}, 0},
{{1,0,0,0}, 0},	{{1,1384,1456,0}, 0},	{{1,-233,1456,-233}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-233}, 0},
{{1,0,0,0}, 0},	{{1,1,1473,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{0,1457,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{-269,-269,-269,-269}, 0},
{{1,0,0,0}, 0},	{{1,0,1,0}, 0},	{{0,0,1447,0}, 0},
{{1,0,0,0}, 0},	{{1,0,-2,0}, 0},	{{0,0,1445,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1445}, 0},
{{1,1380,1380,1380}, 0},	{{1,1,1459,1}, 0},	{{0,1459,0,0}, 0},
{{0,0,0,0}, 1},	{{1,1458,1464,1469}, 0},	{{1,1471,1489,1491}, 0},
{{1,1493,1497,1499}, 0},	{{1,1501,1,1503}, 0},	{{1,1510,1525,0}, 0},
{{1,1542,1543,1493}, 0},	{{1,0,0,1544}, 0},	{{1,1551,1551,0}, 0},
{{1,1471,1471,1559}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1510,1510,0}, 0},	{{1,1,1,1}, 0},	{{1,1510,1510,1561}, 0},
{{1,0,0,0}, 0},	{{1,1471,1471,0}, 360},	{{0,0,0,1559}, 361},
{{1,1572,1580,0}, 0},	{{1,1583,1590,0}, 0},	{{1,1599,1601,1602}, 0},
{{1,1605,1599,1609}, 0},	{{1,0,1611,0}, 0},	{{1,1,1,1602}, 0},
{{1,0,0,1614}, 0},	{{1,1616,1583,0}, 0},	{{1,1,1,1620}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1621}, 0},
{{1,1621,1627,1629}, 0},	{{1,1633,1643,1648}, 0},	{{1,1652,1701,1712}, 0},
{{1,1719,1737,0}, 0},	{{1,1746,1753,1648}, 0},	{{1,1,1,1754}, 0},
{{1,1,1760,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1761,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,1760,0}, 0},
{{1,1761,1763,1765}, 0},	{{1,1766,1775,1783}, 0},	{{1,1791,1800,1809}, 0},
{{1,1816,1823,0}, 0},	{{1,1828,1834,1783}, 0},	{{1,1839,1847,1852}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1853}, 0},	{{1,1839,1854,1867}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,1867,0}, 0},	{{0,1878,0,0}, 0},
{{1,1878,1880,1878}, 0},	{{1,1878,1878,1878}, 0},	{{0,1880,0,1881}, 0},
{{1,1883,1887,1891}, 0},	{{1,1894,1903,1910}, 0},	{{1,1917,1918,0}, 0},
{{1,1919,1927,1891}, 0},	{{1,1930,1947,1987}, 0},	{{1,500,76,76}, 0},
{{1,1,1,2001}, 0},	{{1,66,1,76}, 0},	{{1,519,523,559}, 0},
{{1,2001,626,2002}, 0},	{{1,0,649,0}, 0},	{{1,649,185,185}, 0},
{{1,2009,1987,1987}, 0},	{{1,665,559,559}, 0},	{{1,1930,1947,2023}, 0},
{{1,1,76,76}, 0},	{{1,1,76,76}, 0},	{{1,1,1,2032}, 0},
{{1,1,1,76}, 0},	{{1,1,1,690}, 0},	{{1,1,523,705}, 0},
{{1,2046,1,2069}, 0},	{{1,2091,126,0}, 0},	{{1,126,126,0}, 0},
{{1,1947,0,0}, 0},	{{1,523,559,559}, 0},	{{1,1947,0,0}, 0},
{{1,1,126,126}, 0},	{{1,1,1,1}, 0},	{{1,1,1,76}, 0},
{{1,1,76,76}, 0},	{{1,1,1,2032}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2032}, 0},	{{1,1,1,690}, 0},	{{1,1,1,1}, 149},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2046,1,2046}, 0},
{{1,2046,1,2069}, 0},	{{1,523,523,126}, 0},	{{1,523,523,126}, 0},
{{1,1947,0,0}, 0},	{{1,1,126,126}, 0},	{{1,1,1,1}, 150},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,76}, 0},	{{1,1,1,76}, 0},	{{1,1,1,1}, 151},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 154},	{{1,2049,2050,2054}, 0},
{{1,2056,2058,2062}, 0},	{{1,1852,256,0}, 0},	{{1,274,2068,120}, 0},
{{1,2068,1882,2069}, 0},	{{1,435,11,11}, 0},	{{1,1,1,11}, 0},
{{1,1,1,11}, 0},	{{1,454,458,494}, 0},	{{-64,1936,561,573}, 0},
{{1,2068,2081,2090}, 0},	{{1,2094,2103,2105}, 0},	{{1,1842,246,0}, 0},
{{1,2111,2117,2090}, 0},	{{1,2058,1872,1912}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2114,2118,2131}, 0},
{{1,2143,2144,563}, 0},	{{1,0,574,0}, 0},	{{1,110,110,110}, 0},
{{1,1934,1912,1912}, 0},	{{1,2141,2131,2131}, 0},	{{1,1855,1872,1948}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,2118,2131}, 0},
{{1,2134,1,1994}, 0},	{{1,2140,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1872,0,0}, 0},	{{1,1872,0,0}, 0},	{{1,1872,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1994,1,1994}, 0},
{{1,1994,1,1994}, 0},	{{1,1872,1872,0}, 0},	{{1,1872,1872,0}, 0},
{{1,1872,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 150},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-74,-74,-74,-74}, 0},
{{1,2112,2113,2123}, 0},	{{1,2129,2130,0}, 0},	{{1,214,2139,60}, 0},
{{1,2140,2140,2145}, 0},	{{1,2151,2018,2018}, 0},	{{1,1,1,2018}, 0},
{{1,1,1,2018}, 0},	{{1,1,1,2152}, 0},	{{1,1876,1876,2093}, 0},
{{1,0,524,0}, 0},	{{1,524,60,60}, 0},	{{1,0,0,0}, 0},
{{1,2161,2152,2152}, 0},	{{1,0,0,0}, 0},	{{1,1,60,60}, 0},
{{1,1,60,60}, 0},	{{1,1,1,2158}, 0},	{{1,1,1,60}, 0},
{{1,1,1,2152}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2172}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,0,0,0}, 0},
{{1,1,434,434}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,2158}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2158}, 0},
{{1,1,1,434}, 0},	{{1,1,1,1}, 149},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 151},	{{1,1946,2149,2152}, 0},
{{1,1624,2159,0}, 0},	{{1,164,175,10}, 0},	{{1,2164,2169,2174}, 0},
{{1,2179,1981,1981}, 0},	{{1,1,1,1981}, 0},	{{1,1,1,1981}, 0},
{{1,1,1,2180}, 0},	{{-49,1826,1826,463}, 0},	{{1,2179,2180,2184}, 0},
{{1,2186,0,0}, 0},	{{1,1,1,2186}, 0},	{{1,2081,2081,2081}, 0},
{{1,2185,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2034,2034,2034}, 0},	{{1,0,465,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2113}, 0},	{{1,2172,1570,1570}, 197},
{{1,2174,2185,1965}, 0},	{{1,2185,2185,2185}, 0},	{{1,1,2185,2185}, 0},
{{1,1690,1690,1965}, 0},	{{1,1690,1690,1965}, 0},	{{1,1690,1690,2187}, 0},
{{1,1,1,2185}, 0},	{{1,1419,2198,1419}, 0},	{{1,1,0,0}, 0},
{{1,1419,1419,1419}, 0},	{{1,422,2187,2187}, 0},	{{1,1419,1419,1419}, 0},
{{1,1,1419,1419}, 0},	{{1,1,1419,1419}, 0},	{{1,422,422,2192}, 0},
{{1,422,422,0}, 0},	{{1,422,422,2187}, 0},	{{1,422,422,422}, 0},
{{1,1,1,1419}, 0},	{{1,1,1,1419}, 0},	{{1,1,1,1419}, 0},
{{1,1419,1419,1419}, 0},	{{1,1,355,355}, 0},	{{1,1419,1419,1419}, 0},
{{1,-78,-78,-78}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1419}, 0},
{{1,1,1419,1419}, 0},	{{1,1,1,2182}, 0},	{{1,1,1,1}, 0},
{{1,-78,-78,2079}, 0},	{{1,-78,-78,355}, 0},	{{1,-78,-78,-78}, 149},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1419}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1419,1419,1419}, 0},	{{1,1,-78,-78}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1419}, 0},	{{1,1,1,1419}, 0},	{{1,1,1,1}, 151},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 198},	{{1,2138,2147,0}, 0},	{{1,2083,2156,2083}, 0},
{{1,1,1,1}, 203},	{{1,1622,2156,1622}, 0},	{{1,1,1,1}, 0},
{{1,1622,1622,1622}, 0},	{{1,1,2159,1323}, 0},	{{1,1,1,1}, 0},
{{1,0,2174,0}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{0,2172,0,0}, 0},	{{1,2172,2173,1586}, 0},	{{1,2174,2175,2075}, 0},
{{1,2176,2177,2182}, 0},	{{1,2177,2185,2177}, 0},	{{1,1,1,2177}, 0},
{{1,2034,2034,1887}, 0},	{{1,2034,2034,2034}, 0},	{{0,0,0,2182}, 0},
{{1,2182,2183,0}, 185},	{{1,1,1,2198}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2201,2201,2204}, 0},
{{1,1390,2204,2237}, 0},	{{1,1390,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1687,1687,1687}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2229}, 0},
{{1,1,1,1}, 0},	{{0,1915,0,0}, 0},	{{1,0,2233,0}, 0},
{{1,1,1486,1486}, 193},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2233,2234,2233}, 0},	{{1,1935,1935,1935}, 0},
{{1,0,0,0}, 0},	{{1,1935,1935,0}, 0},	{{1,1,1,1}, 194},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,2222}, 0},
{{1,2237,2274,2279}, 0},	{{1,2279,1848,1848}, 0},	{{1,1581,1581,1848}, 0},
{{1,1,1,1848}, 0},	{{1,1,1,2280}, 0},	{{1,2285,1663,2286}, 0},
{{1,0,311,0}, 0},	{{1,1,-153,-153}, 0},	{{1,0,0,0}, 0},
{{1,1,2280,2280}, 0},	{{-212,0,0,2293}, 0},	{{1,2295,2300,2000}, 0},
{{1,2300,2304,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-164,1869,1869,2304}, 0},	{{1,1576,2304,1576}, 0},
{{1,1,1,1}, 0},	{{1,1576,1576,1576}, 0},	{{1,2303,2307,2308}, 0},
{{1,2309,1865,2322}, 0},	{{1,0,295,0}, 0},	{{1,0,0,0}, 0},
{{1,296,107,107}, 0},	{{1,1593,1633,1633}, 0},	{{1,1,47,107}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1576,1576,1576}, 0},	{{1,1,1593,-53}, 0},
{{1,2322,1,2322}, 0},	{{1,2328,0,0}, 0},	{{1,107,0,0}, 0},
{{1,47,107,107}, 0},	{{1,1593,0,0}, 0},	{{1,47,107,107}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,-278,-278}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,375,1,375}, 0},
{{1,375,1,375}, 0},	{{1,47,47,107}, 0},	{{1,47,1593,0}, 0},
{{1,47,107,107}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 150},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-690,-690,-690,-690}, 0},
{{1,1547,2300,1547}, 0},	{{1,1,1,1}, 0},	{{1,1547,1547,1547}, 0},
{{1,2299,2299,2300}, 0},	{{1,2263,1819,2253}, 0},	{{1,0,249,0}, 0},
{{1,0,0,0}, 0},	{{1,1,61,61}, 0},	{{1,1547,1587,1587}, 0},
{{1,1,1,61}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1547,1547,1547}, 0},
{{1,1,1547,-99}, 0},	{{1,61,1,61}, 0},	{{1,2282,0,0}, 0},
{{1,61,0,0}, 0},	{{1,1,61,61}, 0},	{{1,1547,0,0}, 0},
{{1,1,61,61}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1547,1547}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,61,1,61}, 0},	{{1,61,1,61}, 0},	{{1,1,1,61}, 0},
{{1,1,1547,0}, 0},	{{1,1,61,61}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 150},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 152},
{{1,1527,2244,1527}, 0},	{{1,1,1,1}, 0},	{{1,1527,1527,1527}, 0},
{{1,2243,2243,2243}, 0},	{{1,2243,2245,2246}, 0},	{{1,0,2246,0}, 0},
{{1,2247,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1527,1527,1527}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1527,1527,1527}, 0},
{{1,1,-159,-159}, 0},	{{1,1,1,1}, 0},	{{1,2222,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{-59,-59,-59,-59}, 0},	{{1,1,1,2214}, 0},	{{1,1,1,2214}, 0},
{{1,2215,2216,2217}, 0},	{{-498,1502,127,2217}, 0},	{{1,1,1,1}, 0},
{{-427,2227,-427,-427}, 0},	{{-840,2227,-438,-428}, 0},	{{1,-429,-429,-429}, 0},
{{1,1684,1688,1701}, 0},	{{1,2158,1714,133}, 0},	{{1,0,144,0}, 0},
{{1,-320,-320,-320}, 0},	{{1,145,-44,-44}, 0},	{{1,1711,1701,1701}, 0},
{{1,-150,-104,160}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-429,-429,-429}, 0},
{{1,1,1688,1701}, 0},	{{-150,2171,-150,224}, 0},	{{1,1483,1483,120}, 0},
{{1,0,131,0}, 0},	{{1,131,-333,-333}, 0},	{{-517,1429,1469,1469}, 0},
{{1,1479,1479,116}, 0},	{{1,0,127,0}, 0},	{{1,127,-337,-337}, 0},
{{1,1425,1465,1465}, 0},	{{1,143,37,37}, 0},	{{1,1425,1425,1501}, 0},
{{1,1,1671,1671}, 0},	{{1,1,1671,1671}, 0},	{{1,1,1,2201}, 0},
{{1,1,1,1671}, 0},	{{1,1,1,2217}, 0},	{{1,1,1,183}, 0},
{{1,183,1,2231}, 0},	{{1,1569,-396,0}, 0},	{{1,-396,-396,0}, 0},
{{1,1425,0,0}, 0},	{{1,1,37,37}, 0},	{{1,1425,0,0}, 0},
{{1,1,-396,-396}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1425}, 0},
{{1,1,1425,1425}, 0},	{{1,1,1,2201}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2201}, 0},	{{1,1,1,2217}, 0},	{{1,1,1,1}, 149},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-396,1,-396}, 0},
{{1,-396,1,0}, 0},	{{1,1,1,-396}, 0},	{{1,1,1,-396}, 0},
{{1,1425,0,0}, 0},	{{1,1,-396,-396}, 0},	{{-396,-396,-396,-396}, 150},
{{1,2208,2208,2095}, 0},	{{1,0,91,0}, 0},	{{1,1719,-373,-373}, 0},
{{1,1429,1429,1429}, 0},	{{1,1,1,1}, 0},	{{1,1429,1429,1465}, 0},
{{1,1,1648,1648}, 0},	{{1,1,1648,1648}, 0},	{{1,1,1,1648}, 0},
{{1,1,1,1648}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2195}, 0},	{{1,2196,1,0}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{-432,-432,-432,-432}, 0},
{{1,0,65,0}, 0},	{{1,42,0,0}, 0},	{{1,2079,2079,2079}, 0},
{{1,42,1807,1807}, 0},	{{1,2079,2079,2079}, 0},	{{1,1,2079,2079}, 0},
{{1,1,2079,2079}, 0},	{{1,1,1,2176}, 0},	{{1,1,1,2079}, 0},
{{1,42,42,1807}, 0},	{{1,1,42,42}, 0},	{{1,1,1,2079}, 0},
{{1,1,-458,0}, 0},	{{1,1,-458,0}, 0},	{{1,-123,-123,-123}, 0},
{{1,-458,-25,-25}, 0},	{{1,-123,-123,-123}, 0},	{{1,1,-458,-458}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-123}, 0},	{{1,1,-123,-123}, 0},
{{1,1,1,2176}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2176}, 0},
{{1,1,1,2177}, 0},	{{1,1,-458,-458}, 149},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-123}, 0},
{{1,1,1,1}, 0},	{{1,1,-458,-458}, 0},	{{1,-123,-123,-123}, 0},
{{1,1,-458,-458}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-183}, 0},
{{1,1,1,-183}, 0},	{{-183,-183,-183,-183}, 151},	{{1,2161,24,0}, 0},
{{1,1,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1766,1766}, 0},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1771}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1766}, 0},
{{1,1,1,1}, 0},	{{-499,-499,-499,0}, 0},	{{1,0,12,0}, 0},
{{1,0,0,0}, 0},	{{1,2157,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2149}, 0},	{{0,0,0,0}, 164},
{{1,0,0,0}, 0},	{{-522,-522,1629,1629}, 0},	{{1,1360,2146,1338}, 0},
{{1,1,1,2160}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1360,1360,1360}, 0},
{{1,-248,1298,-348}, 0},	{{1,2160,1,2160}, 0},	{{1,2166,2146,2146}, 0},
{{1,-188,0,0}, 0},	{{1,1,-188,-188}, 0},	{{1,1360,2146,0}, 0},
{{1,1,2160,2160}, 0},	{{1,1,2146,0}, 0},	{{-248,-248,-248,-248}, 160},
{{-141,1283,1283,2160}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1359,1359,1359}, 0},
{{1,1,1359,1359}, 0},	{{1,1,1,-203}, 0},	{{1,2018,0,0}, 0},
{{1,-203,0,0}, 0},	{{1,-203,-203,-203}, 0},	{{1,1359,1359,1359}, 0},
{{-203,-203,-203,2160}, 0},	{{1,1,1,-167}, 0},	{{1,1359,1359,-597}, 0},
{{1,1,2050,2159}, 0},	{{1,2160,1,56}, 0},	{{1,2173,1610,0}, 0},
{{1,2087,1610,0}, 0},	{{1,-272,-212,-212}, 0},	{{1,2050,0,0}, 0},
{{1,-272,-212,-212}, 0},	{{1,1,1610,1610}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-318}, 0},	{{1,1,-318,-318}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-318}, 0},
{{-318,-318,-597,-597}, 149},	{{1,1,2050,-130}, 0},	{{1,2159,1,1380}, 0},
{{1,2065,-130,0}, 0},	{{1,-130,-130,0}, 0},	{{1,1258,0,0}, 0},
{{1,2050,-130,-130}, 0},	{{1,1258,0,0}, 0},	{{1,1,-130,-130}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-613}, 0},	{{1,1,-613,-613}, 0},
{{1,1,1,-613}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-613}, 0},
{{1,1,1,1}, 0},	{{-688,-688,-688,-688}, 0},	{{1,1,1,2049}, 0},
{{-578,1387,-578,0}, 0},	{{1,46,-579,0}, 0},	{{1,-120,-579,0}, 0},
{{1,-244,-244,-244}, 0},	{{1,-579,-146,-146}, 0},	{{1,-244,-244,-244}, 0},
{{1,1,-579,-579}, 0},	{{1,1,1,1}, 0},	{{1,1,1,24}, 0},
{{1,1,24,24}, 0},	{{1,1,1,2128}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2128}, 0},	{{1,1,1,2144}, 0},	{{1,1,1341,1341}, 149},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,24}, 0},	{{1,-120,-120,-120}, 0},	{{1,-120,-579,-579}, 0},
{{1,-244,-244,-244}, 0},	{{1,1,-579,-579}, 0},	{{-1041,-1041,-1041,-1041}, 0},
{{1,1954,0,0}, 0},	{{1,2133,1569,1569}, 0},	{{1,-267,-267,-267}, 0},
{{1,1569,1569,1569}, 0},	{{1,-267,-267,-267}, 0},	{{1,1,1569,1569}, 0},
{{1,1,1,2133}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1341,1341}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-267,-267,-267}, 0},	{{1,-267,0,0}, 0},	{{1,-267,-267,-267}, 0},
{{1,1,0,0}, 0},	{{-373,-373,-373,-373}, 0},	{{-165,-165,2125,0}, 0},
{{-1075,-1075,-738,-738}, 0},	{{1,1,-211,-608}, 0},	{{1,-333,-273,-273}, 0},
{{1,1,-608,-608}, 0},	{{-149,-149,-149,-149}, 150},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{0,0,2118,0}, 0},	{{-2,-2,2118,0}, 0},
{{0,0,2120,0}, 0},	{{1,0,2120,0}, 0},	{{1,1,1,1}, 0},
{{-974,0,0,0}, 0},	{{1,2124,2126,2128}, 0},	{{1,2128,2129,0}, 0},
{{1,14,2131,2132}, 0},	{{-1053,2139,-1053,0}, 0},	{{1,2139,2124,2124}, 0},
{{1,2148,2124,0}, 0},	{{1,1,1,2150}, 0},	{{1,2156,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,2156,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{0,0,2161,0}, 0},
{{1,8,2165,-18}, 0},	{{1,1,2165,2166}, 0},	{{0,2166,0,0}, 0},
{{1,2167,2168,0}, 0},	{{1,1,2169,2170}, 0},	{{0,2163,2177,0}, 0},
{{1,2109,2179,0}, 0},	{{-5,-5,-5,2179}, 0},	{{1,-6,2182,-6}, 0},
{{1,2159,0,0}, 0},	{{0,0,2181,0}, 0},	{{1,2186,2179,2187}, 0},
{{1,2188,0,0}, 0},	{{1,0,2192,0}, 0},	{{1,2195,2195,2198}, 0},
{{1,2198,0,0}, 0},	{{1,1,1,1}, 0},	{{0,2200,0,0}, 0},
{{0,2201,0,0}, 0},	{{1,2201,-1083,0}, 0},	{{1,-35,-35,-35}, 0},
{{1,-1083,-1083,-1083}, 0},	{{1,1,0,0}, 0},	{{1,-1010,1,-1010}, 0},
{{1,-1010,-1010,-1010}, 0},	{{1,-1010,-1010,-1010}, 0},	{{1,1,1,1}, 0},
{{1,-1083,1,0}, 0},	{{-1010,-1010,2210,-1010}, 0},	{{1,2190,2092,0}, 0},
{{1,0,0,0}, 0},	{{1,2092,2092,2092}, 0},	{{1,1,1,2146}, 0},
{{1,1,1,1}, 0},	{{1,2146,2146,2146}, 0},	{{1,2146,2146,2146}, 0},
{{0,0,0,2215}, 0},	{{1,0,2215,0}, 0},	{{-1100,-1100,-1100,-1100}, 116},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 115},	{{1,3,12,0}, 0},	{{1,23,24,23}, 0},
{{-1117,0,170,0}, 0},	{{1,21,2217,21}, 0},	{{1,0,199,0}, 0},
{{1,22,23,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1012,0,0,41}, 0},	{{1,2209,2210,2218}, 0},	{{1,233,235,233}, 0},
{{1,2217,14,0}, 0},	{{1,1,1,2210}, 40},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,235,235,2212}, 0},	{{1,0,235,0}, 0},	{{1,-1128,235,0}, 0},
{{0,0,43,0}, 41},	{{0,0,270,0}, 0},	{{1,0,291,0}, 0},
{{0,0,2209,0}, 0},	{{-1033,-1033,-1033,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2208,2208,2208}, 0},	{{1,403,0,0}, 0},
{{1,403,403,0}, 0},	{{1,1,2206,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2198}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{0,0,4,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,2205,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2203}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2197}, 0},	{{1,2199,2200,36}, 0},	{{1,39,41,2200}, 0},
{{1,0,-1108,0}, 0},	{{1,36,55,36}, 0},	{{1,1,2200,60}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1178,-1178,-1178,2196}, 0},	{{1,2198,2190,26}, 0},
{{1,29,31,39}, 0},	{{-9,0,85,0}, 0},	{{1,2186,2187,23}, 0},
{{-2,26,28,2187}, 0},	{{1,25,2195,2196}, 0},	{{1,0,112,0}, 0},
{{1,22,41,22}, 0},	{{1,1,2201,46}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1192,-1192,-1192,2201}, 0},	{{1,2203,2205,2213}, 0},	{{1,146,148,146}, 0},
{{1,2215,32,13}, 0},	{{1,1,2215,2220}, 95},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2223}, 0},	{{1,-1201,1,0}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 96},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2219}, 0},	{{1,0,179,0}, 0},
{{0,0,2225,0}, 0},	{{1,0,199,0}, 0},	{{1,0,2224,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1218,-1218,-1218,-1218}, 0},
{{1,0,169,0}, 0},	{{1,0,2217,0}, 0},	{{1,2217,1,2218}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2162,2162,0}, 0},	{{0,0,0,2218}, 0},	{{-13,-13,-13,2218}, 84},
{{1,2218,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1232,-1232,-1232,2218}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2225,2225,2225}, 0},	{{1,-1237,-1237,0}, 0},	{{1,2195,1,2195}, 0},
{{0,0,0,2225}, 68},	{{1,-1240,-1240,0}, 0},	{{1,0,-1240,0}, 0},
{{1,0,2224,0}, 68},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,2229,0}, 0},	{{-1228,2233,73,2236}, 0},
{{1,128,130,0}, 0},	{{1,0,0,0}, 0},	{{-1217,-1217,-1217,-1217}, 0},
{{1,0,136,0}, 0},	{{1,1,2237,1}, 0},	{{0,128,0,0}, 0},
{{-1239,-3,2240,-1194}, 0},	{{1,2225,2240,2228}, 0},	{{1,83,85,83}, 0},
{{-1236,2241,-1164,-1224}, 0},	{{-9,118,2241,0}, 0},	{{1,0,150,0}, 0},
{{1,1,2241,1}, 0},	{{0,120,164,2247}, 0},	{{1,0,125,0}, 0},
{{1,0,187,0}, 0},	{{0,0,2252,0}, 0},	{{1,0,186,0}, 0},
{{1,1,1,2251}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,32,1,0}, 0},	{{1,1,1,186}, 0},
{{0,197,0,0}, 0},	{{1,-1133,-1133,-1133}, 0},	{{1,1,1,1}, 0},
{{-1133,-1133,2247,-1133}, 0},	{{1,12,2250,-1216}, 0},	{{1,0,19,0}, 0},
{{1,15,2249,9}, 0},	{{-1410,-1410,34,-1140}, 0},	{{1,2248,2250,2203}, 0},
{{1,58,60,58}, 0},	{{1,2251,12,5}, 0},	{{-1261,-1261,71,79}, 40},
{{1,0,2250,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,95,0}, 0},	{{1,0,99,0}, 0},	{{0,0,2247,0}, 0},
{{1,0,119,0}, 0},	{{1,1,2246,1}, 0},	{{0,0,133,0}, 0},
{{-1206,-1206,193,0}, 0},	{{-1200,-1200,212,229}, 0},	{{-1257,0,92,0}, 0},
{{1,0,155,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,2236}, 0},	{{1,2236,2243,2252}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,221,0,0}, 0},	{{1,221,2252,0}, 0},
{{1,0,2252,0}, 0},	{{0,0,0,0}, 35},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1209,-1209,-1209,-1209}, 0},
{{1,22,2247,22}, 0},	{{1,2247,2171,-65}, 0},	{{0,62,84,0}, 40},
{{1,19,2247,19}, 0},	{{1,2247,95,-1282}, 0},	{{1,2248,2249,1996}, 40},
{{1,1,1996,1996}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{1,-1282,1,-1282}, 0},	{{-1282,0,0,0}, 41},	{{1,0,2248,0}, 0},
{{1,2248,2249,0}, 0},	{{1,2153,2249,2254}, 0},	{{1,2153,2153,2153}, 0},
{{1,1,2153,2153}, 0},	{{1,1,2252,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2252}, 0},	{{1,2252,0,0}, 0},	{{0,0,0,0}, 40},
{{1,2251,110,0}, 0},	{{1,1,1,1976}, 40},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1976}, 0},
{{1,1,1,2246}, 0},	{{1,0,1,0}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 41},	{{1,2245,2246,0}, 43},	{{-1264,-1264,-1264,-1264}, 44},
{{-1330,-1330,2245,-1330}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,12,12,2245}, 0},
{{1,0,-10,0}, 0},	{{1,133,2246,0}, 0},	{{-1250,-1484,205,-1484}, 41},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-18,-18,-18}, 0},	{{1,0,-18,0}, 0},
{{1,0,-18,0}, 0},	{{-1492,-1492,-1492,-1492}, 41},	{{1,0,-21,0}, 0},
{{1,0,1,0}, 0},	{{0,0,224,0}, 41},	{{1,0,-24,0}, 0},
{{1,0,-2,0}, 0},	{{0,0,222,0}, 41},	{{1,0,0,0}, 0},
{{-124,-124,-124,-124}, 0},	{{1,0,0,0}, 0},	{{-1340,-1340,-1340,-1340}, 0},
{{0,1,2227,0}, 0},	{{0,0,2227,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2227}, 0},	{{0,0,64,0}, 0},	{{1,2228,1,2102}, 0},
{{1,2102,1,2102}, 0},	{{1,1,1,2102}, 0},	{{1,2102,2102,2102}, 0},
{{1,2225,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,2250,0}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 23},	{{1,0,2211,0}, 0},
{{1,1,1,0}, 0},	{{1,0,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,2244,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,0}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,2263,0,0}, 0},	{{1,0,42,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,2261}, 0},
{{1,2272,2273,0}, 0},	{{1,1,2086,2086}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,108,2275,0}, 0},	{{1,1,1,-1376}, 0},	{{-1376,0,2277,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2258,0,0}, 0},	{{0,0,0,0}, 27},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,2254}, 0},	{{0,0,2269,0}, 0},	{{0,0,0,0}, 19},
{{1,1,1,2066}, 0},	{{1,1,1,1}, 0},	{{1,1,2066,2066}, 0},
{{1,0,1,0}, 0},	{{-1387,-184,-184,-184}, 0},	{{1,12,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2256}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 16},
{{-1397,-1397,2240,-1397}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,2123}, 0},
{{1,0,0,0}, 0},	{{1,1,2238,0}, 0},	{{1,0,2238,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{-1382,-1382,-1382,0}, 0},	{{-1410,-1410,2238,-1410}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-1411,-1411,2238}, 0},	{{1,19,0,0}, 0},
{{1,2239,2240,0}, 0},	{{1,0,2240,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-19,-19,-19,2242}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,2253,0}, 0},
{{1,1,1,0}, 0},	{{0,0,2170,0}, 0},	{{1,1,1,1}, 12},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1378,-1378,-1378,-1378}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2237,2237,2238}, 0},	{{-1672,0,2238,0}, 0},
{{1,-1401,-1401,5}, 0},	{{1,0,0,0}, 0},	{{1,-57,15,0}, 0},
{{1,-1674,15,-1674}, 0},	{{-1440,-1440,-1440,2234}, 0},	{{1,0,0,0}, 0},
{{1,2061,2238,2061}, 0},	{{1,0,42,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2229}, 0},	{{-71,0,2229,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,32}, 0},
{{1,-33,-33,-33}, 0},	{{1,1,2227,-1412}, 0},	{{1,46,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{0,2211,0,0}, 0},	{{-1471,0,0,0}, 1},	{{0,0,0,0}, 7},
{{-63,-63,-63,-63}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-64,-64,-64,2200}, 0},	{{1,-64,-64,-64}, 0},	{{1,1,2199,-1443}, 0},
{{1,15,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2186}, 0},	{{0,1,0,0}, 1},
{{0,0,0,0}, 2},	{{1,2184,2186,2188}, 0},	{{1,2190,2190,0}, 0},
{{1,2190,2192,2194}, 0},	{{1,0,2201,0}, 0},	{{1,0,2202,0}, 0},
{{0,0,0,2203}, 0},	{{1,2203,2205,2208}, 0},	{{1,2210,0,0}, 0},
{{1,2208,2208,2211}, 0},	{{1,0,2216,0}, 0},	{{0,0,2220,0}, 0},
{{1,0,2223,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,471}, 0},
{{1,2222,2224,2225}, 0},	{{1,2227,1,2228}, 0},	{{1,0,55,0}, 0},
{{1,1,2227,1}, 0},	{{1,0,0,0}, 0},	{{1,81,81,0}, 0},
{{1,1,1,89}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,2218}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 360},	{{0,0,0,0}, 361},
{{1,2215,2204,2207}, 0},	{{-17,2209,-17,2218}, 0},	{{1,2225,2225,2225}, 0},
{{1,1,1,2226}, 0},	{{0,0,35,0}, 0},	{{1,2225,1,2226}, 0},
{{1,2226,2227,0}, 0},	{{1,1,51,1}, 0},	{{-1491,0,0,0}, 0},
{{1,3,1,2226}, 0},	{{-3,2222,2226,0}, 0},	{{1,1,1,2224}, 0},
{{1,2220,2224,0}, 0},	{{-5,-5,-5,-5}, 0},	{{1,10,25,0}, 0},
{{-1499,42,-7,-7}, 0},	{{1,2221,2228,437}, 0},	{{1,2234,-9,-9}, 0},
{{1,241,2234,2235}, 0},	{{1,2239,2239,241}, 0},	{{1,2242,2242,2245}, 0},
{{1,-1501,-1501,-1501}, 0},	{{1,-1501,-1501,-1501}, 0},	{{-1501,-1501,-1501,2245}, 0},
{{1,1,2245,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,50}, 0},
{{1,0,0,0}, 368},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2214}, 0},
{{-1540,0,0,2214}, 0},	{{1,0,2117,0}, 0},	{{-1541,9,2214,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2210}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2138}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 360},
{{-50,0,0,0}, 363},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,2178}, 0},
{{1,9,9,0}, 0},	{{1,2177,0,0}, 0},	{{1,2195,2195,2195}, 0},
{{1,1,2195,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,2195,0,0}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,2205,0}, 0},
{{1,2208,2210,2211}, 0},	{{1,2214,2215,2218}, 0},	{{1,0,2202,0}, 0},
{{1,2211,1,2211}, 0},	{{1,2218,0,0}, 0},	{{1,34,2218,0}, 0},
{{-1581,-1581,-1581,-1581}, 0},	{{1,2220,2222,2223}, 0},	{{1,2207,13,2211}, 0},
{{1,0,2195,0}, 0},	{{1,1,2223,1}, 0},	{{1,0,0,0}, 0},
{{1,27,-6,0}, 0},	{{1,1,1,31}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2218}, 0},	{{1,2222,1,2223}, 0},
{{-1597,0,2228,0}, 0},	{{-1,5,-1,9}, 0},	{{1,2192,1,2199}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{-1600,0,0,0}, 0},
{{1,2226,2222,0}, 0},	{{1,1,1,2189}, 0},	{{1,0,0,10}, 0},
{{-21,12,-21,0}, 0},	{{1,0,2218,0}, 0},	{{1,1,1,2192}, 0},
{{0,2221,0,6}, 0},	{{1,2216,2216,0}, 0},	{{1,2174,2174,2220}, 0},
{{1,2174,1,0}, 0},	{{1,1,1,2221}, 0},	{{0,0,2226,0}, 0},
{{1,0,0,0}, 0},	{{1,0,1,0}, 0},	{{0,0,2224,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,2224,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2236}, 0},	{{0,2236,0,0}, 0},
{{0,0,2241,0}, 0},	{{1,2244,2247,28}, 0},	{{1,2249,2258,2261}, 0},
{{1,99,117,0}, 0},	{{1,2265,133,28}, 0},	{{1,1,2265,134}, 0},
{{-1619,-1619,-1619,-1619}, 0},	{{1,7,17,22}, 0},	{{-1625,2263,75,2266}, 0},
{{1,2273,2276,20}, 0},	{{1,2261,2277,2279}, 0},	{{1,91,109,0}, 0},
{{1,2280,2281,20}, 0},	{{-7,-7,-7,126}, 0},	{{1,2280,2281,2282}, 308},
{{1,651,2282,0}, 0},	{{1,114,121,16}, 0},	{{1,1,1,16}, 0},
{{1,1,2289,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,2288,0}, 0},
{{1,2288,2289,2292}, 0},	{{1,186,2294,0}, 0},	{{1,104,111,6}, 0},
{{1,1,1,1}, 0},	{{-9,2301,-9,-9}, 0},	{{1,2304,1,2305}, 0},
{{1,752,2305,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-14,-14,-14,-14}, 0},	{{1,2302,2303,152}, 197},	{{1,2238,2238,2238}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2218,2218,2218}, 0},
{{1,2218,2218,2218}, 0},	{{1,2218,2218,2218}, 0},	{{1,1,1,1}, 0},
{{1,1,2296,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1417,-1417,-1417,-1417}, 0},	{{1,2256,2258,0}, 0},
{{1,2266,2267,-52}, 0},	{{1,1,1,1}, 203},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,2261,0}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 304},	{{1,2259,2261,197}, 0},	{{1,2261,0,0}, 0},
{{1,1,1,2266}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,2265}, 0},
{{1,793,0,0}, 185},	{{1,1,1,2264}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2267,2268,2269}, 0},
{{1,1,815,848}, 0},	{{1,1,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2258}, 0},
{{1,2178,2259,0}, 297},	{{1,1,2264,2264}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,2259,2264,2259}, 0},
{{1,2178,2178,2264}, 0},	{{1,2178,2178,0}, 0},	{{1,2178,2178,0}, 0},
{{-1386,-1386,-1386,-1386}, 299},	{{1,1,1,2261}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,2256,2175,0}, 0},	{{1,-104,1,2257}, 0},
{{-119,-119,2264,-119}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,2264,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,7,0}, 0},	{{0,983,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-1758}, 0},	{{1,2259,-1758,-1758}, 0},	{{-1758,-1758,-1758,2259}, 0},
{{-1759,-1759,-1759,2261}, 0},	{{1,1,0,0}, 199},	{{0,0,0,0}, 290},
{{1,2270,15,23}, 0},	{{-1759,2270,40,2271}, 0},	{{1,2278,13,21}, 0},
{{-1761,2268,2279,2286}, 0},	{{1,2266,11,19}, 0},	{{-1763,2266,2277,2292}, 0},
{{1,2298,2299,2302}, 0},	{{1,506,2307,0}, 0},	{{1,63,2308,18}, 0},
{{1,2313,2313,63}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2313}, 0},	{{-1764,74,89,0}, 0},
{{1,2256,2312,2321}, 0},	{{1,42,2323,0}, 0},	{{1,2328,60,9}, 0},
{{1,2332,2336,2328}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1773,2336,-1773,2337}, 0},	{{1,2337,2338,2338}, 0},
{{1,605,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,2331,0}, 0},	{{1,2151,1,1}, 197},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-150,-150,-150,-150}, 0},	{{1,2323,2324,0}, 0},
{{1,0,2332,0}, 0},	{{1,1,1,1}, 203},	{{1,1,1,2242}, 0},
{{1,1,1,1}, 0},	{{1,1,1,2242}, 0},	{{1,1,1,2334}, 0},
{{1,1,1,1}, 0},	{{-1500,2334,-1500,0}, 0},	{{1,2337,2338,88}, 0},
{{1,2344,0,0}, 0},	{{1,2344,1,1}, 0},	{{1,1,2348,1}, 0},
{{1,1,1,1}, 0},	{{1,2248,2248,2248}, 0},	{{1,0,0,0}, 0},
{{0,0,0,2345}, 0},	{{1,684,0,0}, 185},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,2339,0}, 0},	{{1,0,2349,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1484,748,748,748}, 0},	{{1,1,1,1}, 334},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2340}, 0},	{{0,0,27,0}, 0},	{{1,2340,1,2269}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,2341,2342}, 0},	{{0,0,21,2342}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2341}, 0},
{{1,1,16,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,29,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,7}, 0},	{{-7,-7,8,21}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2329}, 0},	{{0,0,3,2329}, 0},	{{1,1,2331,2332}, 0},
{{-13,2332,0,0}, 0},	{{1,0,0,0}, 0},	{{1,2333,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,2323,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{-1211,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{0,0,2309,0}, 0},	{{0,0,0,2309}, 0},
{{1,1,1,1}, 0},	{{0,2319,0,0}, 0},	{{1,-1,-1,-1}, 0},
{{0,2317,0,2318}, 0},	{{-103,-103,-103,-103}, 197},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{-195,-195,-195,-195}, 0},	{{1,2316,2317,2319}, 0},
{{1,372,2324,0}, 0},	{{1,37,2324,9}, 0},	{{-1756,2324,383,388}, 0},
{{1,8,2324,2325}, 0},	{{1,-87,448,0}, 0},	{{1,33,2326,5}, 0},
{{-1710,2326,458,2327}, 0},	{{1,473,2333,2334}, 0},	{{1,480,0,0}, 0},
{{1,1,1,1}, 0},	{{-1705,2316,375,375}, 0},	{{1,2332,0,0}, 197},
{{1,1,496,276}, 0},	{{1,276,276,276}, 0},	{{1,1,276,276}, 0},
{{1,1,1,276}, 0},	{{1,1,1,276}, 0},	{{1,1,1,498}, 0},
{{1,1,1,276}, 0},	{{-1267,0,2325,0}, 0},	{{1,2203,2325,0}, 0},
{{1,-283,2325,-283}, 0},	{{1,1,1,1}, 203},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1620,-1620,-1620,-298}, 0},
{{1,2316,0,0}, 0},	{{1,2319,2320,459}, 0},	{{1,0,271,2325}, 0},
{{1,2328,271,271}, 0},	{{1,1,1,1}, 0},	{{1,1,1,271}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2328}, 0},	{{-1615,566,0,0}, 185},
{{1,0,636,0}, 0},	{{-1596,-1596,2326,-111}, 193},	{{1,2326,694,347}, 0},
{{1,699,268,268}, 0},	{{1,1,1,268}, 0},	{{1,1,1,268}, 0},
{{1,1,1,2323}, 0},	{{1,83,83,706}, 0},	{{1,0,-1269,0}, 0},
{{-1269,-1269,-1733,-1733}, 0},	{{1,2320,723,2321}, 0},	{{1,723,727,-1576}, 0},
{{1,1,1,-1576}, 0},	{{-1576,2319,-1576,-1576}, 0},	{{1,2319,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,728,732,733}, 0},
{{1,289,290,747}, 0},	{{1,0,-1280,0}, 0},	{{1,0,0,0}, 0},
{{1,80,58,58}, 0},	{{1,18,58,58}, 0},	{{1,1,18,58}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,18,-1628}, 0},
{{-1853,280,-1853,280}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,753,753,754}, 0},	{{1,272,273,707}, 0},
{{1,0,-1297,0}, 0},	{{1,0,0,0}, 0},	{{1,1,41,41}, 0},
{{1,1,41,41}, 0},	{{1,1,1,41}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-1645}, 0},	{{1,-1645,1,-1645}, 0},
{{1,269,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{1,0,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 150},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,717,717,717}, 0},
{{1,720,719,720}, 0},	{{1,0,720,0}, 0},	{{1,721,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1685,-1685,-1685,-1685}, 0},
{{1,-1924,1,-1924}, 0},	{{1,189,193,206}, 0},	{{-1924,218,219,2}, 0},
{{-1374,0,-1351,0}, 0},	{{1,0,-1352,0}, 0},	{{1,0,0,0}, 0},
{{1,793,0,0}, 0},	{{1,-1363,-1363,-1363}, 0},	{{1,-1363,-1363,0}, 0},
{{1,-1363,-1363,-1363}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1363,-1363,2238,-1363}, 0},	{{1,1,787,-21}, 0},
{{1,1,1,787}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-61,-61,-1707}, 0},	{{1,787,1,787}, 0},	{{1,2230,787,787}, 0},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,787,0}, 0},
{{1,1,787,787}, 0},	{{1,1,787,0}, 0},	{{-61,-61,-61,-61}, 160},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-1721}, 0},	{{1,193,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2213}, 0},
{{1,1,1,-1955}, 0},	{{1,1,1,-1955}, 0},	{{1,1,692,801}, 0},
{{1,2211,1,38}, 0},	{{1,2224,252,0}, 0},	{{1,252,252,0}, 0},
{{1,-84,0,0}, 0},	{{1,692,0,0}, 0},	{{1,-84,0,0}, 0},
{{1,1,252,252}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-1955}, 0},
{{1,1,-1955,-1955}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-1955}, 0},	{{-1955,-1955,-1955,-1955}, 149},
{{1,46,-1919,0}, 0},	{{1,-1919,-1919,0}, 0},	{{1,0,0,0}, 0},
{{1,-1919,-1486,-1486}, 0},	{{1,0,0,0}, 0},	{{1,1,-1919,-1919}, 0},
{{1,1,1,1}, 0},	{{1,1,1,24}, 0},	{{1,1,24,24}, 0},
{{1,1,1,2197}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2197}, 0},
{{1,1,1,803}, 0},	{{1,1,1,1}, 149},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,24}, 0},
{{1,-1919,-1919,-1919}, 0},	{{1,-1919,-1919,-1919}, 0},	{{1,0,0,0}, 0},
{{1,1,-1919,-1919}, 0},	{{-2044,-2044,-2044,-2044}, 0},	{{1,147,0,0}, 0},
{{1,229,229,229}, 0},	{{1,0,0,0}, 0},	{{1,229,229,229}, 0},
{{1,0,0,0}, 0},	{{1,1,229,229}, 0},	{{1,1,1,2182}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{-1992,-1992,-1992,-1992}, 0},	{{-1964,-1964,785,0}, 0},	{{-1987,124,2173,2176}, 0},
{{1,7,2183,2184}, 0},	{{1,-315,220,0}, 0},	{{1,-1775,19,-1929}, 0},
{{-1938,225,230,2184}, 0},	{{1,245,2188,250}, 0},	{{1,252,0,0}, 0},
{{-1933,-1933,-1933,-1933}, 0},	{{1,2105,0,0}, 197},	{{-226,258,269,49}, 0},
{{1,1983,306,0}, 0},	{{1,2184,2185,2184}, 0},	{{1,1,1,2185}, 203},
{{-219,-219,315,-219}, 0},	{{1,2184,2069,2069}, 0},	{{1,2184,342,242}, 0},
{{1,1737,2184,2189}, 0},	{{1,2184,1,2184}, 0},	{{1,1,1,2184}, 0},
{{1,201,201,54}, 0},	{{1,201,201,201}, 0},	{{0,0,0,2188}, 0},
{{-1782,512,517,2188}, 0},	{{-202,-202,-202,-202}, 0},	{{1,-146,1,-146}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-146}, 0},	{{1,2184,2184,2184}, 0},
{{-146,573,572,2184}, 0},	{{1,2186,2187,2189}, 0},	{{1,112,113,0}, 0},
{{1,44,2190,23}, 0},	{{1,123,123,128}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-1957}, 0},
{{1,76,76,76}, 0},	{{1,0,-1493,0}, 0},	{{1,-1957,-1957,-1957}, 0},
{{1,0,0,0}, 0},	{{-1957,2181,-1957,-1957}, 0},	{{1,14,2181,2182}, 0},
{{1,-356,179,0}, 0},	{{1,31,37,10}, 0},	{{1,184,189,194}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-1805}, 0},	{{-12,63,63,-1517}, 0},	{{1,199,2059,2060}, 0},
{{1,206,0,0}, 0},	{{1,1,1,1}, 0},	{{1,101,101,101}, 0},
{{-1979,-1979,-1979,-1979}, 0},	{{1,2057,0,0}, 197},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,2050,0}, 0},	{{1,1928,251,0}, 0},	{{-274,-558,-558,-558}, 0},
{{1,2046,0,0}, 0},	{{1,2049,2159,189}, 0},	{{1,0,1,2055}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2154}, 0},	{{1,390,427,80}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2000,33,33,439}, 0},	{{1,453,153,158}, 0},
{{-1841,-1841,-1841,-1841}, 0},	{{1,30,30,-1550}, 0},	{{1,0,-1539,0}, 0},
{{1,-2003,-2003,-2003}, 0},	{{-2112,-241,-201,-201}, 0},	{{1,26,26,-1554}, 0},
{{1,0,-1543,0}, 0},	{{1,-2007,-2007,-2007}, 0},	{{1,-245,-205,-205}, 0},
{{1,24,14,14}, 0},	{{1,-245,-245,-169}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,14}, 0},	{{-245,-1891,-245,561}, 0},
{{1,13,13,448}, 0},	{{1,0,-1556,0}, 0},	{{1,-2020,-2020,-2020}, 0},
{{1,-218,-218,-218}, 0},	{{1,1,1,1}, 0},	{{1,-218,-218,-182}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1904,-1904,-1904,548}, 0},	{{0,0,-1568,0}, 0},	{{0,568,-1569,0}, 0},
{{-22,-268,-268,609}, 0},	{{1,7,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{-139,-139,-139,-139}, 0},	{{0,0,2106,0}, 0},
{{-115,18,0,0}, 197},	{{1,2105,2111,0}, 0},	{{1,2120,2123,127}, 0},
{{1,1,1,1}, 203},	{{1,-633,2123,-633}, 0},	{{1,-633,-633,-633}, 0},
{{1,-633,-633,-633}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,2124,0}, 0},	{{0,0,0,0}, 238},	{{1,7,2123,0}, 0},
{{1,2124,2128,121}, 0},	{{1,1803,2130,2135}, 243},	{{1,0,2135,0}, 0},
{{1,1,1,2136}, 0},	{{1,2136,2138,0}, 0},	{{0,0,0,0}, 244},
{{0,229,2145,0}, 185},	{{1,0,299,0}, 0},	{{1,1,1,1}, 193},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,2139,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 194},	{{1,2,2136,86}, 0},
{{-2078,106,2136,-2078}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-46,-46,-46,-46}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,437,0}, 0},
{{0,0,2128,0}, 0},	{{1,1,1,2128}, 0},	{{1,1,1,2128}, 0},
{{1,1,1,2129}, 0},	{{-2149,-274,-274,2129}, 0},	{{1,490,490,-58}, 0},
{{1,0,-1627,0}, 0},	{{1,1,-2091,-2091}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,-2091,-2091}, 0},
{{1,1,-2091,-2091}, 0},	{{1,1,1,-2091}, 0},	{{1,1,1,-2091}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,21}, 0},
{{-1717,-1717,-1717,0}, 0},	{{-2159,0,0,1884}, 0},	{{1,1,1,-2097}, 0},
{{1,1,1,-2097}, 0},	{{1,1,1,1}, 0},	{{1,1,1,15}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 149},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2101}, 0},
{{1,2109,2111,0}, 0},	{{1,41,114,41}, 0},	{{-200,-200,-200,-200}, 203},
{{1,1899,2044,0}, 0},	{{1,1902,142,42}, 0},	{{1,2115,2120,2121}, 0},
{{1,-146,1,-146}, 0},	{{1,1,1,-146}, 0},	{{1,1,1,-146}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2119}, 0},	{{1,0,220,0}, 0},
{{1,1,1,220}, 193},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,220}, 0},	{{-78,-78,-78,2113}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2111,2112,2113}, 0},	{{-120,-120,-120,338}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-125,-125,-125,310}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,358,0}, 0},	{{1,1,1,2101}, 0},	{{1,1,1,2101}, 0},
{{1,1,1,2102}, 0},	{{-2227,-352,-352,363}, 0},	{{-77,412,412,299}, 0},
{{-193,8,0,0}, 197},	{{1,7,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-759,-759,1997,-759}, 0},	{{1,3,0,0}, 0},
{{1,1,1,2094}, 0},	{{0,0,0,2094}, 0},	{{0,0,0,0}, 185},
{{-2184,-104,2093,-104}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2183,-150,-150,2036}, 0},	{{1,107,108,0}, 185},
{{1,1,1,1}, 0},	{{-601,-601,2087,-601}, 0},	{{1,-208,-208,-208}, 0},
{{1,-483,-208,-208}, 0},	{{1,-483,-483,-208}, 0},	{{1,1,1,-208}, 0},
{{1,1,1,2083}, 0},	{{1,1,-483,-208}, 0},	{{1,0,1841,0}, 0},
{{1,1,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,2083,2083}, 0},
{{-1751,0,0,254}, 0},	{{-219,-219,2082,-219}, 0},	{{1,1,1,1}, 0},
{{1,-219,-219,-219}, 0},	{{1,-219,-219,-219}, 0},	{{1,-219,-219,-219}, 0},
{{1,1,1,1}, 0},	{{-765,-765,14,-765}, 0},	{{1,1,1,-221}, 0},
{{1,0,1828,0}, 0},	{{1,1,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-113,-113,-113,0}, 0},
{{-778,-778,0,0}, 201},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{-112,-112,-112,0}, 0},	{{1,1,1,1}, 0},
{{1,-102,-102,-102}, 0},	{{1,-102,-102,0}, 0},	{{-762,0,0,0}, 149},
{{1,2054,2055,0}, 185},	{{1,1,1,2062}, 208},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2063}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,2065,0,0}, 0},
{{1,2065,2073,0}, 0},	{{1,1,1,1}, 193},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2069}, 0},
{{1,1,1,1}, 0},	{{1,2071,2072,2071}, 0},	{{1,0,2072,0}, 212},
{{-2145,-2145,-2145,-2145}, 213},	{{1,-72,2071,-72}, 0},	{{-832,-832,2071,-832}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1924}, 0},
{{1,1,1,1}, 0},	{{1,1924,19,0}, 0},	{{-2154,0,-2154,0}, 206},
{{1,1,1,1}, 0},	{{1,2067,16,0}, 0},	{{1,0,-2157,0}, 0},
{{1,1,1,1}, 0},	{{1,14,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,2055,0,0}, 0},	{{-2172,0,-2172,0}, 199},
{{0,0,0,0}, 204},	{{-585,2053,19,0}, 185},	{{1,1,1905,0}, 0},
{{-782,-782,2052,-782}, 0},	{{-783,2052,-783,2056}, 0},	{{1,2059,2064,1994}, 0},
{{0,2064,0,0}, 0},	{{-785,-785,2067,-785}, 0},	{{1,1,2067,1}, 0},
{{1,1,1,1}, 0},	{{1,-289,-289,-289}, 0},	{{1,-289,-289,-289}, 0},
{{0,0,0,2064}, 0},	{{1,1,2064,1}, 224},	{{1,1,1,1}, 0},
{{1,1760,1760,1760}, 0},	{{-791,2062,2063,0}, 0},	{{-2183,-2183,2063,-7}, 0},
{{0,0,0,2063}, 0},	{{0,0,0,0}, 190},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 191},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,2043,2043,2045}, 0},	{{1,1456,2045,2047}, 0},	{{1,-807,0,0}, 0},
{{-2196,210,0,0}, 0},	{{1,0,1637,2046}, 0},	{{1,0,0,0}, 0},
{{-513,0,0,0}, 0},	{{-2,0,0,2043}, 0},	{{1,1,1634,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1634,1634,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,2035}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 187},	{{1,-846,0,0}, 0},
{{1,0,0,0}, 0},	{{-846,-846,-846,-846}, 188},	{{1,1,1,1}, 0},
{{1,2015,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,2011}, 0},
{{1,1,1,1}, 193},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-297,-297,-297,-297}, 0},
{{-298,-298,-298,2012}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,2008}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-356,1,-356}, 0},	{{1,0,-1925,0}, 0},	{{1,1,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{1,0,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 181},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-393,-393,-393,13}, 0},	{{-351,-351,1966,-351}, 0},
{{1,1,1,1972}, 0},	{{1,1,1,1972}, 0},	{{1,1,1,1973}, 0},
{{-697,-615,-615,1973}, 0},	{{1,1984,149,7}, 0},	{{1,0,-1968,0}, 0},
{{1,1,-2432,-2432}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-340,0,0,14}, 0},	{{-244,0,-1973,0}, 0},	{{1,0,-1974,0}, 0},
{{1,0,0,0}, 0},	{{1,0,1976,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1976}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,1974}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1808,1,1808}, 0},
{{-425,-425,-425,1978}, 0},	{{-304,-304,1980,-304}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2463,-430,-430,1980}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2302}, 0},	{{1,1,1,1}, 0},
{{-2467,-434,-434,1979}, 0},	{{-802,0,-2003,0}, 0},	{{1,1,1,1}, 0},
{{-727,1981,-727,-727}, 0},	{{1,-438,-438,1981}, 0},	{{1,0,-2007,0}, 0},
{{1,0,0,0}, 0},	{{-726,-709,-669,-669}, 0},	{{-713,-442,-442,1989}, 0},
{{1,-443,-443,1991}, 0},	{{-160,0,-2012,0}, 0},	{{1,0,-2013,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{-2201,-2201,0,0}, 0},
{{1,0,-2026,0}, 0},	{{1,1946,1946,0}, 0},	{{1,1977,0,0}, 0},
{{1,1962,1,1962}, 0},	{{1,1,1,1962}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1976}, 0},
{{1,7,0,0}, 0},	{{1,-2214,0,0}, 0},	{{1,-2214,-2214,-2214}, 0},
{{1,0,0,0}, 0},	{{1,-2214,-2214,-2214}, 0},	{{1,1,0,0}, 0},
{{-1946,-1946,-1946,-1946}, 0},	{{-2220,-2220,1639,0}, 0},	{{1,1,1,1}, 0},
{{-752,1967,-752,-752}, 0},	{{-751,-480,-480,-45}, 0},	{{-37,-481,-481,-46}, 0},
{{1,1,1,1}, 0},	{{-716,1964,-716,-716}, 0},	{{-715,4,4,4}, 0},
{{1,0,4,0}, 0},	{{-39,5,0,0}, 0},	{{-979,82,2,0}, 0},
{{-980,0,1,0}, 0},	{{1,0,1,0}, 164},	{{0,0,0,1958}, 0},
{{0,0,0,1959}, 0},	{{1,1,1,1}, 0},	{{1,1959,1960,1961}, 0},
{{-2636,-494,-493,4}, 0},	{{-2194,-712,-712,3}, 0},	{{-2191,-713,-713,2}, 0},
{{-2156,51,51,1913}, 0},	{{1,0,-2066,0}, 0},	{{1,1689,1689,1689}, 0},
{{1,79,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1689}, 0},
{{1,-2077,-2077,-2077}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1946}, 0},	{{-2653,1946,-536,-523}, 0},	{{1,-2211,-2207,-2171}, 0},
{{-2729,-729,-2104,1955}, 0},	{{1,1,1,-529}, 0},	{{1,1,1,-529}, 0},
{{1,1,1,110}, 0},	{{1,110,1,31}, 0},	{{1,1533,-439,0}, 0},
{{1,-439,-439,0}, 0},	{{1,-775,0,0}, 0},	{{1,1,0,0}, 0},
{{1,-775,0,0}, 0},	{{1,1,-439,-439}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-775}, 0},	{{1,1,-775,-775}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-775}, 0},
{{-775,-775,-775,-775}, 149},	{{1,1,1,-2179}, 0},	{{1,-2179,1,15}, 0},
{{1,16,-2179,0}, 0},	{{1,-2179,-2179,0}, 0},	{{1,-791,0,0}, 0},
{{1,1,-2179,-2179}, 0},	{{1,-791,0,0}, 0},	{{1,1,-2179,-2179}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-791}, 0},	{{1,1,-791,-791}, 0},
{{1,1,1,-791}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-791}, 0},
{{1,1,1,1}, 0},	{{-2215,-2215,-2215,-2215}, 0},	{{-455,-537,0,0}, 0},
{{-374,0,-2116,0}, 0},	{{-2194,-2194,1923,0}, 0},	{{1,1,1,-96}, 0},
{{1,-363,-363,0}, 0},	{{1,1,-363,-363}, 0},	{{1,1,1,-96}, 0},
{{1,1,-476,0}, 0},	{{1,1,-476,0}, 0},	{{1,-2298,-2298,-2298}, 0},
{{1,-476,0,0}, 0},	{{1,-2298,-2298,-2298}, 0},	{{1,1,-476,-476}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2298}, 0},	{{1,1,-2298,-2298}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2298}, 0},	{{-2298,-2298,0,0}, 149},	{{-2175,-2175,-2634,-2634}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1895}, 0},	{{0,0,1901,0}, 0},	{{0,0,0,1908}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-2493,-2493,-2493}, 0},	{{1,1,1,1}, 0},	{{1,1444,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{0,0,0,0}, 160},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-13,-13,-13}, 0},	{{1,-2347,-2507,-2507}, 0},
{{1,1,1,1}, 0},	{{1,7,-13,-13}, 0},	{{1,-2347,0,0}, 0},
{{1,1,-2347,-2347}, 0},	{{1,-13,-13,0}, 0},	{{1,1,1,1}, 0},
{{1,1,-13,0}, 0},	{{-2347,-2347,-2347,-2347}, 160},	{{-5,-2353,1506,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1872}, 0},	{{1,-608,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,-800,-800}, 0},	{{0,0,0,1868}, 0},
{{1,1,1412,1412}, 0},	{{-2362,-2362,-2362,1868}, 0},	{{1,1,1,-78}, 0},
{{-548,1424,-548,0}, 0},	{{1,14,-549,0}, 0},	{{1,-72,-549,0}, 0},
{{1,-2371,-2371,-2371}, 0},	{{1,-549,0,0}, 0},	{{1,-2371,-2371,-2371}, 0},
{{1,1,-549,-549}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2103}, 0},
{{1,1,-2103,-2103}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2103}, 0},	{{-2103,-2103,-763,-763}, 149},
{{-85,-85,1852,0}, 0},	{{1,-93,-2288,0}, 0},	{{1,-2288,-2288,0}, 0},
{{1,0,0,0}, 0},	{{1,-2288,-2288,-2288}, 0},	{{1,0,0,0}, 0},
{{1,1,-2288,-2288}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-778}, 0},
{{1,1,-778,-778}, 0},	{{1,1,1,-778}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-778}, 0},	{{1,1,1,1}, 0},	{{-801,-801,-801,-801}, 0},
{{-2142,-2142,-802,-802}, 0},	{{1,-2399,-2399,-2399}, 0},	{{1,-563,-563,-563}, 0},
{{1,-2399,-2399,-2399}, 0},	{{1,1,-563,-563}, 0},	{{-2399,-2399,-2399,1833}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1390,1390}, 0},	{{1,1,1,1}, 0},	{{-2131,-2131,-2131,1833}, 0},
{{-2748,0,0,0}, 155},	{{0,0,5,0}, 0},	{{1,0,0,0}, 0},
{{1,0,-2,0}, 0},	{{0,1829,1830,0}, 0},	{{-2118,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,1,0}, 0},
{{0,0,0,1823}, 0},	{{1,5,6,0}, 0},	{{-2109,-2109,1833,9}, 0},
{{1,3,3,0}, 0},	{{-2111,-2111,1831,-2111}, 0},	{{1,1,1,0}, 0},
{{-2113,-2113,-2113,-2113}, 0},	{{1,-2114,-2114,-2114}, 0},	{{1,51,0,0}, 0},
{{0,0,1827,0}, 0},	{{-3183,1830,-3183,0}, 0},	{{1,48,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,1823}, 0},	{{-2090,0,0,0}, 0},	{{1,1822,1823,0}, 0},
{{1,-2128,-2128,-10}, 0},	{{1,37,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1816}, 0},
{{1,1818,1818,-2137}, 0},	{{1,28,0,0}, 0},	{{0,0,1818,0}, 0},
{{1,7,1818,0}, 0},	{{1,0,0,0}, 0},	{{1,1818,1,1}, 0},
{{1,1818,1,0}, 0},	{{1,1,1,1}, 0},	{{1,-2148,-2148,0}, 0},
{{-21,0,12,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 116},
{{-2154,1816,-2154,0}, 0},	{{1,1,1,1}, 0},	{{1,-2154,-2154,0}, 0},
{{1,0,6,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,1811,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,1813,0}, 0},	{{-2163,-2163,25,1813}, 0},
{{-2182,1820,0,0}, 0},	{{-2137,1,-46,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 116},	{{-2161,-2168,-2168,-2168}, 0},	{{1,1,1824,1825}, 0},
{{0,1826,1829,0}, 0},	{{0,1813,9,0}, 0},	{{1,-6,8,0}, 0},
{{1,0,0,0}, 0},	{{1,1826,1826,1826}, 0},	{{1,1,1826,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1824}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,1822,1823,0}, 0},	{{-2183,-2183,-2183,13}, 0},	{{1,-18,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{-11,-11,-11,-11}, 0},
{{-2206,-22,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1813}, 0},	{{0,1824,0,0}, 0},	{{1,-30,0,0}, 0},
{{-11,1823,0,0}, 0},	{{1,0,1823,0}, 0},	{{1,1,1,1}, 116},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,1823,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,1821,0,0}, 0},	{{1,4,0,0}, 0},	{{1,1,1,1}, 0},
{{0,1820,0,0}, 0},	{{0,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1817}, 0},
{{1,1,1819,1}, 0},	{{0,0,0,1819}, 0},	{{-50,0,33,0}, 0},
{{1,0,32,0}, 0},	{{1,1,1,1}, 116},	{{1,1,1767,0}, 0},
{{1,1767,1,1767}, 0},	{{1,0,1767,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,-3283,1,0}, 0},	{{1,0,-2189,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,1812}, 0},
{{1,-2198,-2198,-2198}, 0},	{{1,-3219,-3219,-3219}, 0},	{{1,-2198,-2198,-2198}, 0},
{{1,-2198,-2198,-2198}, 0},	{{1,1,1,-3219}, 0},	{{1,1,1,1}, 0},
{{1,-3219,1,-3219}, 0},	{{1,-3219,-3219,-3219}, 0},	{{1,-3219,-3219,-3219}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2198,-2198,1806,-2198}, 0},	{{0,0,0,1809}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,0,1,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 117},	{{-2194,0,-1926,0}, 0},	{{-1975,-1975,250,-1975}, 0},
{{1,-1976,252,-1976}, 0},	{{1,275,12,0}, 0},	{{1,1,1,1}, 40},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1974,-1974,-1974,-1974}, 0},	{{0,0,256,0}, 0},
{{-3237,-3237,-3237,0}, 45},	{{1,0,-1976,0}, 0},	{{1,0,-1976,0}, 0},
{{0,0,25,0}, 41},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1804,-1804,0,0}, 0},	{{-2204,-2204,-2204,-2204}, 12},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1739}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1731}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 66},	{{1,0,0,0}, 0},	{{1,1,1,0}, 0},
{{-1757,0,0,0}, 0},	{{-2183,-2159,11,1725}, 0},	{{-2175,27,29,1727}, 0},
{{1,0,-1982,0}, 0},	{{1,0,66,0}, 0},	{{-2150,-2150,-2150,67}, 0},
{{-2144,-2144,-2144,-2144}, 0},	{{1,-3373,-3373,0}, 0},	{{1,0,-3373,0}, 0},
{{0,0,91,0}, 68},	{{1,-2168,2,1722}, 0},	{{-2192,0,1724,0}, 0},
{{-2167,0,-1991,0}, 0},	{{1,0,-1992,0}, 0},	{{1,0,56,0}, 0},
{{1,1723,1,1724}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{0,0,0,1721}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-3392,-3392,-3392,1717}, 0},	{{1,-3392,-3392,0}, 0},
{{1,0,-3392,0}, 0},	{{0,0,1726,0}, 68},	{{1,-2056,169,-2056}, 0},
{{-2056,195,38,0}, 0},	{{1,-2058,170,-2058}, 0},	{{1,193,37,0}, 0},
{{1,1,1,1}, 40},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2203,-2203,-2203,-2203}, 0},
{{1,1724,1726,0}, 0},	{{1,0,1727,0}, 0},	{{1,1,0,0}, 98},
{{0,0,1726,0}, 0},	{{0,0,0,17}, 45},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2213,-2213,-2213,1723}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1721,1721,1721}, 0},
{{1,-3420,-2218,0}, 0},	{{1,12,1,12}, 0},	{{0,0,0,42}, 96},
{{1,-3423,-2221,0}, 0},	{{1,0,-2221,0}, 0},	{{0,0,1695,0}, 96},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1710}, 0},	{{0,0,0,1711}, 84},
{{-2222,-2222,-2222,1711}, 84},	{{0,0,283,1709}, 84},	{{-2215,-2215,1715,-2215}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,1714}, 0},	{{0,0,0,1714}, 0},
{{-2211,-2211,-2211,-2211}, 85},	{{1,1,1,1}, 0},	{{1,-2216,-2216,-2216}, 0},
{{1,1711,1711,1711}, 0},	{{-3449,-3449,-3449,1711}, 0},	{{1,-3449,-3449,0}, 0},
{{1,0,-3449,0}, 0},	{{1,0,15,0}, 68},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1711}, 0},	{{1,-3461,-3461,0}, 0},
{{1,-29,1,-29}, 0},	{{0,0,0,1709}, 68},	{{1,1,1,1}, 0},
{{0,0,0,1709}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1701}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1697}, 0},
{{1,-2141,84,-2141}, 0},	{{1,84,8,-2228}, 0},	{{0,-2101,0,0}, 40},
{{1,0,96,0}, 0},	{{1,96,97,0}, 0},	{{1,1,1692,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2151,-2151,-2151,-2151}, 0},
{{1,1691,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2100,-2100,-2100,-2100}, 0},	{{-2234,0,-2107,0}, 0},
{{1,-2156,72,-2156}, 0},	{{1,1685,1686,-2235}, 0},	{{-179,73,74,1686}, 40},
{{-2146,98,99,1693}, 43},	{{1,0,0,0}, 0},	{{-2239,-2239,-2239,-2239}, 0},
{{1,187,188,7}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1977,-1977,1692,0}, 0},	{{1,1695,1695,0}, 0},	{{1,1,1,1}, 57},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1689}, 0},
{{0,0,1690,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{-2249,-2249,-2249,-2249}, 0},
{{1,1,1,1}, 0},	{{1,1686,1686,1686}, 0},	{{1,0,0,0}, 0},
{{-3379,1686,0,0}, 0},	{{-2235,0,-2139,0}, 0},	{{-2223,1685,19,28}, 0},
{{1,-2189,36,-2189}, 0},	{{-2189,1684,7,0}, 0},	{{1,-2191,37,-2191}, 0},
{{1,1683,6,-2239}, 0},	{{-214,-214,39,-214}, 40},	{{-2181,-2181,64,0}, 43},
{{1,0,0,0}, 0},	{{-2243,-2243,-2243,-2243}, 0},	{{-46,-46,-46,-46}, 0},
{{-35,-208,152,0}, 0},	{{-2080,0,0,0}, 0},	{{1,1,1676,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-2014,0,0}, 0},	{{-3444,-2014,17,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-2241,-2241,1670}, 0},	{{1,-2021,0,0}, 0},
{{1,199,1672,0}, 0},	{{1,0,1672,0}, 0},	{{-2039,-2039,-2039,-2039}, 35},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,1665,0}, 0},	{{0,0,-2030,0}, 39},	{{-2030,-2030,-2030,-2030}, 37},
{{-2224,28,-2113,0}, 0},	{{1,1662,1,0}, 43},	{{0,0,0,0}, 44},
{{-250,25,-2116,0}, 0},	{{1,1659,1660,0}, 43},	{{-3528,-3528,0,0}, 44},
{{-251,-251,1659,-251}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,-2227,0}, 0},	{{1,-2145,1,-2145}, 0},	{{-2145,0,0,0}, 41},
{{0,1655,-2128,0}, 0},	{{-14,-14,-14,0}, 42},	{{-95,-95,1654,0}, 0},
{{1,1596,1596,1596}, 0},	{{1,1,1596,1596}, 0},	{{1,1,1656,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1656}, 0},	{{0,0,1656,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1656}, 0},	{{0,0,0,1656}, 0},
{{0,0,0,0}, 45},	{{0,0,0,0}, 48},	{{1,0,-2244,0}, 0},
{{1,0,-2244,0}, 0},	{{-2135,-2135,-2135,0}, 41},	{{-3508,-3508,129,-3508}, 44},
{{-2110,-2110,-2110,-2110}, 44},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1646,1646,1647}, 0},	{{-3574,0,1647,0}, 0},
{{1,0,-2254,0}, 0},	{{1,11,1646,11}, 0},	{{-2049,0,-2008,0}, 41},
{{-2112,0,188,0}, 41},	{{-2224,-2224,1644,-2224}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,173,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-2059,0,0,0}, 0},	{{-2226,-125,1637,-125}, 0},	{{1,1,1,1}, 0},
{{1,0,26,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 23},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 25},	{{1,1,1,0}, 0},
{{0,0,0,0}, 24},	{{1,0,0,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 20},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,1583,0}, 0},	{{1,0,1,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1575}, 0},	{{-358,-358,1575,-358}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-2164,0,0}, 0},	{{1,1,1,-2263}, 0},
{{-2263,0,5,0}, 0},	{{1,-3650,1,-3650}, 0},	{{1,1503,0,0}, 0},
{{1,1,1,1}, 0},	{{-3650,0,0,1568}, 0},	{{0,0,0,0}, 12},
{{0,0,0,0}, 28},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1562}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1559}, 0},	{{0,0,0,1559}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-116,-116,-116}, 0},
{{-3743,0,56,0}, 0},	{{-2236,0,1554,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-375}, 0},	{{1,0,0,0}, 0},
{{1,1,1,0}, 0},	{{-2164,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-3647,-2217,38,0}, 0},	{{1,-2218,0,0}, 0},	{{1,1544,1,-134}, 0},
{{-2194,0,-2218,0}, 0},	{{-2257,0,1543,0}, 0},	{{-2258,0,1543,0}, 0},
{{1,1,1,1}, 12},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1535}, 0},
{{1,-2220,-2220,-2220}, 0},	{{-2186,-2186,-2186,-3599}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1518}, 0},	{{0,0,0,1519}, 0},
{{-3635,0,2,0}, 0},	{{-3633,0,1,0}, 0},	{{0,0,0,0}, 5},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-3673,-3673,-3673,1512}, 0},
{{-2236,0,-2196,0}, 0},	{{0,0,0,1511}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-40,-40,-40,-2261}, 0},	{{-2225,-2180,0,0}, 1},
{{0,0,0,0}, 6},	{{-2263,-2263,-2263,1500}, 0},	{{-2197,-2183,0,0}, 1},
{{0,0,0,1499}, 0},	{{1,7,7,0}, 0},	{{-2182,7,1498,1499}, 0},
{{1,1506,1511,0}, 0},	{{-2184,5,7,1511}, 0},	{{1,1518,1518,0}, 0},
{{1,1,1,1495}, 0},	{{0,0,14,0}, 0},	{{-2188,1,3,1516}, 0},
{{1,0,12,0}, 0},	{{-2188,0,-2188,0}, 0},	{{1,0,10,0}, 0},
{{0,0,1514,0}, 0},	{{1,1514,1516,-1711}, 0},	{{1,-1711,1517,0}, 0},
{{1,1,1,-1907}, 384},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1489,1489,1489}, 0},	{{1,0,0,0}, 0},	{{0,0,0,1512}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 383},	{{1,0,1,2}, 0},
{{0,0,1509,0}, 0},	{{0,0,1512,0}, 0},	{{1,1515,0,0}, 0},
{{-2201,6,6,1516}, 0},	{{1,6,0,0}, 0},	{{1,1520,4,1521}, 0},
{{-2203,0,1526,0}, 0},	{{1,1526,0,0}, 0},	{{1,1,1,1526}, 0},
{{0,0,1526,0}, 0},	{{1,0,0,1526}, 0},	{{0,0,1533,0}, 0},
{{1,1537,1539,-1734}, 0},	{{1,-1734,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-1930}, 0},	{{1,1,1,1}, 0},	{{-1930,0,1536,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,-2153}, 0},	{{1,1,1,-2153}, 0},
{{1,1,1,1}, 0},	{{-2153,-2153,1532,-2153}, 0},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,1529,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,565}, 0},	{{1,4,1,1527}, 0},
{{-2220,0,31,0}, 0},	{{-1,2,-1,1526}, 0},	{{1,1,1,1524}, 0},
{{1,0,28,0}, 0},	{{-2223,-2223,-2223,-2223}, 0},	{{-1,0,-2171,0}, 0},
{{-2,1526,1528,0}, 0},	{{1,0,-37,0}, 0},	{{-2225,-2145,60,0}, 0},
{{0,0,0,0}, 363},	{{1,-7,1,1525}, 0},	{{1,0,20,0}, 0},
{{1,-2231,-5,-2231}, 0},	{{-2231,1527,0,0}, 0},	{{1,1547,1549,550}, 0},
{{1,1555,-2234,-2234}, 0},	{{1,218,1555,218}, 0},	{{1,1555,1555,218}, 0},
{{1,1,1,1558}, 0},	{{1,-2234,-2234,-2234}, 0},	{{1,-2234,-2234,-2234}, 0},
{{-2234,-2234,-2234,1558}, 0},	{{1,1,1,1558}, 0},	{{0,0,8,0}, 0},
{{0,1508,1510,0}, 0},	{{-2217,2,3,0}, 0},	{{-2218,1,1555,0}, 0},
{{-2207,-2207,-2207,-2207}, 0},	{{1,1,0,0}, 368},	{{0,1553,0,0}, 0},
{{-2222,-3,1555,0}, 0},	{{0,0,0,0}, 368},	{{1,1554,-2212,-2212}, 0},
{{1,-1979,1554,-1979}, 0},	{{1,-1979,-1979,-1979}, 0},	{{1,-1979,-1979,-1979}, 0},
{{1,-2212,-2212,-2212}, 0},	{{1,-2212,-2212,-2212}, 0},	{{-2212,-2212,-2212,1553}, 0},
{{1,-1790,0,0}, 376},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-2204,-2204,-2204}, 0},	{{1,0,0,0}, 0},
{{-2204,-2204,-2204,1547}, 0},	{{-2232,-1992,-1992,2}, 0},	{{-1992,-1992,1546,-1992}, 0},
{{1,-1993,-1993,-1993}, 0},	{{1,-1993,-1993,-1993}, 0},	{{1,0,0,0}, 0},
{{1,-2192,0,0}, 0},	{{-2192,-2192,-2192,1543}, 0},	{{1,1,1,-1997}, 0},
{{1,-2189,-2189,-2189}, 0},	{{1,-2189,-2189,-2189}, 0},	{{-2189,-2189,-2189,1540}, 0},
{{1,-2272,-2272,-2272}, 0},	{{1,-2272,-2272,-2272}, 0},	{{-2272,-2272,-2272,1538}, 0},
{{1,-2187,-2187,-2187}, 0},	{{1,-2187,-2187,-2187}, 0},	{{-2187,-2187,-2187,1536}, 0},
{{-3745,-3745,-3745,1536}, 0},	{{-2243,1536,0,0}, 0},	{{0,0,0,0}, 369},
{{1,0,0,0}, 0},	{{-2210,1534,0,0}, 0},	{{1,1,1,1412}, 0},
{{1,1,1,-2204}, 0},	{{1,1,1,1}, 0},	{{-2204,-2204,-2204,1531}, 0},
{{1,1,0,0}, 0},	{{0,0,0,1534}, 0},	{{0,0,0,1534}, 0},
{{1,1,1,1534}, 0},	{{1,1,1,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 427},	{{-2193,-2193,-2193,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,19,19,0}, 0},	{{-2154,1517,-2154,-2154}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,1504}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{-2172,-2172,-2172,-2172}, 0},
{{1,4,8,1506}, 0},	{{-2206,0,0,0}, 0},	{{-1,5,6,9}, 0},
{{1,1,5,8}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-2187,0,0,0}, 0},	{{-2,35,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{-2191,0,1500,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,30,0,0}, 0},	{{0,0,1497,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-3798}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1497}, 0},	{{1,-15,-2206,1501}, 0},	{{-2218,0,0,0}, 0},
{{-1,-14,-2208,-10}, 0},	{{1,-18,-2209,-11}, 0},	{{1,0,0,0}, 0},
{{-2221,-2221,-2221,-2221}, 0},	{{-2221,1496,0,0}, 0},	{{1,0,55,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1492}, 0},	{{-2214,0,7,0}, 0},	{{1,1491,6,0}, 0},
{{1,1,1,-20}, 0},	{{1,1494,1,1495}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,1495,0}, 0},	{{1,1,1,0}, 0},
{{1,0,0,-2211}, 0},	{{1,0,1,0}, 0},	{{0,0,0,1492}, 0},
{{0,1492,0,0}, 0},	{{0,0,1493,0}, 0},	{{1,-45,-45,0}, 0},
{{1,-2218,1,-2218}, 0},	{{0,0,1494,0}, 0},	{{1,0,6,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,1489,0,0}, 0},	{{0,0,1492,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1488}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1486,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 406},	{{0,1,7,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,1469}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1466}, 0},	{{1,49,1472,51}, 308},	{{1,-1580,51,0}, 0},
{{-2215,45,-2110,-2215}, 0},	{{1,64,65,68}, 0},	{{1,-2038,70,0}, 0},
{{-2223,42,-2113,-2218}, 0},	{{1,386,1467,0}, 197},	{{1,1,21,21}, 0},
{{1,1,1466,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,1461,0}, 0},	{{1,79,1461,0}, 0},	{{1,1470,90,-2229}, 0},
{{-2176,-2176,1470,-2176}, 203},	{{1,1470,1455,0}, 0},	{{1,1471,0,0}, 0},
{{1,1,1,1476}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,1477,0}, 0},	{{-2138,-2138,1478,-2138}, 0},	{{-3883,-3883,1478,-3883}, 0},
{{1,366,1447,0}, 197},	{{1,1,1,1}, 0},	{{-19,-19,-19,-19}, 0},
{{1,1479,1481,333}, 0},	{{1,1481,0,0}, 0},	{{1,1,1,1486}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,1485}, 0},	{{1,12,1485,14}, 308},
{{1,-1617,14,0}, 0},	{{-2252,8,9,-2252}, 0},	{{1,27,1483,31}, 0},
{{-2,-2075,33,0}, 0},	{{1,52,54,0}, 0},	{{-2203,62,-2256,-2256}, 0},
{{1,1444,1429,0}, 0},	{{1,1445,0,0}, 0},	{{0,0,0,1478}, 0},
{{-2161,-2161,-2161,-2161}, 0},	{{-2260,-2260,-2260,101}, 0},	{{-22,-1628,41,0}, 197},
{{-2211,459,1477,0}, 0},	{{0,-1630,39,0}, 0},	{{1,1,1,0}, 297},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{0,0,0,0}, 299},
{{1,1,1,1}, 0},	{{1,1,1,-2287}, 0},	{{1,1,-2287,-2287}, 0},
{{-2287,-2287,-2287,1463}, 0},	{{0,0,0,0}, 199},	{{-40,325,23,0}, 197},
{{1,1461,1462,0}, 0},	{{1,-2282,37,-2282}, 0},	{{-2282,-2282,-2282,-2282}, 203},
{{1,1466,19,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 318},
{{1,-21,1464,0}, 297},	{{1,1,1,1468}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1469}, 0},
{{1,1,1,1470}, 0},	{{1,-21,-21,0}, 0},	{{1,-21,-21,0}, 0},
{{0,0,0,0}, 311},	{{1,1,1,1}, 0},	{{1,1,1,-2309}, 0},
{{1,1,1,1}, 0},	{{-2309,-2309,-2309,1466}, 0},	{{-61,-1551,2,0}, 197},
{{0,-1552,1,0}, 0},	{{0,0,0,0}, 297},	{{-2149,-1441,0,0}, 185},
{{-2150,0,1464,0}, 297},	{{-2294,-2294,0,0}, 303},	{{1,546,1467,0}, 185},
{{-1507,-1507,-1507,-1507}, 208},	{{1,0,1460,0}, 297},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 212},	{{-2264,-2264,-2264,-2264}, 0},	{{-2213,-2318,-2213,-2318}, 0},
{{-2259,-2259,0,0}, 199},	{{1,1454,0,0}, 185},	{{-2257,-2257,-2257,-2257}, 306},
{{-2063,-2063,1446,0}, 297},	{{1,1,1,-2259}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1380,1380,1380}, 0},	{{1,1380,1380,1380}, 0},
{{0,0,0,1447}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1380,1380,1380}, 0},	{{-2264,0,590,0}, 0},	{{0,0,0,1443}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1440,1442,1443}, 0},	{{1,1,590,592}, 0},	{{1,-2262,0,0}, 0},
{{-2262,-1245,0,0}, 0},	{{0,0,182,1440}, 0},	{{0,0,181,590}, 0},
{{0,0,0,589}, 0},	{{1,1,1,1}, 0},	{{-1417,-1417,-1417,-1417}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1434,1}, 0},	{{-80,-80,-80,6}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2262,-4,-4,-4}, 0},	{{-85,-85,-85,1434}, 0},	{{0,0,1436,0}, 0},
{{-2259,-2259,1437,-2259}, 0},	{{1,1,1,0}, 0},	{{0,0,0,0}, 294},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2375}, 0},	{{1,0,-88,0}, 0},
{{1,0,1,0}, 0},	{{0,0,0,1432}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2382}, 0},	{{1,1,1,1}, 0},	{{-2382,-2382,-2382,1430}, 0},
{{-2262,-2262,-2262,1434}, 0},	{{-4016,-4016,-4016,1435}, 0},	{{1,0,-2257,0}, 0},
{{1,0,0,0}, 0},	{{0,1435,0,0}, 0},	{{1,0,-2260,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1432}, 0},	{{-2263,34,35,1432}, 0},
{{0,213,0,0}, 197},	{{1,212,0,0}, 0},	{{1,1432,0,0}, 0},
{{1,1432,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,26,26}, 0},	{{1,0,0,0}, 357},	{{0,0,0,1432}, 0},
{{1,24,25,1432}, 0},	{{-2273,-1768,1432,0}, 0},	{{1,82,83,0}, 0},
{{1,0,91,0}, 0},	{{1,1,1,1}, 203},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2240,-2240,-2240,1431}, 0},
{{1,280,1431,165}, 0},	{{1,1437,0,0}, 0},	{{1,1437,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,9,9,9}, 0},
{{1,0,0,0}, 0},	{{0,0,0,1437}, 0},	{{1,187,0,0}, 0},
{{1,1407,0,0}, 0},	{{1,1435,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-24,0,0,0}, 0},
{{0,-1791,0,0}, 197},	{{1,296,1433,0}, 0},	{{1,1434,68,0}, 0},
{{0,0,0,0}, 203},	{{1,-1795,1439,0}, 0},	{{1,1396,0,0}, 0},
{{1,1438,1,1}, 242},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{-1801,0,0,0}, 0},	{{1,0,100,0}, 0},	{{-1799,-1799,-1799,-1799}, 0},
{{1,101,1,30}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1433,-2244}, 0},	{{0,0,-2218,1433}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2238,-2238,-2238,1}, 0},	{{-2224,-2224,106,90}, 0},	{{1,364,1430,0}, 0},
{{1,0,46,0}, 0},	{{1,1430,1,1}, 203},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1386}, 0},
{{1,1,1,1}, 0},	{{-3786,0,-3786,0}, 0},	{{1,148,0,0}, 0},
{{1,1368,1426,0}, 0},	{{0,1431,0,1435}, 0},	{{1,0,75,0}, 0},
{{1,1,1,-1526}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1745,1430,-1745,-1526}, 0},	{{1,1,1,1}, 334},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2273,-2273,-2273,-2273}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2266,1422,-2266,1423}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2262,1420,-2262,2}, 0},
{{-4108,-2270,-2255,1420}, 0},	{{-2271,-2271,-2256,1422}, 0},	{{0,-1731,0,0}, 197},
{{0,-1732,0,0}, 0},	{{1,0,0,0}, 0},	{{-2258,-2258,-2258,-2258}, 0},
{{-1685,368,1289,0}, 185},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1414}, 0},	{{1,1,1,1}, 0},	{{1,11,1415,0}, 0},
{{-1677,0,-3823,0}, 212},	{{1,1414,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,1414,0}, 0},	{{1,1,1,1428}, 0},
{{0,1431,0,0}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 338},	{{-2248,390,0,0}, 185},
{{1,-2249,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2445}, 0},
{{1,1,1,1}, 0},	{{1,0,1424,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,1424}, 0},	{{-2451,1424,-2451,-2451}, 0},	{{1,1,1428,1}, 0},
{{1,1,1,1}, 0},	{{1,1339,1339,1339}, 0},	{{1,1353,1353,1353}, 0},
{{0,0,0,1425}, 0},	{{-2346,-2346,1425,-2346}, 0},	{{0,0,0,1425}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1632,-1632,-1632,-1632}, 0},	{{-1600,-1600,-1600,-1600}, 0},
{{1,1,17,1}, 0},	{{0,18,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1408,-2344}, 0},
{{0,0,-2318,1408}, 0},	{{0,0,-2319,1408}, 0},	{{0,0,-2320,-2307}, 0},
{{1,1407,0,0}, 0},	{{1,0,0,0}, 0},	{{-3519,0,1407,0}, 0},
{{-2325,-2325,5,1407}, 0},	{{-12,-12,4,1407}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,1405}, 0},	{{-2328,2,0,0}, 0},
{{-2316,1404,1406,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1406}, 0},	{{-2331,-2331,-2331,-2331}, 329},	{{0,0,0,0}, 327},
{{0,0,0,0}, 325},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{0,0,0,1397}, 0},	{{0,0,0,0}, 197},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{-331,-331,-331,-331}, 0},	{{-2303,-1943,0,0}, 197},
{{1,144,150,0}, 0},	{{-296,-2579,29,-2579}, 0},	{{1,-1946,1391,0}, 0},
{{1,1393,175,-1832}, 0},	{{1,1,1393,1397}, 243},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,1395,0}, 0},	{{-1950,0,1395,0}, 0},
{{-1941,1,194,1395}, 0},	{{-1940,1400,-1940,-1940}, 0},	{{-2306,223,1404,0}, 0},
{{1,15,0,0}, 0},	{{1,1403,1404,-1842}, 0},	{{-2300,231,236,251}, 0},
{{-3861,35,-1562,-1862}, 0},	{{-1872,1402,-1872,-1872}, 0},	{{1,-1863,-1863,-1863}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-1863}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1401}, 0},	{{1,0,-1506,0}, 0},	{{0,0,1402,0}, 0},
{{-2603,-1852,0,0}, 0},	{{1,-1853,0,0}, 0},	{{-1855,-1855,-1855,-1855}, 0},
{{0,-1742,0,0}, 185},	{{0,0,0,0}, 201},	{{-1798,266,1397,0}, 0},
{{-2502,-2607,1398,-2607}, 0},	{{0,1398,0,1402}, 0},	{{1,298,1405,233}, 0},
{{1,1405,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1405}, 0},	{{1,1,1,1}, 224},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,303,304,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2056}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1398}, 0},	{{0,0,0,1398}, 0},	{{-2436,-2436,1398,-2436}, 0},
{{-1668,1398,-1668,-1668}, 0},	{{-1963,-1474,-1474,-1616}, 0},	{{-1601,1401,-1601,-1601}, 0},
{{-1897,1404,-1897,-1897}, 0},	{{-3894,1405,-3894,-3894}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1403,1405,1407}, 0},	{{1,1358,1408,1409}, 0},
{{-2317,0,1409,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1410}, 0},
{{-1442,0,83,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1408}, 0},
{{1,14,-1958,0}, 0},	{{1,-1958,-1958,0}, 0},	{{1,0,0,0}, 0},
{{1,-1958,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,-1958,-1958}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2172}, 0},	{{1,1,-2172,-2172}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2172}, 0},	{{-2172,-2172,-2172,-2172}, 149},	{{-1971,-1971,443,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2180,-2180,-2180,1385}, 0},
{{1,57,63,0}, 0},	{{1,21,22,21}, 0},	{{-1921,-1921,-1921,1383}, 203},
{{1,-2034,0,0}, 0},	{{1,1382,1383,-1920}, 0},	{{1,0,1383,1386}, 243},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1382}, 0},	{{-2173,136,138,0}, 0},
{{1,-72,0,0}, 0},	{{1,-69,-1829,-1929}, 0},	{{-1970,144,149,1379}, 0},
{{1,1379,1,-1948}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-1948}, 0},
{{1,1,1,1}, 0},	{{-1948,-1948,-1948,1379}, 0},	{{1,-1935,0,0}, 0},
{{1,1,1,1}, 0},	{{-1941,-1941,-1941,1363}, 0},	{{-1869,-1942,201,1362}, 0},
{{-2403,-2403,1376,-2403}, 0},	{{-114,1382,0,0}, 185},	{{-446,1382,-446,1386}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-2129,-2129,-2129}, 0},
{{1,-2129,-2129,-2129}, 0},	{{0,0,0,1385}, 0},	{{1,1,1,1}, 224},
{{1,1,1,1}, 0},	{{1,-80,-80,-80}, 0},	{{-451,222,223,0}, 0},
{{0,0,0,1381}, 0},	{{-21,-1970,-21,-1970}, 0},	{{-2329,-1610,-1610,1}, 0},
{{1,0,-1610,0}, 0},	{{1,-1609,1,0}, 0},	{{0,0,0,1377}, 0},
{{-2158,-2073,0,0}, 197},	{{1,14,1377,0}, 0},	{{-426,-2709,-2709,-2709}, 0},
{{1,-2076,0,0}, 0},	{{1,1263,1341,-1962}, 0},	{{0,0,1341,1344}, 243},
{{-2166,-2066,-2066,-1982}, 0},	{{-4137,0,0,-153}, 0},	{{-2157,97,99,0}, 0},
{{1,-111,0,0}, 0},	{{1,-108,2,-1968}, 0},	{{-2156,105,-2156,125}, 0},
{{0,1367,0,124}, 0},	{{0,0,0,1367}, 0},	{{0,0,0,0}, 155},
{{1,131,1366,0}, 185},	{{1,1,1,1}, 208},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1922,-1922,-1922,-1922}, 0},
{{1,145,153,0}, 0},	{{1,1,1,1}, 193},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1354,0}, 0},	{{1,0,1,0}, 212},
{{0,0,0,0}, 241},	{{1,1,1,1}, 0},	{{1,-2752,4,-2752}, 0},
{{-2118,-2752,-2752,1350}, 0},	{{1,-2121,1359,-2121}, 0},	{{-2121,-2755,148,-2755}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,-468,0}, 0},	{{0,0,0,0}, 206},
{{0,0,0,0}, 239},	{{1,1,1,0}, 0},	{{0,0,1350,0}, 0},
{{1,0,1301,1304}, 0},	{{1,0,1,0}, 0},	{{1,1,1,0}, 0},
{{0,0,15,0}, 0},	{{1,0,1297,1346}, 0},	{{1,1,0,0}, 0},
{{0,1345,0,0}, 0},	{{1,1295,1345,1295}, 0},	{{1,1,1,1345}, 0},
{{1,1345,1217,1217}, 0},	{{1,1,1,1}, 244},	{{0,0,0,1345}, 0},
{{-331,0,-331,0}, 249},	{{1,1,1,-331}, 0},	{{-2133,0,4,0}, 0},
{{-2134,1,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1340}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 246},
{{0,0,0,0}, 236},	{{-2137,0,1330,0}, 0},	{{-2133,-2133,1342,-2133}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-4213}, 0},	{{1,1,1,1}, 0},
{{-4213,-2180,-2180,1342}, 0},	{{0,0,0,1342}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2033}, 0},	{{-2259,-2184,-2184,2}, 0},	{{-2126,-1637,-1637,1}, 0},
{{1,0,-3754,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1328}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1320}, 0},
{{1,41,962,0}, 185},	{{-89,-89,-89,1319}, 208},	{{1,59,67,0}, 0},
{{1,1,1,1}, 193},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-504}, 0},	{{1,1,1,1}, 0},
{{1,0,-4151,0}, 0},	{{-4151,0,-4151,0}, 212},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,0,0,1309}, 0},	{{-2265,-2265,1309,-2265}, 0},	{{1,0,1312,0}, 224},
{{1,1,1,1}, 0},	{{0,0,1314,0}, 0},	{{0,0,0,1314}, 0},
{{1,0,0,0}, 0},	{{-2190,1313,-2190,0}, 0},	{{-2230,-2230,-2230,189}, 0},
{{-2231,-2231,-2231,200}, 0},	{{-2232,-2232,-2232,202}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-1804}, 0},	{{-2310,-2235,-2235,-1737}, 0},	{{-2177,-1688,-1688,174}, 0},
{{0,0,1307,1}, 0},	{{0,0,0,0}, 224},	{{-2196,-2196,1306,-2196}, 0},
{{-2687,1307,0,0}, 0},	{{1,1,-2068,-2290}, 0},	{{1,0,-241,0}, 0},
{{1,1,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-2068,0,0,-1828}, 0},	{{-2300,-2300,1301,-2300}, 0},	{{-129,-129,-129,-129}, 190},
{{1,1,1,-130}, 0},	{{1,-130,-130,-130}, 0},	{{1,-130,-130,-130}, 0},
{{1,-130,-130,-130}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-1989,-1989,-1989}, 0},	{{-1989,1295,-1989,-1989}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2}, 0},
{{-2060,-2060,-2060,1291}, 0},	{{1,1,1,1}, 0},	{{1,1292,1292,1292}, 0},
{{1,3,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1290}, 0},
{{0,0,0,0}, 209},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 216},
{{0,0,0,0}, 193},	{{1,1,1,1}, 0},	{{1,3,1284,3}, 0},
{{1,1284,1286,0}, 212},	{{0,0,0,0}, 213},	{{0,0,1284,0}, 0},
{{-2070,0,1,0}, 0},	{{-4216,-4216,-4216,-4216}, 214},	{{-2902,-2902,1282,-2902}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-146}, 0},	{{1,1,1,1}, 0},
{{-146,-146,-146,1281}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-2065,0,0,0}, 0},	{{0,0,0,0}, 205},	{{-2833,-2833,-2833,-2833}, 190},
{{-2833,-2833,1277,-2833}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1108,1108,1108}, 0},	{{-2834,0,1277,0}, 0},	{{1,1,1,1}, 224},
{{1,1,1,1}, 0},	{{1,1108,1108,1108}, 0},	{{-2838,0,1274,0}, 0},
{{1,1274,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1274}, 0},	{{0,1,1274,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1274}, 0},	{{-2851,-2851,1274,-2851}, 0},	{{-2065,-2065,1275,-2065}, 0},
{{0,0,0,1275}, 0},	{{-2062,-2062,1275,-2062}, 0},	{{0,0,0,1275}, 0},
{{0,0,0,1275}, 0},	{{-4245,-2212,1275,-2359}, 0},	{{0,0,0,1275}, 0},
{{1,853,1282,1284}, 0},	{{-2552,0,0,0}, 0},	{{-1,851,851,1282}, 0},
{{1,-2037,-404,0}, 0},	{{-2037,-1834,0,0}, 0},	{{1,-2853,0,0}, 0},
{{-2006,-1836,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 188},	{{1,1,1,1}, 0},	{{1,-2008,1,-2008}, 0},
{{1,-2008,1,-2008}, 0},	{{1,1,1,1}, 0},	{{1,-2033,-2033,0}, 0},
{{1,1,1,1}, 0},	{{-2033,-2033,-2033,1270}, 0},	{{-2013,-2013,1277,-2013}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1270}, 0},	{{1,0,0,0}, 0},
{{1,-2309,-2309,0}, 0},	{{1,1,0,0}, 194},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1259}, 0},	{{0,0,0,1259}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2316}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,-3932,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,1253}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-4402,-2369,-2369,2}, 0},	{{-2311,-1822,-1822,1}, 0},	{{1,0,-3939,0}, 0},
{{1,-184,-184,-184}, 0},	{{1,0,11,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-1964,-1964,-1964}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1239}, 0},	{{-140,0,-3951,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1230}, 0},
{{0,0,0,1230}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1222}, 0},	{{1,0,-3971,0}, 0},	{{1,1,1,0}, 0},
{{-1944,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-2283}, 0},
{{1,1,1,1}, 184},	{{-2409,-2409,-2409,4}, 0},	{{1,0,-3978,0}, 0},
{{1,-223,-223,-223}, 0},	{{-1911,0,0,0}, 0},	{{1,0,-3981,0}, 0},
{{1,0,786,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{-3992,-3992,-3992,1209}, 0},	{{-2707,1215,-1976,-1975}, 0},	{{1,0,-3987,0}, 0},
{{1,16,16,0}, 0},	{{1,-1842,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1214}, 0},	{{1,0,-3999,0}, 0},
{{1,-27,-27,0}, 0},	{{-1972,-1854,0,0}, 0},	{{1,0,-4002,0}, 0},
{{1,1,1,0}, 0},	{{-14,0,0,0}, 0},	{{1,0,43,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1201}, 0},	{{0,0,0,1201}, 0},	{{-2718,1201,-1966,-1965}, 0},
{{-2679,1211,-1963,-1963}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1220}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1219}, 0},	{{-2481,-2452,-2452,-1954}, 0},
{{-2478,-2453,-2453,-1955}, 0},	{{-2466,-2454,-2454,-44}, 0},	{{0,0,0,1216}, 0},
{{1,1216,1216,1226}, 0},	{{1,0,-4025,0}, 0},	{{1,-4489,-4489,-4489}, 0},
{{1,1192,1203,1203}, 0},	{{1,1232,-2468,-2468}, 0},	{{1,1178,1192,1237}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-4598,1237,-4598,-4598}, 0},	{{1,0,-4035,0}, 0},
{{1,0,0,0}, 0},	{{1,-1890,0,0}, 0},	{{1,-4046,-4046,-4046}, 0},
{{-4046,-4046,-4046,1233}, 0},	{{-4116,0,0,0}, 155},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1232}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1232}, 0},	{{0,0,0,1232}, 0},
{{-525,-2479,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1232}, 0},
{{-4229,-4229,-4229,1232}, 0},	{{-2413,0,0,0}, 155},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,-295,-295}, 0},
{{1,1,1,1}, 0},	{{-4231,-4231,-4231,1235}, 0},	{{-3963,-3963,-3963,1235}, 0},
{{0,0,1235,0}, 0},	{{0,1238,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{1,0,1,0}, 0},	{{0,0,0,1227}, 0},	{{0,42,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,0,0}, 0},
{{0,1223,0,0}, 0},	{{-1728,0,0,0}, 0},	{{0,0,0,1234}, 0},
{{-1820,-3949,-3949,-3949}, 0},	{{1,-3950,1,-3950}, 0},	{{0,1232,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 147},
{{1,-1789,0,0}, 0},	{{0,0,1232,0}, 0},	{{0,0,1232,1233}, 0},
{{1,0,0,0}, 0},	{{-1816,-1816,-1816,-1816}, 0},	{{-1816,1,1236,0}, 0},
{{1,1,1,1}, 0},	{{1,-3965,-3965,0}, 0},	{{1,0,-1805,0}, 0},
{{-1810,-1810,-1810,1235}, 0},	{{1,1,1,1}, 0},	{{1,-3969,-3969,0}, 0},
{{0,0,-1809,0}, 143},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 142},	{{0,0,0,0}, 141},
{{1,-1810,0,0}, 0},	{{1,43,0,0}, 0},	{{1,0,0,0}, 0},
{{1,-1803,-1803,-1803}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-1803}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1217}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 116},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{-1765,0,0,0}, 0},	{{0,-1827,6,0}, 0},
{{1,1207,5,0}, 0},	{{-1809,1208,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,1,0}, 116},	{{0,1207,0,0}, 0},	{{0,0,1217,0}, 0},
{{0,0,1217,0}, 0},	{{1,1,1,1}, 0},	{{-1824,-1824,1217,-1824}, 0},
{{0,0,0,1217}, 0},	{{0,0,0,1217}, 0},	{{1,1,1,1}, 0},
{{0,1217,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1212}, 0},	{{-1852,0,1212,0}, 0},	{{0,0,0,1212}, 0},
{{1,-1821,-1821,-1821}, 0},	{{1,0,0,0}, 0},	{{1,-1821,-1821,-1821}, 0},
{{0,1212,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1212}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1213}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1223}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 125},	{{0,0,0,1223}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 122},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1221}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1215}, 0},
{{1,1,1,-3638}, 0},	{{1,-4003,-4003,-4003}, 0},	{{1,1,-3638,-3638}, 0},
{{-4003,-4003,-4003,1219}, 0},	{{0,0,0,1226}, 0},	{{0,0,0,1235}, 0},
{{0,0,0,1235}, 0},	{{1,0,-3705,0}, 0},	{{1,0,-1657,0}, 0},
{{-1712,-1712,-1712,0}, 0},	{{1,34,36,0}, 0},	{{1,0,37,0}, 0},
{{0,0,0,0}, 98},	{{1,0,-3711,0}, 0},	{{1,0,-1663,0}, 0},
{{-1718,4,-1718,0}, 0},	{{1,0,-3650,0}, 0},	{{1,1,-3804,0}, 0},
{{-3804,1224,-3804,-3804}, 0},	{{-1721,-1721,1260,-1721}, 0},	{{1,0,0,0}, 0},
{{0,0,1262,0}, 0},	{{0,0,0,1263}, 0},	{{1,-5108,-5108,0}, 0},
{{1,0,-5108,0}, 0},	{{1,0,10,0}, 68},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1252}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1244}, 0},	{{1,1244,0,0}, 0},
{{0,0,0,0}, 106},	{{1,103,1243,0}, 0},	{{0,0,0,0}, 100},
{{0,0,-1414,12}, 102},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,1239}, 0},	{{1,-5137,-3935,0}, 0},	{{1,0,-3935,0}, 0},
{{-28,0,-19,0}, 96},	{{1,-5140,-3938,0}, 0},	{{1,-1708,1,-1708}, 0},
{{0,0,0,30}, 96},	{{1,1,1,1}, 0},	{{0,0,0,1232}, 0},
{{0,0,0,0}, 85},	{{1,1,1,1}, 85},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-5151,-5151,1226,0}, 0},	{{1,1,1,1}, 0},	{{1,-3929,1,-3929}, 0},
{{1,1225,1225,1226}, 0},	{{0,0,0,1226}, 0},	{{0,0,0,1226}, 0},
{{0,0,0,1226}, 0},	{{-5159,-5159,-5159,1227}, 0},	{{1,-5159,-5159,0}, 0},
{{1,0,-5159,0}, 0},	{{1,0,-1695,0}, 68},	{{1,1227,1227,1227}, 0},
{{1,1,1,1}, 0},	{{1,1227,1,-1709}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-1709}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1227}, 0},	{{0,0,0,1227}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1226}, 0},	{{0,0,0,1226}, 0},
{{0,0,0,1234}, 0},	{{0,0,0,1234}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1594,-1594,-1594,-1594}, 0},	{{-1689,-1689,1231,-1689}, 0},
{{-1615,46,47,-1673}, 43},	{{-1680,-1494,-1493,1232}, 0},	{{1,1233,1233,-1864}, 0},
{{1,1,1,1}, 57},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,-3839,0}, 0},	{{1,-1674,1,-1674}, 0},
{{0,0,0,14}, 41},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{0,0,0,0}, 62},
{{1,0,1,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,66}, 0},	{{0,0,0,0}, 57},	{{1,1,1,1}, 0},
{{0,0,0,1212}, 0},	{{1,1,1,1}, 0},	{{1,1211,1,0}, 0},
{{0,0,0,1212}, 0},	{{1,0,0,0}, 0},	{{0,1,0,0}, 0},
{{0,0,0,1210}, 0},	{{-1672,-1672,-1672,-1672}, 0},	{{-1647,-1647,-1647,0}, 43},
{{-1648,-1648,14,0}, 43},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1674,-3689,-1434,0}, 0},
{{1,-3690,0,0}, 0},	{{1,72,1202,-1606}, 0},	{{1,0,-1659,0}, 0},
{{-3666,-3666,-3666,-3666}, 35},	{{-3730,0,71,0}, 39},	{{-1471,-1471,-1471,-1471}, 37},
{{0,0,0,75}, 38},	{{0,0,-1619,0}, 44},	{{-3802,-3802,-3802,-3802}, 44},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-3884,0,16,0}, 0},	{{0,0,0,0}, 47},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1185}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1184}, 0},	{{0,0,0,1184}, 0},	{{1,1,1,1}, 0},
{{0,0,1183,0}, 0},	{{0,0,0,1184}, 0},	{{0,0,0,1184}, 0},
{{-3876,0,2,0}, 0},	{{-3874,0,1,0}, 0},	{{-3899,0,-3899,0}, 5},
{{-3694,0,-3654,0}, 41},	{{1,1,1,1}, 0},	{{-3867,-3867,-3867,1179}, 0},
{{1,1,1,1159}, 0},	{{1,1159,1159,1159}, 0},	{{1,1177,1,1}, 0},
{{1,1,1,1}, 0},	{{-3862,0,1177,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{0,0,0,0}, 21},
{{0,0,0,1173}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-3737,-3737,-1482,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1157}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1157}, 0},	{{0,0,0,1157}, 0},
{{0,0,0,1157}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1552,-1552,-1552,0}, 0},	{{-3737,0,-1592,0}, 0},	{{-9,-9,-9,-9}, 12},
{{-1500,-1500,-1500,-1500}, 12},	{{1,-3754,-3754,-3754}, 0},	{{1,-5133,-5133,-5133}, 0},
{{-1531,-3675,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 13},
{{1,1,1,1}, 0},	{{0,0,0,1141}, 0},	{{-5184,-5184,-5184,1141}, 0},
{{0,0,0,1141}, 0},	{{-5141,-5141,-5141,1142}, 0},	{{0,0,0,1143}, 0},
{{-1488,0,1144,0}, 0},	{{1,1149,1151,0}, 0},	{{1,0,29,0}, 0},
{{1,1,1,0}, 384},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,1146}, 0},
{{1,-1500,1146,1147}, 0},	{{1,0,1148,0}, 0},	{{1,0,-1488,0}, 0},
{{1,0,0,-1487}, 0},	{{0,0,1155,0}, 0},	{{-3694,1164,-1503,1142}, 0},
{{1,1164,1166,-897}, 0},	{{1,-897,1167,0}, 0},	{{1,1,1,-1229}, 384},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-13,-13,-13}, 0},
{{1,0,0,0}, 0},	{{0,0,0,1162}, 0},	{{-1516,-1516,-1516,1}, 0},
{{1,0,-1503,0}, 0},	{{0,0,6,0}, 0},	{{-1502,0,-1502,0}, 0},
{{1,-3224,0,0}, 0},	{{-1512,-1512,-1512,-3420}, 0},	{{1,-3226,0,0}, 0},
{{-3422,-3422,-3422,-3422}, 388},	{{0,0,1154,0}, 0},	{{0,0,0,1158}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1155}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1152}, 0},	{{1,0,0,19}, 0},
{{0,0,1151,0}, 0},	{{1,1156,16,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,29,0}, 0},	{{0,0,1152,0}, 0},	{{1,1152,1154,-932}, 0},
{{1,-932,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-1264}, 0},
{{1,1,1,1}, 0},	{{-1264,0,22,0}, 0},	{{-1513,0,1149,0}, 0},
{{0,0,0,3}, 0},	{{0,1141,1,0}, 0},	{{-3670,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1142}, 0},	{{1,0,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,1138,0}, 0},	{{1,-3270,0,0}, 0},	{{-3466,-3466,1137,-3466}, 0},
{{1,-3272,0,0}, 0},	{{-1481,1139,-1481,-1481}, 0},	{{0,0,0,1139}, 0},
{{-3684,0,0,1139}, 0},	{{0,0,0,1139}, 0},	{{-1522,0,59,0}, 0},
{{1,0,58,0}, 0},	{{1,-3747,-3747,-3747}, 0},	{{1,1136,1136,1136}, 0},
{{1,1137,-3667,0}, 0},	{{-3747,-3747,-3747,-3659}, 378},	{{1,0,0,0}, 0},
{{0,0,1135,0}, 0},	{{-3699,0,0,0}, 376},	{{1,0,1137,0}, 0},
{{1,-3755,-3755,-3755}, 0},	{{1,1136,1136,1136}, 0},	{{1,-3675,-3675,0}, 0},
{{-3755,-3755,-3755,-3667}, 380},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{1,0,1,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 379},	{{1,-996,0,0}, 0},	{{-1328,-1328,1113,-1328}, 0},
{{1,-998,0,0}, 376},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-3728,-3728,-3728}, 0},	{{1,0,0,0}, 0},
{{-3728,-3728,-3728,1110}, 0},	{{-1553,-1336,-1336,-1336}, 0},	{{-1336,-1336,1109,-1336}, 0},
{{1,1,1,-1336}, 0},	{{1,-3708,-3708,-3708}, 0},	{{1,-3708,-3708,-3708}, 0},
{{-3708,-3708,-3708,1107}, 0},	{{1,-3703,-3703,-3703}, 0},	{{1,-3703,-3703,-3703}, 0},
{{-3703,-3703,-3703,1105}, 0},	{{-3791,-3791,-3791,1105}, 0},	{{0,0,5,0}, 0},
{{-1552,-1552,0,0}, 376},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,1101,0}, 0},	{{0,0,0,0}, 376},	{{-1552,-3532,-3532,-3532}, 0},
{{1,1,1099,1}, 0},	{{1,1,1,1}, 0},	{{1,1082,1082,1082}, 0},
{{-3532,0,0,1098}, 0},	{{-3764,-3764,-3764,1098}, 0},	{{-3750,-3750,-3750,1098}, 0},
{{1,1,1,1}, 0},	{{-3537,0,1097,0}, 0},	{{-3734,-3734,-3734,1097}, 0},
{{-3728,-3728,-3728,1097}, 0},	{{-3809,-3809,-3809,1097}, 0},	{{-3722,-3722,-3722,1097}, 0},
{{-5280,-5280,-5280,1097}, 0},	{{0,0,1102,0}, 0},	{{0,0,1111,0}, 0},
{{1,-3734,-3734,-3734}, 0},	{{1,-3734,1,-3734}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1111}, 0},	{{0,0,0,1111}, 0},
{{0,0,0,1113}, 0},	{{1,-1532,-1532,0}, 0},	{{1,-1532,-1532,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1109,1,1109}, 0},
{{-1532,0,1109,0}, 0},	{{-1515,0,-1445,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1102}, 0},
{{1,0,0,0}, 0},	{{1,1108,1108,-1494}, 0},	{{1,-1465,1108,0}, 0},
{{0,0,1108,0}, 0},	{{0,0,1111,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1111}, 0},
{{1,0,-1434,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1109}, 0},	{{-1508,1115,0,0}, 0},
{{0,0,1116,0}, 0},	{{0,0,1119,0}, 0},	{{1,1,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,1115,0}, 0},	{{-1492,0,8,0}, 0},	{{1,0,0,0}, 0},
{{1,-1493,1,-1493}, 0},	{{0,0,1120,0}, 0},	{{0,0,0,0}, 414},
{{-1485,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,1117,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1133}, 0},	{{-1485,-1485,1133,-1485}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,1130}, 0},
{{0,0,0,1130}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1139}, 0},
{{-1484,-1484,1139,0}, 0},	{{0,0,0,1152}, 0},	{{1,0,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1146}, 0},
{{-3633,-963,1146,0}, 0},	{{0,0,83,0}, 297},	{{-1464,-1464,1145,-1464}, 0},
{{0,0,0,0}, 303},	{{1,0,80,0}, 297},	{{1,1,1,1}, 0},
{{1,1,-1379,-1379}, 0},	{{1,1,1,1}, 0},	{{1,1144,-1379,-1379}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1154,1154,1154}, 0},
{{1,0,1,0}, 212},	{{0,0,0,0}, 320},	{{-3645,-3645,1,-3645}, 0},
{{-3645,-3645,1151,-3645}, 0},	{{1,1155,0,0}, 185},	{{0,0,0,0}, 306},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1149}, 0},
{{1,1,1,29}, 0},	{{1,1,1,1}, 0},	{{1,1,1147,1}, 0},
{{0,0,-789,0}, 0},	{{1,1,0,0}, 0},	{{0,0,0,1145}, 0},
{{-3615,-3615,1145,-3615}, 0},	{{1,1,1,1}, 0},	{{1,-5360,-5360,-5360}, 0},
{{1,1147,1,1}, 0},	{{1,1,1,1}, 0},	{{0,1146,-3601,0}, 0},
{{1,1147,0,0}, 185},	{{-1477,-1477,-1477,-1477}, 306},	{{-1147,-1147,46,0}, 297},
{{1,1,1,-1479}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-20,-20,-20}, 0},	{{1,-20,-20,-20}, 0},	{{0,0,0,1140}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-20,-20,-20}, 0},
{{-1484,0,-810,0}, 0},	{{0,0,0,1136}, 0},	{{-1479,-1013,5,0}, 0},
{{-1027,6,7,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-27,-27,-27,-27}, 0},	{{-1430,0,0,0}, 297},	{{-1364,0,-1462,0}, 0},
{{-1019,-889,32,0}, 185},	{{1,0,0,0}, 297},	{{1,1,1,1127}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1127,1,1128}, 0},	{{-1433,-1433,-1433,1130}, 0},	{{-48,-2887,0,0}, 185},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-1403,-1403,-1403,-1403}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,2}, 0},
{{-1466,-1466,-1466,1122}, 0},	{{1,-1467,-1467,1121}, 0},	{{-1467,-1489,1122,0}, 0},
{{1,0,1124,0}, 0},	{{1,1125,0,0}, 0},	{{0,0,0,0}, 312},
{{1,0,-1487,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 310},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,1117,0}, 0},	{{-1050,-1050,-1050,-1050}, 0},
{{-1450,-1450,-1450,-3710}, 190},	{{0,0,0,1118}, 0},	{{0,0,0,1118}, 0},
{{1,1,430,1122}, 0},	{{-3666,0,0,0}, 0},	{{-1,-1,428,430}, 0},
{{-2,-2,-2,429}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{-1402,-1402,-1402,-1402}, 188},	{{1,1,1,1117}, 0},	{{1,1,1,1106}, 0},
{{1,1,1,1106}, 0},	{{1,1,1,1}, 299},	{{1,0,0,0}, 0},
{{0,0,0,0}, 301},	{{1,0,3,0}, 0},	{{1,0,0,0}, 0},
{{-838,-838,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 300},
{{1,1,1,1}, 0},	{{1,1,1,-3695}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-830,-1440,-1521,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1101}, 0},	{{1,0,-1524,0}, 0},	{{1,0,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,424}, 0},
{{1,0,-3689,0}, 0},	{{-1428,-2713,0,0}, 0},	{{1,0,-3691,0}, 0},
{{1,0,0,0}, 0},	{{-1430,1092,-1430,-1430}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1092}, 0},	{{0,0,0,1092}, 0},
{{1,-3189,0,0}, 0},	{{1,2,0,0}, 0},	{{0,65,0,0}, 242},
{{0,64,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,29,29}, 0},	{{1,43,43,43}, 357},	{{0,0,0,1084}, 0},
{{0,0,0,1084}, 0},	{{-9,-3199,35,0}, 0},	{{1,0,-1299,0}, 0},
{{1,1,1,-3198}, 0},	{{1,1,1,-3198}, 0},	{{1,1,1,1}, 0},
{{1,-3198,-3198,-3198}, 0},	{{-3198,-3198,-3198,1078}, 0},	{{-1337,-1337,-1337,-1337}, 0},
{{1,-1265,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-1597}, 0},
{{1,1,1,1}, 0},	{{1,0,92,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,1071}, 0},	{{-1603,1071,-1603,-1603}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,7,7,7}, 0},	{{1,21,21,21}, 0},
{{0,0,0,1071}, 0},	{{0,0,0,1071}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-27,15,15,15}, 0},
{{1,0,0,0}, 0},	{{-1130,-1130,-1130,-1130}, 0},	{{1,0,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,1059,0}, 0},
{{0,0,1073,0}, 0},	{{1,22,1,22}, 0},	{{1,1,1,1}, 0},
{{1,22,22,22}, 0},	{{1,1,1,1}, 244},	{{0,0,0,1070}, 0},
{{0,0,-3650,1070}, 0},	{{1,77,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,77,0}, 0},	{{1,0,0,0}, 0},	{{-1063,-1063,-1063,-1063}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1428,-1428,-1428,1062}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1057}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-20,-20,-20,-20}, 0},	{{0,0,0,0}, 355},
{{-3253,-3253,-3253,1052}, 0},	{{-3687,-3687,-3672,1054}, 0},	{{-3688,-3688,-3673,1056}, 0},
{{-3689,-3689,-3674,1}, 0},	{{1,0,0,0}, 0},	{{1,0,1056,0}, 0},
{{-4873,0,1056,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{-4876,0,1054,0}, 0},	{{1,1,1,1}, 0},	{{1,0,1053,0}, 0},
{{-1022,261,0,0}, 212},	{{-3091,0,-5237,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,1046,0}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 341},	{{1,4,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1029}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1032}, 0},
{{1,0,0,0}, 0},	{{0,0,0,1036}, 0},	{{0,0,0,1036}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-49,-49,-49}, 0},
{{1,-70,-70,-70}, 0},	{{0,0,0,1032}, 0},	{{-1426,-1426,1032,-1426}, 0},
{{0,0,0,1032}, 0},	{{-3770,-1523,1032,-1523}, 0},	{{0,0,0,1032}, 0},
{{0,0,-3725,1040}, 0},	{{-74,2,1040,0}, 0},	{{-3713,1,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,1039,0}, 0},	{{0,1047,0,0}, 0},
{{0,3,5,0}, 0},	{{0,-1401,4,0}, 0},	{{0,0,1052,0}, 0},
{{1,0,0,0}, 0},	{{-1402,-1402,1051,-1402}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1049}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1049}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1048}, 0},	{{1,0,0,0}, 0},	{{1,0,1,0}, 0},
{{0,0,1046,0}, 0},	{{0,0,79,82}, 0},	{{1,1,1048,79}, 0},
{{1,1,1,1}, 0},	{{1,1,1050,1}, 0},	{{-1215,-1215,-1215,-1215}, 0},
{{-1395,-1395,-1395,0}, 249},	{{0,0,0,0}, 276},	{{-3046,-3046,-3046,1047}, 193},
{{1,-3250,-3250,-3250}, 0},	{{1,1,1,1}, 0},	{{1,1,1,-3250}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,1049,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,52,0}, 0},	{{-1178,-1120,1044,0}, 0},
{{0,13,1044,17}, 0},	{{-1384,-1087,-3145,-1152}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1045,1046,1047}, 0},	{{-7,-7,-7,44}, 0},
{{1,0,-2906,0}, 0},	{{1,0,2,0}, 0},	{{0,0,0,1044}, 0},
{{0,0,0,1045}, 0},	{{1,0,0,0}, 193},	{{0,1045,0,0}, 0},
{{-4019,-4019,1046,-4019}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,170,0}, 0},	{{1,1,1,1}, 224},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,167,0}, 0},
{{0,-1101,1040,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1038}, 0},	{{0,0,0,1038}, 0},
{{0,0,0,1038}, 0},	{{0,0,0,1038}, 0},	{{-3833,1042,-3833,-3833}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-35,1,-35}, 0},	{{-3065,0,16,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1014,1,1014}, 0},	{{-40,-40,-40,1034}, 0},
{{1,1,1,1}, 0},	{{-3300,1033,-3300,-3300}, 0},	{{-5463,-3430,-3430,1034}, 0},
{{1,-44,-44,1038}, 0},	{{-2992,0,7,0}, 0},	{{1,-46,-46,1037}, 0},
{{-3704,0,5,0}, 0},	{{1,-48,-48,1036}, 0},	{{-3152,0,3,0}, 0},
{{0,-2868,2,0}, 0},	{{-2979,0,1,0}, 0},	{{1,1,1,1}, 164},
{{1,1,0,0}, 0},	{{0,0,0,0}, 262},	{{0,0,0,1030}, 0},
{{0,0,0,1030}, 0},	{{-3564,-3564,-3564,1042}, 0},	{{-4063,-4063,1042,-4063}, 0},
{{-1380,0,2,5}, 0},	{{0,0,1,50}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-77,-77,-77,-77}, 0},	{{0,0,0,0}, 249},
{{0,0,0,1042}, 0},	{{0,0,83,0}, 224},	{{1,1,1,1}, 0},
{{1,1,1,-3326}, 0},	{{1,1,1,-3326}, 0},	{{-3326,-3326,-3326,1038}, 0},
{{1,0,-2969,0}, 0},	{{-1358,0,-1358,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1028}, 0},	{{1,1,1,1}, 0},
{{1,-1321,-3226,0}, 0},	{{1,1028,1,1028}, 206},	{{-5399,-5399,-5399,1032}, 0},
{{-1827,-1827,-1827,-1827}, 190},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-65,-65,-65}, 0},	{{-1827,0,104,0}, 0},	{{1,1,1,1}, 224},
{{1,1,1,1}, 0},	{{1,-65,-65,-65}, 0},	{{-1831,0,101,0}, 0},
{{0,0,0,1024}, 0},	{{0,0,0,1024}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1030}, 0},	{{-1356,-1212,1030,0}, 0},	{{-1177,-1177,-1177,-1177}, 0},
{{0,0,0,1030}, 0},	{{-1364,-1364,-1364,-1364}, 236},	{{-1352,0,-1352,0}, 0},
{{1,1,-4101,-4101}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,-1814,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,1019}, 0},	{{-3479,-4113,71,-4113}, 0},	{{0,0,1018,0}, 0},
{{0,0,0,0}, 251},	{{0,1020,0,0}, 0},	{{1,1,1,1}, 0},
{{-1343,-127,-127,-127}, 0},	{{1,1,1,1}, 0},	{{0,0,0,1017}, 0},
{{0,0,0,1017}, 0},	{{0,0,0,1017}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{0,0,1005,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-3474}, 0},	{{1,1,1,1}, 184},
{{-3521,-3521,-3521,1}, 0},	{{-323,0,-5090,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,999}, 0},	{{0,0,0,999}, 0},	{{0,0,0,999}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1269,-1269,-1269,-3330}, 0},	{{0,0,0,995}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-3573}, 0},	{{1,1,1,1}, 0},	{{0,0,0,992}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,0,1,0}, 0},
{{0,0,0,989}, 0},	{{0,989,0,0}, 0},	{{0,0,0,989}, 0},
{{1,1,1,0}, 194},	{{0,0,992,0}, 0},	{{0,0,999,0}, 0},
{{1,1000,-3501,-3501}, 0},	{{-3501,-3501,-3501,1000}, 0},	{{0,1000,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-3600}, 0},	{{-3600,-3600,-3600,-3600}, 184},
{{-3283,-3283,-3283,-3283}, 209},	{{1,0,0,0}, 0},	{{1,-1286,0,0}, 0},
{{0,0,0,1012}, 0},	{{-1290,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1006}, 0},	{{-1282,1,3,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,1004}, 0},	{{0,0,0,0}, 214},
{{1,1,1,1}, 0},	{{1,1,1,-1427}, 0},	{{-1280,-1280,-1280,-1280}, 207},
{{1,-1426,-1895,0}, 0},	{{-370,0,-370,0}, 206},	{{1,1,1,1}, 0},
{{1,944,944,0}, 0},	{{1,944,944,944}, 0},	{{0,0,0,1000}, 0},
{{0,0,0,1000}, 0},	{{0,0,0,1000}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-1272}, 0},	{{1,1,1,1}, 0},	{{0,0,0,997}, 0},
{{0,0,0,997}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,994}, 0},	{{0,0,0,994}, 0},
{{1,0,994,0}, 0},	{{-4124,0,0,994}, 0},	{{-3339,-3629,994,-3629}, 0},
{{0,0,0,994}, 0},	{{-3336,-1577,994,-1577}, 0},	{{0,0,0,994}, 0},
{{0,0,0,994}, 0},	{{-3486,-3486,-3486,994}, 0},	{{1,994,696,696}, 0},
{{1,936,936,936}, 0},	{{1,1,1,993}, 0},	{{1,696,696,696}, 0},
{{1,1,1,1}, 218},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,990,0,0}, 0},	{{1,-1683,-1683,0}, 0},	{{-1683,-3113,0,0}, 0},
{{1,0,0,0}, 0},	{{-1276,-3115,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-3302,-3302,-3302,979}, 0},	{{-3289,-3289,-3289,-3289}, 155},	{{0,0,0,978}, 0},
{{0,0,0,978}, 0},	{{0,0,0,978}, 0},	{{1,1,1,1}, 0},
{{0,0,0,994}, 0},	{{0,0,0,994}, 0},	{{0,0,0,994}, 0},
{{0,0,0,994}, 0},	{{1,1,1,1}, 0},	{{0,0,0,994}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,988}, 0},	{{1,39,39,988}, 0},	{{1,0,-5202,0}, 0},
{{1,0,0,0}, 0},	{{1,15,26,26}, 0},	{{1,15,-3864,-3864}, 0},
{{1,1,15,26}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-3921,988,-3921,-3921}, 0},
{{0,0,0,988}, 0},	{{0,0,0,988}, 0},	{{0,0,0,988}, 0},
{{1,25,25,990}, 0},	{{1,0,-5216,0}, 0},	{{1,0,0,0}, 0},
{{1,1,12,12}, 0},	{{1,1,-3878,-3878}, 0},	{{1,1,1,12}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-3918,983,-3918,-3918}, 0},	{{1,983,983,983}, 0},
{{1,0,-3170,0}, 0},	{{1,-3169,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,-3889,-3889}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-3889,975,-3889,-3889}, 0},	{{0,0,0,975}, 0},	{{0,0,0,975}, 0},
{{0,0,0,975}, 0},	{{1,0,-5240,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,967,0,0}, 0},	{{1,0,-5250,0}, 0},
{{1,0,0,0}, 0},	{{1,965,-9,-9}, 0},	{{1,1,-5261,-5261}, 0},
{{1,1,1,-9}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-5261,959,-5261,-5261}, 0},
{{1,-39,-39,959}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-3712,959,-3712,-3712}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-3887,955,-3887,-3887}, 0},	{{-5834,-5834,-3717,-3704}, 170},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,948}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,941}, 0},
{{0,0,0,941}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,939,0,0}, 0},	{{0,0,0,949}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,750,750}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-5460,-5460,-5460}, 0},	{{1,1,750,750}, 0},	{{-5460,-5460,-5460,949}, 0},
{{-5465,-5465,-5465,950}, 0},	{{-5197,-5197,-5197,950}, 0},	{{1,0,1,0}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,951,0}, 0},
{{0,0,0,951}, 0},	{{0,0,0,951}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,939}, 0},
{{0,0,0,939}, 0},	{{1,0,948,0}, 0},	{{1,0,0,0}, 116},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,945,0,0}, 0},
{{0,0,0,2}, 0},	{{0,945,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,943,0}, 0},	{{1,1,1,1}, 0},
{{1,-5200,-5200,0}, 0},	{{-3073,0,-3040,942}, 0},	{{-3044,-3044,-3044,942}, 0},
{{0,0,0,942}, 0},	{{1,0,0,0}, 0},	{{0,0,0,941}, 116},
{{1,0,1,941}, 0},	{{0,0,944,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,0,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 135},	{{0,0,0,936}, 0},	{{1,1,1,1}, 0},
{{0,0,937,0}, 0},	{{-3040,-3040,937,-3040}, 0},	{{0,0,0,937}, 0},
{{1,0,0,0}, 0},	{{0,0,0,945}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 133},
{{0,0,0,938}, 0},	{{0,0,0,938}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,942,0,0}, 0},
{{1,-1210,1,-1210}, 0},	{{0,0,0,941}, 0},	{{1,0,0,0}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 127},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,938}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 122},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,-1221,-1221,-1221}, 122},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-1221,925,-1221,-1221}, 0},	{{0,0,0,926}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,919}, 0},	{{1,-5221,-5221,-5221}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-2603,1,-2603}, 0},	{{1,1,-2603,-2603}, 0},	{{-2603,-2603,-2603,-2603}, 115},
{{1,838,838,838}, 0},	{{1,874,874,874}, 0},	{{1,838,1,838}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,874,874,874}, 0},	{{1,874,874,874}, 0},
{{0,0,0,902}, 0},	{{0,0,0,902}, 0},	{{0,0,0,903}, 0},
{{1,1,1,1}, 0},	{{1,-5027,1,-5027}, 0},	{{1,1,-5027,0}, 0},
{{1,0,0,-2792}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 111},	{{1,1,1,1}, 0},	{{1,-2980,1,-2980}, 0},
{{1,13,13,14}, 0},	{{0,0,0,863}, 0},	{{1,0,0,0}, 0},
{{0,0,862,0}, 0},	{{0,0,0,862}, 0},	{{0,0,0,862}, 0},
{{0,0,0,862}, 0},	{{0,0,0,0}, 108},	{{0,0,0,0}, 110},
{{0,0,0,0}, 99},	{{0,0,0,859}, 0},	{{1,859,-6376,0}, 0},
{{0,0,0,859}, 68},	{{0,0,0,860}, 0},	{{0,0,0,860}, 0},
{{0,0,0,860}, 0},	{{0,0,0,860}, 0},	{{1,1,860,1}, 0},
{{0,0,861,0}, 0},	{{1,-6385,-6385,0}, 0},	{{1,0,-6385,0}, 0},
{{1,0,-2921,0}, 68},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-2935,1,-2935,-2935}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,850}, 0},	{{0,0,0,850}, 0},	{{0,0,0,850}, 0},
{{0,0,0,851}, 0},	{{1,1,1,1}, 81},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,1,0}, 0},
{{0,0,0,843}, 0},	{{0,0,0,844}, 0},	{{0,0,0,845}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1157,-1157,-1157,-1157}, 0},
{{1,-1211,-1211,0}, 0},	{{-2905,-2905,-2905,848}, 57},	{{-3096,-3096,-3096,-3096}, 57},
{{0,0,0,852}, 0},	{{1,0,0,0}, 0},	{{0,0,0,851}, 0},
{{0,0,0,851}, 0},	{{1,1,1,1}, 0},	{{0,0,0,850}, 0},
{{-4867,0,-4891,0}, 39},	{{0,0,0,849}, 0},	{{0,0,0,849}, 0},
{{0,0,0,849}, 0},	{{1,0,1,0}, 0},	{{0,0,0,848}, 0},
{{0,0,0,848}, 0},	{{0,0,852,0}, 0},	{{-5045,-5045,-5045,852}, 0},
{{1,1,1,1}, 0},	{{-2814,0,1,0}, 0},	{{-2789,-2789,-2789,0}, 5},
{{0,0,0,849}, 0},	{{1,1,1,1}, 0},	{{0,0,0,850}, 0},
{{0,0,0,850}, 0},	{{0,0,0,850}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 17},	{{0,0,0,848}, 0},
{{-6324,-6324,-6324,848}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 9},
{{1,-4824,0,0}, 0},	{{0,0,0,0}, 4},	{{1,0,0,0}, 0},
{{0,0,0,0}, 3},	{{1,0,0,0}, 0},	{{1,1,1,1}, 383},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 389},	{{1,0,0,0}, 0},	{{-1147,-1147,-1147,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 388},	{{0,0,0,835}, 0},
{{-2643,0,3,0}, 0},	{{1,0,-2635,0}, 0},	{{0,0,26,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 383},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 393},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,813,0,0}, 0},	{{-2668,0,813,0}, 0},
{{1,-2060,0,0}, 0},	{{-1162,-1162,-1162,-2392}, 0},	{{1,-2062,0,0}, 0},
{{-2394,-2394,-2394,-2394}, 388},	{{0,0,2,809}, 0},	{{0,0,0,812}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,808}, 0},	{{0,0,0,808}, 0},
{{-844,0,0,0}, 0},	{{0,816,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,0,13,0}, 0},	{{0,0,0,812}, 0},	{{1,0,0,0}, 0},
{{0,0,811,0}, 0},	{{-4812,0,4,0}, 0},	{{1,-2083,0,0}, 0},
{{-2415,-2415,812,-2415}, 0},	{{-1086,-2085,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,811,0}, 0},
{{0,0,0,811}, 0},	{{0,0,0,811}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,801,801,801}, 0},	{{-4602,808,0,0}, 0},
{{-2619,-2619,808,-2619}, 0},	{{0,0,0,0}, 397},	{{0,0,0,809}, 0},
{{0,0,0,809}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 378},
{{-4803,-4803,-4803,0}, 378},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,17}, 0},	{{0,802,0,0}, 376},
{{1,0,0,0}, 0},	{{0,0,0,0}, 380},	{{1,1,805,1}, 0},
{{1,1,1,1}, 0},	{{1,-6,-6,-6}, 0},	{{-2440,0,0,10}, 0},
{{-4837,-4837,-4837,803}, 0},	{{1,1,1,1}, 0},	{{-2444,0,10,0}, 0},
{{-4814,-4814,-4814,801}, 0},	{{-4807,-4807,-4807,801}, 0},	{{-4895,-4895,-4895,801}, 0},
{{0,0,0,0}, 377},	{{1,1,1,1}, 0},	{{-1097,-16,804,-16}, 0},
{{0,0,0,804}, 0},	{{-4861,-4861,-4861,804}, 0},	{{-4847,-4847,-4847,809}, 0},
{{0,0,0,816}, 0},	{{-4830,-4830,-4830,816}, 0},	{{-4824,-4824,-4824,816}, 0},
{{-4905,-4905,-4905,818}, 0},	{{-4818,-4818,-4818,823}, 0},	{{1,798,798,189}, 0},
{{1,-6376,-6376,-6376}, 0},	{{1,798,798,825}, 0},	{{1,189,189,189}, 0},
{{1,817,817,-506}, 360},	{{-506,-506,-506,823}, 361},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,815,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,0}, 0},	{{0,0,0,812}, 0},	{{-496,0,-496,0}, 363},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,810,0}, 0},
{{0,0,0,0}, 362},	{{0,0,1,0}, 0},	{{0,0,0,0}, 428},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,800}, 0},	{{-1106,-2572,0,0}, 0},
{{0,0,799,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,799}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,796}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,796,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,791}, 0},	{{1,1,1,0}, 0},	{{0,0,790,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,791}, 0},	{{0,0,792,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 415},	{{-2596,-2596,-2596,-2596}, 414},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 412},	{{0,0,0,766}, 0},
{{-2617,-2617,-2617,766}, 0},	{{0,0,0,768}, 0},	{{1,0,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,758}, 0},	{{0,0,0,758}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 406},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,746,0,0}, 0},	{{0,0,0,759}, 0},	{{0,0,0,765}, 0},
{{-2521,0,765,0}, 297},	{{1,1,1,1}, 0},	{{1,-2608,-2608,-2608}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,30,-1148,0}, 0},
{{1,-2522,1,-2522}, 0},	{{1,1,1,1}, 0},	{{1,765,765,765}, 0},
{{1,0,0,0}, 212},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 321},	{{-1152,0,-1152,0}, 0},	{{1,1,1,1}, 0},
{{1,-4795,-4795,-4795}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-4795,750,-2535,0}, 0},	{{-1152,-1152,-1152,0}, 190},	{{0,0,0,750}, 0},
{{-1144,-1144,-1935,0}, 0},	{{0,0,0,749}, 0},	{{1,1,1,1}, 0},
{{1,-4759,-4759,-4759}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,745,-2585,0}, 0},	{{-1145,-1145,-1145,746}, 0},	{{1,1,1,0}, 0},
{{0,745,0,0}, 0},	{{-1143,-1143,-1143,-2623}, 190},	{{0,0,0,747}, 0},
{{0,0,0,747}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-2559,-2559,-2559,2}, 0},	{{-2559,-2559,-2559,747}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,747,0}, 212},
{{1,0,0,0}, 0},	{{1,0,0,0}, 212},	{{0,745,0,0}, 0},
{{1,0,-1088,0}, 0},	{{-1118,0,0,0}, 0},	{{1,-2610,-2610,0}, 0},
{{1,1,1,1}, 299},	{{0,0,0,749}, 0},	{{1,0,0,0}, 0},
{{0,753,0,0}, 300},	{{-741,-741,-741,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-1104,-1104,-1104,-1104}, 0},
{{0,0,0,748}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-694,-694,-694,-694}, 0},
{{1,0,0,0}, 0},	{{-1117,-3805,0,0}, 0},	{{-10,-10,742,-10}, 0},
{{0,0,0,743}, 0},	{{1,-2521,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-2521}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-2521}, 0},	{{1,1,1,1}, 0},
{{0,0,0,743}, 0},	{{0,0,0,743}, 0},	{{0,0,0,743}, 0},
{{0,0,0,745}, 0},	{{0,0,0,745}, 0},	{{-4275,-4275,-2137,752}, 0},
{{0,0,0,755}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,-1028,-1028,-1028}, 0},	{{1,-1049,-1049,-1049}, 0},	{{0,0,0,751}, 0},
{{0,0,0,751}, 0},	{{0,0,0,751}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 346},	{{1,1,1,1}, 0},
{{0,0,742,0}, 0},	{{0,0,0,742}, 0},	{{0,-992,0,0}, 0},
{{-2442,-2442,-2442,741}, 0},	{{0,0,0,741}, 0},	{{1,0,0,0}, 0},
{{1,-801,-4304,0}, 0},	{{0,739,0,0}, 194},	{{1,0,0,0}, 0},
{{1,0,5,0}, 0},	{{0,0,0,0}, 352},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,3,0}, 0},	{{0,733,0,0}, 0},
{{0,0,733,0}, 0},	{{0,0,0,740}, 0},	{{-2074,-791,0,0}, 0},
{{1,1,1,0}, 0},	{{0,0,743,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,750}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,745}, 0},	{{0,0,0,745}, 0},
{{0,0,0,745}, 0},	{{0,0,0,754}, 0},	{{-2457,-1119,754,-1119}, 0},
{{0,0,0,754}, 0},	{{-2579,0,0,755}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,748,1,1}, 0},	{{0,748,0,0}, 0},	{{0,-1037,1,0}, 0},
{{1,0,0,0}, 0},	{{0,0,746,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,738}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,731}, 0},	{{0,0,0,731}, 0},	{{0,0,0,731}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,731}, 0},
{{0,0,0,731}, 0},	{{0,0,0,731}, 0},	{{1,1,1,1}, 0},
{{1,1,0,0}, 0},	{{1,1,1,0}, 0},	{{0,0,0,740}, 0},
{{1,1,1,1}, 0},	{{1,1,3,-1046}, 0},	{{1,1,1,1}, 0},
{{0,0,0,737}, 0},	{{-2264,-2264,-2264,-2264}, 276},	{{1,736,1,-4092}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-4092}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,-4390,736,0}, 0},
{{0,0,0,736}, 194},	{{-3941,0,737,0}, 164},	{{0,0,0,737}, 193},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,735}, 0},	{{-1051,-1051,-1051,31}, 0},
{{-1052,-1052,-1052,31}, 0},	{{-1053,-1053,-1053,31}, 0},	{{1,1,1,1}, 0},
{{0,0,0,731}, 0},	{{1,1,1,1}, 0},	{{0,0,0,730}, 0},
{{1,1,1,1}, 0},	{{0,729,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,-5064}, 0},	{{-2681,-2681,-2681,-2681}, 207},	{{1,1,1,1}, 0},
{{0,726,0,0}, 0},	{{0,0,0,726}, 0},	{{0,0,0,726}, 0},
{{0,0,0,726}, 0},	{{1,735,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 267},
{{-4874,-4874,731,-4874}, 0},	{{-2057,0,-1022,0}, 0},	{{1,1,1,1}, 0},
{{-4332,-4332,-4332,729}, 0},	{{1,0,-6032,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,-6043,-6043,-6043}, 0},	{{-6043,-6043,-6043,727}, 0},
{{-2049,0,-1030,0}, 0},	{{-2038,0,-1031,0}, 0},	{{-2036,0,-1032,0}, 0},
{{0,0,0,730}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,731}, 0},	{{-4605,-4605,-4605,732}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-2348,-2817,0}, 0},	{{1,1,1,1}, 206},
{{0,0,0,730}, 0},	{{0,0,0,730}, 0},	{{1,0,-4006,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,730}, 0},	{{1,730,1,1}, 0},
{{0,0,0,730}, 0},	{{0,0,0,730}, 0},	{{1,730,512,512}, 0},
{{1,30,30,30}, 0},	{{1,1,1,729}, 0},	{{1,512,512,512}, 0},
{{1,1,1,1}, 218},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,726,0,0}, 0},	{{0,0,0,726}, 0},	{{1,0,0,0}, 193},
{{0,0,0,725}, 0},	{{0,678,0,0}, 0},	{{0,0,0,724}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,721}, 0},	{{0,0,721,0}, 0},	{{0,0,0,721}, 0},
{{0,0,0,721}, 0},	{{0,0,0,722}, 0},	{{0,0,0,0}, 237},
{{0,0,0,724}, 0},	{{0,0,0,724}, 0},	{{0,0,0,725}, 0},
{{0,0,0,729}, 0},	{{0,0,0,731}, 0},	{{0,0,0,731}, 0},
{{0,0,0,731}, 0},	{{1,660,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,729}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 218},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,721}, 0},	{{1,1,1,1}, 0},
{{0,0,0,720}, 0},	{{-4500,-4500,-4500,720}, 0},	{{-4500,-4500,-4500,720}, 0},
{{1,0,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,0,0}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 202},	{{0,0,703,0}, 0},	{{0,0,0,703}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,698}, 0},
{{0,0,0,698}, 0},	{{0,0,0,698}, 0},	{{0,0,0,698}, 0},
{{0,0,0,698}, 0},	{{0,0,0,698}, 0},	{{0,0,0,699}, 0},
{{0,0,0,699}, 0},	{{0,0,0,548}, 0},	{{0,0,0,699}, 0},
{{-4622,-4622,-4622,699}, 0},	{{-293,5,-293,-293}, 0},	{{0,-2268,-2267,544}, 0},
{{0,0,0,697}, 0},	{{0,0,0,699}, 0},	{{0,0,0,699}, 0},
{{-297,0,0,0}, 221},	{{1,-296,-296,-296}, 0},	{{-991,-991,-991,-991}, 220},
{{0,0,0,0}, 219},	{{-4280,-4280,-4280,695}, 0},	{{0,0,0,0}, 186},
{{0,0,0,694}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,679}, 0},	{{0,0,0,679}, 0},	{{0,0,0,679}, 0},
{{0,0,0,680}, 0},	{{1,0,680,0}, 0},	{{0,0,0,0}, 179},
{{0,0,0,679}, 0},	{{0,0,0,680}, 0},	{{1,0,-6189,0}, 0},
{{1,-2186,-2186,0}, 0},	{{1,26,-948,-948}, 0},	{{1,1,-2201,-2201}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-2201,671,-2201,-2201}, 0},
{{-4908,-4908,-4891,-6537}, 170},	{{0,0,0,670}, 0},	{{0,0,0,671}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 171},	{{0,0,669,0}, 172},
{{1,0,-6205,0}, 0},	{{1,0,0,0}, 0},	{{-954,-964,-964,-964}, 0},
{{-4900,-4900,-4900,-6546}, 170},	{{1,0,-4152,0}, 0},	{{-968,-4151,0,0}, 0},
{{-6549,-6549,-6549,-6549}, 170},	{{0,0,0,0}, 176},	{{0,0,0,0}, 175},
{{1,0,0,0}, 0},	{{-925,-925,-925,-925}, 169},	{{0,0,0,0}, 170},
{{-973,-973,-2169,0}, 0},	{{-6219,-6219,-6219,-6219}, 170},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-4039,651,-4039,-4039}, 0},	{{-4670,-4670,-4670,-4657}, 170},	{{-4841,-4841,-4841,-4841}, 170},
{{0,0,0,649}, 0},	{{0,0,0,649}, 0},	{{0,0,0,654}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,646}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,-198,-198}, 0},	{{0,0,0,634}, 0},
{{1,1,532,532}, 0},	{{-6468,-6468,-6468,634}, 0},	{{-6414,-6414,-6414,635}, 0},
{{1,-6414,-6414,-6414}, 0},	{{1,635,563,563}, 0},	{{1,-6414,-6414,-6414}, 0},
{{1,1,563,563}, 0},	{{-6520,-6520,-6520,635}, 0},	{{0,0,0,636}, 0},
{{0,0,636,0}, 0},	{{0,0,0,637}, 0},	{{0,0,0,650}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,645}, 0},	{{-946,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,643}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,651}, 0},	{{1,1,1,1}, 0},
{{0,0,0,655}, 0},	{{0,0,0,656}, 0},	{{-3985,-3985,-3985,656}, 0},
{{0,0,0,657}, 0},	{{0,666,0,0}, 0},	{{1,-911,1,-911}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-911}, 0},	{{0,30,0,0}, 138},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,661}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,659,0,0}, 0},	{{0,0,659,0}, 0},	{{0,0,0,659}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,650}, 0},	{{0,0,0,0}, 132},	{{0,0,0,649}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,643}, 0},	{{0,0,0,644}, 0},
{{1,0,0,0}, 0},	{{1,0,-939,0}, 0},	{{1,0,0,0}, 127},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,633}, 0},
{{0,0,0,633}, 0},	{{1,1,1,1}, 0},	{{0,0,0,632}, 0},
{{0,0,0,632}, 0},	{{0,0,0,633}, 0},	{{0,0,0,633}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 67},	{{-781,0,0,0}, 0},
{{0,0,0,630}, 0},	{{0,0,0,630}, 0},	{{0,0,630,0}, 0},
{{0,0,0,630}, 0},	{{0,0,0,631}, 0},	{{0,0,0,0}, 80},
{{0,0,0,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,629}, 0},
{{0,0,0,629}, 0},	{{0,0,0,629}, 0},	{{0,0,0,629}, 0},
{{-858,-858,-858,-858}, 0},	{{1,0,2,0}, 0},	{{0,0,0,0}, 88},
{{0,0,0,0}, 87},	{{0,0,0,632}, 0},	{{0,0,0,632}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 75},	{{0,0,0,0}, 81},
{{1,1,1,1}, 0},	{{0,0,0,630}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 71},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 69},
{{1,-3752,-3752,-3752}, 0},	{{1,1,1,1}, 0},	{{1,619,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,619}, 0},
{{0,0,0,0}, 58},	{{0,0,0,619}, 0},	{{0,0,0,619}, 0},
{{0,0,0,619}, 0},	{{0,0,0,619}, 0},	{{0,0,0,620}, 0},
{{0,0,620,0}, 0},	{{0,0,0,620}, 0},	{{1,1,620,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,617,0,0}, 0},	{{0,0,0,0}, 50},	{{0,0,0,618}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 30},
{{0,0,0,616}, 0},	{{0,0,0,0}, 26},	{{1,1,0,0}, 0},
{{0,0,0,0}, 34},	{{0,0,0,0}, 14},	{{1,0,0,0}, 0},
{{1,0,-7128,0}, 0},	{{1,1,0,0}, 0},	{{0,0,0,609}, 0},
{{0,0,0,610}, 0},	{{0,0,0,0}, 392},	{{-3469,0,616,0}, 0},
{{1,0,0,0}, 0},	{{1,1,615,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 390},	{{0,0,0,618}, 0},	{{0,0,0,625}, 0},
{{1,1,-559,-559}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,618,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,617}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 382},
{{0,0,0,615}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,8,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,-3,-3,-3}, 0},	{{-3226,4,0,0}, 0},
{{0,0,0,607}, 0},	{{0,0,0,607}, 0},	{{0,0,0,608}, 0},
{{0,0,0,609}, 0},	{{1,1,1,1}, 0},	{{1,-5631,-5631,-5631}, 0},
{{-3426,0,0,607}, 0},	{{0,607,0,0}, 0},	{{0,608,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,604}, 0},
{{1,1,1,1}, 0},	{{-803,-810,10,-810}, 0},	{{-5639,-5639,-5639,602}, 0},
{{-5614,-5614,-5614,609}, 0},	{{-5607,-5607,-5607,611}, 0},	{{1,122,122,122}, 0},
{{1,-5695,-5695,-5695}, 0},	{{1,122,122,613}, 0},	{{1,122,122,122}, 0},
{{1,1,1,-389}, 360},	{{-389,-389,-389,-389}, 361},	{{0,0,0,610}, 0},
{{0,0,0,610}, 0},	{{1,1,1,-608}, 0},	{{1,-5664,-5664,-5664}, 0},
{{1,1,1,1}, 0},	{{1,-608,-608,-608}, 0},	{{1,-1303,-1303,-1303}, 0},
{{-1303,-1303,-1303,26}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-5655,597,-5655,-5655}, 0},
{{0,0,0,597}, 0},	{{-623,-623,-623,597}, 0},	{{1,-624,-624,-624}, 0},
{{1,-5639,-5639,-5639}, 0},	{{-624,-624,-624,596}, 0},	{{1,-627,-627,-627}, 0},
{{1,-5722,-5722,-5722}, 0},	{{1,-627,-627,593}, 0},	{{1,-627,-627,-627}, 0},
{{1,1,1,-1322}, 360},	{{-1322,-1322,-1322,-1322}, 361},	{{1,-633,-633,-633}, 0},
{{1,-5640,-5640,-5640}, 0},	{{1,-633,-633,-633}, 0},	{{1,-633,-633,-633}, 0},
{{-1328,-1328,-1328,-1328}, 360},	{{-26,-635,-635,-635}, 363},	{{1,1,1,1}, 0},
{{-5640,583,-5640,-5640}, 0},	{{1,0,0,0}, 0},	{{0,0,0,582}, 0},
{{1,1,1,1}, 0},	{{0,0,0,583}, 0},	{{0,583,0,0}, 0},
{{0,0,0,583}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,580}, 0},	{{0,0,0,580}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,578,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,585}, 0},	{{0,0,0,591}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,587}, 0},	{{1,0,0,0}, 0},
{{0,586,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,582}, 0},
{{0,0,0,582}, 0},	{{1,-3382,1,-3382}, 0},	{{1,-3382,-3382,-3382}, 0},
{{-763,-763,-763,580}, 0},	{{0,0,0,581}, 0},	{{0,0,0,592}, 0},
{{1,0,0,0}, 0},	{{0,0,0,591}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 407},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 405},	{{0,0,0,571}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,564,0,0}, 0},	{{-763,0,0,0}, 0},
{{1,1,-738,0}, 0},	{{0,6,0,0}, 304},	{{0,0,0,561}, 0},
{{0,0,0,562}, 0},	{{1,1,1,0}, 0},	{{0,2,0,0}, 294},
{{-3231,-745,-5492,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 319},	{{0,0,0,557}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-510,-510,-510,-510}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 212},	{{0,551,0,0}, 0},	{{0,0,0,0}, 317},
{{1,550,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,550}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,545}, 0},
{{0,545,0,0}, 0},	{{1,1,-746,-746}, 0},	{{-746,0,0,0}, 305},
{{1,-751,-751,-751}, 0},	{{-1856,-1856,-1856,-1856}, 300},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 295},	{{0,0,0,539}, 0},
{{0,0,0,539}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 291},	{{0,0,0,538}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-680,-680,-680,-680}, 0},	{{1,0,0,0}, 0},	{{1,-5026,-5026,0}, 0},
{{1,0,1,0}, 194},	{{0,0,0,528}, 0},	{{0,0,0,533}, 0},
{{0,0,0,540}, 0},	{{0,0,0,540}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-695,534,-695,-695}, 0},	{{0,0,534,0}, 0},	{{0,0,0,534}, 0},
{{0,535,0,0}, 0},	{{0,0,0,536}, 0},	{{0,0,536,0}, 0},
{{0,0,544,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,544}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,539}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 342},	{{0,0,0,526}, 0},	{{0,0,0,526}, 0},
{{0,0,0,526}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,-530,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,524}, 0},	{{0,0,0,524}, 0},
{{-1900,-1858,-1858,525}, 0},	{{1,-751,-751,-751}, 0},	{{-751,0,0,0}, 344},
{{0,0,0,523}, 0},	{{0,1,0,0}, 219},	{{0,0,0,522}, 0},
{{0,0,522,0}, 0},	{{0,0,0,529}, 0},	{{0,0,0,529}, 0},
{{0,0,0,529}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,529}, 0},	{{0,0,0,529}, 0},	{{0,0,0,0}, 330},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{0,0,0,516}, 0},	{{0,0,0,517}, 0},	{{0,0,0,517}, 0},
{{1,1,1,1}, 0},	{{1,1,1,-4827}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{-734,-5125,512,0}, 0},
{{0,0,0,512}, 194},	{{1,1,1,1}, 0},	{{0,0,0,512}, 0},
{{0,0,0,512}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,511,0}, 0},	{{0,0,0,514}, 0},	{{0,0,0,514}, 0},
{{0,0,0,514}, 0},	{{1,1,1,1}, 0},	{{0,0,0,513}, 0},
{{0,517,0,0}, 0},	{{0,0,0,517}, 0},	{{-723,0,0,0}, 0},
{{1,10,0,0}, 0},	{{1,1,1,1}, 0},	{{1,-724,1,-724}, 0},
{{1,1,514,0}, 0},	{{1,1,1,1}, 267},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,509}, 0},	{{0,0,0,0}, 221},	{{-7089,-4857,-4857,508}, 0},
{{1,0,-4703,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,506}, 0},
{{1,0,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,501}, 0},	{{1,0,0,0}, 0},	{{1,-1481,-1481,-1481}, 0},
{{1,-543,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,488}, 0},
{{1,1,1,1}, 0},	{{0,0,0,487}, 0},	{{1,0,0,0}, 0},
{{1,33,33,33}, 0},	{{1,0,0,0}, 0},	{{1,1,33,33}, 0},
{{-7329,-7329,-7329,484}, 0},	{{-724,-724,-724,-724}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,482}, 0},	{{0,0,483,0}, 0},
{{0,0,0,1}, 204},	{{0,0,0,482}, 0},	{{-217,1,-217,-217}, 0},
{{-217,0,0,0}, 221},	{{1,-216,-216,-216}, 0},	{{-727,-727,-727,-727}, 220},
{{0,0,0,0}, 286},	{{0,0,0,0}, 283},	{{0,0,0,476}, 0},
{{0,0,0,476}, 0},	{{0,0,0,476}, 0},	{{0,0,0,476}, 0},
{{0,0,0,476}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 247},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,475,0}, 0},	{{0,0,0,0}, 234},	{{1,0,0,0}, 0},
{{0,0,0,0}, 169},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,468}, 0},
{{1,0,0,0}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 253},
{{0,0,0,466}, 0},	{{0,0,0,470}, 0},	{{0,0,0,471}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 220},	{{0,0,0,469}, 0},
{{0,0,0,469}, 0},	{{-5219,-5219,-5219,469}, 0},	{{1,-5266,-5266,-5266}, 0},
{{1,0,-6835,0}, 0},	{{0,0,0,469}, 0},	{{0,0,0,469}, 0},
{{0,0,0,0}, 210},	{{0,0,0,468}, 0},	{{0,0,0,468}, 0},
{{0,0,0,477}, 0},	{{0,0,0,479}, 0},	{{0,0,0,481}, 0},
{{1,1,0,0}, 0},	{{0,0,0,0}, 230},	{{0,0,0,483}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 229},	{{0,0,0,481}, 0},
{{0,0,0,481}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 225},	{{0,0,0,478}, 0},	{{0,0,0,478}, 0},
{{-4974,-4974,-4974,-4974}, 186},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 196},	{{0,0,0,474}, 0},	{{0,0,0,0}, 182},
{{1,0,3,0}, 0},	{{0,0,0,0}, 180},	{{1,0,1,0}, 0},
{{0,0,0,0}, 178},	{{1,0,0,0}, 0},	{{0,0,0,468}, 0},
{{0,0,0,468}, 0},	{{-2871,-2871,-2871,-2871}, 170},	{{1,0,0,0}, 0},
{{0,0,0,0}, 171},	{{0,0,0,466}, 0},	{{0,0,0,0}, 173},
{{-4689,-4689,-4689,-4689}, 170},	{{0,0,0,466}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 165},	{{1,0,0,0}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 167},	{{0,0,0,459}, 0},
{{1,1,1,1}, 0},	{{0,0,0,458}, 0},	{{1,1,1,1}, 0},
{{-7101,-7101,-7101,458}, 0},	{{1,-7048,-7048,-7048}, 0},	{{1,1,-71,-71}, 0},
{{1,-7048,-7048,-7048}, 0},	{{1,1,-71,-71}, 0},	{{-7108,-7108,-7108,454}, 0},
{{1,1,1,1}, 0},	{{-7154,-7154,-7154,454}, 0},	{{0,0,0,454}, 0},
{{1,1,1,1}, 0},	{{0,0,455,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,442}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,438,0,0}, 0},
{{0,0,0,438}, 0},	{{1,0,0,0}, 0},	{{1,0,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,427}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,422,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,426}, 0},
{{0,0,0,426}, 0},	{{1,1,1,1}, 0},	{{-675,-2830,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{1,-641,1,-641}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,415}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 139},	{{0,0,0,412}, 0},	{{0,0,0,0}, 136},
{{0,0,0,411}, 0},	{{0,0,0,411}, 0},	{{0,0,0,411}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 121},	{{1,1,1,1}, 0},
{{0,0,0,408}, 0},	{{0,0,0,408}, 0},	{{0,0,0,408}, 0},
{{0,0,0,408}, 0},	{{0,0,0,409}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 123},	{{0,0,0,0}, 118},	{{0,0,0,406}, 0},
{{0,0,0,406}, 0},	{{0,0,0,407}, 0},	{{-618,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 92},	{{1,0,1,0}, 0},
{{0,0,0,0}, 70},	{{0,0,0,402}, 0},	{{0,0,0,402}, 0},
{{0,0,0,403}, 0},	{{1,-1486,-627,-1486}, 0},	{{1,0,-626,0}, 89},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,396,0}, 0},
{{0,0,0,396}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 75},
{{0,0,0,0}, 76},	{{1,1,1,1}, 0},	{{0,0,0,393}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,391}, 0},
{{1,1,1,1}, 0},	{{0,0,0,391}, 0},	{{0,0,0,391}, 0},
{{0,0,0,400}, 0},	{{0,0,0,0}, 56},	{{1,-602,3,0}, 0},
{{0,0,0,0}, 54},	{{-616,-616,398,0}, 0},	{{0,0,0,0}, 52},
{{0,0,0,397}, 0},	{{-618,-618,-618,-618}, 50},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 51},	{{1,0,0,0}, 0},
{{-4287,-4287,-4287,393}, 0},	{{0,0,0,0}, 29},	{{1,1,1,1}, 0},
{{0,0,0,391}, 0},	{{1,1,0,0}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-600,-600,-600,-600}, 0},
{{0,0,0,389}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 390},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,388}, 0},	{{1,1,-453,-453}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-615,382,-615,-615}, 0},
{{0,0,0,382}, 0},	{{-616,-616,0,0}, 219},	{{0,0,0,382}, 0},
{{0,382,0,0}, 0},	{{0,0,0,383}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 401},	{{1,0,0,0}, 0},	{{0,380,0,0}, 0},
{{0,0,0,381}, 0},	{{0,0,0,381}, 0},	{{1,0,0,0}, 0},
{{0,0,380,0}, 0},	{{1,0,0,0}, 0},	{{0,0,379,0}, 0},
{{0,0,0,379}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-6240,372,-6240,-6240}, 0},
{{1,-485,-485,-485}, 0},	{{1,-6222,-6222,-6222}, 0},	{{-485,-485,-485,6}, 0},
{{1,-488,-488,-488}, 0},	{{1,-6217,-6217,-6217}, 0},	{{1,-488,-488,-488}, 0},
{{1,-488,-488,-488}, 0},	{{-999,-999,-999,-999}, 360},	{{-490,-490,-490,-490}, 363},
{{0,0,0,363}, 0},	{{0,0,0,363}, 0},	{{0,0,0,-4038}, 219},
{{0,0,0,363}, 0},	{{1,-4032,0,0}, 0},	{{-1219,-1219,-1219,362}, 0},
{{-1219,-1219,-1219,-1219}, 363},	{{-6222,-6222,-6222,-6222}, 219},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,358}, 0},	{{0,0,0,364}, 0},
{{0,0,0,0}, 364},	{{0,0,0,0}, 426},	{{0,0,0,362}, 0},
{{0,0,0,362}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,358}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,352}, 0},	{{0,0,0,352}, 0},
{{0,0,0,353}, 0},	{{0,0,353,0}, 0},	{{0,0,0,354}, 0},
{{0,0,354,0}, 0},	{{1,-2474,-2474,-2474}, 0},	{{-1342,-1342,-1342,355}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,344}, 0},
{{0,0,0,344}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 408},
{{0,342,0,0}, 0},	{{0,0,0,0}, 324},	{{1,1,0,0}, 0},
{{0,0,0,0}, 305},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 322},	{{1,1,-555,-555}, 0},	{{-555,0,0,0}, 305},
{{0,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,326}, 0},
{{0,0,0,326}, 0},	{{0,0,0,326}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,319}, 0},	{{0,0,0,319}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 292},	{{1,-536,-536,-536}, 0},
{{-536,0,0,0}, 344},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,311}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-485,-374,0,0}, 0},
{{0,0,0,303}, 0},	{{1,-538,-538,-538}, 0},	{{-538,0,0,0}, 344},
{{0,-481,0,0}, 286},	{{0,301,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 344},	{{1,0,-2286,0}, 0},	{{-2286,-2286,298,-2286}, 0},
{{0,298,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,290}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,286}, 0},
{{0,0,0,286}, 0},	{{0,0,0,286}, 0},	{{0,0,0,0}, 340},
{{0,0,0,0}, 339},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-524,0,0,0}, 0},
{{0,0,0,276}, 0},	{{1,-1358,-1358,-1358}, 0},	{{-1358,0,0,0}, 344},
{{0,0,0,274}, 0},	{{0,0,0,274}, 0},	{{0,0,0,274}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,267}, 0},	{{0,0,0,267}, 0},
{{0,0,0,269}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,277}, 0},	{{0,0,0,277}, 0},	{{0,0,0,0}, 332},
{{1,1,1,1}, 0},	{{0,0,0,275}, 0},	{{0,0,0,276}, 0},
{{0,0,0,278}, 0},	{{0,0,0,281}, 194},	{{1,1,1,1}, 0},
{{0,0,0,281}, 0},	{{0,0,0,281}, 0},	{{1,1,1,1}, 0},
{{0,0,0,280}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,277,0,0}, 0},	{{0,0,0,277}, 0},
{{0,0,0,0}, 280},	{{0,0,0,0}, 279},	{{1,0,0,0}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,272}, 0},	{{0,0,0,278}, 0},	{{1,0,0,0}, 0},
{{-514,-514,-514,-514}, 229},	{{-512,-512,-512,-512}, 0},	{{0,0,0,275}, 0},
{{-5662,-5662,-5662,275}, 0},	{{1,1,1,1}, 0},	{{0,0,0,274}, 0},
{{0,0,0,274}, 0},	{{0,0,0,274}, 0},	{{1,1,1,1}, 0},
{{0,0,0,273}, 0},	{{1,1,1,1}, 0},	{{-7812,-7812,-7812,272}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 287},	{{0,0,0,270}, 0},
{{0,0,0,0}, 285},	{{0,0,0,269}, 0},	{{0,0,0,0}, 240},
{{0,0,0,268}, 0},	{{0,0,0,275}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 247},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,271,0}, 0},	{{0,0,0,0}, 245},	{{1,1,1,1}, 0},
{{0,0,0,271}, 0},	{{1,-534,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 254},
{{1,1,1,1}, 0},	{{0,0,265,0}, 0},	{{0,0,0,265}, 0},
{{0,0,0,266}, 0},	{{0,0,0,268}, 0},	{{1,-5734,-5734,-5734}, 0},
{{1,0,-7303,0}, 0},	{{0,0,0,266}, 0},	{{0,0,266,0}, 0},
{{0,0,0,266}, 0},	{{0,0,0,0}, 215},	{{1,-1449,-1449,-1449}, 0},
{{1,243,243,243}, 0},	{{1,-1449,-1449,-1449}, 0},	{{1,1,1,-1449}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,263,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,262}, 0},
{{1,0,0,0}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 227},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 228},
{{1,1,0,0}, 0},	{{1,1,1,1}, 230},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 231},	{{0,251,0,0}, 0},
{{0,0,0,254}, 0},	{{0,0,0,255}, 0},	{{0,0,255,0}, 0},
{{0,0,0,255}, 0},	{{0,0,0,256}, 0},	{{0,0,0,256}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 183},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 174},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,249}, 0},	{{0,0,0,250}, 0},
{{1,1,1,1}, 0},	{{0,0,0,249}, 0},	{{-7558,-7558,-7558,249}, 0},
{{1,1,1,1}, 0},	{{-7561,-7561,-7561,248}, 0},	{{-7607,-7607,-7607,248}, 0},
{{1,1,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,255,0}, 0},
{{0,0,255,0}, 0},	{{0,0,0,255}, 0},	{{0,0,0,255}, 0},
{{0,0,0,262}, 0},	{{0,0,0,262}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,257}, 0},	{{0,0,0,257}, 0},
{{0,0,0,260}, 0},	{{0,0,0,260}, 0},	{{0,0,0,260}, 0},
{{0,0,0,260}, 0},	{{0,0,0,260}, 0},	{{0,0,0,261}, 0},
{{0,0,0,261}, 0},	{{0,0,0,263}, 0},	{{0,0,0,265}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 126},	{{0,0,0,270}, 0},
{{0,0,0,272}, 0},	{{1,0,-404,0}, 0},	{{-395,0,0,0}, 89},
{{0,0,0,270}, 0},	{{0,0,0,0}, 86},	{{1,0,-408,0}, 0},
{{0,0,0,0}, 89},	{{-1,0,0,0}, 0},	{{0,0,0,0}, 90},
{{1,0,0,0}, 0},	{{0,0,0,0}, 79},	{{0,0,0,263}, 0},
{{1,1,1,1}, 0},	{{0,0,0,262}, 0},	{{0,0,0,262}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,260,260,260}, 0},
{{1,0,265,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,265,0}, 0},	{{1,1,1,1}, 60},
{{0,0,0,264}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 59},
{{-1013,-1013,-1013,-1013}, 52},	{{1,1,1,1}, 0},	{{0,0,260,0}, 0},
{{-6739,0,260,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,254}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,250}, 0},	{{1,1,1,1}, 0},	{{0,0,0,251}, 0},
{{-996,-996,0,0}, 286},	{{1,1,0,0}, 0},	{{0,0,0,0}, 387},
{{0,0,0,248}, 0},	{{1,0,0,0}, 0},	{{0,0,247,0}, 0},
{{0,247,0,0}, 0},	{{1,1,1,0}, 0},	{{0,0,0,246}, 0},
{{0,0,0,251}, 0},	{{0,0,0,251}, 0},	{{0,0,0,251}, 0},
{{0,0,0,256}, 0},	{{0,0,0,261}, 0},	{{0,0,0,-4398}, 286},
{{0,0,0,262}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 372},
{{0,0,0,260}, 0},	{{-1580,-1580,-1580,260}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,256}, 0},
{{0,259,0,0}, 0},	{{0,0,0,260}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,257,0}, 0},
{{0,0,0,0}, 419},	{{0,0,0,256}, 0},	{{0,0,0,256}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 416},	{{0,0,0,254}, 0},
{{1,1,1,1}, 0},	{{0,0,0,255}, 0},	{{0,0,0,255}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,254,0}, 0},
{{-1696,-1696,-1696,254}, 0},	{{0,0,0,255}, 0},	{{0,0,0,255}, 0},
{{0,0,0,0}, 404},	{{0,0,0,256}, 0},	{{0,0,0,256}, 0},
{{0,0,0,256}, 0},	{{0,0,0,258}, 0},	{{1,-855,-855,-855}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 293},	{{0,0,0,255}, 0},
{{1,-899,-899,-899}, 0},	{{-899,0,0,0}, 344},	{{0,0,0,253}, 0},
{{0,0,0,253}, 0},	{{0,0,0,0}, 356},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 353},
{{0,0,0,253}, 0},	{{0,0,0,253}, 0},	{{0,0,0,255}, 0},
{{0,0,0,255}, 0},	{{0,0,0,255}, 0},	{{0,0,0,255}, 0},
{{0,0,0,256}, 0},	{{0,0,0,256}, 0},	{{1,0,1,0}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 336},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,240}, 0},	{{0,0,0,240}, 0},	{{0,0,0,240}, 330},
{{1,1,1,1}, 0},	{{0,0,0,239}, 0},	{{1,1,0,0}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 278},	{{1,0,0,0}, 0},
{{1,1,1,1}, 247},	{{1,1,1,1}, 0},	{{0,233,0,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,232}, 0},	{{0,0,0,232}, 0},
{{0,0,0,0}, 272},	{{0,0,0,231}, 0},	{{0,0,0,231}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 282},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,224}, 0},
{{0,0,0,224}, 0},	{{0,0,0,224}, 0},	{{-5936,0,224,0}, 0},
{{0,0,0,226}, 0},	{{0,0,0,226}, 0},	{{0,0,0,231}, 0},
{{0,0,0,231}, 0},	{{-8083,-8083,-8083,231}, 0},	{{0,0,0,240}, 0},
{{0,245,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-241,-241,-241,-241}, 0},
{{0,0,0,239}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 248},	{{0,0,0,245}, 0},	{{0,0,0,0}, 256},
{{1,1,1,1}, 0},	{{0,252,0,0}, 0},	{{1,0,1,0}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 252},	{{0,0,0,249}, 0},
{{0,0,249,0}, 0},	{{0,0,0,249}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,245}, 0},	{{-261,-261,-261,-261}, 219},
{{0,0,0,244}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 232},	{{1,0,0,0}, 0},
{{0,0,0,239}, 0},	{{0,0,0,241}, 0},	{{0,0,0,0}, 226},
{{1,240,162,162}, 0},	{{-1489,-1489,-1489,240}, 0},	{{0,0,0,244}, 0},
{{0,0,0,244}, 0},	{{1,1,1,1}, 0},	{{0,0,0,251}, 0},
{{0,0,0,251}, 0},	{{0,0,0,251}, 0},	{{-7806,-7806,-7806,251}, 0},
{{-7808,-7808,-7808,251}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-8545,-8545,-8545,251}, 0},	{{0,0,0,251}, 0},
{{0,0,0,256}, 0},	{{0,0,0,258}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,251}, 0},	{{0,0,0,251}, 0},	{{0,0,0,251}, 0},
{{0,0,0,252}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 146},	{{0,248,0,0}, 0},
{{0,0,0,248}, 0},	{{0,0,248,0}, 0},	{{0,0,0,248}, 0},
{{1,248,248,248}, 0},	{{-1328,-1328,248,-1328}, 0},	{{0,0,0,248}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,0,246,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 130},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 128},	{{1,0,0,0}, 0},
{{1,0,0,0}, 123},	{{0,0,0,0}, 124},	{{0,0,0,232}, 0},
{{0,0,0,243}, 0},	{{0,0,0,243}, 0},	{{0,0,0,243}, 0},
{{0,0,0,0}, 64},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{0,0,0,0}, 60},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{-263,-263,-263,-263}, 0},
{{0,0,0,231}, 0},	{{0,0,0,0}, 53},	{{0,0,0,230}, 0},
{{0,0,0,231}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 394},	{{0,0,0,228}, 0},	{{0,0,0,228}, 0},
{{0,0,0,228}, 0},	{{0,233,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,228}, 0},	{{0,0,228,0}, 0},
{{0,0,0,229}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,224}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,219}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,217}, 0},	{{0,0,0,218}, 0},	{{0,0,218,0}, 0},
{{1,-2534,-2534,-2534}, 0},	{{1,1,1,1}, 0},	{{-2534,-2534,216,-2534}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{0,0,0,213}, 0},	{{1,1,1,1}, 0},	{{0,0,212,0}, 0},
{{0,212,0,0}, 0},	{{0,0,0,0}, 420},	{{0,0,0,211}, 0},
{{0,0,0,212}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,211}, 0},	{{0,0,212,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 422},	{{0,0,0,0}, 413},	{{1,-1949,-1949,-1949}, 0},
{{-1949,-1949,-1949,213}, 0},	{{0,0,0,214}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 410},	{{0,0,0,211}, 0},
{{0,213,0,0}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 314},	{{0,0,0,211}, 0},	{{0,0,0,213}, 0},
{{0,0,0,213}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,208}, 0},	{{0,0,0,208}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,208,0,0}, 0},	{{0,0,0,218}, 0},
{{0,0,0,218}, 0},	{{0,0,0,218}, 0},	{{1,1,1,1}, 0},
{{0,0,0,218}, 0},	{{0,0,0,220}, 0},	{{0,0,0,220}, 0},
{{0,0,0,222}, 0},	{{0,0,0,222}, 0},	{{0,0,0,223}, 0},
{{0,0,0,223}, 0},	{{0,0,0,0}, 277},	{{0,0,0,222}, 0},
{{0,0,0,0}, 273},	{{0,0,0,0}, 271},	{{1,1,1,1}, 0},
{{0,0,0,219}, 0},	{{0,0,0,219}, 0},	{{0,0,0,219}, 0},
{{0,0,0,220}, 0},	{{1,0,0,0}, 0},	{{1,1,1,0}, 0},
{{0,0,0,218}, 0},	{{0,0,0,0}, 264},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,216}, 0},	{{0,0,0,221}, 0},
{{0,0,0,221}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-8388,-8388,-8388,212}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,207}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,205,0,0}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{1,1,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,0}, 0},	{{1,1,1,1}, 0},	{{0,0,0,196}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,187}, 0},	{{0,0,0,0}, 255},	{{0,0,0,186}, 0},
{{0,0,0,187}, 0},	{{1,1,1,1}, 0},	{{0,187,0,0}, 0},
{{0,0,0,187}, 0},	{{0,0,0,187}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,185,0,0}, 0},	{{-77,1,-77,-77}, 0},
{{0,0,0,140}, 221},	{{1,1,1,185}, 0},	{{1,140,140,140}, 0},
{{1,0,1,0}, 218},	{{1,1,1,1}, 0},	{{0,183,0,0}, 0},
{{0,0,0,183}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,177}, 0},	{{0,0,0,178}, 0},	{{0,0,0,185}, 0},
{{0,0,0,186}, 0},	{{-8056,-8056,-8056,-8056}, 157},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{-8058,-8058,-8058,176}, 0},
{{-8795,-8795,-8795,176}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,171}, 0},	{{1,0,0,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,169}, 0},	{{0,0,0,169}, 0},	{{0,0,0,169}, 0},
{{0,0,0,169}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 148},
{{0,0,0,177}, 0},	{{0,0,0,0}, 144},	{{0,0,0,178}, 0},
{{0,0,0,0}, 137},	{{1,1,1,1}, 0},	{{0,0,176,0}, 0},
{{-1575,0,-1575,0}, 134},	{{0,0,0,175}, 0},	{{0,0,0,0}, 129},
{{1,158,158,158}, 0},	{{1,174,174,174}, 0},	{{1,158,1,158}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,174,174,174}, 0},	{{1,1,1,1}, 119},	{{0,0,0,173}, 0},
{{0,0,173,0}, 0},	{{0,0,0,0}, 82},	{{0,0,0,174}, 64},
{{0,0,0,174}, 0},	{{1,1,1,1}, 0},	{{0,173,0,0}, 0},
{{0,0,0,175}, 0},	{{0,0,175,0}, 0},	{{0,0,0,175}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,171}, 0},
{{0,0,0,0}, 403},	{{0,0,0,170}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 398},	{{0,168,0,0}, 0},	{{0,0,0,168}, 0},
{{0,0,0,168}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 381},
{{-478,0,166,0}, 0},	{{0,0,0,0}, 370},	{{0,165,0,0}, 0},
{{0,0,0,165}, 0},	{{0,0,0,0}, 365},	{{0,0,0,0}, 421},
{{1,0,0,0}, 0},	{{0,0,0,0}, 418},	{{1,0,0,0}, 0},
{{0,0,0,0}, 417},	{{1,0,0,0}, 0},	{{0,0,0,0}, 424},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,0,152}, 0},
{{1,-2161,1,-2161}, 0},	{{-2161,-2161,-2161,0}, 408},	{{0,0,0,150}, 0},
{{1,1,1,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 316},
{{1,0,0,0}, 0},	{{0,0,0,0}, 315},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 313},	{{0,0,0,142}, 0},
{{0,0,0,142}, 0},	{{0,0,0,142}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 349},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,129}, 0},	{{0,0,0,129}, 0},	{{0,0,0,129}, 0},
{{1,-216,-216,-216}, 0},	{{0,0,0,1}, 344},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{-138,0,-138,0}, 0},	{{0,0,0,133}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,133,0,0}, 0},
{{0,0,0,143}, 0},	{{1,1,1,1}, 0},	{{0,0,142,0}, 0},
{{0,0,0,142}, 0},	{{0,0,0,142}, 0},	{{0,0,0,0}, 275},
{{0,0,0,141}, 0},	{{0,0,0,143}, 0},	{{1,0,0,0}, 0},
{{0,143,0,0}, 0},	{{0,0,0,143}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{0,143,0,0}, 0},	{{1,1,0,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{0,0,0,0}, 263},	{{0,0,0,137}, 0},	{{0,0,0,0}, 157},
{{-8599,-8599,-8599,137}, 0},	{{0,0,0,137}, 0},	{{0,137,0,0}, 0},
{{0,0,0,137}, 0},	{{0,0,0,137}, 0},	{{1,0,1,0}, 0},
{{0,0,0,136}, 0},	{{1,1,1,1}, 0},	{{0,137,0,0}, 0},
{{0,137,0,0}, 0},	{{0,0,0,138}, 0},	{{0,0,0,140}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 223},
{{1,-44,-44,-44}, 0},	{{-183,0,-183,0}, 220},	{{0,0,0,0}, 222},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 195},
{{1,1,1,1}, 0},	{{0,0,0,130}, 0},	{{1,0,0,0}, 0},
{{1,1,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,124}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 166},
{{0,0,0,0}, 159},	{{-8233,-8233,-8233,121}, 0},	{{-8970,-8970,-8970,121}, 0},
{{0,0,0,121}, 0},	{{0,0,121,0}, 0},	{{0,0,0,121}, 0},
{{0,0,0,123}, 0},	{{1,1,1,1}, 0},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 119},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 145},
{{0,0,0,109}, 0},	{{0,0,0,0}, 134},	{{1,0,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{-172,-172,-172,-172}, 0},	{{0,0,0,101}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,99,0}, 0},	{{0,0,0,0}, 65},
{{0,0,0,99}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,0,0,97}, 0},	{{0,0,0,97}, 0},	{{0,0,0,0}, 391},
{{1,1,1,1}, 0},	{{0,95,0,0}, 0},	{{0,0,0,95}, 0},
{{0,0,0,95}, 0},	{{0,0,0,0}, 399},	{{0,0,0,94}, 0},
{{0,0,0,94}, 0},	{{0,0,0,0}, 374},	{{0,0,0,0}, 371},
{{0,0,0,92}, 0},	{{0,0,0,93}, 0},	{{0,0,0,93}, 0},
{{0,0,0,93}, 0},	{{0,0,0,94}, 0},	{{0,0,0,95}, 339},
{{0,0,0,95}, 0},	{{0,0,95,0}, 0},	{{1,1,1,1}, 0},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,86,0,0}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 343},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,73}, 0},	{{0,0,0,73}, 0},
{{0,0,0,0}, 333},	{{0,0,72,0}, 0},	{{0,0,0,0}, 158},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{0,69,0,0}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 266},	{{0,0,0,0}, 269},
{{1,0,0,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 268},	{{0,0,0,0}, 265},
{{1,0,0,0}, 0},	{{0,0,0,0}, 260},	{{-8735,-8735,-8735,58}, 0},
{{0,0,0,58}, 0},	{{0,60,0,0}, 0},	{{0,0,0,60}, 0},
{{0,0,0,60}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 259},	{{0,0,57,0}, 0},	{{1,1,1,1}, 0},
{{0,0,0,57}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 211},	{{0,0,0,54}, 0},	{{1,1,1,1}, 0},
{{0,0,0,53}, 0},	{{0,0,0,53}, 0},	{{-8353,-8353,-8353,53}, 0},
{{-9090,-9090,-9090,53}, 0},	{{0,0,0,53}, 0},	{{0,0,0,53}, 0},
{{1,1,1,1}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 112},
{{0,0,0,50}, 0},	{{1,0,0,0}, 0},	{{1,1,1,1}, 0},
{{1,48,1,48}, 0},	{{1,-106,1,-106}, 0},	{{-106,-106,-106,-106}, 131},
{{0,0,0,47}, 0},	{{1,1,1,1}, 0},	{{0,0,46,0}, 0},
{{0,0,0,46}, 0},	{{0,0,0,46}, 0},	{{0,0,0,46}, 0},
{{0,0,0,0}, 385},	{{0,0,0,45}, 0},	{{0,0,0,45}, 0},
{{0,0,0,45}, 0},	{{0,0,0,45}, 0},	{{1,0,0,0}, 0},
{{0,0,0,44}, 0},	{{0,0,0,44}, 0},	{{0,0,0,0}, 411},
{{1,0,0,0}, 0},	{{0,0,0,0}, 358},	{{1,1,1,1}, 0},
{{0,0,0,41}, 0},	{{0,0,0,46}, 0},	{{0,0,0,46}, 0},
{{0,0,0,0}, 351},	{{0,0,0,0}, 345},	{{0,0,0,44}, 0},
{{0,0,0,44}, 0},	{{0,0,0,0}, 331},	{{0,0,0,0}, 281},
{{-8792,-8792,-8792,43}, 0},	{{1,1,1,1}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 288},	{{0,0,0,40}, 0},	{{0,0,0,40}, 0},
{{0,0,0,40}, 0},	{{1,1,0,0}, 0},	{{0,0,0,39}, 0},
{{0,0,0,39}, 0},	{{0,39,0,0}, 0},	{{0,0,0,39}, 0},
{{0,0,0,39}, 0},	{{-8405,-8405,-8405,39}, 0},	{{-9142,-9142,-9142,39}, 0},
{{0,0,0,40}, 0},	{{0,0,0,40}, 0},	{{0,0,0,45}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 131},	{{0,0,0,46}, 0},
{{0,0,46,0}, 0},	{{0,0,46,0}, 0},	{{0,0,0,49}, 0},
{{0,0,0,49}, 0},	{{0,0,0,50}, 0},	{{0,0,0,50}, 0},
{{0,0,0,50}, 0},	{{0,0,0,51}, 0},	{{0,0,0,52}, 0},
{{1,0,0,0}, 0},	{{0,0,0,0}, 423},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,0,1,0}, 0},	{{0,0,0,0}, 347},	{{0,0,0,49}, 0},
{{0,0,0,50}, 0},	{{0,0,0,50}, 0},	{{1,0,1,0}, 0},
{{0,0,0,0}, 335},	{{-8834,-8834,-8834,48}, 0},	{{0,0,0,49}, 0},
{{0,0,0,49}, 0},	{{0,0,0,50}, 0},	{{0,0,0,51}, 0},
{{0,0,0,51}, 0},	{{0,0,0,0}, 233},	{{0,0,0,50}, 0},
{{0,0,0,50}, 0},	{{-8443,-8443,-8443,50}, 0},	{{1,-8443,-8443,-8443}, 0},
{{-9180,-9180,0,0}, 156},	{{0,0,0,49}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,0}, 0},
{{1,1,1,1}, 0},	{{0,0,0,44}, 0},	{{1,0,0,0}, 0},
{{1,0,0,0}, 0},	{{1,0,0,0}, 0},	{{0,0,0,41}, 0},
{{0,0,0,42}, 0},	{{0,0,0,0}, 93},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,0,1,0}, 0},	{{0,0,0,0}, 61},
{{0,0,0,37}, 0},	{{1,0,0,0}, 0},	{{0,0,0,36}, 0},
{{0,0,0,36}, 0},	{{0,0,36,0}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 396},	{{1,0,0,0}, 0},	{{0,0,0,0}, 395},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{1,1,0,0}, 0},	{{0,0,0,0}, 366},
{{1,0,0,0}, 0},	{{0,0,0,0}, 354},	{{0,0,0,24}, 0},
{{0,0,0,25}, 0},	{{1,0,0,0}, 0},	{{-8881,-8881,0,0}, 156},
{{0,0,0,23}, 0},	{{1,0,0,0}, 0},	{{0,0,0,0}, 250},
{{1,0,0,0}, 0},	{{0,0,0,0}, 156},	{{0,0,0,19}, 0},
{{0,0,0,19}, 0},	{{0,0,0,0}, 177},	{{0,0,0,18}, 0},
{{1,-8492,-8492,-8492}, 0},	{{-8492,-8492,0,0}, 156},	{{0,0,16,0}, 0},
{{0,0,0,16}, 0},	{{1,1,1,1}, 0},	{{0,0,0,15}, 0},
{{0,0,0,23}, 0},	{{0,0,0,23}, 0},	{{0,0,0,0}, 10},
{{0,0,22,0}, 0},	{{0,0,0,0}, 400},	{{1,0,0,0}, 0},
{{0,0,0,0}, 348},	{{0,0,0,19}, 0},	{{0,0,0,19}, 0},
{{0,0,0,19}, 0},	{{0,0,19,0}, 0},	{{0,0,0,19}, 0},
{{0,0,0,0}, 113},	{{0,0,0,19}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,0}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{0,0,0,12}, 0},	{{0,0,0,12}, 0},
{{0,0,0,13}, 0},	{{0,0,0,0}, 402},	{{0,13,0,0}, 0},
{{0,0,0,13}, 0},	{{0,0,13,0}, 0},	{{0,0,0,13}, 0},
{{1,1,1,1}, 0},	{{0,0,0,12}, 0},	{{1,1,1,1}, 0},
{{0,0,20,0}, 0},	{{0,0,0,20}, 0},	{{1,0,0,0}, 0},
{{0,0,0,0}, 120},	{{1,0,0,0}, 0},	{{0,0,0,0}, 55},
{{0,0,0,0}, 337},	{{0,0,0,15}, 0},	{{0,0,0,19}, 0},
{{0,0,19,0}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,0,0}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,0}, 0},	{{0,0,0,0}, 168},	{{0,0,0,0}, 114},
{{0,0,0,8}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{1,1,1,1}, 0},	{{1,1,1,1}, 0},	{{0,0,4,0}, 0},
{{0,0,5,0}, 0},	{{0,0,0,0}, 257},	{{0,0,0,4}, 0},
{{1,1,0,0}, 0},	{{0,0,0,3}, 0},	{{0,0,0,4}, 0},
{{0,0,0,5}, 0},	{{1,1,1,1}, 0},	{{0,0,0,4}, 0},
{{1,1,1,1}, 0},	{{0,0,0,3}, 0},	{{0,0,0,5}, 0},
{{0,0,0,5}, 0},	{{1,1,1,1}, 0},	{{1,1,1,1}, 0},
{{0,3,0,0}, 0},	{{0,0,0,3}, 0},	{{0,0,0,3}, 0},
{{0,3,0,0}, 0},	{{0,0,0,3}, 0},	{{0,0,0,4}, 0},
{{0,0,0,0}, 258},	{{1,0,0,0}, 0},	{{0,0,0,0}, 140},
{{0,0,0,0}, 289},	};

static const attrib_rt_t idx_owl_attackpat[429] = {
{-1,0},	{61,0},	{104,0},	{36,0},
{60,0},	{295,0},	{288,0},	{289,6},
{25,0},	{49,8},	{375,0},	{105,0},
{106,11},	{15,0},	{117,0},	{84,0},
{83,0},	{20,0},	{311,0},	{225,18},
{262,0},	{178,0},	{247,0},	{248,22},
{250,0},	{263,0},	{69,0},	{238,0},
{110,27},	{31,0},	{54,0},	{275,0},
{274,31},	{235,32},	{236,33},	{85,0},
{105,35},	{106,36},	{80,0},	{81,38},
{276,0},	{277,0},	{256,0},	{254,42},
{255,0},	{254,0},	{267,0},	{266,46},
{254,47},	{245,0},	{244,49},	{5,0},
{244,0},	{359,0},	{74,34},	{336,0},
{261,0},	{286,0},	{227,0},	{197,0},
{127,0},	{128,0},	{37,0},	{326,0},
{227,63},	{327,0},	{64,0},	{62,0},
{278,0},	{1,0},	{51,0},	{52,70},
{116,0},	{43,72},	{41,73},	{42,74},
{0,0},	{44,73},	{41,77},	{42,78},
{55,0},	{58,80},	{57,0},	{221,0},
{222,83},	{59,0},	{112,0},	{294,0},
{154,0},	{182,0},	{184,0},	{41,72},
{42,91},	{351,0},	{223,40},	{224,94},
{278,41},	{142,0},	{229,97},	{316,0},
{229,0},	{221,100},	{222,101},	{293,0},
{291,103},	{292,104},	{290,105},	{195,0},
{196,107},	{229,18},	{225,109},	{285,0},
{297,0},	{356,0},	{352,0},	{86,0},
{303,0},	{296,0},	{38,0},	{73,0},
{232,0},	{50,0},	{45,0},	{6,0},
{4,0},	{24,0},	{12,0},	{252,0},
{260,0},	{121,0},	{187,0},	{56,0},
{199,0},	{109,0},	{114,0},	{279,0},
{151,0},	{394,0},	{198,0},	{349,0},
{312,0},	{174,0},	{100,0},	{251,0},
{354,0},	{18,0},	{53,0},	{23,0},
{253,0},	{93,0},	{95,0},	{92,0},
{240,0},	{96,152},	{96,0},	{239,0},
{374,0},	{9,0},	{13,0},	{9,158},
{89,0},	{271,0},	{272,161},	{269,162},
{273,163},	{16,0},	{76,0},	{119,0},
{342,0},	{63,0},	{88,0},	{26,0},
{27,0},	{28,0},	{156,0},	{30,0},
{381,0},	{329,0},	{122,0},	{111,178},
{63,179},	{99,0},	{123,0},	{346,0},
{213,0},	{376,0},	{11,0},	{243,0},
{70,0},	{280,0},	{249,189},	{87,0},
{167,0},	{165,192},	{166,0},	{17,0},
{210,0},	{377,0},	{94,0},	{269,0},
{101,199},	{102,200},	{90,0},	{162,0},
{175,0},	{242,0},	{237,0},	{212,184},
{189,0},	{241,0},	{118,0},	{350,0},
{163,0},	{82,0},	{190,0},	{181,0},
{164,0},	{47,0},	{46,217},	{33,0},
{46,0},	{133,0},	{396,0},	{331,0},
{152,0},	{135,0},	{206,0},	{136,0},
{323,0},	{19,0},	{155,0},	{68,0},
{180,0},	{393,0},	{228,0},	{281,0},
{282,235},	{168,0},	{98,0},	{98,199},
{191,0},	{173,0},	{141,0},	{138,242},
{10,0},	{185,0},	{149,0},	{143,0},
{8,0},	{131,224},	{48,0},	{317,224},
{216,0},	{132,0},	{211,0},	{333,0},
{322,0},	{368,0},	{369,0},	{358,0},
{7,0},	{301,0},	{302,261},	{344,0},
{364,0},	{371,0},	{343,0},	{34,0},
{35,0},	{390,0},	{147,0},	{381,270},
{382,0},	{386,0},	{388,0},	{386,274},
{268,0},	{207,0},	{75,0},	{146,0},
{313,0},	{380,0},	{144,0},	{362,0},
{208,0},	{209,284},	{32,0},	{330,0},
{328,0},	{357,0},	{97,0},	{72,0},
{258,0},	{258,291},	{270,0},	{130,0},
{217,0},	{218,296},	{219,0},	{220,298},
{395,0},	{283,0},	{246,0},	{269,302},
{226,0},	{183,0},	{139,0},	{304,0},
{305,307},	{39,0},	{40,309},	{308,299},
{308,0},	{385,0},	{341,0},	{389,0},
{384,0},	{177,0},	{137,0},	{298,0},
{158,0},	{159,0},	{71,0},	{379,0},
{378,323},	{169,0},	{233,0},	{234,326},
{107,0},	{108,328},	{29,0},	{332,0},
{340,0},	{319,0},	{231,0},	{214,0},
{215,0},	{157,0},	{172,0},	{120,0},
{314,0},	{179,0},	{176,0},	{134,0},
{140,0},	{129,0},	{170,0},	{367,0},
{392,0},	{391,0},	{320,0},	{318,350},
{148,0},	{361,0},	{355,0},	{205,0},
{363,0},	{21,0},	{202,0},	{77,0},
{78,359},	{79,0},	{3,0},	{124,0},
{309,0},	{188,0},	{345,0},	{307,0},
{306,367},	{65,0},	{321,0},	{33,364},
{324,0},	{325,0},	{324,373},	{115,367},
{306,375},	{230,0},	{22,0},	{103,0},
{186,0},	{353,0},	{347,0},	{257,0},
{153,0},	{259,0},	{299,0},	{300,386},
{257,384},	{161,0},	{338,0},	{194,0},
{284,0},	{265,0},	{204,0},	{200,0},
{201,0},	{339,0},	{126,0},	{334,0},
{203,0},	{310,0},	{287,0},	{348,0},
{366,0},	{67,0},	{160,0},	{171,0},
{365,0},	{373,0},	{372,409},	{66,0},
{264,0},	{113,0},	{193,0},	{125,0},
{335,0},	{337,0},	{150,0},	{383,0},
{387,0},	{145,0},	{360,0},	{370,0},
{315,0},	{14,0},	{2,425},	{91,0},
{192,0},	};

static dfa_rt_t dfa_owl_attackpat = {
 "owl_attackpat",
state_owl_attackpat,
idx_owl_attackpat};

struct pattern_db owl_attackpat_db = {
  -1,
  0,
  owl_attackpat
 ,& dfa_owl_attackpat
};
