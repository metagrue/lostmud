/***************************************************************************
* Original Diku Mud copyright (C) 1990, 1991 by Sebastian Hammer, *
* Michael Seifert, Hans Henrik Stærfeldt, Tom Madsen, and Katja Nyboe. *
* *
* Merc Diku Mud improvements copyright (C) 1992, 1993 by Michael *
* Chastain, Michael Quan, and Mitchell Tse. *
* *
* ROM 2.4 is copyright 1993-1995 Russ Taylor *
* ROM has been brought to you by the ROM consortium *
* Russ Taylor (rtaylor@pacinfo.com) *
* Gabrielle Taylor (gtaylor@pacinfo.com) *
* Brian Moore (rom@rom.efn.org) *
* ROT 2.0 is copyright 1996-1999 by Russ Walsh *
* DRM 1.0a is copyright 2000-2002 by Joshua Chance Blackwell *
* SD 2.0 is copyright 2004-2006 by Patrick Mylund Nielsen *
***************************************************************************/

#include <sys/types.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#include "merc.h"
#include "db.h"

int powerf ( int value, int pow )
{
    int loop;

    if ( pow == 0 )
        return 1;

    if ( pow == 1 )
        return value;

    for ( loop = 1; loop < pow; loop++ )
    {
        value *= value;
    }
    return value;
}

/*
* CHANCE function. I use this everywhere in my code, very handy :>
*/
bool chance ( int num )
{
    if ( number_range ( 1, 100 ) <= num )
        return TRUE;
    else
        return FALSE;
}

bool bigchance ( int num )
{
    if ( number_range ( 1, 1500 ) * 2 <= num )
        return TRUE;
    else
        return FALSE;
}