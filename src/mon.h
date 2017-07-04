#ifndef INCLUDED_MON_H
#define INCLUDED_MON_H

/* XXX Refactor monster_type, monster_race, etc ... */
typedef struct monster_type mon_t, *mon_ptr;
typedef struct monster_race mon_race_t, *mon_race_ptr;

extern int mon_ac(mon_ptr mon);

extern bool mon_show_msg(mon_ptr mon);

extern mon_race_ptr mon_race(mon_ptr mon);
extern mon_race_ptr mon_apparent_race(mon_ptr mon);
extern mon_race_ptr mon_true_race(mon_ptr mon);

extern void mon_anger(mon_ptr mon);
extern void mon_anger_spell(mon_ptr mon, int dam);
extern void mon_anger_shoot(mon_ptr mon, int dam);
#endif