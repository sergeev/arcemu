/*
 * ArcEmu MMORPG Server
 * Copyright (C) 2005-2007 Ascent Team <http://www.ascentemu.com/>
 * Copyright (C) 2008-2009 <http://www.ArcEmu.org/>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "StdAfx.h"

pSpellAura SpellAuraHandler[TOTAL_SPELL_AURAS]={
		&Aura::SpellAuraNULL,//SPELL_AURA_NONE = 0
		&Aura::SpellAuraBindSight,//SPELL_AURA_BIND_SIGHT = 1
		&Aura::SpellAuraModPossess,//SPELL_AURA_MOD_POSSESS = 2,
		&Aura::SpellAuraPeriodicDamage,//SPELL_AURA_PERIODIC_DAMAGE = 3,
		&Aura::SpellAuraDummy,//SPELL_AURA_DUMMY = 4,
		&Aura::SpellAuraModConfuse,//SPELL_AURA_MOD_CONFUSE = 5,
		&Aura::SpellAuraModCharm,//SPELL_AURA_MOD_CHARM = 6,
		&Aura::SpellAuraModFear,//SPELL_AURA_MOD_FEAR = 7,
		&Aura::SpellAuraPeriodicHeal,//SPELL_AURA_PERIODIC_HEAL = 8,
		&Aura::SpellAuraModAttackSpeed,//SPELL_AURA_MOD_ATTACKSPEED = 9,
		&Aura::SpellAuraModThreatGenerated,//SPELL_AURA_MOD_THREAT = 10,
		&Aura::SpellAuraModTaunt,//SPELL_AURA_MOD_TAUNT = 11,
		&Aura::SpellAuraModStun,//SPELL_AURA_MOD_STUN = 12,
		&Aura::SpellAuraModDamageDone,//SPELL_AURA_MOD_DAMAGE_DONE = 13,
		&Aura::SpellAuraModDamageTaken,//SPELL_AURA_MOD_DAMAGE_TAKEN = 14,
		&Aura::SpellAuraDamageShield,//SPELL_AURA_DAMAGE_SHIELD = 15,
		&Aura::SpellAuraModStealth,//SPELL_AURA_MOD_STEALTH = 16,
		&Aura::SpellAuraModDetect,//SPELL_AURA_MOD_DETECT = 17,
		&Aura::SpellAuraModInvisibility,//SPELL_AURA_MOD_INVISIBILITY = 18,
		&Aura::SpellAuraModInvisibilityDetection,//SPELL_AURA_MOD_INVISIBILITY_DETECTION = 19,
		&Aura::SpellAuraModTotalHealthRegenPct,// SPELL_AURA_MOD_TOTAL_HEALTH_REGEN_PCT = 20
		&Aura::SpellAuraModTotalManaRegenPct,// SPELL_AURA_MOD_TOTAL_MANA_REGEN_PCT = 21
		&Aura::SpellAuraModResistance,//SPELL_AURA_MOD_RESISTANCE = 22,
		&Aura::SpellAuraPeriodicTriggerSpell,//SPELL_AURA_PERIODIC_TRIGGER_SPELL = 23,
		&Aura::SpellAuraPeriodicEnergize,//SPELL_AURA_PERIODIC_ENERGIZE = 24,
		&Aura::SpellAuraModPacify,//SPELL_AURA_MOD_PACIFY = 25,
		&Aura::SpellAuraModRoot,//SPELL_AURA_MOD_ROOT = 26,
		&Aura::SpellAuraModSilence,//SPELL_AURA_MOD_SILENCE = 27,
		&Aura::SpellAuraReflectSpells,//SPELL_AURA_REFLECT_SPELLS = 28,
		&Aura::SpellAuraModStat,//SPELL_AURA_MOD_STAT = 29,
		&Aura::SpellAuraModSkill,//SPELL_AURA_MOD_SKILL = 30,
		&Aura::SpellAuraModIncreaseSpeed,//SPELL_AURA_MOD_INCREASE_SPEED = 31,
		&Aura::SpellAuraModIncreaseMountedSpeed,//SPELL_AURA_MOD_INCREASE_MOUNTED_SPEED = 32,
		&Aura::SpellAuraModDecreaseSpeed,//SPELL_AURA_MOD_DECREASE_SPEED = 33,
		&Aura::SpellAuraModIncreaseHealth,//SPELL_AURA_MOD_INCREASE_HEALTH = 34,
		&Aura::SpellAuraModIncreaseEnergy,//SPELL_AURA_MOD_INCREASE_ENERGY = 35,
		&Aura::SpellAuraModShapeshift,//SPELL_AURA_MOD_SHAPESHIFT = 36,
		&Aura::SpellAuraModEffectImmunity,//SPELL_AURA_EFFECT_IMMUNITY = 37,
		&Aura::SpellAuraModStateImmunity,//SPELL_AURA_STATE_IMMUNITY = 38,
		&Aura::SpellAuraModSchoolImmunity,//SPELL_AURA_SCHOOL_IMMUNITY = 39,
		&Aura::SpellAuraModDmgImmunity,//SPELL_AURA_DAMAGE_IMMUNITY = 40,
		&Aura::SpellAuraModDispelImmunity,//SPELL_AURA_DISPEL_IMMUNITY = 41,
		&Aura::SpellAuraProcTriggerSpell,//SPELL_AURA_PROC_TRIGGER_SPELL = 42,
		&Aura::SpellAuraProcTriggerDamage,//SPELL_AURA_PROC_TRIGGER_DAMAGE = 43,
		&Aura::SpellAuraTrackCreatures,//SPELL_AURA_TRACK_CREATURES = 44,
		&Aura::SpellAuraTrackResources,//SPELL_AURA_TRACK_RESOURCES = 45,
		&Aura::SpellAuraNULL,//SPELL_AURA_MOD_PARRY_SKILL = 46, obsolete? not used in 1.12.1 spell.dbc
		&Aura::SpellAuraModParryPerc,//SPELL_AURA_MOD_PARRY_PERCENT = 47,
		&Aura::SpellAuraNULL,//SPELL_AURA_MOD_DODGE_SKILL = 48, obsolete?
		&Aura::SpellAuraModDodgePerc,//SPELL_AURA_MOD_DODGE_PERCENT = 49,
		&Aura::SpellAuraNULL,//SPELL_AURA_MOD_BLOCK_SKILL = 50, obsolete?,
		&Aura::SpellAuraModBlockPerc,//SPELL_AURA_MOD_BLOCK_PERCENT = 51,
		&Aura::SpellAuraModCritPerc,//SPELL_AURA_MOD_CRIT_PERCENT = 52,
		&Aura::SpellAuraPeriodicLeech,//SPELL_AURA_PERIODIC_LEECH = 53,
		&Aura::SpellAuraModHitChance,//SPELL_AURA_MOD_HIT_CHANCE = 54,
		&Aura::SpellAuraModSpellHitChance,//SPELL_AURA_MOD_SPELL_HIT_CHANCE = 55,
		&Aura::SpellAuraTransform,//SPELL_AURA_TRANSFORM = 56,
		&Aura::SpellAuraModSpellCritChance,//SPELL_AURA_MOD_SPELL_CRIT_CHANCE = 57,
		&Aura::SpellAuraIncreaseSwimSpeed,//SPELL_AURA_MOD_INCREASE_SWIM_SPEED = 58,
		&Aura::SpellAuraModCratureDmgDone,//SPELL_AURA_MOD_DAMAGE_DONE_CREATURE = 59,
		&Aura::SpellAuraPacifySilence,//SPELL_AURA_MOD_PACIFY_SILENCE = 60,
		&Aura::SpellAuraModScale,//SPELL_AURA_MOD_SCALE = 61,
		&Aura::SpellAuraPeriodicHealthFunnel,//SPELL_AURA_PERIODIC_HEALTH_FUNNEL = 62,
		&Aura::SpellAuraNULL,//SPELL_AURA_PERIODIC_MANA_FUNNEL = 63,//obsolete?
		&Aura::SpellAuraPeriodicManaLeech,//SPELL_AURA_PERIODIC_MANA_LEECH = 64,
		&Aura::SpellAuraModCastingSpeed,//SPELL_AURA_MOD_CASTING_SPEED = 65,
		&Aura::SpellAuraFeignDeath,//SPELL_AURA_FEIGN_DEATH = 66,
		&Aura::SpellAuraModDisarm,//SPELL_AURA_MOD_DISARM = 67,
		&Aura::SpellAuraModStalked,//SPELL_AURA_MOD_STALKED = 68,
		&Aura::SpellAuraSchoolAbsorb,//SPELL_AURA_SCHOOL_ABSORB = 69,
		&Aura::SpellAuraNULL,//SPELL_AURA_EXTRA_ATTACKS = 70,//obsolete?
		&Aura::SpellAuraModSpellCritChanceSchool,//SPELL_AURA_MOD_SPELL_CRIT_CHANCE_SCHOOL = 71,
		&Aura::SpellAuraModPowerCost,//SPELL_AURA_MOD_POWER_COST = 72,
		&Aura::SpellAuraModPowerCostSchool,//SPELL_AURA_MOD_POWER_COST_SCHOOL = 73,
		&Aura::SpellAuraReflectSpellsSchool,//SPELL_AURA_REFLECT_SPELLS_SCHOOL = 74,
		&Aura::SpellAuraModLanguage,//SPELL_AURA_MOD_LANGUAGE = 75,
		&Aura::SpellAuraAddFarSight,//SPELL_AURA_FAR_SIGHT = 76,
		&Aura::SpellAuraMechanicImmunity,//SPELL_AURA_MECHANIC_IMMUNITY = 77,
		&Aura::SpellAuraMounted,//SPELL_AURA_MOUNTED = 78,
		&Aura::SpellAuraModDamagePercDone,//SPELL_AURA_MOD_DAMAGE_PERCENT_DONE = 79,
		&Aura::SpellAuraModPercStat,//SPELL_AURA_MOD_PERCENT_STAT = 80,
		&Aura::SpellAuraSplitDamage,//SPELL_AURA_SPLIT_DAMAGE = 81,
		&Aura::SpellAuraWaterBreathing,//SPELL_AURA_WATER_BREATHING = 82,
		&Aura::SpellAuraModBaseResistance,//SPELL_AURA_MOD_BASE_RESISTANCE = 83,
		&Aura::SpellAuraModRegen,//SPELL_AURA_MOD_REGEN = 84,
		&Aura::SpellAuraModPowerRegen,//SPELL_AURA_MOD_POWER_REGEN = 85,
		&Aura::SpellAuraChannelDeathItem,//SPELL_AURA_CHANNEL_DEATH_ITEM = 86,
		&Aura::SpellAuraModDamagePercTaken,//SPELL_AURA_MOD_DAMAGE_PERCENT_TAKEN = 87,
		&Aura::SpellAuraModRegenPercent,//SPELL_AURA_MOD_PERCENT_REGEN = 88,
		&Aura::SpellAuraPeriodicDamagePercent,//SPELL_AURA_PERIODIC_DAMAGE_PERCENT = 89,
		&Aura::SpellAuraModResistChance,//SPELL_AURA_MOD_RESIST_CHANCE = 90,
		&Aura::SpellAuraModDetectRange,//SPELL_AURA_MOD_DETECT_RANGE = 91,
		&Aura::SpellAuraPreventsFleeing,//SPELL_AURA_PREVENTS_FLEEING = 92,
		&Aura::SpellAuraModUnattackable,//SPELL_AURA_MOD_UNATTACKABLE = 93,
		&Aura::SpellAuraInterruptRegen,//SPELL_AURA_INTERRUPT_REGEN = 94,
		&Aura::SpellAuraGhost,//SPELL_AURA_GHOST = 95,
		&Aura::SpellAuraMagnet,//SPELL_AURA_SPELL_MAGNET = 96,
		&Aura::SpellAuraManaShield,//SPELL_AURA_MANA_SHIELD = 97,
		&Aura::SpellAuraSkillTalent,//SPELL_AURA_MOD_SKILL_TALENT = 98,
		&Aura::SpellAuraModAttackPower,//SPELL_AURA_MOD_ATTACK_POWER = 99,
		&Aura::SpellAuraVisible,//SPELL_AURA_AURAS_VISIBLE = 100,
		&Aura::SpellAuraModResistancePCT,//SPELL_AURA_MOD_RESISTANCE_PCT = 101,
		&Aura::SpellAuraModCreatureAttackPower,//SPELL_AURA_MOD_CREATURE_ATTACK_POWER = 102,
		&Aura::SpellAuraModTotalThreat,//SPELL_AURA_MOD_TOTAL_THREAT = 103,
		&Aura::SpellAuraWaterWalk,//SPELL_AURA_WATER_WALK = 104,
		&Aura::SpellAuraFeatherFall,//SPELL_AURA_FEATHER_FALL = 105,
		&Aura::SpellAuraHover,//SPELL_AURA_HOVER = 106,
		&Aura::SpellAuraAddFlatModifier,//SPELL_AURA_ADD_FLAT_MODIFIER = 107,
		&Aura::SpellAuraAddPctMod,//SPELL_AURA_ADD_PCT_MODIFIER = 108,
		&Aura::SpellAuraAddTargetTrigger,//SPELL_AURA_ADD_TARGET_TRIGGER = 109,
		&Aura::SpellAuraModPowerRegPerc,//SPELL_AURA_MOD_POWER_REGEN_PERCENT = 110,
		&Aura::SpellAuraAddCasterHitTrigger,//SPELL_AURA_ADD_CASTER_HIT_TRIGGER = 111,
		&Aura::SpellAuraOverrideClassScripts,//SPELL_AURA_OVERRIDE_CLASS_SCRIPTS = 112,
		&Aura::SpellAuraModRangedDamageTaken,//SPELL_AURA_MOD_RANGED_DAMAGE_TAKEN = 113,
		&Aura::SpellAuraNULL,//SPELL_AURA_MOD_RANGED_DAMAGE_TAKEN_PCT = 114, obadac na mangosie
		&Aura::SpellAuraModHealing,//SPELL_AURA_MOD_HEALING = 115,
		&Aura::SpellAuraIgnoreRegenInterrupt,//SPELL_AURA_IGNORE_REGEN_INTERRUPT = 116,
		&Aura::SpellAuraModMechanicResistance,//SPELL_AURA_MOD_MECHANIC_RESISTANCE = 117,
		&Aura::SpellAuraModHealingPCT,//SPELL_AURA_MOD_HEALING_PCT = 118,
		&Aura::SpellAuraNULL,//SPELL_AURA_SHARE_PET_TRACKING = 119,//obsolete
		&Aura::SpellAuraUntrackable,//SPELL_AURA_UNTRACKABLE = 120,
		&Aura::SpellAuraEmphaty,//SPELL_AURA_EMPATHY = 121,
		&Aura::SpellAuraModOffhandDamagePCT,//SPELL_AURA_MOD_OFFHAND_DAMAGE_PCT = 122,
		&Aura::SpellAuraModPenetration,//SPELL_AURA_MOD_POWER_COST_PCT = 123, --> armor penetration & spell penetration, NOT POWER COST!
		&Aura::SpellAuraModRangedAttackPower,//SPELL_AURA_MOD_RANGED_ATTACK_POWER = 124,
		&Aura::SpellAuraModMeleeDamageTaken,//SPELL_AURA_MOD_MELEE_DAMAGE_TAKEN = 125,
		&Aura::SpellAuraModMeleeDamageTakenPct,//SPELL_AURA_MOD_MELEE_DAMAGE_TAKEN_PCT = 126,
		&Aura::SpellAuraRAPAttackerBonus,//SPELL_AURA_RANGED_ATTACK_POWER_ATTACKER_BONUS = 127,
		&Aura::SpellAuraModPossessPet,//SPELL_AURA_MOD_POSSESS_PET = 128,
		&Aura::SpellAuraModIncreaseSpeedAlways,//SPELL_AURA_MOD_INCREASE_SPEED_ALWAYS = 129,
		&Aura::SpellAuraModIncreaseMountedSpeed,//SPELL_AURA_MOD_MOUNTED_SPEED_ALWAYS = 130,
		&Aura::SpellAuraModCreatureRangedAttackPower,//SPELL_AURA_MOD_CREATURE_RANGED_ATTACK_POWER = 131,
		&Aura::SpellAuraModIncreaseEnergyPerc,//SPELL_AURA_MOD_INCREASE_ENERGY_PERCENT = 132,
		&Aura::SpellAuraModIncreaseHealthPerc,//SPELL_AURA_MOD_INCREASE_HEALTH_PERCENT = 133,
		&Aura::SpellAuraModManaRegInterrupt,//SPELL_AURA_MOD_MANA_REGEN_INTERRUPT = 134,
		&Aura::SpellAuraModHealingDone,//SPELL_AURA_MOD_HEALING_DONE = 135,
		&Aura::SpellAuraModHealingDonePct,//SPELL_AURA_MOD_HEALING_DONE_PERCENT = 136,
		&Aura::SpellAuraModTotalStatPerc,//SPELL_AURA_MOD_TOTAL_STAT_PERCENTAGE = 137,
		&Aura::SpellAuraModHaste,//SPELL_AURA_MOD_HASTE = 138,
		&Aura::SpellAuraForceReaction,//SPELL_AURA_FORCE_REACTION = 139,
		&Aura::SpellAuraModRangedHaste,//SPELL_AURA_MOD_RANGED_HASTE = 140,
		&Aura::SpellAuraModRangedAmmoHaste,//SPELL_AURA_MOD_RANGED_AMMO_HASTE = 141,
		&Aura::SpellAuraModBaseResistancePerc,//SPELL_AURA_MOD_BASE_RESISTANCE_PCT = 142,
		&Aura::SpellAuraModResistanceExclusive,//SPELL_AURA_MOD_RESISTANCE_EXCLUSIVE = 143,
		&Aura::SpellAuraSafeFall,//SPELL_AURA_SAFE_FALL = 144,
		&Aura::SpellAuraNULL,//SPELL_AURA_CHARISMA = 145,//obsolete?
		&Aura::SpellAuraNULL,//SPELL_AURA_PERSUADED = 146,//obsolete
		&Aura::SpellAuraAddCreatureImmunity,//SPELL_AURA_ADD_CREATURE_IMMUNITY = 147,//http://wow.allakhazam.com/db/spell.html?wspell=36798
		&Aura::SpellAuraRetainComboPoints,//SPELL_AURA_RETAIN_COMBO_POINTS = 148,
		&Aura::SpellAuraResistPushback,//SPELL_AURA_RESIST_PUSHBACK = 149,//	Resist Pushback //Simply resist spell casting delay
		&Aura::SpellAuraModShieldBlockPCT,//SPELL_AURA_MOD_SHIELD_BLOCK_PCT = 150,//	Mod Shield Absorbed dmg %
		&Aura::SpellAuraTrackStealthed,//SPELL_AURA_TRACK_STEALTHED = 151,//	Track Stealthed
		&Aura::SpellAuraModDetectedRange,//SPELL_AURA_MOD_DETECTED_RANGE = 152,//	Mod Detected Range
		&Aura::SpellAuraSplitDamageFlat,//SPELL_AURA_SPLIT_DAMAGE_FLAT= 153,//	Split Damage Flat
		&Aura::SpellAuraModStealthLevel,//SPELL_AURA_MOD_STEALTH_LEVEL = 154,//	Stealth Level Modifier
		&Aura::SpellAuraModUnderwaterBreathing,//SPELL_AURA_MOD_WATER_BREATHING = 155,//	Mod Water Breathing
		&Aura::SpellAuraModReputationAdjust,//SPELL_AURA_MOD_REPUTATION_ADJUST = 156,//	Mod Reputation Gain
		&Aura::SpellAuraNULL,//SPELL_AURA_PET_DAMAGE_MULTI = 157,//	Mod Pet Damage
		&Aura::SpellAuraModBlockValue,//SPELL_AURA_MOD_SHIELD_BLOCKVALUE = 158//used Apply Aura: Mod Shield Block //http://www.thottbot.com/?sp=25036
		&Aura::SpellAuraNoPVPCredit,//SPELL_AURA_NO_PVP_CREDIT = 159 //used Apply Aura: No PVP Credit http://www.thottbot.com/?sp=2479
		&Aura::SpellAuraNULL,//SPELL_AURA_MOD_AOE_AVOIDANCE = 160 //Apply Aura: Mod Side/Rear PBAE Damage Taken %//used http://www.thottbot.com/?sp=23198
		&Aura::SpellAuraModHealthRegInCombat,//SPELL_AURA_MOD_HEALTH_REGEN_IN_COMBAT = 161,
		&Aura::SpellAuraPowerBurn,//missing = 162 //used //Apply Aura: Power Burn (Mana) //http://www.thottbot.com/?sp=19659
		&Aura::SpellAuraModCritDmgPhysical,//missing = 163 //Apply Aura: Mod Crit Damage Bonus (Physical)
		&Aura::SpellAuraNULL,//missing = 164 //used //test spell
		&Aura::SpellAuraAPAttackerBonus,//SPELL_AURA_MELEE_ATTACK_POWER_ATTACKER_BONUS = 165,	// Melee AP Attacker Bonus
		&Aura::SpellAuraModPAttackPower,//missing = 166 //used //Apply Aura: Mod Attack Power % // http://www.thottbot.com/?sp=30803
		&Aura::SpellAuraModRangedAttackPowerPct,//missing = 167 //http://www.thottbot.com/s34485
		&Aura::SpellAuraIncreaseDamageTypePCT,//missing = 168 //used //Apply Aura: Increase Damage % *type* //http://www.thottbot.com/?sp=24991
		&Aura::SpellAuraIncreaseCricticalTypePCT,//missing = 169 //used //Apply Aura: Increase Critical % *type* //http://www.thottbot.com/?sp=24293
		&Aura::SpellAuraNULL,//SPELL_AURA_DETECT_AMORE = 170 //used //Apply Aura: Detect Amore //http://www.thottbot.com/?sp=26802
		&Aura::SpellAuraIncreasePartySpeed,//SPELL_AURA_MOD_SPEED_NOT_STACK = 171
		&Aura::SpellAuraIncreaseMovementAndMountedSpeed,//SPELL_AURA_MOD_MOUNTED_SPEED_NOT_STACK = 172 //used //Apply Aura: Increase Movement and Mounted Speed (Non-Stacking) //http://www.thottbot.com/?sp=26022 2e effect
		&Aura::SpellAuraNULL,//SPELL_AURA_ALLOW_CHAMPION_SPELLS = 173 // Apply Aura: Allow Champion Spells
		&Aura::SpellAuraIncreaseSpellDamageByAttribute,//SPELL_AURA_MOD_SPELL_DAMAGE_OF_STAT_PERCENT = 174 //used //Apply Aura: Increase Spell Damage by % Spirit (Spells) //http://www.thottbot.com/?sp=15031
		&Aura::SpellAuraIncreaseHealingByAttribute,//SPELL_AURA_MOD_SPELL_HEALING_OF_STAT_PERCENT = 175 //used //Apply Aura: Increase Spell Healing by % Spirit //http://www.thottbot.com/?sp=15031
		&Aura::SpellAuraSpiritOfRedemption,//SPELL_AURA_SPIRIT_OF_REDEMPTION = 176 //used // Apply Aura: Spirit of Redemption
		&Aura::SpellAuraNULL,//SPELL_AURA_AOE_CHARM = 177 //used //Apply Aura: Area Charm // http://www.thottbot.com/?sp=26740
		&Aura::SpellAuraNULL,//missing = 178 //Apply Aura: Increase Debuff Resistance mangos
		&Aura::SpellAuraIncreaseAttackerSpellCrit,//SPELL_AURA_INCREASE_ATTACKER_SPELL_CRIT//Apply Aura: Increase Attacker Spell Crit % *type* //http://www.thottbot.com/?sp=12579
		&Aura::SpellAuraNULL,//missing = 180 //used //Apply Aura: Increase Spell Damage *type* //http://www.thottbot.com/?sp=29113 mangos
		&Aura::SpellAuraNULL,//missing = 181
		&Aura::SpellAuraIncreaseArmorByPctInt,//missing = 182 //used //Apply Aura: Increase Armor by % of Intellect //http://www.thottbot.com/?sp=28574  SPELL_AURA_INC_ARMOR_BY_PCT_INT
		&Aura::SpellAuraNULL,//SPELL_AURA_MOD_CRITICAL_THREAT = 183 //used //Apply Aura: Decrease Critical Threat by % (Spells) //http://www.thottbot.com/?sp=28746
		&Aura::SpellAuraReduceAttackerMHitChance,//184//Apply Aura: Reduces Attacker Chance to Hit with Melee //http://www.thottbot.com/s31678
		&Aura::SpellAuraReduceAttackerRHitChance,//185//Apply Aura: Reduces Attacker Chance to Hit with Ranged //http://www.thottbot.com/?sp=30895
		&Aura::SpellAuraReduceAttackerSHitChance,//186//Apply Aura: Reduces Attacker Chance to Hit with Spells (Spells) //http://www.thottbot.com/?sp=30895
		&Aura::SpellAuraReduceEnemyMCritChance,//missing = 187 //used //Apply Aura: Reduces Attacker Chance to Crit with Melee (Ranged?) //http://www.thottbot.com/?sp=30893
		&Aura::SpellAuraReduceEnemyRCritChance,//missing = 188 //used //Apply Aura: Reduces Attacker Chance to Crit with Ranged (Melee?) //http://www.thottbot.com/?sp=30893
		&Aura::SpellAuraIncreaseRating,//missing = 189 //Apply Aura: Increases Rating
		&Aura::SpellAuraIncreaseRepGainPct,//SPELL_AURA_MOD_FACTION_REPUTATION_GAIN //used // Apply Aura: Increases Reputation Gained by % //http://www.thottbot.com/?sp=30754
		&Aura::SpellAuraLimitSpeed,//missing = 191 //used // noname //http://www.thottbot.com/?sp=29894
		&Aura::SpellAuraMeleeHaste,//192 Apply Aura: Melee Slow %
		&Aura::SpellAuraIncreaseTimeBetweenAttacksPCT,//193 Apply Aura: Increase Time Between Attacks (Melee, Ranged and Spell) by %
		&Aura::SpellAuraNULL,//194 //&Aura::SpellAuraIncreaseSpellDamageByInt,//194 Apply Aura: Increase Spell Damage by % of Intellect (All)
		&Aura::SpellAuraNULL,//195 //&Aura::SpellAuraIncreaseHealingByInt,//195 Apply Aura: Increase Healing by % of Intellect
		&Aura::SpellAuraNULL,//196 Apply Aura: Mod All Weapon Skills (6)
		&Aura::SpellAuraModAttackerCritChance,//197 Apply Aura: Reduce Attacker Critical Hit Chance by %
		&Aura::SpellAuraIncreaseAllWeaponSkill,//198
		&Aura::SpellAuraIncreaseHitRate,//199 Apply Aura: Increases Spell % To Hit (Fire, Nature, Frost)
		&Aura::SpellAuraNULL,//200 // Increases experience earned by $s1%.  Lasts $d.
		&Aura::SpellAuraAllowFlight,//SPELL_AURA_FLY 201 isn't it same like 206 and 207?
		&Aura::SpellAuraFinishingMovesCannotBeDodged,//202 // Finishing moves cannot be dodged - 32601, 44452
		&Aura::SpellAuraReduceCritMeleeAttackDmg,//203 Apply Aura: Reduces Attacker Critical Hit Damage with Melee by %
		&Aura::SpellAuraReduceCritRangedAttackDmg,//204 Apply Aura: Reduces Attacker Critical Hit Damage with Ranged by %
		&Aura::SpellAuraNULL,//205 // "School" Vulnerability
		&Aura::SpellAuraEnableFlight,//206 // Take flight on a worn old carpet. - Spell 43343
		&Aura::SpellAuraEnableFlight,//207 set fly mod flight speed?
		&Aura::SpellAuraEnableFlightWithUnmountedSpeed,//208 mod flight speed?
		&Aura::SpellAuraNULL,//209  // mod flight speed?
		&Aura::SpellAuraNULL,//210	// commentator's command - spell 42009
		&Aura::SpellAuraIncreaseFlightSpeed,//211
		&Aura::SpellAuraIncreaseRAPbyStatPct,//SPELL_AURA_MOD_RANGED_ATTACK_POWER_BY_STAT_PCT //212 Apply Aura: Increase Ranged Atk Power by % of stat
		&Aura::SpellAuraIncreaseRageFromDamageDealtPCT, //213 Apply Aura: Increase Rage from Damage Dealt by %
		&Aura::SpellAuraNULL,//214 // Tamed Pet Passive (DND)
		&Aura::SpellAuraRemoveReagentCost,//215 // arena preparation buff - cancel soul shard requirement?
		&Aura::SpellAuraModCastingSpeed,//216 Increases casting time %, reuse existing handler...
		&Aura::SpellAuraNULL,//217 // not used
		&Aura::SpellAuraNULL,//218 // increases time between ranged attacks
		&Aura::SpellAuraRegenManaStatPCT,//219 Regenerate mana equal to $s1% of your Intellect every 5 sec, even while casting
		&Aura::SpellAuraSpellHealingStatPCT,//220 Increases your healing spells  by up to $s1% of your Strength // increases your critical strike rating by 35% of your spirit // Molten Armor only?
		&Aura::SpellAuraNULL,//221 Detaunt "Ignores an enemy, forcing the caster to not attack it unless there is no other target nearby. When the effect wears off, the creature will attack the most threatening target."
		&Aura::SpellAuraNULL,//222 // SpellAuraJump http://www.wowhead.com/?spell=44586
		&Aura::SpellAuraNULL,//223 // used in one spell, cold stare 43593
		&Aura::SpellAuraNULL,//224 // not used
		&Aura::SpellAuraHealAndJump,//225 // Prayer of Mending "Places a spell on the target that heals them for $s1 the next time they take damage.  When the heal occurs, Prayer of Mending jumps to a raid member within $a1 yards.  Jumps up to $n times and lasts $d after each jump.  This spell can only be placed on one target at a time."
		&Aura::SpellAuraPeriodicDummy,//226 // SPELL_AURA_PERIODIC_DUMMY used in brewfest spells, headless horseman, Aspect of the Viper
		&Aura::SpellAuraPeriodicTriggerSpellWithValue,//227 // Used by Mind Flay, Siege Turrets 'Machine gun' and a few other spells.
		&Aura::SpellAuraModStealthDetection,//228 Stealth Detection. http://www.thottbot.com/s34709
		&Aura::SpellAuraReduceAOEDamageTaken,//229 Apply Aura:Reduces the damage your pet takes from area of effect attacks http://www.thottbot.com/s35694
		&Aura::SpellAuraIncreaseMaxHealth,//230 Increase Max Health (commanding shout);
        &Aura::SpellAuraProcTriggerSpellWithValue,//231 SPELL_AURA_PROC_TRIGGER_SPELL_WITH_VALUE (name from mangos) curse a target http://www.thottbot.com/s40303 or increase dmg done while target is poisoned http://www.wowhead.com/?spell=58410
        &Aura::SpellAuraReduceEffectDuration,//232 // Reduces duration of Magic effects by $s2%. SPELL_AURA_MECHANIC_DURATION_MOD
        &Aura::SpellAuraNULL,//233 // Beer Goggles
        &Aura::SpellAuraReduceEffectDuration,//SPELL_AURA_MECHANIC_DURATION_MOD_NOT_STACK = 234 Apply Aura: Reduces Silence or Interrupt effects, Item spell magic http://www.thottbot.com/s42184
		&Aura::SpellAuraNULL,//235 33206 Instantly reduces a friendly target's threat by $44416s1%, reduces all damage taken by $s1% and increases resistance to Dispel mechanics by $s2% for $d. SPELL_AURA_MOD_DISPEL_RESIST
		&Aura::HandleAuraControlVehicle,
		&Aura::SpellAuraModHealingByAP,//237	//increase spell healing by X pct from attack power
		&Aura::SpellAuraModSpellDamageByAP,//238	//increase spell dmg by X pct from attack power
		&Aura::SpellAuraModScale,//239
		&Aura::SpellAuraExpertise,// SPELL_AURA_EXPERTISE = 240 
		&Aura::SpellAuraForceMoveForward,//241 Forces the player to move forward
		&Aura::SpellAuraNULL,//242 SPELL_AURA_MOD_SPELL_DAMAGE_FROM_HEALING - unused
		&Aura::SpellAuraNULL,//243 faction reaction override spells
		&Aura::SpellAuraComprehendLanguage,//244 Comprehend language
		&Aura::SpellAuraNULL,//245 SPELL_AURA_MOD_DURATION_OF_MAGIC_EFFECTS
		&Aura::SpellAuraReduceEffectDurationByDispelType, //246 SPELL_AURA_MOD_DURATION_OF_EFFECTS_BY_DISPEL
		&Aura::SpellAuraNULL,//247 target to become a clone of the caster
		&Aura::SpellAuraModCombatResultChance,//248 SPELL_AURA_MOD_COMBAT_RESULT_CHANCE
		&Aura::SpellAuraConvertRune,//249 - SPELL_AURA_CONVERT_RUNE
		&Aura::SpellAuraAddHealth,//250
		&Aura::SpellAuraNULL,//251  Mod Enemy Dodge
		&Aura::SpellAuraNULL,//252 Reduces the target's ranged, melee attack, and casting speed by X pct for Y sec.
		&Aura::SpellAuraBlockMultipleDamage,//253 SPELL_AURA_BLOCK_MULTIPLE_DAMAGE
		&Aura::SpellAuraNULL,//254 SPELL_AURA_MOD_DISARM_SHIELD disarm Shield/offhand
		&Aura::SpellAuraModMechanicDmgTakenPct, //255 SPELL_AURA_MOD_MECHANIC_DAMAGE_TAKEN_PERCENT
		&Aura::SpellAuraRemoveReagentCost,//256 Remove reagent cost
		&Aura::SpellAuraNULL,//257 Mod Target Resist By Spell Class ( does damage in the form of X damage, ignoring all resistances, absorption, and immunity mechanics. - http://thottbot.com/s47271 )
		&Aura::SpellAuraNULL,//258 Mod Spell Visual
		&Aura::SpellAuraNULL,//259 Mod Periodic Healing Pct TODO
		&Aura::SpellAuraNULL,//260 Screen Effect
		&Aura::SpellAuraPhase,//261
		&Aura::SpellAuraIgnoreTargetAuraState, //262 SPELL_AURA_IGNORE_TARGET_AURA_STATE
		&Aura::SpellAuraAllowOnlyAbility,//263 SPELL_AURA_ALLOW_ONLY_ABILITY
		&Aura::SpellAuraNULL,//264
		&Aura::SpellAuraNULL,//265
		&Aura::SpellAuraNULL,//266
		&Aura::SpellAuraNULL,//267 Prevent the application of harmful magical effects
		&Aura::SpellAuraIncreaseAPbyStatPct, //268 Increase attack power by % of stat
		&Aura::SpellAuraNULL,//269 Damage reduction effects ignored. (?) - http://thottbot.com/s57318
		&Aura::SpellAuraNULL,//270 Ignore target resist
		&Aura::SpellAuraModSpellDamageFromCaster,//271
		&Aura::SpellAuraNULL,//272 Unknown
		&Aura::SpellAuraNULL,//273 Some sort of dummy aura? (http://thottbot.com/s54844 + http://thottbot.com/s26659)
		&Aura::SpellAuraNULL,//274 Consumes no ammo, used by Wild Quiver and Lock and Load
		&Aura::SpellAuraIgnoreShapeshift,//275 Ignore unit states
		&Aura::SpellAuraNULL,//276 Mod Damage % Mechanic
		&Aura::SpellAuraNULL,//277 SPELL_AURA_REDIRECT_THREAT or SPELL_AURA_MOD_MAX_AFFECTED_TARGETS ?
		&Aura::SpellAuraModDisarmRanged,//278 SPELL_AURA_MOD_DISARM_RANGED, handled by &Aura::SpellAuraModDisarm,//SPELL_AURA_MOD_DISARM = 67, it isn't ok :/
		&Aura::SpellAuraNULL,//279 Modify models(?)
		&Aura::SpellAuraModIgnoreArmorPct,//280 SPELL_AURA_IGNORE_ARMOR_PCT
		&Aura::SpellAuraNULL,//281 Mod Honor gain increased by X pct. Final Reward Honor increased by X pct for Y Rank and above. (http://thottbot.com/s58560 && http://thottbot.com/s58557)
		&Aura::SpellAuraModBaseHealth,//282 SPELL_AURA_MOD_BASE_HEALTH
		&Aura::SpellAuraModHealingPCT,//283 Increases all healing received by X pct
		&Aura::SpellAuraNULL,//284 not used by any spells (3.08a)
		&Aura::SpellAuraModAttackPowerOfArmor,//285 SPELL_AURA_MOD_ATTACK_POWER_OF_ARMOR
		&Aura::SpellAuraAllowDotHotCrit,//286 SPELL_AURA_ALLOW_CRIT_PERIODIC_DAMAGE
		&Aura::SpellAuraReflectSpellsInfront,//287 SPELL_AURA_DEFLECT_SPELLS
		&Aura::SpellAuraNULL,//288 not used by any spells (3.09) except 1 test spell.
		&Aura::SpellAuraNULL,//289 unused
		&Aura::SpellAuraModCritChanceAll,//290 SPELL_AURA_MOD_CRIT_CHANCE_ALL
		&Aura::SpellAuraNULL,//291 unused
		&Aura::SpellAuraNULL,//292 call stabled pet
		&Aura::SpellAuraNULL,//293 2 test spells
		&Aura::SpellAuraNULL,//294 2 spells, possible prevent mana regen
		&Aura::SpellAuraNULL,//295
		&Aura::SpellAuraNULL,//296
		&Aura::SpellAuraNULL,//297
		&Aura::SpellAuraNULL,//298
		&Aura::SpellAuraNULL,//299
		&Aura::SpellAuraNULL,//300
		&Aura::SpellAuraNULL,//301
		&Aura::SpellAuraNULL,//302
		&Aura::SpellAuraNULL,//303
		&Aura::SpellAuraNULL,//304
		&Aura::SpellAuraNULL,//305
		&Aura::SpellAuraNULL,//306
};

const char* SpellAuraNames[TOTAL_SPELL_AURAS] = {
    "NONE",												//   0 None
    "BIND_SIGHT",										//   1 Bind Sight
    "MOD_POSSESS",										//   2 Mod Possess
    "PERIODIC_DAMAGE",									//   3 Periodic Damage
    "DUMMY",											//   4 Script Aura
    "MOD_CONFUSE",										//   5 Mod Confuse
    "MOD_CHARM",										//   6 Mod Charm
    "MOD_FEAR",											//   7 Mod Fear
    "PERIODIC_HEAL",									//   8 Periodic Heal
    "MOD_ATTACKSPEED",									//   9 Mod Attack Speed
    "MOD_THREAT",										//  10 Mod Threat
    "MOD_TAUNT",										//  11 Taunt
    "MOD_STUN",											//  12 Stun
    "MOD_DAMAGE_DONE",									//  13 Mod Damage Done
    "MOD_DAMAGE_TAKEN",									//  14 Mod Damage Taken
    "DAMAGE_SHIELD",									//  15 Damage Shield
    "MOD_STEALTH",										//  16 Mod Stealth
    "MOD_DETECT",										//  17 Mod Detect
    "MOD_INVISIBILITY",									//  18 Mod Invisibility
    "MOD_INVISIBILITY_DETECTION",						//  19 Mod Invisibility Detection
    "MOD_TOTAL_HEALTH_REGEN_PCT",						//  20
    "MOD_TOTAL_MANA_REGEN_PCT",							//  21
    "MOD_RESISTANCE",									//  22 Mod Resistance
    "PERIODIC_TRIGGER_SPELL",							//  23 Periodic Trigger
    "PERIODIC_ENERGIZE",								//  24 Periodic Energize
    "MOD_PACIFY",										//  25 Pacify
    "MOD_ROOT",											//  26 Root
    "MOD_SILENCE",										//  27 Silence
    "REFLECT_SPELLS",									//  28 Reflect Spells %
    "MOD_STAT",											//  29 Mod Stat
    "MOD_SKILL",										//  30 Mod Skill
    "MOD_INCREASE_SPEED",								//  31 Mod Speed
    "MOD_INCREASE_MOUNTED_SPEED",						//  32 Mod Speed Mounted
    "MOD_DECREASE_SPEED",								//  33 Mod Speed Slow
    "MOD_INCREASE_HEALTH",								//  34 Mod Increase Health
    "MOD_INCREASE_ENERGY",								//  35 Mod Increase Energy
    "MOD_SHAPESHIFT",									//  36 Shapeshift
    "EFFECT_IMMUNITY",									//  37 Immune Effect
    "STATE_IMMUNITY",									//  38 Immune State
    "SCHOOL_IMMUNITY",									//  39 Immune School
    "DAMAGE_IMMUNITY",									//  40 Immune Damage
    "DISPEL_IMMUNITY",									//  41 Immune Dispel Type
    "PROC_TRIGGER_SPELL",								//  42 Proc Trigger Spell
    "PROC_TRIGGER_DAMAGE",								//  43 Proc Trigger Damage
    "TRACK_CREATURES",									//  44 Track Creatures
    "TRACK_RESOURCES",									//  45 Track Resources
    "MOD_PARRY_SKILL",									//  46 Mod Parry Skill
    "MOD_PARRY_PERCENT",								//  47 Mod Parry Percent
    "MOD_DODGE_SKILL",									//  48 Mod Dodge Skill
    "MOD_DODGE_PERCENT",								//  49 Mod Dodge Percent
    "MOD_BLOCK_SKILL",									//  50 Mod Block Skill
    "MOD_BLOCK_PERCENT",								//  51 Mod Block Percent
    "MOD_CRIT_PERCENT",									//  52 Mod Crit Percent
    "PERIODIC_LEECH",									//  53 Periodic Leech
    "MOD_HIT_CHANCE",									//  54 Mod Hit Chance
    "MOD_SPELL_HIT_CHANCE",								//  55 Mod Spell Hit Chance
    "TRANSFORM",										//  56 Transform
    "MOD_SPELL_CRIT_CHANCE",							//  57 Mod Spell Crit Chance
    "MOD_INCREASE_SWIM_SPEED",							//  58 Mod Speed Swim
    "MOD_DAMAGE_DONE_CREATURE",							//  59 Mod Creature Dmg Done
    "MOD_PACIFY_SILENCE",								//  60 Pacify & Silence
    "MOD_SCALE",										//  61 Mod Scale
    "PERIODIC_HEALTH_FUNNEL",							//  62 Periodic Health Funnel
    "PERIODIC_MANA_FUNNEL",								//  63 Periodic Mana Funnel
    "PERIODIC_MANA_LEECH",								//  64 Periodic Mana Leech
    "MOD_CASTING_SPEED",								//  65 Haste - Spells
    "FEIGN_DEATH",										//  66 Feign Death
    "MOD_DISARM",										//  67 Disarm
    "MOD_STALKED",										//  68 Mod Stalked
    "SCHOOL_ABSORB",									//  69 School Absorb
    "EXTRA_ATTACKS",									//  70 Extra Attacks
    "MOD_SPELL_CRIT_CHANCE_SCHOOL",						//  71 Mod School Spell Crit Chance
    "MOD_POWER_COST",									//  72 Mod Power Cost
    "MOD_POWER_COST_SCHOOL",							//  73 Mod School Power Cost
    "REFLECT_SPELLS_SCHOOL",							//  74 Reflect School Spells %
    "MOD_LANGUAGE",										//  75 Mod Language
    "FAR_SIGHT",										//  76 Far Sight
    "MECHANIC_IMMUNITY",								//  77 Immune Mechanic
    "MOUNTED",											//  78 Mounted
    "MOD_DAMAGE_PERCENT_DONE",							//  79 Mod Dmg %
    "MOD_PERCENT_STAT",									//  80 Mod Stat %
    "SPLIT_DAMAGE",										//  81 Split Damage
    "WATER_BREATHING",									//  82 Water Breathing
    "MOD_BASE_RESISTANCE",								//  83 Mod Base Resistance
    "MOD_REGEN",										//  84 Mod Health Regen
    "MOD_POWER_REGEN",									//  85 Mod Power Regen
    "CHANNEL_DEATH_ITEM",								//  86 Create Death Item
    "MOD_DAMAGE_PERCENT_TAKEN",							//  87 Mod Dmg % Taken
    "MOD_PERCENT_REGEN",								//  88 Mod Health Regen Percent
    "PERIODIC_DAMAGE_PERCENT",							//  89 Periodic Damage Percent
    "MOD_RESIST_CHANCE",								//  90 Mod Resist Chance
    "MOD_DETECT_RANGE",									//  91 Mod Detect Range
    "PREVENTS_FLEEING",									//  92 Prevent Fleeing
    "MOD_UNATTACKABLE",									//  93 Mod Uninteractible
    "INTERRUPT_REGEN",									//  94 Interrupt Regen
    "GHOST",											//  95 Ghost
    "SPELL_MAGNET",										//  96 Spell Magnet
    "MANA_SHIELD",										//  97 Mana Shield
    "MOD_SKILL_TALENT",									//  98 Mod Skill Talent
    "MOD_ATTACK_POWER",									//  99 Mod Attack Power
    "AURAS_VISIBLE",									// 100 Auras Visible
    "MOD_RESISTANCE_PCT",								// 101 Mod Resistance %
    "MOD_CREATURE_ATTACK_POWER",						// 102 Mod Creature Attack Power
    "MOD_TOTAL_THREAT",									// 103 Mod Total Threat (Fade)
    "WATER_WALK",										// 104 Water Walk
    "FEATHER_FALL",										// 105 Feather Fall
    "HOVER",											// 106 Hover
    "ADD_FLAT_MODIFIER",								// 107 Add Flat Modifier
    "ADD_PCT_MODIFIER",									// 108 Add % Modifier
    "ADD_TARGET_TRIGGER",								// 109 Add Class Target Trigger
    "MOD_POWER_REGEN_PERCENT",							// 110 Mod Power Regen %
    "ADD_CASTER_HIT_TRIGGER",							// 111 Add Class Caster Hit Trigger
    "OVERRIDE_CLASS_SCRIPTS",							// 112 Override Class Scripts
    "MOD_RANGED_DAMAGE_TAKEN",							// 113 Mod Ranged Dmg Taken
    "MOD_RANGED_DAMAGE_TAKEN_PCT",						// 114 Mod Ranged % Dmg Taken
    "MOD_HEALING",										// 115 Mod Healing
    "IGNORE_REGEN_INTERRUPT",							// 116 Regen During Combat
    "MOD_MECHANIC_RESISTANCE",							// 117 Mod Mechanic Resistance
    "MOD_HEALING_PCT",									// 118 Mod Healing %
    "SHARE_PET_TRACKING",								// 119 Share Pet Tracking
    "UNTRACKABLE",										// 120 Untrackable
    "EMPATHY",											// 121 Empathy (Lore, whatever)
    "MOD_OFFHAND_DAMAGE_PCT",							// 122 Mod Offhand Dmg %
    "MOD_POWER_COST_PCT",								// 123 Mod Power Cost % --> armor penetration & spell penetration
    "MOD_RANGED_ATTACK_POWER",							// 124 Mod Ranged Attack Power
    "MOD_MELEE_DAMAGE_TAKEN",							// 125 Mod Melee Dmg Taken
    "MOD_MELEE_DAMAGE_TAKEN_PCT",						// 126 Mod Melee % Dmg Taken
    "RANGED_ATTACK_POWER_ATTACKER_BONUS",				// 127 Rngd Atk Pwr Attckr Bonus
    "MOD_POSSESS_PET",									// 128 Mod Possess Pet
    "MOD_INCREASE_SPEED_ALWAYS",						// 129 Mod Speed Always
    "MOD_MOUNTED_SPEED_ALWAYS",							// 130 Mod Mounted Speed Always
    "MOD_CREATURE_RANGED_ATTACK_POWER",					// 131 Mod Creature Ranged Attack Power
    "MOD_INCREASE_ENERGY_PERCENT",						// 132 Mod Increase Energy %
    "MOD_INCREASE_HEALTH_PERCENT",						// 133 Mod Max Health %
    "MOD_MANA_REGEN_INTERRUPT",							// 134 Mod Interrupted Mana Regen
    "MOD_HEALING_DONE",									// 135 Mod Healing Done
    "MOD_HEALING_DONE_PERCENT",							// 136 Mod Healing Done %
    "MOD_TOTAL_STAT_PERCENTAGE",						// 137 Mod Total Stat %
    "MOD_HASTE",										// 138 Haste - Melee
    "FORCE_REACTION",									// 139 Force Reaction
    "MOD_RANGED_HASTE",									// 140 Haste - Ranged
    "MOD_RANGED_AMMO_HASTE",							// 141 Haste - Ranged (Ammo Only)
    "MOD_BASE_RESISTANCE_PCT",							// 142 Mod Base Resistance %
    "MOD_RESISTANCE_EXCLUSIVE",							// 143 Mod Resistance Exclusive
    "SAFE_FALL",										// 144 Safe Fall
    "CHARISMA",											// 145 Charisma
    "PERSUADED",										// 146 Persuaded
    "ADD_CREATURE_IMMUNITY",							// 147 Add Creature Immunity
    "RETAIN_COMBO_POINTS",								// 148 Retain Combo Points
    "RESIST_PUSHBACK",									// 149 Resist Pushback
    "MOD_SHIELD_BLOCK_PCT",								// 150 Mod Shield Block %
    "TRACK_STEALTHED",									// 151 Track Stealthed
    "MOD_DETECTED_RANGE",								// 152 Mod Detected Range
    "SPLIT_DAMAGE_FLAT",								// 153 Split Damage Flat
    "MOD_STEALTH_LEVEL",								// 154 Stealth Level Modifier
    "MOD_WATER_BREATHING",								// 155 Mod Water Breathing
    "MOD_REPUTATION_ADJUST",							// 156 Mod Reputation Gain
    "PET_DAMAGE_MULTI",									// 157 Mod Pet Damage
    "MOD_SHIELD_BLOCK",									// 158 Mod Shield Block
    "NO_PVP_CREDIT",									// 159 No PVP Credit
    "MOD_SIDE_REAR_PDAE_DAMAGE_TAKEN",					// 160 Mod Side/Rear PBAE Damage Taken
    "MOD_HEALTH_REGEN_IN_COMBAT",						// 161 Mod Health Regen In Combat
    "POWER_BURN",										// 162 Power Burn
    "MOD_CRIT_DAMAGE_BONUS_MELEE",						// 163 Mod Critical Damage Bonus (Physical)
	"",													// 164
    "MELEE_ATTACK_POWER_ATTACKER_BONUS",				// 165 Melee AP Attacker Bonus
    "MOD_ATTACK_POWER_PCT",								// 166 Mod Attack Power
    "MOD_RANGED_ATTACK_POWER_PCT",						// 167 Mod Ranged Attack Power %
    "INCREASE_DAMAGE",									// 168 Increase Damage Type
    "INCREASE_CRITICAL",								// 169 Increase Critical Type
    "DETECT_AMORE",										// 170 Detect Amore
	"",													// 171
    "INCREASE_MOVEMENT_AND_MOUNTED_SPEED",				// 172 Increase Movement and Mounted Speed (Non-Stacking)
	"",													// 173
    "INCREASE_SPELL_DAMAGE_PCT",						// 174 Increase Spell Damage by % status
    "INCREASE_SPELL_HEALING_PCT",						// 175 Increase Spell Healing by % status
    "SPIRIT_OF_REDEMPTION",								// 176 Spirit of Redemption Auras
    "AREA_CHARM",										// 177 Area Charm
	"",													// 178
    "INCREASE_ATTACKER_SPELL_CRIT",						// 179 Increase Attacker Spell Crit Type
    "INCREASE_SPELL_DAMAGE_VS_TYPE",					// 180 Increase Spell Damage Type
	"",													// 181
    "INCREASE_ARMOR_BASED_ON_INTELLECT_PCT",			// 182 Increase Armor based on Intellect
    "DECREASE_CRIT_THREAT",								// 183 Decrease Critical Threat by
    "DECREASE_ATTACKER_CHANCE_TO_HIT_MELEE",			// 184 Reduces Attacker Chance to Hit with Melee
    "DECREASE_ATTACKER_CHANGE_TO_HIT_RANGED",			// 185 Reduces Attacker Chance to Hit with Ranged
    "DECREASE_ATTACKER_CHANGE_TO_HIT_SPELLS",			// 186 Reduces Attacker Chance to Hit with Spells
    "DECREASE_ATTACKER_CHANGE_TO_CRIT_MELEE",			// 187 Reduces Attacker Chance to Crit with Melee (Ranged?)
    "DECREASE_ATTACKER_CHANGE_TO_CRIT_RANGED",			// 188 Reduces Attacker Chance to Crit with Ranged (Melee?)
	"",													// 189
    "INCREASE_REPUTATION",								// 190 Increases reputation from killed creatures
    "SPEED_LIMIT",										// 191 speed limit
    "MELEE_SLOW_PCT",									// 192
    "INCREASE_TIME_BETWEEN_ATTACKS",					// 193
	"INCREASE_SPELL_DAMAGE_PCT_OF_INTELLECT",			// 194 NOT USED ANYMORE - 174 used instead
    "INCREASE_HEALING_PCT_OF_INTELLECT",				// 195 NOT USED ANYMORE - 175 used instead
    "MOD_ALL_WEAPON_SKILLS",							// 196
    "REDUCE_ATTACKER_CRICTICAL_HIT_CHANCE_PCT",			// 197
	"",													// 198
    "INCREASE_SPELL_HIT_PCT",							// 199
	"",													// 200
    "CANNOT_BE_DODGED",									// 201
	"FINISHING_MOVES_CANNOT_BE_DODGED",					// 202
    "REDUCE_ATTACKER_CRICTICAL_HIT_DAMAGE_MELEE_PCT",	// 203
    "REDUCE_ATTACKER_CRICTICAL_HIT_DAMAGE_RANGED_PCT",	// 204
	"",													// 205
	"",													// 206
	"",													// 207
	"",													// 208
	"",													// 209
	"",													// 210
	"",													// 211
    "INCREASE_RANGED_ATTACK_POWER_PCT_OF_INTELLECT",	// 212
    "INCREASE_RAGE_FROM_DAMAGE_DEALT_PCT",				// 213
	"",													// 214
	"",													// 215
    "INCREASE_CASTING_TIME_PCT",						// 216
	"",													// 217
	"",													// 218
    "REGEN_MANA_STAT_PCT",								// 219
    "HEALING_STAT_PCT",									// 220
	"",													// 221
	"",													// 222
	"",													// 223
	"",													// 224
	"HEAL_AND_JUMP",									// 225
	"",													// 226
	"TRIGGER_SPELL_WITH_VALUE",							// 227 Used by Mind Flay and some other spells.
	"",													// 228
	"SPELL_AURA_REDUCE_AOE_DAMAGE_TAKEN",				// 229
    "INCREASE_MAX_HEALTH",								// 230 Used by Commanding Shout
	"SPELL_AURA_PROC_TRIGGER_SPELL_WITH_VALUE",			// 231
	"SPELL_AURA_MECHANIC_DURATION_MOD",					// 232
	"",													// 233
	"",													// 234
	"",													// 235
	"CONTROL_VEHICLE",									// 236
    "SPELL_AURA_MOD_HEALING_FROM_AP",                   // 237
    "SPELL_AURA_MOD_SPELL_DAMAGE_FROM_AP",              // 238
	"",													// 239
	"EXPERTISE",										// 240
	"241",												// 241
    "MOD_SPELL_DAMAGE_FROM_HEALING",					// 242
    "SPELL_AURA_MECHANIC_DURATION_MOD_NOT_STACK",		// 243
    "244",												// 244
    "MOD_DURATION_OF_MAGIC_EFFECTS",					// 245
    "SPELL_AURA_MOD_DURATION_OF_EFFECTS_BY_DISPEL",		// 246
    "247",												// 247
    "MOD_COMBAT_RESULT_CHANCE",							// 248
    "SPELL_AURA_CONVERT_RUNE",							// 249
    "MOD_INCREASE_HEALTH_2",							// 250
    "MOD_ENEMY_DODGE",									// 251
	"",													// 252
	"SPELL_AURA_BLOCK_MULTIPLE_DAMAGE",					// 253
	"",													// 254
	"SPELL_AURA_MOD_MECHANIC_DAMAGE_TAKEN_PERCENT",		// 255
	"",													// 256
	"",													// 257
	"",													// 258
	"",													// 259
	"",													// 260
	"SPELL_AURA_SET_PHASE",								// 261
	"SPELL_AURA_IGNORE_TARGET_AURA_STATE",				// 262
	"SPELL_AURA_ALLOW_ONLY_ABILITY",					// 263
	"",													// 264
	"",													// 265
	"",													// 266
	"",													// 267
	"MOD_SHAMMY_ATTACK_POWER",                          // 268 Mental Dexterity (increases ap by x% of intellect)
	"",													// 269
	"",													// 270
	"SPELL_AURA_INCREASE_DAMAGE_FROM_CASTER",			// 271
	"",													// 272
	"",													// 273
	"",													// 274
	"",													// 275
	"",													// 276
	"",													// 277
	"SPELL_AURA_MOD_DISARM_RANGED",						// 278
	"",													// 279
	"SPELL_AURA_IGNORE_ARMOR_PCT",						// 280
	"",													// 281
	"SPELL_AURA_MOD_BASE_HEALTH",						// 282
	"",													// 283
	"",													// 284
	"SPELL_AURA_MOD_ATTACK_POWER_OF_ARMOR",				// 285
	"SPELL_AURA_ALLOW_CRIT_PERIODIC_DAMAGE",			// 286
	"SPELL_AURA_DEFLECT_SPELLS",						// 287
	"",													// 288
	"",													// 289
	"SPELL_AURA_MOD_CRIT_CHANCE_ALL",					// 290
	"",													// 291
	"",													// 292
	"",													// 293
	"",													// 294
};


/*
ARCEMU_INLINE void ApplyFloatSM(float ** m,float v,uint32 mask, float def)
{
	if(*m == 0)
	{
		*m = new float[SPELL_GROUPS];

		for(uint32 x= 0;x<SPELL_GROUPS;x++)
		{
			(*m)[x] = def;
			if((1<<x) & mask)
				(*m)[x]+=v;
		}
	}
	else
	{
		for(uint32 x= 0;x<SPELL_GROUPS;x++)
		{
			if((1<<x) & mask)
				(*m)[x]+=v;
		}
	}
}*/
/*
ARCEMU_INLINE void ApplyFloatPSM(float ** m,int32 v,uint32 mask, float def)
{
	if(*m == 0)
	{
		*m = new float[SPELL_GROUPS];

		for(uint32 x= 0;x<SPELL_GROUPS;x++)
		{
			(*m)[x] = def;
			if((1<<x) & mask)
				(*m)[x]+=((float)v)/100.0f;
		}
	}
	else
	{
		for(uint32 x= 0;x<SPELL_GROUPS;x++)
		{
			if((1<<x) & mask)
				(*m)[x]+=((float)v)/100.0f;
		}
	}
}*/

Unit * Aura::GetUnitCaster()
{
	if( GET_TYPE_FROM_GUID( m_casterGuid ) == HIGHGUID_TYPE_PLAYER )
	{
		Unit * unit = objmgr.GetPlayer( (uint32)m_casterGuid );
		if( unit )
			return unit;
	}
	
	if( !m_target )
		return NULL;

	if( GET_TYPE_FROM_GUID( m_casterGuid ) == HIGHGUID_TYPE_GAMEOBJECT && m_target->GetMapMgr() )
	{
		Object* obj = m_target->GetMapMgr()->_GetObject( m_casterGuid );
		GameObject* go = NULL;
		if( obj && obj->IsGameObject() )
		{
			go = static_cast<GameObject*>( obj );
			if( go && go->m_summoner )
			return go->m_summoner;
		}
	}

	if( m_casterGuid == m_target->GetGUID() )
		return m_target;

	if( m_target->GetMapMgr() )
		return m_target->GetMapMgr()->GetUnit( m_casterGuid );
	else
		return NULL;
}

Object* Aura::GetCaster()
{
	if( m_casterGuid == m_target->GetGUID() )
		return m_target;
	if( m_target->GetMapMgr() )
		return m_target->GetMapMgr()->_GetObject( m_casterGuid );
	else
		return NULL;
}

Aura::Aura( SpellEntry* proto, int32 duration, Object* caster, Unit* target, bool temporary, Item* i_caster)
{
	m_wasremoved = false;
	m_spellScript = NULL;
	m_castInDuel = false;
	m_spellProto = proto;
	m_duration = duration;
	m_positive = 0; //we suppose spell will have positive impact on target
	m_temporary = temporary; // Aura saving related
	m_deleted = false;
	m_ignoreunapply = false;
	m_periodicmodapply = false;
	m_casterGuid = caster->GetGUID();
	m_target = target;
	Heal_And_Jump_Next_new_target = NULL;
	Heal_And_Jump_procCharges = 0;

	if( m_target->GetTypeId() == TYPEID_PLAYER )
		p_target = static_cast< Player* >( m_target );
	else
		p_target = NULL;

	if ( i_caster != NULL && i_caster->GetProto() )
		m_castedItemId = i_caster->GetProto()->ItemId;
	else
		m_castedItemId = 0;

	// Modifies current aura duration based on its mechanic type and dispel type
	if( p_target && GetDuration() > 0 )
	{
		int32 DurationModifier = p_target->MechanicDurationPctMod[ Spell::GetMechanic(proto) ];

		if( isAttackable( ( Unit* )caster, target ) )
			DurationModifier += p_target->DispelDurationPctMod[ proto->DispelType ];
		
		if( DurationModifier < - 100 )
			DurationModifier = -100; // Can't reduce by more than 100%
		SetDuration( ( GetDuration() * ( 100 + DurationModifier ) ) / 100 );
	}

	//SetCasterFaction(caster->_getFaction());

	//m_auraSlot = 0;
	m_modcount = 0;
	m_dynamicValue = 0;
	m_areaAura = false;

	if( m_spellProto->c_is_flags & SPELL_FLAG_IS_FORCEDDEBUFF )
		SetNegative( 100 );
	else if( m_spellProto->c_is_flags & SPELL_FLAG_IS_FORCEDBUFF )
		SetPositive( 100 );

	if( caster->IsUnit() )
	{
		if( m_spellProto->BGR_one_buff_from_caster_on_1target > 0 && caster->IsPlayer() )
		{
			( ( Player* )caster )->RemoveSpellTargets( m_spellProto->BGR_one_buff_from_caster_on_1target, target);
			( ( Player* )caster )->SetSpellTargetType( m_spellProto->BGR_one_buff_from_caster_on_1target, target);
		}
		if( m_spellProto->BGR_one_buff_from_caster_on_self != 0 )
			static_cast<Unit*>(caster)->RemoveAllAuraFromSelfType2( m_spellProto->BGR_one_buff_from_caster_on_self, m_spellProto->NameHash );

		if( isAttackable( ( Unit* )caster, target ) )
		{
			SetNegative();
		}
		else
			SetPositive();

		if( p_target && caster->IsPlayer() )
		{
			if( p_target->DuelingWith == ((Player*)caster) )
			{
				m_castInDuel = true;
			}
		}

		// Removing - Aura Mastery, Swift Retribution, Sanctified Retribution, Improved Concentration and Devotion Auras
		if( GetUnitCaster() && m_target && GetSpellProto()->BGR_one_buff_from_caster_on_self == SPELL_TYPE2_PALADIN_AURA && GetUnitCaster()->getClass() == PALADIN && m_target->GetGUID() == GetUnitCaster()->GetGUID() )
		{
			if( m_target->HasAurasWithNameHash(SPELL_HASH_IMPROVED_CONCENTRATION_AURA) && !m_target->HasAura(63510) )
				m_target->CastSpell( m_target, 63510, true ); // Improved Concentration Aura

			if( m_target->HasAurasWithNameHash(SPELL_HASH_IMPROVED_DEVOTION_AURA) && !m_target->HasAura(63514) )
				m_target->CastSpell( m_target, 63514, true ); // Improved Devotion Aura 

			if( GetSpellProto()->NameHash != SPELL_HASH_RETRIBUTION_AURA && !m_target->HasAura(63531) && ( m_target->HasAura(31869) || m_target->HasAurasWithNameHash(SPELL_HASH_SWIFT_RETRIBUTION) ) )
				m_target->CastSpell( m_target, 63531, true ); // Sanctified Retribution
		}
	}

	if( !IsPassive() )
	{
		timeleft = ( uint32 )UNIXTIME;
	}

	m_visualSlot = 0xFF;
	pSpellId = 0;
	periodic_target = 0;
	//sLog.outDetail("Aura::Constructor %u (%s) from %u.", m_spellProto->Id, m_spellProto->Name, m_target->GetLowGUID());
	m_auraSlot = 0xffff;
	m_interrupted = -1;
	m_flags = 0;
	//fixed_amount = 0;//used only por percent values to be able to recover value correctly.No need to init this if we are not using it
}


Aura::~Aura()
{
	if(m_spellScript != NULL)
		m_spellScript->RemoveRef(this);

	// Call EventableObject virtual destructor
	EventableObject::Virtual_Destructor();

    // from virtual destructor
    sEventMgr.RemoveEvents( this );
}

void Aura::Remove()
{
	sEventMgr.RemoveEvents( this );

	//TODO: Check this condition - consider there are 3 aura modifiers and m_deleted can be set to true by first one,
	// other two mods are normally applied, but cant un-apply (?)
	if( m_deleted )
		return;

	sLog.outDebug("Removing aura %u from unit %u", m_spellProto->Id, m_target->GetGUID());

	m_deleted = true;

	if(m_spellScript != NULL)
	{
		if(GetTimeLeft() == 0 && !m_ignoreunapply && !m_wasremoved)
			m_spellScript->OnExpire(this);

		m_spellScript->OnRemove(this);
	}

	// Removing - Aura Mastery, Swift Retribution, Sanctified Retribution, Improved Concentration and Devotion Auras
	if( GetUnitCaster() && m_target && GetSpellProto()->BGR_one_buff_from_caster_on_self == SPELL_TYPE2_PALADIN_AURA && GetUnitCaster()->getClass() == PALADIN && m_target->GetGUID() == GetUnitCaster()->GetGUID() )
	{
		m_target->RemoveAura(63510);
		m_target->RemoveAura(63514);
		m_target->RemoveAura(63531);
	}

	if( !IsPassive() || m_spellProto->AttributesEx & ATTRIBUTES_ON_NEXT_SWING_2 )
		m_target->ModVisualAuraStackCount( this, -1 ); 

	ApplyModifiers( false );

	Unit * m_caster = GetUnitCaster();
	if (m_caster != NULL)
		m_caster->OnAuraRemove(GetSpellProto()->NameHash, m_target);

	for( uint32 x = 0; x < 3; x++ )
	{
		if( !m_spellProto->Effect[x] )
			continue;

		if( m_spellProto->Effect[x] == SPELL_EFFECT_TRIGGER_SPELL && !m_spellProto->always_apply )
		{
			// I'm not sure about this! FIX ME!!
			if ( dbcSpell.LookupEntryForced( GetSpellProto()->EffectTriggerSpell[x] )->DurationIndex < m_spellProto->DurationIndex )
				m_target->RemoveAura(GetSpellProto()->EffectTriggerSpell[x]);
		}
		else if( ( m_spellProto->Effect[x] == SPELL_EFFECT_APPLY_AREA_AURA || m_spellProto->Effect[x] == SPELL_EFFECT_APPLY_AREA_AURA2 )
			&& m_casterGuid == m_target->GetGUID() )
		{
			RemoveAA();
		}
	}

	int32 procCharges = m_spellProto->procCharges;
	if( m_caster != NULL && m_spellProto->SpellGroupType )
	{
		SM_FIValue( m_caster->SM_FCharges, &procCharges, m_spellProto->SpellGroupType );
		SM_PIValue( m_caster->SM_PCharges, &procCharges, m_spellProto->SpellGroupType );
	}

	if( procCharges > 0 && m_spellProto->proc_interval == 0 )
	{
		if( m_target->m_chargeSpellsInUse )
		{
			m_target->m_chargeSpellRemoveQueue.push_back( GetSpellId() );
		}
		else
		{
			std::map< uint32, struct SpellCharge >::iterator iter;
			iter = m_target->m_chargeSpells.find( GetSpellId() );
			if( iter != m_target->m_chargeSpells.end() )
			{
				if( iter->second.count > 1 )
					--iter->second.count;
				else
					m_target->m_chargeSpells.erase(iter);
			}
		}
	}

	//maybe we are removing it without even assigning it. Example when we are refreshing an aura
	if( m_auraSlot != 0xFFFF )
		m_target->m_auras[ m_auraSlot ] = NULL;

	// reset diminishing return timer if needed
	::UnapplyDiminishingReturnTimer( m_target, m_spellProto );

	// remove attacker
	Unit* caster = GetUnitCaster();
	if( caster != NULL)
	{
		if( caster != m_target )
		{
			caster->CombatStatus.RemoveAttackTarget( m_target );
			m_target->CombatStatus.RemoveAttacker( caster, caster->GetGUID() );
		}

		if( m_spellProto->BGR_one_buff_from_caster_on_1target != 0 && m_target->IsPlayer() )
			( ( Player* )m_target )->RemoveSpellIndexReferences( m_spellProto->BGR_one_buff_from_caster_on_1target );
	}
	else
		m_target->CombatStatus.RemoveAttacker( NULL, m_casterGuid );

	/**********************Cooldown**************************
	* this is only needed for some spells
	* for now only spells that have:
	* (m_spellInfo->Attributes == 0x2050000) && !(m_spellInfo->AttributesEx) ||
	* m_spellProto->Attributes == 0x2040100
	* are handled. Its possible there are more spells like this
	*************************************************************/
	if( caster != NULL && caster->IsPlayer() && caster->IsInWorld() && m_spellProto->c_is_flags & SPELL_FLAG_IS_REQUIRECOOLDOWNUPDATE )
	{
		sHookInterface.OnAuraRemove(TO_PLAYER(m_caster), m_spellProto->Id);

		/*WorldPacket data( 12 );
		data.SetOpcode( SMSG_COOLDOWN_EVENT );
		data << m_spellProto->Id << caster->GetGUID();
		caster->SendMessageToSet( &data, true );*/

		packetSMSG_COOLDOWN_EVENT data;
		data.spellid = m_spellProto->Id;
		data.guid = caster->GetGUID();
		caster->OutPacketToSet( SMSG_COOLDOWN_EVENT, sizeof( packetSMSG_COOLDOWN_EVENT ), &data, true );
	}

	if( caster != NULL && caster->IsPlayer() && caster->IsInWorld() && caster->GetUInt32Value( PLAYER_FARSIGHT ) != 0 )
	{
		uint8 j;
		for( j = 0; j < 3; ++j )
			if( m_spellProto->Effect[j] == SPELL_EFFECT_ADD_FARSIGHT )
				break;

		if( j != 3 )
		{
			caster->SetUInt64Value( PLAYER_FARSIGHT, 0 );
		}
	}

    uint32 flag = 0;
	if( m_spellProto->MechanicsType == MECHANIC_ENRAGED && !--m_target->asc_enraged )
		flag |= AURASTATE_FLAG_ENRAGED;
	if( m_spellProto->BGR_one_buff_on_target & SPELL_TYPE_SEAL && !--m_target->asc_seal )
        flag |= AURASTATE_FLAG_JUDGEMENT;
    if( flag != 0 )
		m_target->RemoveFlag( UNIT_FIELD_AURASTATE, flag );

	// Hunter - Wyvern Sting
	if( GetSpellProto()->NameHash == SPELL_HASH_WYVERN_STING )
	{
		uint32 spellid = 0;
		switch( GetSpellProto()->Id )
		{
		case 19386:
			spellid = 24131;
			break;
		case 24132:
			spellid = 24134;
			break;
		case 24133:
			spellid = 24135;
			break;
		case 27068:
			spellid = 27069;
			break;
		case 49011:
			spellid = 49009;
			break;
		case 49012:
			spellid = 49010;
			break;
		}

		if( spellid != NULL && caster != NULL )
			caster->CastSpell( m_target, spellid, true );
	}

	delete this; // suicide xD	leaking this shit out
}

void Aura::AddMod( uint32 t, int32 a, uint32 miscValue, uint32 i )
{
	//this is fix, when u have the same unit in target list several times
	//for(uint32 x= 0;x<m_modcount;x++)
	//	if(m_modList[x].i==i)return;

	/*if(m_modList[0].m_type == t ||
		m_modList[1].m_type == t ||
		m_modList[2].m_type == t)
		return; // don't duplicate mods // some spells apply duplicate mods, like some seals*/

	if( m_modcount >= 3 )
	{
		sLog.outString("Tried to add >3 (%u) mods to spellid %u [%u:%u, %u:%u, %u:%u]", m_modcount+1, this->m_spellProto->Id, m_modList[0].m_type, m_modList[0].m_amount, m_modList[1].m_type, m_modList[1].m_amount, m_modList[2].m_type, m_modList[2].m_amount);
		return;
	}
	m_modList[m_modcount].m_type = t;
	m_modList[m_modcount].m_amount = a;
	m_modList[m_modcount].m_miscValue = miscValue;
	m_modList[m_modcount].i = i;
	m_modcount++;
	//ASSERT(m_modcount<=3);
}

void Aura::ApplyModifiers( bool apply )
{
	for( uint32 x = 0; x < m_modcount; x++ )
	{
		if( m_modList[x].m_type < TOTAL_SPELL_AURAS )
		{
			mod = &m_modList[x];
			sLog.outDebug( "WORLD: target=%u, Spell Aura id=%u (%s), SpellId=%u, i=%u, apply=%s, duration=%u, miscValue=%d, damage=%d",
				m_target->GetLowGUID(),mod->m_type, SpellAuraNames[mod->m_type], m_spellProto->Id, mod->i, apply ? "true" : "false",GetDuration(),mod->m_miscValue,mod->m_amount);
			(*this.*SpellAuraHandler[mod->m_type])(apply);

#ifdef GM_Z_DEBUG_DIRECTLY
		  if( m_target->IsPlayer() && m_target->IsInWorld() && x== 0) {
  		  if ( static_cast< Player* >( m_target )->GetSession() && static_cast< Player* >( m_target )->GetSession()->CanUseCommand('z')  )
				sChatHandler.BlueSystemMessage( static_cast< Player* >( m_target )->GetSession(), "[%sSystem%s] |rAura::ApplyModifiers: %s Target = %u, Spell Aura id = %u, SpellId = %u, modi=%u, apply = [%d], duration = %u, damage = %d, GiverGUID: %u.", MSG_COLOR_WHITE, MSG_COLOR_LIGHTBLUE, MSG_COLOR_SUBWHITE,
				m_target->GetLowGUID(),mod->m_type, m_spellProto->Id, mod->i, apply ,GetDuration(),mod->m_amount,m_casterGuid );
  		}
#endif

		}
		else
			sLog.outError("Unknown Aura id %d", m_modList[x].m_type);
	}
}

void Aura::UpdateModifiers( )
{
	for( uint8 x = 0; x < m_modcount; x++ )
	{
		mod = &m_modList[x];

		if( mod->m_type < TOTAL_SPELL_AURAS )
		{
			sLog.outDebug( "WORLD: Update Aura mods : target = %u , Spell Aura id = %u (%s), SpellId  = %u, i = %u, duration = %u, damage = %d",
				m_target->GetLowGUID(), mod->m_type, SpellAuraNames[mod->m_type], m_spellProto->Id, mod->i, GetDuration(),mod->m_amount);
			switch (mod->m_type)
			{
				case SPELL_AURA_MOD_DECREASE_SPEED:
					UpdateAuraModDecreaseSpeed();
					break;
				case SPELL_AURA_MOD_ATTACK_POWER_BY_STAT_PCT:
				case SPELL_AURA_MOD_RANGED_ATTACK_POWER_BY_STAT_PCT:
					( *this.*SpellAuraHandler[ mod->m_type ] )( false );
					( *this.*SpellAuraHandler[ mod->m_type ] )( true );
					break;
			}
		}
		else
			sLog.outError("Unknown Aura id %d", (uint32)mod->m_type);
	}
}

void Aura::EventUpdateAA(float r)
{
	uint32 i;
	/* burlex: cheap hack to get this to execute in the correct context always */
	if(event_GetCurrentInstanceId() == -1)
	{
		event_Relocate();
		return;
	}

	Unit * u_caster = GetUnitCaster();

	// if the caster is no longer valid->remove the aura
	if( u_caster == NULL )
	{
		Remove();
		//since we lost the caster we cannot do anything more
		return;
	}

	Player * plr = NULL;

	if(u_caster->GetTypeId() == TYPEID_PLAYER)
		plr = static_cast< Player* >(u_caster);
	else if(u_caster->GetTypeId() == TYPEID_UNIT)
	{
		if(u_caster->IsPet())
			plr = static_cast<Pet*>(u_caster)->GetPetOwner();
		else
			plr = static_cast< Player* >(static_cast<Creature*>(u_caster)->GetTotemOwner());
	}


	if(plr == 0 || plr->GetTypeId() != TYPEID_PLAYER)	// No player involved...
		return;

	vector<uint32> NewTargets;

	// Add the aura to the caster, if he's in range of course.
	if(plr->GetDistanceSq(u_caster) < r)
	{
		if(!plr->HasAura(m_spellProto->Id))
		{
			Aura * aura = NULL;
			for(i = 0; i < m_modcount; ++i)
			{
				/* is this an area aura modifier? */
				if( m_spellProto->Effect[m_modList[i].i] == SPELL_EFFECT_APPLY_AREA_AURA ||
					m_spellProto->Effect[m_modList[i].i] == SPELL_EFFECT_APPLY_AREA_AURA2 )
				{
					if(!aura)
					{
						aura = new Aura(m_spellProto, -1, u_caster, plr, true);
						if (!aura)
							return;

						aura->m_areaAura = true;
					}
					aura->AddMod( m_modList[i].m_type, m_modList[i].m_amount, m_modList[i].m_miscValue, m_modList[i].i );
				}
			}
			if(aura)
			{
				plr->AddAura(aura, m_spellScript);
				NewTargets.push_back(plr->GetLowGUID());
			}
		}
	}

	//report say that aura should also affect pet
	if( plr && plr->GetSummon() &&
		(
			GetSpellProto()->NameHash == SPELL_HASH_TRUESHOT_AURA ||
			GetSpellProto()->NameHash == SPELL_HASH_ASPECT_OF_THE_PACK ||
			GetSpellProto()->NameHash == SPELL_HASH_ASPECT_OF_THE_WILD
			)
		 )
	{
		Unit *summon = plr->GetSummon();
		if( summon && summon->isAlive() && summon->GetDistanceSq(u_caster) <= r && !summon->HasAura( m_spellProto->Id ))
		{
			Aura * aura = new Aura(m_spellProto, -1, u_caster, summon, true );
			if (!aura)
				return;
			aura->m_areaAura = true;
			aura->AddMod( mod->m_type, mod->m_amount, mod->m_miscValue, mod->i);
			summon->AddAura( aura, m_spellScript );
			//make sure we remove this
//			sEventMgr.AddEvent(((Unit*)summon), &Unit::EventRemoveAura, m_spellProto->Id, EVENT_DELETE_TIMER, 10, 1,0);
		}
	}

	SubGroup * group = plr->GetGroup() ?
		plr->GetGroup()->GetSubGroup(plr->GetSubGroup()) : 0;

	if(group && group->GetMemberCount() > 0 )
	{
		plr->GetGroup()->Lock();
		GroupMembersSet::iterator itr = group->GetGroupMembersBegin();
		for(; itr != group->GetGroupMembersEnd(); ++itr)
		{
			if((*itr) && (*itr)->m_loggedInPlayer && (*itr)->m_loggedInPlayer != plr && (*itr)->m_loggedInPlayer->GetDistanceSq(u_caster) <= r)
			{
				// Add the aura if they don't have it.
				if(!(*itr)->m_loggedInPlayer->HasAura(m_spellProto->Id) &&
					(*itr)->m_loggedInPlayer->GetInstanceID() == plr->GetInstanceID() && (*itr)->m_loggedInPlayer->isAlive())
				{
					Aura * aura = NULL;
					//aura->AddMod(mod->m_type, mod->m_amount, mod->m_miscValue, mod->i);
					for(i = 0; i < m_modcount; ++i)
					{
						/* is this an area aura modifier? */
						if( m_spellProto->Effect[m_modList[i].i] == SPELL_EFFECT_APPLY_AREA_AURA ||
							m_spellProto->Effect[m_modList[i].i] == SPELL_EFFECT_APPLY_AREA_AURA2 )
						{
							if(!aura)
							{
								aura = new Aura(m_spellProto, -1, u_caster, (*itr)->m_loggedInPlayer, true);
								if (!aura)
									return;

								aura->m_areaAura = true;
							}
							aura->AddMod(m_modList[i].m_type, m_modList[i].m_amount, m_modList[i].m_miscValue, m_modList[i].i);
						}
					}
					if(aura)
					{
						(*itr)->m_loggedInPlayer->AddAura(aura, m_spellScript);
						NewTargets.push_back((*itr)->m_loggedInPlayer->GetLowGUID());
					}
				}
			}
		}
		plr->GetGroup()->Unlock();
	}

	// Update the existing players in the target set.
	AreaAuraList::iterator itr, it2;

	for(itr = targets.begin(); itr != targets.end(); )
	{
		it2 = itr;
		++itr;

		// Check if the target is 'valid'.
		Player * iplr = NULL;
		if(m_target->IsInWorld())
			iplr = m_target->GetMapMgr()->GetPlayer(*it2);

		if( iplr == NULL )
			iplr = objmgr.GetPlayer(*it2);

		if(!iplr || iplr->GetDistanceSq(u_caster) > r || iplr->GetInstanceID() != plr->GetInstanceID())
		{
			targets.erase(it2);
			if(iplr)
			{
				// execute in the correct context
                if(iplr->GetInstanceID() != plr->GetInstanceID())
					sEventMgr.AddEvent(((Unit*)iplr), &Unit::EventRemoveAura, m_spellProto->Id, EVENT_DELETE_TIMER, 10, 1,0);
				else
					iplr->RemoveAura(m_spellProto->Id);
			}

			continue;
		}

		// Is the player outside of the group now?
		// (doesn't apply to the caster)
		if(plr == iplr) continue;

		if(!group || !group->HasMember(iplr->GetLowGUID()))
		{
			// execute in the correct context
			if(iplr->GetInstanceID() != plr->GetInstanceID())
				sEventMgr.AddEvent(((Unit*)iplr), &Unit::EventRemoveAura, m_spellProto->Id, EVENT_DELETE_TIMER, 10, 1,0);
			else
				iplr->RemoveAura(m_spellProto->Id);
			targets.erase(it2);
		}
	}

	// Push new targets into the set.
	for(vector<uint32>::iterator vtr = NewTargets.begin(); vtr != NewTargets.end(); ++vtr)
		targets.insert((*vtr));

	NewTargets.clear();
}

void Aura::RemoveAA()
{
	AreaAuraList::iterator itr;
	Unit * caster = GetUnitCaster();

	//report say that aura should also affect pet
	Player *plr = NULL;
	if( caster && caster->IsPlayer() )
		plr = static_cast<Player*>( caster );
	if( plr && plr->GetSummon() &&
		(
			GetSpellProto()->NameHash == SPELL_HASH_TRUESHOT_AURA ||
			GetSpellProto()->NameHash == SPELL_HASH_ASPECT_OF_THE_PACK ||
			GetSpellProto()->NameHash == SPELL_HASH_ASPECT_OF_THE_WILD
			)
		 )
	{
		Unit *summon = plr->GetSummon();
		if( summon && summon->isAlive() )
			summon->RemoveAura( m_spellProto->Id );
	}

	for(itr = targets.begin(); itr != targets.end(); ++itr)
	{
		// Check if the target is 'valid'.
		Player * iplr;
		if(m_target->IsInWorld())
			iplr = m_target->GetMapMgr()->GetPlayer((uint32)*itr);
		else
			iplr = objmgr.GetPlayer((uint32)*itr);

		if(!iplr || iplr == caster)
			continue;

		iplr->RemoveAura(m_spellProto->Id);
	}
	targets.clear();
}

//------------------------- Aura Effects -----------------------------

void Aura::SpellAuraModBaseResistance(bool apply)
{
	SpellAuraModResistance(apply);
	//both add/decrease some resistance difference is unknown
}

void Aura::SpellAuraModBaseResistancePerc(bool apply)
{
	uint32 Flag = mod->m_miscValue;
	int32 amt;
	int32 bonus = 0;

	// Druid - Survival of the Fittest
	if( /*( !m_target->HasAura(1178) && !m_target->HasAura(9635) ) &&*/ ( GetSpellProto()->Id == 1178 || GetSpellProto()->Id == 9635 ) && m_target->HasAurasWithNameHash(SPELL_HASH_SURVIVAL_OF_THE_FITTEST) )
	{
		
		if( m_target->HasAura(33853) )
			bonus = 11;
		else if( m_target->HasAura(33855) )
			bonus = 22;
		else if( m_target->HasAura(33856) )
			bonus = 33;
	}

	if( apply )
	{
		amt = ( mod->m_amount + bonus );
		if( amt > 0 )
			SetPositive();
		else
			SetNegative();
	}
	else
		amt =- ( mod->m_amount + bonus );

	for( uint32 x = 0; x < 7; x++ )
	{
		if( Flag & (((uint32)1)<< x) )
		{
			if( m_target->GetTypeId() == TYPEID_PLAYER )
			{
				if( mod->m_amount > 0 )
				{
					static_cast< Player* >( m_target )->BaseResistanceModPctPos[x] += amt;
				}
				else
				{
					static_cast< Player* >( m_target )->BaseResistanceModPctNeg[x] -= amt;
				}
				static_cast< Player* >( m_target )->CalcResistance(x);

			}
			else if( m_target->GetTypeId() == TYPEID_UNIT )
			{
				static_cast<Creature*>( m_target )->BaseResistanceModPct[x] += amt;
				static_cast<Creature*>( m_target )->CalcResistance(x);
			}
		}
	}
}

void Aura::SpellAuraNULL(bool apply)
{
	 sLog.outDebug("Unknown Aura id %d", (uint32)mod->m_type);
}

void Aura::SpellAuraBindSight(bool apply)
{
	SetPositive();
	// MindVision
	Unit *caster = GetUnitCaster();
	if( caster == NULL || !caster->IsPlayer() )
		return;

	if( apply )
		caster->SetUInt64Value( PLAYER_FARSIGHT, m_target->GetGUID() );
	else
		caster->SetUInt64Value( PLAYER_FARSIGHT, 0 );
}

void Aura::SpellAuraModPossess(bool apply)
{
	Unit *caster = GetUnitCaster();

	if(apply)
	{
		if( caster != NULL && caster->IsInWorld() && caster->GetTypeId() == TYPEID_PLAYER )
			static_cast< Player* >(caster)->Possess( m_target );
	}
	else
	{
		bool unpossessfailed = false;
		if( caster != NULL && caster->IsInWorld() && caster->GetTypeId() == TYPEID_PLAYER )
		{
			static_cast< Player* >(caster)->UnPossess();
			m_target->RemoveAura(GetSpellId());
			if(caster->GetUInt64Value( PLAYER_FARSIGHT ) != 0 )
			{
			unpossessfailed = true;
			caster->SetUInt64Value(PLAYER_FARSIGHT, 0);
	//		m_target->GetMapMgr()->ChangeFarsightLocation(static_cast< Player* >(caster), m_target, false);
			caster->SetUInt64Value(UNIT_FIELD_CHARM, 0);
			caster->RemoveFlag(UNIT_FIELD_FLAGS, UNIT_FLAG_LOCK_PLAYER);
			}
		}

		// make sure Player::UnPossess() didn't fail, if it did we will just free the target here
		if( m_target->GetUInt64Value( UNIT_FIELD_CHARMEDBY ) != 0 )
		{
			if( m_target->GetTypeId() == TYPEID_UNIT )
			{
				m_target->setAItoUse( true );
				m_target->m_redirectSpellPackets = 0;
			}

			m_target->SetUInt64Value( UNIT_FIELD_CHARMEDBY, 0 );
			m_target->RemoveFlag( UNIT_FIELD_FLAGS, UNIT_FLAG_PLAYER_CONTROLLED_CREATURE );
			m_target->SetUInt32Value( UNIT_FIELD_FACTIONTEMPLATE, m_target->GetCharmTempVal() );
			m_target->_setFaction();
			m_target->UpdateOppFactionSet();
		}
		else
		{
			//mob woke up and realized he was controlled. He will turn to controller and also notify the other mobs he is fighting that they should attack the caster
			//sadly i got only 3 test cases about this so i might be wrong :(
			//zack : disabled until tested
			m_target->GetAIInterface()->EventChangeFaction( caster );
		}
	}
}

void Aura::SpellAuraPeriodicDamage(bool apply)
{
	if( apply )
	{
		if( Spell::GetMechanic( GetSpellProto() ) == MECHANIC_BLEEDING )
		{
			m_target->RemoveFlag( UNIT_FIELD_AURASTATE, AURASTATE_FLAG_BLEEDING );
			m_target->SetFlag( UNIT_FIELD_AURASTATE, AURASTATE_FLAG_BLEEDING );
		}

		if( m_spellProto->MechanicsType == MECHANIC_BLEEDING && m_target->MechanicsDispels[MECHANIC_BLEEDING] )
		{
			m_flags |= 1 << mod->i;
			return;
		}
		int32 dmg = mod->m_amount;
		Unit *c = GetUnitCaster();
		switch(m_spellProto->Id)
		{
			// Garrote
			case 703:
			case 8631:
			case 8632:
			case 8633:
			case 8818:
			case 11289:
			case 11290:
			case 26839:
			case 26884:
			case 48675:
			case 48676: //test
				if( c != NULL )
					c->RemoveAurasByInterruptFlag(AURA_INTERRUPT_ON_START_ATTACK);  // remove stealth
				break;
			//mage talent ignite
			case 12654:
			{
				if(!pSpellId) //we need a parent spell and should always have one since it procs on it
					break;
				SpellEntry * parentsp = dbcSpell.LookupEntry(pSpellId);
				if(!parentsp)
					return;
				if( c != NULL && c->IsPlayer())
				{
					dmg = float2int32(static_cast< Player* >(c)->m_casted_amount[SCHOOL_FIRE]*parentsp->EffectBasePoints[0]/100.0f);
				}
				else if( c != NULL )
				{
					if (!dmg)
						return;
					Spell *spell = new Spell( c, parentsp, false, NULL );
					if (!spell)
						return;
					SpellCastTargets targets(m_target->GetGUID());

					//this is so not good, maybe parent spell has more then dmg effect and we use it to calc our new dmg :(
					dmg = 0;
					for( uint8 i = 0; i < 3; i++ )
					{
					  //dmg += parentsp->EffectBasePoints[i]*m_spellProto->EffectBasePoints[0];
						dmg += spell->CalculateEffect( i, m_target )* parentsp->EffectBasePoints[0] / 100;
					}
					delete spell;
					spell = NULL;
				}
			}
		};

		//this is warrior : Deep Wounds
		if( c != NULL && c->IsPlayer() && pSpellId )
		{
			uint32 multiplyer = 0;
			if( pSpellId == 12834 )
				multiplyer = 16; //level 1 of the talent should apply 16 of average melee weapon dmg
			else if( pSpellId == 12849 )
				multiplyer = 32;
			else if ( pSpellId == 12867 )
				multiplyer = 48;

			if( multiplyer )
			{
				Player *pr=static_cast< Player* >(c);
				if(pr->GetItemInterface())
				{
					Item *it;
					it = pr->GetItemInterface()->GetInventoryItem(EQUIPMENT_SLOT_MAINHAND);
					if(it && it->GetProto())
					{
						dmg = 0;
						for(int i= 0;i<5;i++)
							if(it->GetProto()->Damage[i].Type==SCHOOL_NORMAL)
								dmg += int32((it->GetProto()->Damage[i].Min + it->GetProto()->Damage[i].Max) / 2);
						dmg = multiplyer * dmg /100;
					}
				}
			}
		}

		if( dmg < 0 )
			dmg = 0;

		sLog.outDebug("Adding periodic dmg aura, spellid: %lu, damage = %i", GetSpellId(), dmg );
		sEventMgr.AddEvent(this, &Aura::EventPeriodicDamage, (uint32)dmg,
			EVENT_AURA_PERIODIC_DAMAGE, GetSpellProto()->EffectAmplitude[mod->i], 0, EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);

		SetNegative();
		//maybe poison aurastate should get triggered on other spells too ?
		if( m_spellProto->c_is_flags & SPELL_FLAG_IS_POISON )//deadly poison
		{
			m_target->RemoveFlag(UNIT_FIELD_AURASTATE, AURASTATE_FLAG_POISON);
			m_target->SetFlag(UNIT_FIELD_AURASTATE, AURASTATE_FLAG_POISON);
		}
	}
	else
	{
		if( GetUnitCaster() != NULL && GetUnitCaster()->PeriodicDamageDone[GetSpellProto()->Id] != NULL )
			GetUnitCaster()->PeriodicDamageDone[GetSpellProto()->Id] = 0;

		if( m_target->HasFlag( UNIT_FIELD_AURASTATE, AURASTATE_FLAG_BLEEDING ) )
		{
			m_target->RemoveFlag( UNIT_FIELD_AURASTATE, AURASTATE_FLAG_BLEEDING );
		}

		if( (m_flags & (1 << mod->i)) == 0 ) //add these checks to mods where immunity can cancel only 1 mod and not whole spell
		{
			if( m_spellProto->BGR_one_buff_on_target & SPELL_TYPE_WARLOCK_IMMOLATE || m_spellProto->NameHash == SPELL_HASH_SHADOWFLAME  )
				m_target->RemoveFlag( UNIT_FIELD_AURASTATE, AURASTATE_FLAG_IMMOLATE );
			//maybe poison aurastate should get triggered on other spells too ?
			else if( m_spellProto->c_is_flags & SPELL_FLAG_IS_POISON )//deadly poison
			{
				m_target->RemoveFlag(UNIT_FIELD_AURASTATE, AURASTATE_FLAG_POISON);
			}
		}
	}
}

void Aura::EventPeriodicDamage(uint32 amount)
{
	//DOT
	if( !m_target || !m_target->isAlive() )
		return;

	if( m_target->SchoolImmunityList[GetSpellProto()->School] )
		return;

	if( m_spellProto->BGR_one_buff_on_target & SPELL_TYPE_WARLOCK_IMMOLATE || m_spellProto->NameHash == SPELL_HASH_SHADOWFLAME )
	{
		m_target->RemoveFlag(UNIT_FIELD_AURASTATE, AURASTATE_FLAG_IMMOLATE);
		m_target->SetFlag(UNIT_FIELD_AURASTATE, AURASTATE_FLAG_IMMOLATE);
	}

	int32 res = amount;
	uint32 abs_dmg = 0;
	uint32 school = GetSpellProto()->School;
	Unit * c = GetUnitCaster();

	if( m_target->GetGUID() != m_casterGuid )//don't use resist when cast on self-- this is some internal stuff
	{
		if(c)
		{
			c->RemoveAurasByInterruptFlag(AURA_INTERRUPT_ON_START_ATTACK);

			int amp = m_spellProto->EffectAmplitude[mod->i];
			if( !amp )
				amp = static_cast< EventableObject* >( this )->event_GetEventPeriod( EVENT_AURA_PERIODIC_DAMAGE );

			if( GetDuration() )
			{
				if( GetSpellProto() && GetSpellProto()->NameHash != SPELL_HASH_IGNITE )
					res = c->GetSpellDmgBonus( m_target, m_spellProto, amount, true, false );
			}

			if( res < 0 )
				res = 0;
			else
			{
				float summaryPCTmod = 1.0f;
				if( p_target != NULL ) //resilience
				{
					float dmg_reduction_pct = p_target->CalcRating( PLAYER_RATING_MODIFIER_MELEE_CRIT_RESILIENCE ) / 100.0f;
					if( dmg_reduction_pct > 1.0f )
						dmg_reduction_pct = 1.0f;

					summaryPCTmod -= dmg_reduction_pct;
				}

				res = (uint32)( res * summaryPCTmod );
				if( res < 0 )
					res = 0;
			}
		}

		// Crit from Dots - remake it >.<
		bool crit = false;
		if( c && c->IsPlayer() && GetSpellProto() && c->allowDoTHoTCrit )
		{
			if( c->getClass() == DRUID && ( GetSpellProto()->NameHash == SPELL_HASH_LACERATE || GetSpellProto()->NameHash == SPELL_HASH_RIP ) )
			{
				if( Rand( static_cast<Player*>( c )->GetFloatValue(PLAYER_CRIT_PERCENTAGE) ) )
				{
					res = (uint32)( res * 1.5f );
					crit = true;
				}
			}
			else if( c->getClass() == PRIEST )
			{
				if( Rand( static_cast<Player*>( c )->GetFloatValue(PLAYER_SPELL_CRIT_PERCENTAGE1+5) ) )
				{
					res = (uint32)( res * 2.0f );
					crit = true;
				}
			}
			else if( c->getClass() == WARLOCK && ( GetSpellProto()->NameHash == SPELL_HASH_CORRUPTION || GetSpellProto()->NameHash == SPELL_HASH_UNSTABLE_AFFLICTION ) )
			{
				if( Rand( static_cast<Player*>( c )->GetFloatValue(PLAYER_SPELL_CRIT_PERCENTAGE1+5) ) )
				{
					res = (uint32)( res * 2.0f );
					crit = true;
				}
			}
			else
			{
				if( Rand( static_cast<Player*>( c )->GetFloatValue(PLAYER_CRIT_PERCENTAGE) ) )
				{
					res = (uint32)( res * 1.5f );
					crit = true;
				}
			}
		}

		uint32 ress = res;
		abs_dmg = m_target->AbsorbDamage( school, &ress );
		uint32 ms_abs_dmg = m_target->ManaShieldAbsorb(ress);
		if( ms_abs_dmg )
		{
			if( ms_abs_dmg > ress )
				ress = 0;
			else
				ress -= ms_abs_dmg;

			abs_dmg += ms_abs_dmg;
		}

		if(ress < 0) 
			ress = 0;

		res = ress;
		dealdamage dmg;
		dmg.school_type = school;
		dmg.full_damage = ress;
		dmg.resisted_damage = 0;

		if( res <= 0 )
			dmg.resisted_damage = dmg.full_damage;

		if( res > 0 && c && m_spellProto->MechanicsType != MECHANIC_BLEEDING )
		{
			c->CalculateResistanceReduction( m_target,&dmg, m_spellProto, 0 );
			if( (int32)dmg.resisted_damage > dmg.full_damage )
				res = 0;
			else
				res = dmg.full_damage - dmg.resisted_damage;
		}


		SendPeriodicAuraLog( m_casterGuid, m_target, GetSpellProto()->Id, school, res, abs_dmg, dmg.resisted_damage, crit, FLAG_PERIODIC_DAMAGE );

		if( school == SHADOW_DAMAGE )
		{
			if( c != NULL && c->isAlive() && c->IsPlayer() && c->getClass() == PRIEST )
				static_cast< Player* >( c )->VampiricSpell( res, m_target );
			else if( c->IsPlayer() && GetSpellProto()->NameHash == SPELL_HASH_DRAIN_SOUL && m_target->GetHealthPct() <= 25 )
				res *= 4;
		}
	}
	// grep: this is hack.. some auras seem to delete this shit.
	SpellEntry * sp = m_spellProto;

	if( m_target->GetGUID() != m_casterGuid && c )//don't use resist when cast on self-- this is some internal stuff
	{
		uint32 aproc = PROC_ON_DOT_DAMAGE;
		uint32 vproc = PROC_ON_DOT_DAMAGE_VICTIM;
		uint32 procextra = 0;
		int32 dmg = res;

		if( abs_dmg )
			procextra |= CUSTOMPROC_ON_ABSORB;

		c->HandleProc( aproc, 0, m_target, sp, dmg, abs_dmg );
		c->m_procCounter = 0;
		m_target->HandleProc( vproc, procextra, c, sp, dmg, abs_dmg );
		m_target->m_procCounter = 0;
	}

	if( m_target->m_damageSplitTarget )
	{
		res = m_target->DoDamageSplitTarget( (uint32)res, GetSpellProto()->School, false );
	}

	if( sp->NameHash == SPELL_HASH_IMMOLATE || sp->NameHash == SPELL_HASH_SHADOWFLAME )
		c->PeriodicDamageDone[GetSpellProto()->Id] = res;
	else
		c->PeriodicDamageDone[GetSpellProto()->Id] += res;

	if( c )
		c->DealDamage( m_target, res,  2, 0, GetSpellId () );
	else
		m_target->DealDamage( m_target, res,  2, 0,  GetSpellId () );

}

void Aura::SpellAuraDummy(bool apply)
{
	if( m_spellScript != NULL )
		m_spellScript->DummyAura( apply );

	// Try a dummy SpellHandler
	if(sScriptMgr.CallScriptedDummyAura( GetSpellId(), mod->i, this, apply ) )
		return;

	uint32 TamingSpellid = 0;

	// for seal -> set judgment crap
	if( GetSpellProto()->BGR_one_buff_on_target & SPELL_TYPE_SEAL && mod->i == 2 )
	{
		Unit* uc = GetUnitCaster();

		if( uc == NULL || !uc->IsPlayer() )
			return;

		Player* c = static_cast< Player* >( uc );

		if( apply )
		{
			if( !c->judgespell )
				c->judgespell = mod->m_amount;
			if( !c->Seal )
			{
				c->Seal = m_spellProto->Id;
				c->LastSeal = c->Seal;
			}
		}
		else
		{
			if( c->judgespell )
				c->judgespell = 0;
			if( c->Seal )
				c->Seal = 0;
		}
	}

	switch( GetSpellId() )
	{
	// Druid - Mangle //test
	/*case 33878:
	case 33986:
	case 33987:
	case 33876:
	case 33982:
	case 33983:
		{
			int32 val = (apply) ? 30 : -30;
			m_target->ModDamageTakenByMechPCT[MECHANIC_BLEEDING] += float( val ) / 100.0f;
		}break; */
	// Druid - Survival Instincts
	case 61336:
		{
			if( m_target == NULL )
				return;

			if( apply )
				m_target->CastSpell( m_target, 50322, true );

		}break;
	// Druid - Furor
	case 17056:
	case 17058:
	case 17059:
	case 17060:
	case 17061:
		{
			if( p_target == NULL )
				return;
			if( apply )
				p_target->m_furorChance += mod->m_amount;
			else
				p_target->m_furorChance -= mod->m_amount;
		}break;
	// Druid - Predatory Strikes
	case 16972:
	case 16974:
	case 16975:
		{
			if(apply)
			{
				if( !m_target->IsPlayer() )
					return;

				SetPositive();

				uint32 weaponAP = 0;
				Item* itMH = static_cast< Player* >( m_target )->GetItemInterface()->GetInventoryItem( EQUIPMENT_SLOT_MAINHAND );
				if( itMH != NULL  ) 
					weaponAP = ( static_cast<uint32>( itMH->GetProto()->Damage[0].Min + itMH->GetProto()->Damage[0].Max ) / ( 2 * itMH->GetProto()->Delay ) ) * 10; //it's 10-11

				mod->realamount = weaponAP + ( ( mod->m_amount * m_target->getLevel() ) /100 );
				m_target->ModUnsigned32Value(UNIT_FIELD_ATTACK_POWER_MODS, mod->realamount);
			}
			else
				m_target->ModUnsigned32Value(UNIT_FIELD_ATTACK_POWER_MODS, -mod->realamount);
			m_target->CalcDamage();
		}break;
	// Druid - Tranquility
	/*case 740:
	case 8918:
	case 9862:
	case 9863:
	case 21791:
	case 25817:
	case 26983:
	case 34550:
	case 48446:
	case 48447:		
		{
			if(apply)
				sEventMgr.AddEvent(this, &Aura::EventPeriodicHeal1, (uint32)mod->m_amount, EVENT_AURA_PERIODIC_HEAL, 2000, 0, EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
			else
				sEventMgr.RemoveEvents(this, EVENT_AURA_PERIODIC_HEAL);

		}break;
	// Druid - Hurricane
	case 16914:
	case 17401:
	case 17402:
	case 27012:
	case 48467:
		{
			if(apply)
			{
				sLog.outDebug( "Adding periodic dmg aura, spellid: %lu", this->GetSpellId() );
				sEventMgr.AddEvent(this, &Aura::EventPeriodicDamage, (uint32)mod->m_amount, EVENT_AURA_PERIODIC_DAMAGE, 1000, 0, EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
			}
			else
				sEventMgr.RemoveEvents(this, EVENT_AURA_PERIODIC_DAMAGE);
		}break;*/
	//Druid - Leader of the Pack
	case 17007:
		{
			if( p_target == NULL )
				return;

			if( apply )
				p_target->AddShapeShiftSpell( 24932 );
			else
				p_target->RemoveShapeShiftSpell( 24932 );
		}break;
	//Druid - Leader of the Pack Effect[1] + Improved Leader of the Pack - Heal
	case 24932:
		{
		/*
		Improved Leader of the Pack
		Your Leader of the Pack ability also causes affected targets to heal themselves for X% of their total health when they critically hit 
		with a melee or ranged attack.  The healing effect cannot occur more than once every 6 sec.  
		In addition, you gain Y% of your maximum mana when you benefit from this heal

		Effect #1	Apply Aura: Add Flat Modifier (12) <- it's that effect
		Value: X
		Effect #2	Dummy
		Value: Y
		*/

			Unit* caster = GetUnitCaster();
			if( caster == NULL || p_target == NULL )
				return;

			if( apply )
			{
				ProcTriggerSpell ILotP;
				ILotP.origId = GetSpellProto()->Id;
				ILotP.spellId = 34299;
				ILotP.procChance = 100;
				ILotP.procFlags = GetSpellProto()->procFlags;//PROC_ON_CRIT_ATTACK;
				ILotP.procFlagsExtra = GetSpellProto()->procFlagExtra;
				ILotP.procCharges = GetSpellProto()->procCharges;
				ILotP.deleted = false;
				ILotP.caster = caster->GetGUID();
				ILotP.LastTrigger = 0;
				ILotP.ProcType = 0;
				ILotP.groupRelation[0] = 0;
				ILotP.groupRelation[1] = 0;
				ILotP.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(ILotP);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	//Druid - King of the Jungle
	case 48492:
	case 48494:
	case 48495:
		{
			if( p_target == NULL )
				return;

			if( apply )
			{
				//Enrage
				ProcTriggerSpell KoTJ_Bear;
				KoTJ_Bear.origId = GetSpellProto()->Id;
				KoTJ_Bear.spellId = 51185;
				KoTJ_Bear.procChance = 100;
				KoTJ_Bear.procFlags = GetSpellProto()->procFlags;//PROC_ON_CAST_SPELL | static_cast<uint32>(PROC_TARGET_SELF);
				KoTJ_Bear.procFlagsExtra = GetSpellProto()->procFlagExtra;
				KoTJ_Bear.procCharges = GetSpellProto()->procCharges;
				KoTJ_Bear.deleted = false;
				KoTJ_Bear.caster = p_target->GetGUID();
				KoTJ_Bear.LastTrigger = 0;
				KoTJ_Bear.ProcType = 0;
				KoTJ_Bear.groupRelation[0] = 0;
				KoTJ_Bear.groupRelation[1] = 0;
				KoTJ_Bear.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(KoTJ_Bear);

				//Tiger's Fury
				ProcTriggerSpell KoTJ_Cat;
				KoTJ_Cat.origId = GetSpellProto()->Id;
				KoTJ_Cat.spellId = 51178;
				KoTJ_Cat.procChance = 100;
				KoTJ_Cat.procFlags = GetSpellProto()->procFlags;//PROC_ON_CAST_SPELL | static_cast<uint32>(PROC_TARGET_SELF);
				KoTJ_Cat.procFlagsExtra = GetSpellProto()->procFlagExtra;
				KoTJ_Cat.procCharges = GetSpellProto()->procCharges;
				KoTJ_Cat.deleted = false;
				KoTJ_Cat.caster = p_target->GetGUID();
				KoTJ_Cat.LastTrigger = 0;
				KoTJ_Cat.ProcType = 0;
				KoTJ_Cat.groupRelation[0] = 0;
				KoTJ_Cat.groupRelation[1] = 0;
				KoTJ_Cat.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(KoTJ_Cat);
			}
			else
			{
				int8 number = 0;
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( ( itr->origId == GetSpellProto()->Id || itr->origId == GetSpellProto()->Id ) && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						++number;
						if( number == 2 )
							break;
					}
				}
			}
		}break;
	//Druid - Eclipse
	case 48516:
	case 48521:
	case 48525:
		{
			if( p_target == NULL )
				return;

			if( apply )
			{
				//Starfire crit -> Wrath dmg
				ProcTriggerSpell Spell1;
				Spell1.origId = GetSpellProto()->Id;
				Spell1.spellId = 48517;

				if( GetSpellProto()->Id == 48516 )
					Spell1.procChance = 33;
				else if( GetSpellProto()->Id == 48521 )
					Spell1.procChance = 66;
				else if( GetSpellProto()->Id == 48525 )
					Spell1.procChance = 100;

				Spell1.procFlags = GetSpellProto()->procFlags;//PROC_ON_SPELL_CRIT_HIT;
				Spell1.procFlagsExtra = GetSpellProto()->procFlagExtra;
				Spell1.procCharges = GetSpellProto()->procCharges;
				Spell1.deleted = false;
				Spell1.caster = p_target->GetGUID();
				Spell1.LastTrigger = 0;
				Spell1.ProcType = 0;
				Spell1.groupRelation[0] = 0;
				Spell1.groupRelation[1] = 0;
				Spell1.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(Spell1);

				//Wrath crit -> Starfire crit
				ProcTriggerSpell Spell2;
				Spell2.origId = GetSpellProto()->Id;
				Spell2.spellId = 48518;
				
				if( GetSpellProto()->Id == 48516 )
					Spell1.procChance = 20;
				else if( GetSpellProto()->Id == 48521 )
					Spell1.procChance = 40;
				else if( GetSpellProto()->Id == 48525 )
					Spell1.procChance = 60;

				Spell2.procFlags = GetSpellProto()->procFlags;//PROC_ON_SPELL_CRIT_HIT;
				Spell2.procFlagsExtra = GetSpellProto()->procFlagExtra;
				Spell2.procCharges = GetSpellProto()->procCharges;
				Spell2.deleted = false;
				Spell2.caster = p_target->GetGUID();
				Spell2.LastTrigger = 0;
				Spell2.ProcType = 0;
				Spell2.groupRelation[0] = 0;
				Spell2.groupRelation[1] = 0;
				Spell2.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(Spell2);
			}
			else
			{
				int8 number = 0;
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( ( itr->origId == GetSpellProto()->Id || itr->origId == GetSpellProto()->Id ) && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						++number;
						if( number == 2 )
							break;
					}
				}
			}
		}break;
	// Druid - Living Seed, proc
	case 48496:
	case 48499:
	case 48500:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || m_target == NULL )
				return;

			if( apply )
			{
				ProcTriggerSpell RVProc;
				RVProc.origId = GetSpellProto()->Id;
				RVProc.spellId = 48504;
				RVProc.procChance = GetSpellProto()->procChance;
				RVProc.procFlags = GetSpellProto()->procFlags;
				RVProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
				RVProc.procCharges = GetSpellProto()->procCharges;
				RVProc.deleted = false;
				RVProc.caster = caster->GetGUID();
				RVProc.LastTrigger = 0;
				RVProc.ProcType = 0;
				RVProc.groupRelation[0] = 0;
				RVProc.groupRelation[1] = 0;
				RVProc.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(RVProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Druid: - Living Seed, heal
	case 48504:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || m_target == NULL )
				return;

			if( !apply && GetTimeLeft() > 0 )
			{
				SpellEntry *se = dbcSpell.LookupEntry( 48503 );
				if( !se )
					return;

				Spell * sp = new Spell( caster, se, true, NULL );
				if( !sp )
					return;

				sp->forced_basepoints[0] = mod->m_amount;
				SpellCastTargets targets;
				targets.m_unitTarget = m_target->GetGUID();
				sp->prepare( &targets );
			}
		}break;
	// Druid - Lifebloom
	case 33763:		
		{
			if(apply)
				return;

			// apply ONCE only.
			if( m_ignoreunapply )
				return;

			Unit * pCaster = GetUnitCaster();
			if( pCaster == NULL )
				pCaster = m_target;
			if( pCaster == NULL )
				return;
			// Remove other Lifeblooms - but do NOT handle unapply again
			bool expired = true;
			for(uint32 x=MAX_POSITIVE_AURAS_EXTEDED_START;x<MAX_POSITIVE_AURAS_EXTEDED_END;x++)
			{
				if(m_target->m_auras[x])
				{
					if( m_target->m_auras[x]->GetSpellId() == 33763 )
					{
						m_target->m_auras[x]->m_ignoreunapply = true;
						if( m_target->m_auras[x]->GetTimeLeft() )
							expired = false;
						m_target->m_auras[x]->Remove();
					}
				}
			}

			if( expired )
			{
				Spell *spell = new Spell( pCaster, m_spellProto, true, NULL );
				if (!spell)
					return;

				spell->SetUnitTarget( m_target );
				spell->Heal( mod->m_amount );
			}

		}break;
	case 48450:
		{
			if(apply)
				return;

			// apply ONCE only.
			if( m_ignoreunapply )
				return;

			Unit * pCaster = GetUnitCaster();
			if( pCaster == NULL )
				pCaster = m_target;

			// Remove other Lifeblooms - but do NOT handle unapply again
			bool expired = true;
			for(uint32 x=MAX_POSITIVE_AURAS_EXTEDED_START;x<MAX_POSITIVE_AURAS_EXTEDED_END;x++)
			{
				if(m_target->m_auras[x])
				{
					if( m_target->m_auras[x]->GetSpellId() == 48450 )
					{
						m_target->m_auras[x]->m_ignoreunapply = true;
						if( m_target->m_auras[x]->GetTimeLeft() )
							expired = false;
						m_target->m_auras[x]->Remove();
					}
				}
			}

			if( expired )
			{
				Spell *spell = new Spell( pCaster, m_spellProto, true, NULL );
				if (!spell)
					return;

				spell->SetUnitTarget( m_target );
				spell->Heal( mod->m_amount );
			}

		}break;
	case 48451:
		{
			if(apply)
				return;

			// apply ONCE only.
			if( m_ignoreunapply )
				return;

			Unit * pCaster = GetUnitCaster();
			if( pCaster == NULL )
				pCaster = m_target;

			// Remove other Lifeblooms - but do NOT handle unapply again
			bool expired = true;
			for(uint32 x=MAX_POSITIVE_AURAS_EXTEDED_START;x<MAX_POSITIVE_AURAS_EXTEDED_END;x++)
			{
				if(m_target->m_auras[x])
				{
					if( m_target->m_auras[x]->GetSpellId() == 48451 )
					{
						m_target->m_auras[x]->m_ignoreunapply = true;
						if( m_target->m_auras[x]->GetTimeLeft() )
							expired = false;
						m_target->m_auras[x]->Remove();
					}
				}
			}

			if( expired )
			{
				Spell *spell = new Spell( pCaster, m_spellProto, true, NULL );
				if (!spell)
					return;

				spell->SetUnitTarget( m_target );
				spell->Heal( mod->m_amount );
			}

		}break;
	// Hunter - Misdirection
	case 34477: 
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || !caster->IsPlayer() )
				return;

			if (!apply)
			{
				sEventMgr.AddEvent( static_cast<Player*>( caster ), &Player::SetMisdirectionTarget,(uint64)0, EVENT_UNK, 250, 1, EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
				//sEventMgr.AddEvent( static_cast<Player*>( caster ), &Player::SetMisdirectionValue,(uint8) 0, EVENT_UNK, 250, 1, EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
				static_cast<Player *>(GetUnitCaster())->SetMisdirectionValue(0);
			}
		}break;
	// Hunter - Thrill of the Hunt
	case 34497:
	case 34498:
	case 34499:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || m_target == NULL )
				return;

			if( apply )
			{
				ProcTriggerSpell RVProc;
				RVProc.origId = GetSpellProto()->Id;
				RVProc.spellId = 34720;
				RVProc.procChance = GetSpellProto()->procChance;
				RVProc.procFlags = GetSpellProto()->procFlags;
				RVProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
				RVProc.procCharges = GetSpellProto()->procCharges;
				RVProc.deleted = false;
				RVProc.caster = caster->GetGUID();
				RVProc.LastTrigger = 0;
				RVProc.ProcType = 0;
				RVProc.groupRelation[0] = 0;
				RVProc.groupRelation[1] = 0;
				RVProc.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(RVProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Hunter - Rapid Recuperation
	case 53228:
	case 53232:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || m_target == NULL )
				return;

			if( apply )
			{
				ProcTriggerSpell RVProc;
				RVProc.origId = GetSpellProto()->Id;
				RVProc.spellId = 54227;
				RVProc.procChance = GetSpellProto()->procChance;
				RVProc.procFlags = GetSpellProto()->procFlags;
				RVProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
				RVProc.procCharges = GetSpellProto()->procCharges;
				RVProc.deleted = false;
				RVProc.caster = caster->GetGUID();
				RVProc.LastTrigger = 0;
				RVProc.ProcType = 0;
				RVProc.groupRelation[0] = 0;
				RVProc.groupRelation[1] = 0;
				RVProc.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(RVProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Hunter - Hunting Party
	case 53290:
	case 53291:
	case 53292:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || m_target == NULL )
				return;

			if( apply )
			{
				ProcTriggerSpell RVProc;
				RVProc.origId = GetSpellProto()->Id;
				RVProc.spellId = 53367;
				RVProc.procChance = GetSpellProto()->procChance;
				RVProc.procFlags = GetSpellProto()->procFlags;
				RVProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
				RVProc.procCharges = GetSpellProto()->procCharges;
				RVProc.deleted = false;
				RVProc.caster = caster->GetGUID();
				RVProc.LastTrigger = 0;
				RVProc.ProcType = 0;
				RVProc.groupRelation[0] = 0;
				RVProc.groupRelation[1] = 0;
				RVProc.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(RVProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Mage - Torment the Weak
	case 29447:
	case 55339:
	case 55340:
		{
			if (m_target->IsPlayer())
			{
				static_cast< Player* >( m_target )->m_IncreaseDmgSnaredSlowed += ((apply) ? 1:-1)*(uint32)(mod->m_amount);
			}
		}break;
	// Mage - Frostbite talent
	case 11071:
	case 12496:
	case 12497:
		{
			Unit *caster = GetUnitCaster();
			if(caster && caster->IsPlayer())
				static_cast< Player* >(caster)->SetTriggerChill( 12494, mod->m_amount, false );
		}break;
	// Mage - Invisibility override
	case 32612:
		{
			if( p_target != NULL )
			{
				p_target->m_mageInvisibility = apply;
				p_target->UpdateVisibility();
			}
		}break;
	// Mage - Magic Absorption
	case 29441:
	case 29444:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || m_target == NULL )
				return;

			if( apply )
			{
				ProcTriggerSpell MAProc;
				MAProc.origId = GetSpellProto()->Id;
				MAProc.spellId = 29442;
				MAProc.procChance = GetSpellProto()->procChance;
				MAProc.procFlags = GetSpellProto()->procFlags;
				MAProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
				MAProc.procCharges = GetSpellProto()->procCharges;
				MAProc.deleted = false;
				MAProc.caster = caster->GetGUID();
				MAProc.LastTrigger = 0;
				MAProc.ProcType = 0;
				MAProc.groupRelation[0] = 0;
				MAProc.groupRelation[1] = 0;
				MAProc.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(MAProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Mage - Master of Elements
	case 29074:
	case 29075:
	case 29076:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || m_target == NULL )
				return;

			if( apply )
			{
				ProcTriggerSpell MAProc;
				MAProc.origId = GetSpellProto()->Id;
				MAProc.spellId = 29077;
				MAProc.procChance = GetSpellProto()->procChance;
				MAProc.procFlags = GetSpellProto()->procFlags;
				MAProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
				MAProc.procCharges = GetSpellProto()->procCharges;
				MAProc.deleted = false;
				MAProc.caster = caster->GetGUID();
				MAProc.LastTrigger = 0;
				MAProc.ProcType = 0;
				MAProc.groupRelation[0] = 0;
				MAProc.groupRelation[1] = 0;
				MAProc.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(MAProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Mage - Incanter's Absorption
	case 44394:
	case 44395:
	case 44396:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || m_target == NULL )
				return;

			if( apply )
			{
				ProcTriggerSpell MAProc;
				MAProc.origId = GetSpellProto()->Id;
				MAProc.spellId = 44413;
				MAProc.procChance = GetSpellProto()->procChance;
				MAProc.procFlags = GetSpellProto()->procFlags;
				MAProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
				MAProc.procCharges = GetSpellProto()->procCharges;
				MAProc.deleted = false;
				MAProc.caster = caster->GetGUID();
				MAProc.LastTrigger = 0;
				MAProc.ProcType = 0;
				MAProc.groupRelation[0] = 0;
				MAProc.groupRelation[1] = 0;
				MAProc.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(MAProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Mage - Burnout
	case 44449:
	case 44469:
	case 44470:
	case 44471:
	case 44472:
		{
			if (m_target->IsPlayer())
			{
				static_cast< Player* >( m_target )->m_ManaCostSpellCrit += ((apply) ? 1:-1)*(mod->m_amount);
			}
		}break;
	// Mage - Hot Streak
	case 44445:
	case 44446:
	case 44448:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || m_target == NULL || mod->i != 0 )
				return;

			if( apply )
			{
				ProcTriggerSpell MAProc;
				MAProc.origId = GetSpellProto()->Id;
				MAProc.spellId = 48108;
				MAProc.procChance = mod->m_amount;
				MAProc.procFlags = GetSpellProto()->procFlags;
				MAProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
				MAProc.procCharges = GetSpellProto()->procCharges;
				MAProc.deleted = false;
				MAProc.caster = caster->GetGUID();
				MAProc.LastTrigger = 0;
				MAProc.ProcType = 0;
				MAProc.groupRelation[0] = 0;
				MAProc.groupRelation[1] = 0;
				MAProc.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(MAProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Mage - Living bomb
	case 44457:
	case 55359:
	case 55360:
		{
			Unit *caster = GetUnitCaster();
			if( caster && !apply )
			{
				uint32 spellid = 0;
				if( GetSpellId() == 44457 )
					spellid = 44461;
				else if( GetSpellId() == 55359 )
					spellid = 55361;
				else if( GetSpellId() == 55360 )
					spellid = 55362;
				caster->CastSpell( m_target, spellid, true );
			}
		}break;
	// Paladin - Seal of Righteousness
	case 21084:
	case 20154:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || m_target == NULL || mod->i != 0 )
				return;

			if( apply )
			{
				ProcTriggerSpell RVProc;
				RVProc.origId = GetSpellProto()->Id;
				RVProc.spellId = 25742;
				RVProc.procChance = GetSpellProto()->procChance;
				RVProc.procFlags = GetSpellProto()->procFlags;
				RVProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
				RVProc.procCharges = GetSpellProto()->procCharges;
				RVProc.deleted = false;
				RVProc.caster = caster->GetGUID();
				RVProc.LastTrigger = 0;
				RVProc.ProcType = 0;
				RVProc.groupRelation[0] = 0;
				RVProc.groupRelation[1] = 0;
				RVProc.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(RVProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Paladin - Seal of Vengeance
	case 31801:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || m_target == NULL || mod->i != 0 )
				return;

			if( apply )
			{
				ProcTriggerSpell SoVProc1;
				SoVProc1.origId = GetSpellProto()->Id;
				SoVProc1.spellId = 31803;
				SoVProc1.procChance = GetSpellProto()->procChance;
				SoVProc1.procFlags = GetSpellProto()->procFlags;
				SoVProc1.procFlagsExtra = GetSpellProto()->procFlagExtra;
				SoVProc1.procCharges = GetSpellProto()->procCharges;
				SoVProc1.deleted = false;
				SoVProc1.caster = caster->GetGUID();
				SoVProc1.LastTrigger = 0;
				SoVProc1.ProcType = 0;
				SoVProc1.groupRelation[0] = 0;
				SoVProc1.groupRelation[1] = 0;
				SoVProc1.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(SoVProc1);

				ProcTriggerSpell SoVProc2;
				SoVProc2.origId = GetSpellProto()->Id;
				SoVProc2.spellId = 42463;
				SoVProc2.procChance = GetSpellProto()->procChance;
				SoVProc2.procFlags = GetSpellProto()->procFlags;
				SoVProc2.procFlagsExtra = GetSpellProto()->procFlagExtra;
				SoVProc2.procCharges = GetSpellProto()->procCharges;
				SoVProc2.deleted = false;
				SoVProc2.caster = caster->GetGUID();
				SoVProc2.LastTrigger = 0;
				SoVProc2.ProcType = 0;
				SoVProc2.groupRelation[0] = 0;
				SoVProc2.groupRelation[1] = 0;
				SoVProc2.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(SoVProc2);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						//break;
					}
				}
			}
		}break;
	// Paladin - Seal of Corruption
	case 53736:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || m_target == NULL || mod->i != 0 )
				return;

			if( apply )
			{
				ProcTriggerSpell SoCProc1;
				SoCProc1.origId = GetSpellProto()->Id;
				SoCProc1.spellId = 53742;
				SoCProc1.procChance = GetSpellProto()->procChance;
				SoCProc1.procFlags = GetSpellProto()->procFlags;
				SoCProc1.procFlagsExtra = GetSpellProto()->procFlagExtra;
				SoCProc1.procCharges = GetSpellProto()->procCharges;
				SoCProc1.deleted = false;
				SoCProc1.caster = caster->GetGUID();
				SoCProc1.LastTrigger = 0;
				SoCProc1.ProcType = 0;
				SoCProc1.groupRelation[0] = 0;
				SoCProc1.groupRelation[1] = 0;
				SoCProc1.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(SoCProc1);

				ProcTriggerSpell SoCProc2;
				SoCProc2.origId = GetSpellProto()->Id;
				SoCProc2.spellId = 53739;
				SoCProc2.procChance = GetSpellProto()->procChance;
				SoCProc2.procFlags = GetSpellProto()->procFlags;
				SoCProc2.procFlagsExtra = GetSpellProto()->procFlagExtra;
				SoCProc2.procCharges = GetSpellProto()->procCharges;
				SoCProc2.deleted = false;
				SoCProc2.caster = caster->GetGUID();
				SoCProc2.LastTrigger = 0;
				SoCProc2.ProcType = 0;
				SoCProc2.groupRelation[0] = 0;
				SoCProc2.groupRelation[1] = 0;
				SoCProc2.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(SoCProc2);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						//break;
					}
				}
			}
		}break;
	// Paladin - Sacred Shield
	case 53601:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || m_target == NULL )
				return;

			if( apply )
			{
				ProcTriggerSpell SSProc;
				SSProc.origId = GetSpellProto()->Id;
				SSProc.spellId = GetSpellProto()->EffectTriggerSpell[mod->i];
				SSProc.procChance = GetSpellProto()->procChance;
				SSProc.procFlags = GetSpellProto()->procFlags;
				SSProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
				SSProc.procCharges = GetSpellProto()->procCharges;
				SSProc.deleted = false;
				SSProc.caster = caster->GetGUID();
				SSProc.LastTrigger = 0;
				SSProc.ProcType = 0;
				SSProc.groupRelation[0] = 0;
				SSProc.groupRelation[1] = 0;
				SSProc.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(SSProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Paladin - Spiritual Attunement
	case 31785:
	case 33776:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || m_target == NULL )
				return;

			if( apply )
			{
				ProcTriggerSpell RVProc;
				RVProc.origId = GetSpellProto()->Id;
				RVProc.spellId = 31786;
				RVProc.procChance = GetSpellProto()->procChance;
				RVProc.procFlags = GetSpellProto()->procFlags;
				RVProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
				RVProc.procCharges = GetSpellProto()->procCharges;
				RVProc.deleted = false;
				RVProc.caster = caster->GetGUID();
				RVProc.LastTrigger = 0;
				RVProc.ProcType = 0;
				RVProc.groupRelation[0] = 0;
				RVProc.groupRelation[1] = 0;
				RVProc.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(RVProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Paladin - Heart of the Crusader
	case 20335:
	case 20336:
	case 20337:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || m_target == NULL )
				return;

			if( apply )
			{
				ProcTriggerSpell RVProc;
				RVProc.origId = GetSpellProto()->Id;

				if( GetSpellProto()->Id == 20335 )
					RVProc.spellId = 21183;
				else if( GetSpellProto()->Id == 20336 )
					RVProc.spellId = 54498;
				else if( GetSpellProto()->Id == 20337 )
					RVProc.spellId = 54499;

				RVProc.procChance = 100;
				RVProc.procFlags = PROC_ON_CAST_SPELL;
				RVProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
				RVProc.procCharges = GetSpellProto()->procCharges;
				RVProc.deleted = false;
				RVProc.caster = caster->GetGUID();
				RVProc.LastTrigger = 0;
				RVProc.ProcType = 0;
				RVProc.groupRelation[0] = 0;
				RVProc.groupRelation[1] = 0;
				RVProc.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(RVProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Paladin - Eye for an Eye
	case 9799:
	case 25988:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || m_target == NULL )
				return;

			if( apply )
			{
				ProcTriggerSpell RVProc;
				RVProc.origId = GetSpellProto()->Id;
				RVProc.spellId = 25997;
				RVProc.procChance = GetSpellProto()->procChance;
				RVProc.procFlags = GetSpellProto()->procFlags;
				RVProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
				RVProc.procCharges = GetSpellProto()->procCharges;
				RVProc.deleted = false;
				RVProc.caster = caster->GetGUID();
				RVProc.LastTrigger = 0;
				RVProc.ProcType = 0;
				RVProc.groupRelation[0] = 0;
				RVProc.groupRelation[1] = 0;
				RVProc.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(RVProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Paladin - Sheath of Light
	case 53501:
	case 53502:
	case 53503:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || m_target == NULL )
				return;

			if( apply )
			{
				ProcTriggerSpell RVProc;
				RVProc.origId = GetSpellProto()->Id;
				RVProc.spellId = 54203;
				RVProc.procChance = GetSpellProto()->procChance;
				RVProc.procFlags = GetSpellProto()->procFlags;
				RVProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
				RVProc.procCharges = GetSpellProto()->procCharges;
				RVProc.deleted = false;
				RVProc.caster = caster->GetGUID();
				RVProc.LastTrigger = 0;
				RVProc.ProcType = 0;
				RVProc.groupRelation[0] = 0;
				RVProc.groupRelation[1] = 0;
				RVProc.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(RVProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Paladin - Righteous Vengeance
	case 53380:
	case 53381:
	case 53382:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || m_target == NULL )
				return;

			if( apply )
			{
				ProcTriggerSpell RVProc;
				RVProc.origId = GetSpellProto()->Id;
				RVProc.spellId = 61840;
				RVProc.procChance = GetSpellProto()->procChance;
				RVProc.procFlags = GetSpellProto()->procFlags;
				RVProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
				RVProc.procCharges = GetSpellProto()->procCharges;
				RVProc.deleted = false;
				RVProc.caster = caster->GetGUID();
				RVProc.LastTrigger = 0;
				RVProc.ProcType = 0;
				RVProc.groupRelation[0] = 0;
				RVProc.groupRelation[1] = 0;
				RVProc.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(RVProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Paladin - Sanctified Wrath
	case 53375:
	case 53376:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || p_target == NULL )
				return;

			if( apply )
			{
				ProcTriggerSpell SWProc;
				SWProc.origId = GetSpellProto()->Id;
				SWProc.spellId = 57318;
				SWProc.procChance = 100;
				SWProc.procFlags = PROC_ON_CAST_SPELL;
				SWProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
				SWProc.procCharges = GetSpellProto()->procCharges;
				SWProc.deleted = false;
				SWProc.caster = caster->GetGUID();
				SWProc.LastTrigger = 0;
				SWProc.ProcType = 0;
				SWProc.groupRelation[0] = 0;
				SWProc.groupRelation[1] = 0;
				SWProc.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(SWProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Paladin - Blessing of Sanctuary and Greater Blessing of Sanctuary
	case 20911:
	case 25899:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || m_target == NULL )
				return;

			if( apply )
			{
				if( p_target )
				{
					ProcTriggerSpell BoSProc;
					BoSProc.origId = GetSpellProto()->Id;
					BoSProc.spellId = 57319;
					BoSProc.procChance = 100;
					BoSProc.procFlags = GetSpellProto()->procFlags;
					BoSProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
					BoSProc.procCharges = GetSpellProto()->procCharges;
					BoSProc.deleted = false;
					BoSProc.caster = caster->GetGUID();
					BoSProc.LastTrigger = 0;
					BoSProc.ProcType = 0;
					BoSProc.groupRelation[0] = 0;
					BoSProc.groupRelation[1] = 0;
					BoSProc.groupRelation[2] = 0;
					p_target->m_procSpells.push_back(BoSProc);
				}

				// Stamina && Strength
				if( m_target->IsPlayer() )
				{
					p_target->TotalStatModPctPos[0] += 10;
					p_target->TotalStatModPctPos[2] += 10;
						
					p_target->CalcStat(0);
					p_target->CalcStat(2);
					p_target->UpdateStats();
					p_target->UpdateChances();
				}
				else if( m_target->GetTypeId() == TYPEID_UNIT )
				{
					static_cast< Creature* >( m_target )->StatModPct[0] += 10;
					static_cast< Creature* >( m_target )->CalcStat(0);
					static_cast< Creature* >( m_target )->StatModPct[2] += 10;
					static_cast< Creature* >( m_target )->CalcStat(2);
				}

				// Decrease Damage taken by 3%
				for( int8 i=0; i<7; i++ )
					m_target->DamageTakenPctMod[i] -= 0.03f;
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}

				// Stamina && Strength
				if( m_target->IsPlayer() )
				{
					p_target->TotalStatModPctPos[0] -= 10;
					p_target->TotalStatModPctPos[2] -= 10;
						
					p_target->CalcStat(0);
					p_target->CalcStat(2);
					p_target->UpdateStats();
					p_target->UpdateChances();
				}
				else if( m_target->GetTypeId() == TYPEID_UNIT )
				{
					static_cast< Creature* >( m_target )->StatModPct[0] -= 10;
					static_cast< Creature* >( m_target )->CalcStat(0);
					static_cast< Creature* >( m_target )->StatModPct[2] -= 10;
					static_cast< Creature* >( m_target )->CalcStat(2);
				}

				// Decrease Damage taken by 3%
				for( int8 i=0; i<7; i++ )
					m_target->DamageTakenPctMod[i] += 0.03f;
			}
		}break;
	// Priest - Mind Vision
	case 2096:
		{
		}break;
	// Priest - Vampiric Embrace
	case 15286:
		{
			if(apply)
			{
				SetNegative();
				Unit * caster =this->GetUnitCaster();
				if(caster && caster->IsPlayer())
					((Player*)caster)->m_vampiricEmbrace++;
				++m_target->m_hasVampiricEmbrace;
			}
			else
			{
				Unit * caster =this->GetUnitCaster();
				if(caster && caster->IsPlayer())
					((Player*)caster)->m_vampiricEmbrace--;
				--m_target->m_hasVampiricEmbrace;
			}
		}break;
	// Priest - Vampiric Touch
	case 34914:
	case 34916:
	case 34917:
	case 48159:
	case 48160:
		{
			if(apply)
			{
				SetNegative();
				Unit * caster =this->GetUnitCaster();
				if(caster && caster->IsPlayer())
					++((Player*)caster)->m_vampiricTouch;

				++m_target->m_hasVampiricTouch;
			}
			else
			{
				Unit * caster = GetUnitCaster();
				if(caster && caster->IsPlayer())
					--((Player*)caster)->m_vampiricTouch;

				--m_target->m_hasVampiricTouch;
			}
		}break;
	// Rogue - Deadly Throw Interrupt
	case 32748:
		{
			if ( m_target == NULL )
				return;

			uint32 school = 0;
			if(m_target->GetCurrentSpell())
			{
				school = m_target->GetCurrentSpell()->GetProto()->School;
			}
			m_target->InterruptSpell();
			m_target->SchoolCastPrevent[school]=3000+getMSTime();
		}break;
	// Rogue - Cheat Death
	case 45182:
		{
			if( apply && p_target != NULL )
			{
				SetPositive();
				// calc and saving the absorb pct value
				mod->m_miscValue = (int32)( 8.0f * p_target->CalcRating(PLAYER_RATING_MODIFIER_MELEE_CRIT_RESILIENCE ) );
				if( mod->m_miscValue > 90 )
					mod->m_miscValue = 90;
			}

			// apply or remove the pct!!
			for( uint32 x=0; x<7; x++ )
			{
				if( apply )
					m_target->DamageTakenPctMod[x] -= (float)(mod->m_miscValue) / 100.0f;
				else
					m_target->DamageTakenPctMod[x] += (float)(mod->m_miscValue) / 100.0f;
			}
		}break;
	// Rogue - Cut to the Chase
	case 51664:
	case 51665:
	case 51667:
	case 51668:
	case 51669:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || p_target == NULL )
				return;

			if( apply )
			{
				ProcTriggerSpell CttCProc;
				CttCProc.origId = GetSpellProto()->Id;
				CttCProc.spellId = 6774;
				CttCProc.procChance = GetSpellProto()->procChance;
				CttCProc.procFlags = GetSpellProto()->procFlags;
				CttCProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
				CttCProc.procCharges = GetSpellProto()->procCharges;
				CttCProc.deleted = false;
				CttCProc.caster = caster->GetGUID();
				CttCProc.LastTrigger = 0;
				CttCProc.ProcType = 0;
				CttCProc.groupRelation[0] = 0;
				CttCProc.groupRelation[1] = 0;
				CttCProc.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(CttCProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Shaman - Reincarnation
	case 20608:
		{
			if( p_target == NULL )
				return;
			if( apply )
				p_target->bReincarnation = true;
			else
				p_target->bReincarnation = false;
		}break;
	// Shaman - Earth Shield
	case 974:
	case 32593: 
	case 32594:
	case 49283:
	case 49284:
		{
			if( apply )
			{
				ProcTriggerSpell pts;
				pts.origId = GetSpellProto()->Id;
				pts.spellId = 379;
				pts.caster = GetUnitCaster()->GetGUID();
				pts.procChance = GetSpellProto()->procChance;
				pts.procFlags = GetSpellProto()->procFlags;
				pts.procFlagsExtra = GetSpellProto()->procFlagExtra;
				pts.procCharges = GetSpellProto()->procCharges;
				pts.LastTrigger = 0;
				pts.ProcType = 0;
				pts.groupRelation[0] = 0;
				pts.groupRelation[1] = 0;
				pts.groupRelation[2] = 0;
				pts.deleted = false;
				m_target->m_procSpells.push_front(pts);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellId() && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Shaman - Lightning Overload
	case 30675:
	case 30678:
	case 30679:
		{
			if( apply )
			{
				ProcTriggerSpell pts;
				pts.origId = GetSpellProto()->Id;
				pts.spellId = 39805;
				pts.caster = GetUnitCaster()->GetGUID();
				pts.procChance = GetSpellProto()->procChance;
				pts.procFlags = GetSpellProto()->procFlags;
				pts.procFlagsExtra = GetSpellProto()->procFlagExtra;
				pts.procCharges = GetSpellProto()->procCharges;
				pts.LastTrigger = 0;
				pts.ProcType = 0;
				pts.groupRelation[0] = 0;
				pts.groupRelation[1] = 0;
				pts.groupRelation[2] = 0;
				pts.deleted = false;
				m_target->m_procSpells.push_front(pts);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellId() && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Shaman - Frozen Power
	case 63373:
	case 63374:
		{
			if( apply )
			{
				ProcTriggerSpell pts;
				pts.origId = GetSpellProto()->Id;
				pts.spellId = 63685;
				pts.caster = GetUnitCaster()->GetGUID();
				pts.procChance = GetSpellProto()->Id == 63373 ? 50 : 100;
				pts.procFlags = PROC_ON_CAST_SPELL;
				pts.procFlagsExtra = GetSpellProto()->procFlagExtra;
				pts.procCharges = GetSpellProto()->procCharges;
				pts.LastTrigger = 0;
				pts.ProcType = 0;
				pts.groupRelation[0] = 0;
				pts.groupRelation[1] = 0;
				pts.groupRelation[2] = 0;
				pts.deleted = false;
				m_target->m_procSpells.push_front(pts);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellId() && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Shaman - Improved Water Shield
	case 16180:
	case 16196:
	case 16198:
		{
			if( apply )
			{
				ProcTriggerSpell pts;
				pts.origId = GetSpellProto()->Id;
				pts.spellId = 57961; // this is not right spell!
				pts.caster = GetUnitCaster()->GetGUID();
				pts.procChance = 100;
				pts.procFlags = GetSpellProto()->procFlags;
				pts.procFlagsExtra = GetSpellProto()->procFlagExtra;
				pts.procCharges = GetSpellProto()->procCharges;
				pts.LastTrigger = 0;
				pts.ProcType = 0;
				pts.groupRelation[0] = 0;
				pts.groupRelation[1] = 0;
				pts.groupRelation[2] = 0;
				pts.deleted = false;
				m_target->m_procSpells.push_front(pts);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellId() && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Shaman - Ancestral Awakening
	case 51556:
	case 51557:
	case 51558:
		{
			if( apply )
			{
				ProcTriggerSpell pts;
				pts.origId = GetSpellProto()->Id;
				pts.spellId = 52752;
				pts.caster = GetUnitCaster()->GetGUID();
				pts.procChance = GetSpellProto()->procChance;
				pts.procFlags = GetSpellProto()->procFlags;
				pts.procFlagsExtra = GetSpellProto()->procFlagExtra;
				pts.procCharges = GetSpellProto()->procCharges;
				pts.LastTrigger = 0;
				pts.ProcType = 0;
				pts.groupRelation[0] = 0;
				pts.groupRelation[1] = 0;
				pts.groupRelation[2] = 0;
				pts.deleted = false;
				m_target->m_procSpells.push_front(pts);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellId() && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Shaman - Windfury Weapon
	case 33757:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || p_target == NULL )
				return;

			if( apply )
			{
				ProcTriggerSpell SWProc;
				SWProc.origId = GetSpellProto()->Id;
				SWProc.spellId = 33010;//25504
				SWProc.procChance = GetSpellProto()->procChance;
				SWProc.procFlags = GetSpellProto()->procFlags;
				SWProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
				SWProc.procCharges = GetSpellProto()->procCharges;
				SWProc.deleted = false;
				SWProc.caster = caster->GetGUID();
				SWProc.LastTrigger = 0;
				SWProc.ProcType = 0;
				SWProc.groupRelation[0] = 0;
				SWProc.groupRelation[1] = 0;
				SWProc.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(SWProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Shaman - Flametongue Weapon
	case 10400:
	case 15567:
	case 15568:
	case 15569:
	case 16311:
	case 16312:
	case 16313:
	case 58784:
	case 58791:
	case 58792:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || p_target == NULL )
				return;

			if( apply )
			{
				ProcTriggerSpell SWProc;
				SWProc.origId = GetSpellProto()->Id;
				SWProc.spellId = 10444;
				SWProc.procChance = GetSpellProto()->procChance;
				SWProc.procFlags = GetSpellProto()->procFlags;
				SWProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
				SWProc.procCharges = GetSpellProto()->procCharges;
				SWProc.deleted = false;
				SWProc.caster = caster->GetGUID();
				SWProc.LastTrigger = 0;
				SWProc.ProcType = 0;
				SWProc.groupRelation[0] = 0;
				SWProc.groupRelation[1] = 0;
				SWProc.groupRelation[2] = 0;
				
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}

				p_target->m_procSpells.push_back(SWProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Shaman - Tidal Force
	case 55198:
		{
			if( m_target == NULL )
				return;
			
			m_target->CastSpell( m_target, 55166, true );
		}break;
	// Warlock - Siphon Life
	case 63108:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || p_target == NULL )
				return;

			if( apply )
			{
				ProcTriggerSpell SWProc;
				SWProc.origId = GetSpellProto()->Id;
				SWProc.spellId = 63106;
				SWProc.procChance = GetSpellProto()->procChance;
				SWProc.procFlags = GetSpellProto()->procFlags;
				SWProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
				SWProc.procCharges = GetSpellProto()->procCharges;
				SWProc.deleted = false;
				SWProc.caster = caster->GetGUID();
				SWProc.LastTrigger = 0;
				SWProc.ProcType = 0;
				SWProc.groupRelation[0] = 0;
				SWProc.groupRelation[1] = 0;
				SWProc.groupRelation[2] = 0;
				
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}

				p_target->m_procSpells.push_back(SWProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Warlock - Nightfall
	case 18094:
	case 18095:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || p_target == NULL )
				return;

			if( apply )
			{
				ProcTriggerSpell SWProc;
				SWProc.origId = GetSpellProto()->Id;
				SWProc.spellId = 17941;
				SWProc.procChance = GetSpellProto()->procChance;
				SWProc.procFlags = GetSpellProto()->procFlags;
				SWProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
				SWProc.procCharges = GetSpellProto()->procCharges;
				SWProc.deleted = false;
				SWProc.caster = caster->GetGUID();
				SWProc.LastTrigger = 0;
				SWProc.ProcType = 0;
				SWProc.groupRelation[0] = 0;
				SWProc.groupRelation[1] = 0;
				SWProc.groupRelation[2] = 0;
				
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}

				p_target->m_procSpells.push_back(SWProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Warlock - Improved Felhunter
	/*case 54037:
	case 54038:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || p_target == NULL )
				return;

			if( apply )
			{
				ProcTriggerSpell SWProc;
				SWProc.origId = GetSpellProto()->Id;
				SWProc.spellId = 54425;
				SWProc.procChance = 100;
				SWProc.procFlags = GetSpellProto()->procFlags;// TODO
				SWProc.procFlagsExtra = GetSpellProto()->procFlagExtra;// TODO
				SWProc.procCharges = GetSpellProto()->procCharges;
				SWProc.deleted = false;
				SWProc.caster = caster->GetGUID();
				SWProc.LastTrigger = 0;
				SWProc.ProcType = 0;
				SWProc.groupRelation[0] = 0;
				SWProc.groupRelation[1] = 0;
				SWProc.groupRelation[2] = 0;
				
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}

				p_target->m_procSpells.push_back(SWProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;*/
	// Warlock - Improved Drain Soul
	case 18213:
	case 18372:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || p_target == NULL )
				return;

			if( apply )
			{
				ProcTriggerSpell SWProc;
				SWProc.origId = GetSpellProto()->Id;
				SWProc.spellId = 18371;
				SWProc.procChance = 100;
				SWProc.procFlags = PROC_ON_GAIN_EXPIERIENCE;
				SWProc.procFlagsExtra = CUSTOMPROC_ON_IGNORE_XP_HONOR_KILL;
				SWProc.procCharges = GetSpellProto()->procCharges;
				SWProc.deleted = false;
				SWProc.caster = caster->GetGUID();
				SWProc.LastTrigger = 0;
				SWProc.ProcType = 0;
				SWProc.groupRelation[0] = 0;
				SWProc.groupRelation[1] = 0;
				SWProc.groupRelation[2] = 0;
				
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}

				p_target->m_procSpells.push_back(SWProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Warlock - Soul Leech
	case 30293:
	case 30295:
	case 30296:
		{
			if( apply )
			{
				ProcTriggerSpell pts;
				pts.origId = GetSpellProto()->Id;
				pts.caster = GetUnitCaster()->GetGUID();
				pts.spellId = 30294;
				pts.procChance = GetSpellProto()->procChance;
				pts.procFlags = GetSpellProto()->procFlags;
				pts.procFlagsExtra = GetSpellProto()->procFlagExtra;
				pts.groupRelation[0] = 0;
				pts.groupRelation[1] = 0;
				pts.groupRelation[2] = 0;
				pts.ProcType = 0;
				pts.procCharges = GetSpellProto()->procCharges;
				pts.LastTrigger = 0;
				pts.deleted = false;
				m_target->m_procSpells.push_front(pts);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellId() && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Warlock - Seed of Corruption
	case 27243:
	case 47835:
	case 47836:
		{
			if( apply )
			{
				ProcTriggerSpell pts;
				pts.origId = GetSpellProto()->Id;
				pts.caster = GetUnitCaster()->GetGUID();

				switch( GetSpellProto()->Id )
				{
					case 27243:
						pts.spellId = 27285;
						break;
					case 47835:
						pts.spellId = 47833;
						break;
					case 47836:
						pts.spellId = 47834;
						break;
					default:
						pts.spellId = 0;
						break;
				}
				if( !pts.spellId )
					return;

				pts.procChance = GetSpellProto()->procChance;
				pts.procFlags = GetSpellProto()->procFlags;
				pts.procFlagsExtra = GetSpellProto()->procFlagExtra;
				pts.groupRelation[0] = 0;
				pts.groupRelation[1] = 0;
				pts.groupRelation[2] = 0;
				pts.ProcType = 0;
				pts.procCharges = GetSpellProto()->procCharges;
				pts.LastTrigger = 0;
				pts.deleted = false;
				m_target->m_procSpells.push_front(pts);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellId() && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Warlock - Demonic Knowledge
	case 35696:
		{
			if ( m_target->IsPet() )
			{
				Player* PetOwner = static_cast< Pet* >( m_target )->GetPetOwner();
				if( PetOwner != NULL  )
				{
					uint32 val1 = m_target->GetUInt32Value( UNIT_FIELD_STAT2 ); // stamina
					uint32 val2 = m_target->GetUInt32Value( UNIT_FIELD_STAT3 ); // intellect
					uint32 val0 = val1 + val2;
					float dmginc = (float)( val0 * mod->m_amount ) / 100;
					int32 val;

					if( apply )
						val = (int32)dmginc;
					else
						val = (int32)-dmginc;

					for (uint32 x=0;x<7;x++)
						PetOwner->ModUnsigned32Value(PLAYER_FIELD_MOD_DAMAGE_DONE_POS + x, val);

					PetOwner->CalcDamage();
				}
			}
		}break;
	// Warlock - Eye of Kilrogg
	case 126:
		{
			if( !apply )
			{
				if( m_target->IsPlayer() )
				{
					Player * pCaster = TO_PLAYER(m_target);
					Creature *summon = pCaster->m_eyeofkilrogg;
					pCaster->UnPossess();
					if(summon)
						summon->DeleteMe();
					pCaster->m_eyeofkilrogg = 0;
					pCaster->SetUInt64Value(PLAYER_FARSIGHT,0);
				}
			}
		}break;
	// Warlock - Improved Life Tap
	case 18182:
	case 18183:
		{
			if( p_target == NULL )
				return;

			if( apply )
				p_target->m_lifetapbonus = mod->m_amount;
			else
				p_target->m_lifetapbonus = 0;
		}break;
	// Warlock - Soulstone Resurrection
	case 20707:
		{
			if( p_target == NULL )
				return;		
			if(apply)
			{
				p_target->SetSoulStone(3026);
				p_target->SetSoulStoneReceiver((uint32)m_casterGuid);
			}
			else if( m_target->isAlive() )
			{
				p_target->SetSoulStone(0);
				p_target->SetSoulStoneReceiver(0);
			}
		}break;
	case 20762:
		{
			if( p_target == NULL )
				return;	

			if( apply )
			{
				p_target->SoulStone = 20758;
				p_target->SoulStoneReceiver = (uint32)m_casterGuid;
			}
			else if( m_target->isAlive() )
				p_target->SoulStone = p_target->SoulStoneReceiver = 0;
		}break;
	case 20763:
		{
			if( p_target == NULL )
				return;
			if(apply)
			{
				p_target->SoulStone = 20759;
				p_target->SoulStoneReceiver = (uint32)m_casterGuid;
			}
			else if(m_target->isAlive())
				p_target->SoulStone = p_target->SoulStoneReceiver = 0;
		}break;
	case 20764:
		{
			if( p_target == NULL )
				return;
			if(apply)
			{
				p_target->SoulStone = 20760;
				p_target->SoulStoneReceiver = (uint32)m_casterGuid;
			}
			else if(m_target->isAlive())
				p_target->SoulStone = p_target->SoulStoneReceiver = 0;
		}break;
	case 20765:
		{
			if( p_target == NULL )
				return;
			if(apply)
			{
				p_target->SoulStone = 20761;
				p_target->SoulStoneReceiver = (uint32)m_casterGuid;
			}
			else if(m_target->isAlive())
				p_target->SoulStone = p_target->SoulStoneReceiver = 0;
		}break;
	case 27239:
		{
			if( p_target == NULL )
				return;

			if(apply)
			{
				p_target->SoulStone = 27240;
				p_target->SoulStoneReceiver = (uint32)m_casterGuid;
			}
			else if(m_target->isAlive())
				p_target->SoulStone = p_target->SoulStoneReceiver = 0;
		}break;
	case 47883:
		{
			if( p_target == NULL )
				return;

			if(apply)
			{
				p_target->SoulStone = 47882;
				p_target->SoulStoneReceiver = (uint32)m_casterGuid;
			}
			else if(m_target->isAlive())
				p_target->SoulStone = p_target->SoulStoneReceiver = 0;
		}break;
	// Warrior - Damage Shield
	case 58872:
	case 58874:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || p_target == NULL )
				return;

			if( apply )
			{
				ProcTriggerSpell DSProc;
				DSProc.origId = GetSpellProto()->Id;

				if( GetSpellProto()->Id == 58872 )
					DSProc.spellId = 59652;
				else if( GetSpellProto()->Id == 58874 )
					DSProc.spellId = 59653;

				DSProc.procChance = GetSpellProto()->procChance;
				DSProc.procFlags = GetSpellProto()->procFlags;
				DSProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
				DSProc.procCharges = GetSpellProto()->procCharges;
				DSProc.deleted = false;
				DSProc.caster = caster->GetGUID();
				DSProc.LastTrigger = 0;
				DSProc.ProcType = 0;
				DSProc.groupRelation[0] = 0;
				DSProc.groupRelation[1] = 0;
				DSProc.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(DSProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Warrior - Retaliation
	case 20230:
		{
			Unit* caster = GetUnitCaster();
			if( caster == NULL || p_target == NULL )
				return;

			if( apply )
			{
				ProcTriggerSpell CttCProc;
				CttCProc.origId = GetSpellProto()->Id;
				CttCProc.spellId = 22858;
				CttCProc.procChance = GetSpellProto()->procChance;
				CttCProc.procFlags = GetSpellProto()->procFlags;
				CttCProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
				CttCProc.procCharges = GetSpellProto()->procCharges;
				CttCProc.deleted = false;
				CttCProc.caster = caster->GetGUID();
				CttCProc.LastTrigger = 0;
				CttCProc.ProcType = 0;
				CttCProc.groupRelation[0] = 0;
				CttCProc.groupRelation[1] = 0;
				CttCProc.groupRelation[2] = 0;
				p_target->m_procSpells.push_back(CttCProc);
			}
			else
			{
				for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
				{
					if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
					{
						itr->deleted = true;
						break;
					}
				}
			}
		}break;
	// Warrior - Second Wind - triggers only on stun and Immobilize
	case 29834:
		{
			Unit *caster = GetUnitCaster();
			if(caster && caster->IsPlayer())
				static_cast< Player* >(caster)->SetTriggerStunOrImmobilize( 29841, 100, true );//fixed 100% chance
		}break;
	case 29838:
		{
			Unit *caster = GetUnitCaster();
			if(caster && caster->IsPlayer())
				static_cast< Player* >(caster)->SetTriggerStunOrImmobilize( 29842, 100, true );//fixed 100% chance
		}break;
	// Warrior - Sweeping Strikes
	case 12328:
		{
			if(apply)
				m_target->AddExtraStrikeTarget(GetSpellProto(), 10);
			else
				m_target->RemoveExtraStrikeTarget(GetSpellProto());
		}break;
	// Warrior - Tactical Mastery
	case 12295:
	// Warrior - Stance Mastery
	case 12676:
	case 12677:
	case 12678:
		{
			if( p_target == NULL )
				return;
			if(apply)
				p_target->m_retainedrage += mod->m_amount*10; //don't really know if value is all value or needs to be multiplied with 10
			else
				p_target->m_retainedrage -= mod->m_amount*10;
		}break;
	// Death Knight - Bladed Armor - handled by aura?
	/*case 48978:
	case 49390:
	case 49391:
	case 49392:
	case 49393:
		{
			if(apply)
			{
				uint32 mod1 = m_target->GetUInt32Value(UNIT_FIELD_RESISTANCES);
				uint32 mod2 = m_spellProto->EffectBasePoints[0] + 1; //Thanks Andy for pointing out that BasePoints
				uint32 mod3 = m_spellProto->EffectBasePoints[1] + 1; //Should always be used instead of static modifiers.
				mod->realamount = (mod->m_amount + (mod1/mod3)*mod2 );
				m_target->ModUnsigned32Value(UNIT_FIELD_ATTACK_POWER_MODS,mod->realamount);
			}
			else
			{
				m_target->ModUnsigned32Value(UNIT_FIELD_ATTACK_POWER_MODS, -mod->realamount);
			}

			m_target->CalcDamage();
		}break;*/
	//Darkmoon Card: Twisting Nether give 10% chance to self resurrect ->cast 23700
	case 23701:
		{
			// TODO
		}break;
	// Deserter
	case 26013: 
	// Hypothermia(Iceblock:D)
	case 41425: 
		{
			SetNegative();
		}break;
	// Area spirit healer aura for BG's
	case 2584:			
		{
			if( p_target == NULL || apply )		// already applied in opcode handler
				return;

			uint64 crtguid = p_target->m_areaSpiritHealer_guid;
			Creature* pCreature = p_target->IsInWorld() ? p_target->GetMapMgr()->GetCreature(GET_LOWGUID_PART(crtguid)) : NULL;
			if( pCreature== NULL || p_target->m_bg == NULL )
				return;

			p_target->m_bg->RemovePlayerFromResurrect( p_target, pCreature );
		}break;
	// Requires No Ammo
	case 46699:
		{
			if( p_target )
				p_target->m_requiresNoAmmo = apply;

		}break;
	// Taming Rod Spells
	case 19548:	
		{                 //invoke damage to trigger attack
			if( apply )
			{
				m_target->GetAIInterface()->AttackReaction( GetUnitCaster(), 10, 0 );
				break;
			}
			else
				TamingSpellid = 19597; //uses Spelleffect3 #19614
		}break;
	case 19674:	
		{
			if( apply )
			{
				m_target->GetAIInterface()->AttackReaction( GetUnitCaster(), 10, 0 );
				break;
			}
			else
				TamingSpellid = 19677;
		}break;
	case 19687:	
		{
			if( apply )
			{
				m_target->GetAIInterface()->AttackReaction( GetUnitCaster(), 10, 0 );
				break;
			}
			else
				TamingSpellid = 19676;
		}break;
	case 19688:	
		{
			if( apply )
			{
				m_target->GetAIInterface()->AttackReaction( GetUnitCaster(), 10, 0 );
				break;
			}
			else
				TamingSpellid = 19678;
		}break;
	case 19689:	
		{
			if( apply )
			{
				m_target->GetAIInterface()->AttackReaction( GetUnitCaster(), 10, 0 );
				break;
			}
			else
				TamingSpellid = 19679;
		}break;
	case 19692:	
		{
			if( apply )
			{
				m_target->GetAIInterface()->AttackReaction( GetUnitCaster(), 10, 0 );
				break;
			}
			else
				TamingSpellid = 19680;
		}break;
	case 19693:	
		{
			if( apply )
			{
				m_target->GetAIInterface()->AttackReaction( GetUnitCaster(), 10, 0 );
				break;
			}
			else
				TamingSpellid = 19684;
		}break;
	case 19694:	
		{
			if( apply )
			{
				m_target->GetAIInterface()->AttackReaction( GetUnitCaster(), 10, 0 );
				break;
			}
			else
				TamingSpellid = 19681;
		}break;
	case 19696:	
		{
			if( apply )
			{
				m_target->GetAIInterface()->AttackReaction( GetUnitCaster(), 10, 0 );
				break;
			}
			else
				TamingSpellid = 19682;
		}break;
	case 19697:	
		{
			if( apply )
			{
				m_target->GetAIInterface()->AttackReaction( GetUnitCaster(), 10, 0 );
				break;
			}
			else
				TamingSpellid = 19683;
		}break;
	case 19699:	
		{
			if( apply )
			{
				m_target->GetAIInterface()->AttackReaction( GetUnitCaster(), 10, 0 );
				break;
			}
			else
				TamingSpellid = 19685;
		}break;
	case 19700:	
		{
			if( apply )
			{
				m_target->GetAIInterface()->AttackReaction( GetUnitCaster(), 10, 0 );
				break;
			}
			else
				TamingSpellid = 19686;
		}break;
	case 30099:	
		{
			if( apply )
			{
				m_target->GetAIInterface()->AttackReaction( GetUnitCaster(), 10, 0 );
				break;
			}
			else
				TamingSpellid = 30100;
		}break;
	case 30102:	
		{
			if( apply )
			{
				m_target->GetAIInterface()->AttackReaction( GetUnitCaster(), 10, 0 );
				break;
			}
			else
				TamingSpellid = 30103;
		}break;
	case 30105:	
		{
			if( apply )
			{
				m_target->GetAIInterface()->AttackReaction( GetUnitCaster(), 10, 0 );
				break;
			}
			else
				TamingSpellid = 30104;
		}break;
	case 30646:	
		{
			if( apply )
			{
				m_target->GetAIInterface()->AttackReaction( GetUnitCaster(), 10, 0 );
				break;
			}
			else
				TamingSpellid = 30647;
		}break;
	case 30653:	
		{
			if( apply )
			{
				m_target->GetAIInterface()->AttackReaction( GetUnitCaster(), 10, 0 );
				break;
			}
			else
				TamingSpellid = 30648;
		}break;
	case 30654:	
		{
			if( apply )
			{
				m_target->GetAIInterface()->AttackReaction( GetUnitCaster(), 10, 0 );
				break;
			}
			else
				TamingSpellid = 30648;
		}break;
	}
	
	Unit * caster = GetUnitCaster();
	if( TamingSpellid && caster && caster->IsPlayer() )
	{
		Player *p_caster = static_cast< Player* >( caster );
		SpellEntry *triggerspell = dbcSpell.LookupEntry( TamingSpellid );
		Quest* tamequest = QuestStorage.LookupEntry( triggerspell->EffectMiscValue[1] );
		if ( !p_caster->GetQuestLogForEntry(tamequest->id ) || m_target->GetEntry() != static_cast<uint32>( tamequest->required_mob[0] ))
		{
			p_caster->SendCastResult( triggerspell->Id, SPELL_FAILED_BAD_TARGETS, 0, 0 );
		}
		else if( !GetTimeLeft() )
		{
			// Creates a 15 minute pet, if player has the quest that goes with the spell and if target corresponds to quest
			if( Rand( 75.0f ) )// 75% chance on success
			{
				
				if( m_target->GetTypeId() == TYPEID_UNIT )
				{
					Creature *tamed = ( Creature* ) m_target;
					tamed->GetAIInterface()->HandleEvent( EVENT_LEAVECOMBAT, p_caster, 0 );
					
					Pet *pPet = objmgr.CreatePet( tamed->GetEntry() );
					pPet->CreateAsSummon( tamed->GetEntry(), tamed->GetCreatureInfo(), tamed, p_caster, triggerspell, 2, 900000 );
					tamed->SafeDelete();
					
					QuestLogEntry *qle = p_caster->GetQuestLogForEntry( tamequest->id );
					if( qle != NULL )
					{
						qle->SetMobCount( 0, 1 );
						qle->SendUpdateAddKill( 1 );
						qle->UpdatePlayerFields();
						qle->SendQuestComplete();
					}
				}
			}
			else
			{
				p_caster->SendCastResult( triggerspell->Id,SPELL_FAILED_TRY_AGAIN,0,0 );
			}
		}
		TamingSpellid = 0;
	}
}

void Aura::SpellAuraModConfuse(bool apply)
{
	Unit* u_caster = GetUnitCaster();

	if( m_target->GetTypeId() == TYPEID_UNIT && static_cast<Creature*>(m_target)->IsTotem() )
		return;

	if(apply)
	{
		if( u_caster == NULL ) return;

		// Check Mechanic Immunity
		if( m_target )
		{
			if( m_target->MechanicsDispels[MECHANIC_DISORIENTED]
			|| ( m_spellProto->MechanicsType == MECHANIC_POLYMORPHED && m_target->MechanicsDispels[MECHANIC_POLYMORPHED] )
			)
			{
				m_flags |= 1 << mod->i;
				return;
			}
		}
		SetNegative();

		m_target->m_special_state |= UNIT_STATE_CONFUSE;
		m_target->SetFlag(UNIT_FIELD_FLAGS, UNIT_FLAG_CONFUSED);

		m_target->setAItoUse(true);
		m_target->GetAIInterface()->HandleEvent(EVENT_WANDER, u_caster, 0);

		if(p_target)
		{
			// this is a hackfix to stop player from moving -> see AIInterface::_UpdateMovement() Wander AI for more info
			WorldPacket data1(9);
			data1.Initialize( SMSG_CLIENT_CONTROL_UPDATE );
			data1 << m_target->GetNewGUID() << uint8(0x00);
			p_target->GetSession()->SendPacket(&data1);
			p_target->SpeedCheatDelay( GetDuration() );
		}
	}
	else if( (m_flags & (1 << mod->i)) == 0 ) //add these checks to mods where immunity can cancel only 1 mod and not whole spell
	{
		m_target->m_special_state &= ~UNIT_STATE_CONFUSE;
		m_target->RemoveFlag(UNIT_FIELD_FLAGS, UNIT_FLAG_CONFUSED);
		if( p_target )
			p_target->SpeedCheatReset();

		m_target->GetAIInterface()->HandleEvent( EVENT_UNWANDER, NULL, 0 );

		if(p_target)
		{
			// re-enable movement
			WorldPacket data1(9);
			data1.Initialize( SMSG_CLIENT_CONTROL_UPDATE );
			data1 << m_target->GetNewGUID() << uint8(0x01);
			p_target->GetSession()->SendPacket(&data1);

			m_target->setAItoUse(false);

			if( u_caster != NULL )
				sHookInterface.OnEnterCombat( p_target, u_caster );
		}
		else
			m_target->GetAIInterface()->AttackReaction(u_caster, 1, 0);
	}
}

void Aura::SpellAuraModCharm(bool apply)
{
	Unit* ucaster = GetUnitCaster();
	Player* caster = static_cast< Player* >( ucaster );
	Creature* target = static_cast< Creature* >( m_target );

	SetPositive(3); //we ignore the other 2 effect of this spell and force it to be a positive spell

	if( m_target == NULL || m_target->GetTypeId() != TYPEID_UNIT )
		return;

	if( static_cast< Creature* >( m_target )->IsTotem() )
		return;

	if( ucaster == NULL || ucaster->GetTypeId() != TYPEID_PLAYER )
		return;

	if( apply )
	{
		if( (int32)m_target->getLevel() > mod->m_amount || m_target->IsPet() )
			return;

		// this should be done properly
		if( target->GetEnslaveCount() >= 10 )
			return;

		if( caster->GetUInt64Value( UNIT_FIELD_CHARM ) != 0 )
			return;

		m_target->m_special_state |= UNIT_STATE_CHARM;
		m_target->SetCharmTempVal( m_target->GetUInt32Value( UNIT_FIELD_FACTIONTEMPLATE ) );
		m_target->SetUInt32Value(UNIT_FIELD_FACTIONTEMPLATE, caster->GetUInt32Value(UNIT_FIELD_FACTIONTEMPLATE));
		m_target->_setFaction();
		m_target->UpdateOppFactionSet();
		m_target->GetAIInterface()->Init(m_target, AITYPE_PET, MOVEMENTTYPE_NONE, caster);
		m_target->SetUInt64Value(UNIT_FIELD_CHARMEDBY, caster->GetGUID());
		caster->SetUInt64Value(UNIT_FIELD_CHARM, target->GetGUID());
		//damn it, the other effects of enslave demon will agro him on us anyway :S
		m_target->GetAIInterface()->WipeHateList();
		m_target->GetAIInterface()->WipeTargetList();
		m_target->GetAIInterface()->SetNextTarget( (Unit*)NULL);

		target->SetEnslaveCount(target->GetEnslaveCount() + 1);

		if( caster->GetSession() ) // crashfix
		{
			WorldPacket data(SMSG_PET_SPELLS, 500);
			data << target->GetGUID();
			data << uint16(0);
			data << uint32(0x1000);
			data << uint32(0x100);
			data << uint32(PET_SPELL_ATTACK);
			data << uint32(PET_SPELL_FOLLOW);
			data << uint32(PET_SPELL_STAY);
			for(int i = 0; i < 4; i++)
				data << uint32(0);
			data << uint32(PET_SPELL_AGRESSIVE);
			data << uint32(PET_SPELL_DEFENSIVE);
			data << uint32(PET_SPELL_PASSIVE);
			caster->GetSession()->SendPacket(&data);
			target->SetEnslaveSpell(m_spellProto->Id);
		}
	}
	else
	{
		m_target->m_special_state &= ~UNIT_STATE_CHARM;
		m_target->SetUInt32Value( UNIT_FIELD_FACTIONTEMPLATE, m_target->GetCharmTempVal() );
		m_target->_setFaction();
		m_target->GetAIInterface()->WipeHateList();
		m_target->GetAIInterface()->WipeTargetList();
		m_target->UpdateOppFactionSet();
		m_target->GetAIInterface()->Init(m_target, AITYPE_AGRO, MOVEMENTTYPE_NONE);
		m_target->SetUInt64Value(UNIT_FIELD_CHARMEDBY, 0);

		if( caster != NULL && caster->GetSession() != NULL ) // crashfix
		{
			caster->SetUInt64Value(UNIT_FIELD_CHARM, 0);
			WorldPacket data(SMSG_PET_SPELLS, 8);
			data << uint64(0);
			caster->GetSession()->SendPacket(&data);
			target->SetEnslaveSpell(0);
		}
	}
}

void Aura::SpellAuraModFear(bool apply)
{
	Unit* u_caster = GetUnitCaster();

	if( m_target->GetTypeId() == TYPEID_UNIT && static_cast<Creature*>(m_target)->IsTotem() )
		return;

	if(apply)
	{
		if( u_caster == NULL ) return;
		// Check Mechanic Immunity
		if( m_target )
		{
			if( m_target->MechanicsDispels[MECHANIC_FLEEING] )
			{
				m_flags |= 1 << mod->i;
				return;
			}
		}

		SetNegative();

		m_target->m_special_state |= UNIT_STATE_FEAR;
		m_target->SetFlag(UNIT_FIELD_FLAGS, UNIT_FLAG_FLEEING);

		m_target->setAItoUse(true);
		m_target->GetAIInterface()->HandleEvent(EVENT_FEAR, u_caster, 0);
		m_target->m_fearmodifiers++;
		if(p_target)
		{
			// this is a hackfix to stop player from moving -> see AIInterface::_UpdateMovement() Fear AI for more info
			WorldPacket data1(9);
			data1.Initialize( SMSG_CLIENT_CONTROL_UPDATE );
			data1 << m_target->GetNewGUID() << uint8(0x00);
			p_target->GetSession()->SendPacket(&data1);
			p_target->SpeedCheatDelay( GetDuration() );
		}
	}
	else if( (m_flags & (1 << mod->i)) == 0 ) //add these checks to mods where immunity can cancel only 1 mod and not whole spell
	{
		m_target->m_fearmodifiers--;

		if(m_target->m_fearmodifiers <= 0)
		{
			m_target->m_special_state &= ~UNIT_STATE_FEAR;
			m_target->RemoveFlag(UNIT_FIELD_FLAGS, UNIT_FLAG_FLEEING);

			m_target->GetAIInterface()->HandleEvent( EVENT_UNFEAR, NULL, 0 );

			if(p_target)
			{
				// re-enable movement
				WorldPacket data1(9);
				data1.Initialize( SMSG_CLIENT_CONTROL_UPDATE );
				data1 << m_target->GetNewGUID() << uint8(0x01);
				p_target->GetSession()->SendPacket(&data1);

				m_target->setAItoUse(false);

				if( u_caster != NULL )
					sHookInterface.OnEnterCombat( p_target, u_caster );
				p_target->SpeedCheatReset();
			}
			else
				m_target->GetAIInterface()->AttackReaction(u_caster, 1, 0);
		}

		// Warlock - Improved Fear
		if( GetSpellProto()->NameHash == SPELL_HASH_FEAR && u_caster->IsPlayer() )
		{
			if( u_caster->HasAura(53754) )
				u_caster->CastSpell( m_target, 60946, true);
			else if( u_caster->HasAura(53759) )
				u_caster->CastSpell( m_target, 60947, true);
		}
	}
}

void Aura::SpellAuraPeriodicHeal( bool apply )
{
	if( apply )
	{
		SetPositive();

		int32 val = mod->m_amount;
		int32 amplitude = GetSpellProto()->EffectAmplitude[mod->i];
		if( amplitude <= 0 )
			amplitude = 3000;

		Unit *c = GetUnitCaster();
		if( c )
			val = c->GetSpellDmgBonus( m_target, m_spellProto, val, true, true );

		if (val > 0) 
		{
			sEventMgr.AddEvent( this, &Aura::EventPeriodicHeal,(uint32)val, EVENT_AURA_PERIODIC_HEAL, amplitude, 0, EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT );

			if( GetSpellProto()->NameHash == SPELL_HASH_REJUVENATION || GetSpellProto()->NameHash == SPELL_HASH_REGROWTH )
			{
				m_target->SetFlag(UNIT_FIELD_AURASTATE,AURASTATE_FLAG_REJUVENATE);
				if(!sEventMgr.HasEvent( m_target, EVENT_REJUVENATION_FLAG_EXPIRE ) )
				{
					sEventMgr.AddEvent( m_target, &Unit::EventAurastateExpire, (uint32)AURASTATE_FLAG_REJUVENATE, EVENT_REJUVENATION_FLAG_EXPIRE, GetDuration(), 1, 0 );
				}
				else
				{
					sEventMgr.ModifyEventTimeLeft( m_target,EVENT_REJUVENATION_FLAG_EXPIRE, GetDuration(), 0 );
				}
			}
			else if( GetSpellProto()->NameHash == SPELL_HASH_RENEW ) // Empowered Renew
			{
				val = ( val * GetSpellProto()->EffectMiscValue[1] ) /100;

				SpellEntry *spellInfo = dbcSpell.LookupEntry( 63544 );
				if( !spellInfo )
					return;

				Spell *sp = new Spell( m_target, spellInfo, true, NULL );
				if( !sp )
					return;

				sp->forced_basepoints[0] = val;
				SpellCastTargets tgt;
				tgt.m_unitTarget = m_target->GetGUID();
				sp->prepare( &tgt );
			}
		}
	}
}

void Aura::EventPeriodicHeal( uint32 amount )
{
	if( !m_target->isAlive() )
		return;

	int32 add = amount;

	uint32 curHealth = m_target->GetUInt32Value(UNIT_FIELD_HEALTH);
	uint32 maxHealth = m_target->GetUInt32Value(UNIT_FIELD_MAXHEALTH);

	if((curHealth + add) >= maxHealth)
	{
		add = maxHealth - curHealth;
	}

	if (add > 0)
		m_target->ModUnsigned32Value(UNIT_FIELD_HEALTH, add);

	m_target->RemoveAurasByHeal();

	if( GetSpellProto()->AuraInterruptFlags & AURA_INTERRUPT_ON_STAND_UP )
	{
		m_target->Emote( EMOTE_ONESHOT_EAT );
	}

	SendPeriodicHealAuraLog( amount, false);

	Unit* u_caster = GetUnitCaster();
	if( !u_caster )
		return;

	// Druid - Revitalize
	if( ( GetSpellProto()->NameHash == SPELL_HASH_REJUVENATION || GetSpellProto()->NameHash == SPELL_HASH_WILD_GROWTH ) && u_caster->HasAurasWithNameHash(SPELL_HASH_REVITALIZE) )
	{
		uint8 chance = 0;
		if( u_caster->HasAura(48539) )
			chance = 5;
		else if( u_caster->HasAura(48544) )
			chance = 10;
		else if( u_caster->HasAura(48545) )
			chance = 15;

		if( Rand(chance) )
		{
			uint32 spellid = 0;
			switch( m_target->GetPowerType() )
			{
			case POWER_TYPE_MANA:
				spellid = 48542;
				break;
			case POWER_TYPE_RAGE:
				spellid = 48541;
				break;
			case POWER_TYPE_ENERGY:
				spellid = 48540;
				break;
			case POWER_TYPE_RUNIC_POWER:
				spellid = 48543;
				break;
			}

			if( !spellid )
				return;

			SpellEntry *spellInfo = dbcSpell.LookupEntry( spellid );
			if( !spellInfo )
				return;

			Spell *spell = new Spell( u_caster, spellInfo, true, NULL );
			if( !spell )
				return;

			if( spellid == 48542 )
				spell->forced_basepoints[0] = ( m_target->GetUInt32Value(UNIT_FIELD_MAXPOWER1) /100 );

			SpellCastTargets targets;
			targets.m_unitTarget = m_target->GetGUID();
			spell->prepare( &targets );
		}
	}

	// add threat
	if( u_caster != NULL )
	{
		if (GetSpellProto()->NameHash == SPELL_HASH_HEALTH_FUNNEL && add > 0)
		{
			dealdamage sdmg;

			sdmg.full_damage = add;
			sdmg.resisted_damage = 0;
			sdmg.school_type = 0;
			u_caster->DealDamage(u_caster, add, 0, 0, 0);
			u_caster->SendAttackerStateUpdate(u_caster, u_caster, &sdmg, add, 0, 0, 0, ATTACK);
		}

		std::vector<Unit*> target_threat;
		int count = 0;
		for(std::set<Object*>::iterator itr = u_caster->GetInRangeSetBegin(); itr != u_caster->GetInRangeSetEnd(); ++itr)
		{
			if((*itr)->GetTypeId() != TYPEID_UNIT || !static_cast<Unit *>(*itr)->CombatStatus.IsInCombat() || (static_cast<Unit *>(*itr)->GetAIInterface()->getThreatByPtr(u_caster) == 0 && static_cast<Unit *>(*itr)->GetAIInterface()->getThreatByPtr(m_target) == 0))
				continue;

			if( !(u_caster->GetPhase() & (*itr)->GetPhase()) ) //Can't see, no threat
				continue;

			target_threat.push_back(static_cast<Unit *>(*itr));
			count++;
		}
		if (count == 0)
			return;

		add = add / count;

		for(std::vector<Unit*>::iterator itr = target_threat.begin(); itr != target_threat.end(); ++itr)
		{
			static_cast<Unit *>(*itr)->GetAIInterface()->HealReaction(u_caster, m_target, m_spellProto, add);
		}

		if(m_target->IsInWorld() && u_caster->IsInWorld())
			u_caster->CombatStatus.WeHealed(m_target);
	}
}

void Aura::SpellAuraModAttackSpeed( bool apply )
{
	if( mod->m_amount < 0 )
		SetNegative();
	else
		SetPositive();

	if ( m_target->GetTypeId() == TYPEID_PLAYER )
	{
		if(apply)
		{

			static_cast< Player* >( m_target )->ModAttackSpeed( mod->m_amount, MOD_MELEE );
		}
		else
		{
			static_cast< Player* >( m_target )->ModAttackSpeed( -mod->m_amount, MOD_MELEE );
		}
		static_cast< Player* >( m_target )->UpdateStats();
	}
	else
	{
		if(apply)
		{
			mod->fixed_amount[0] = m_target->GetModPUInt32Value(UNIT_FIELD_BASEATTACKTIME,mod->m_amount);
			mod->fixed_amount[1] = m_target->GetModPUInt32Value(UNIT_FIELD_BASEATTACKTIME+1,mod->m_amount);
			mod->fixed_amount[2] = m_target->GetModPUInt32Value(UNIT_FIELD_RANGEDATTACKTIME,mod->m_amount);
			m_target->ModUnsigned32Value(UNIT_FIELD_BASEATTACKTIME, -mod->fixed_amount[0]);
			m_target->ModUnsigned32Value(UNIT_FIELD_BASEATTACKTIME+1, -mod->fixed_amount[1]);
			m_target->ModUnsigned32Value(UNIT_FIELD_RANGEDATTACKTIME, -mod->fixed_amount[2]);
		}
		else
		{
			m_target->ModUnsigned32Value(UNIT_FIELD_BASEATTACKTIME, mod->fixed_amount[0]);
			m_target->ModUnsigned32Value(UNIT_FIELD_BASEATTACKTIME+1, mod->fixed_amount[1]);
			m_target->ModUnsigned32Value(UNIT_FIELD_RANGEDATTACKTIME, mod->fixed_amount[2]);
		}
	}

}

void Aura::SpellAuraModThreatGenerated(bool apply)
{
	if(!m_target)
		return;

	mod->m_amount < 0 ? SetPositive() : SetNegative();
	for( uint32 x = 0; x < 7; x++ )
	{
		if( mod->m_miscValue & ( ( (uint32)1 ) << x ) )
		{
			if ( apply )
				m_target->ModGeneratedThreatModifyer(x, mod->m_amount);
			else
				m_target->ModGeneratedThreatModifyer(x, -(mod->m_amount));
		}
	}
}

void Aura::SpellAuraModTaunt(bool apply)
{
	Unit* m_caster = GetUnitCaster();
	if(!m_caster || !m_caster->isAlive())
		return;

	SetNegative();

	if(apply)
	{
		m_target->GetAIInterface()->AttackReaction(m_caster, 1, 0);
		m_target->GetAIInterface()->taunt(m_caster, true);
	}
	else
	{
		if(m_target->GetAIInterface()->getTauntedBy() == m_caster)
		{
			m_target->GetAIInterface()->taunt(m_caster, false);
		}
	}
}

void Aura::SpellAuraModStun(bool apply)
{
	Unit *caster = GetUnitCaster();

	if( apply )
	{
		// Check Mechanic Immunity
		// Stun is a tricky one... it's used for all different kinds of mechanics as a base Aura
		if( !IsPositive() && m_spellProto->NameHash != SPELL_HASH_ICE_BLOCK )  // ice block stuns you, don't want our own spells to ignore stun effects
		{
			if( ( m_spellProto->MechanicsType == MECHANIC_CHARMED &&  m_target->MechanicsDispels[MECHANIC_CHARMED] )
			|| ( m_spellProto->MechanicsType == MECHANIC_INCAPACIPATED && m_target->MechanicsDispels[MECHANIC_INCAPACIPATED] )

			|| ( m_spellProto->MechanicsType == MECHANIC_SAPPED && m_target->MechanicsDispels[MECHANIC_SAPPED] )
			|| ( m_target->MechanicsDispels[MECHANIC_STUNNED] )
				)
			{
				m_flags |= 1 << mod->i;
				return;
			}
		}
		SetNegative();

		m_target->m_rooted++;

		if( m_target->m_rooted == 1 )
			m_target->Root();

		if( m_target->IsStealth() )
			m_target->RemoveStealth();

		m_target->m_stunned++;
		m_target->m_special_state |= UNIT_STATE_STUN;
		m_target->SetFlag(UNIT_FIELD_FLAGS, UNIT_FLAG_STUNNED);

		if(m_target->GetTypeId() == TYPEID_UNIT)
			m_target->GetAIInterface()->SetNextTarget( (Unit*)NULL );

		// remove the current spell (for channalers)
		if(m_target->m_currentSpell && m_target->GetGUID() != m_casterGuid &&
			m_target->m_currentSpell->getState() == SPELL_STATE_CASTING )
		{
			m_target->m_currentSpell->cancel();
			m_target->m_currentSpell = 0;
		}

		//warrior talent - second wind triggers on stun and immobilize. This is not used as proc to be triggered always !
		if( caster != NULL )
		{
			caster->EventStunOrImmobilize( m_target );
			m_target->EventStunOrImmobilize( caster, true );
		}
		if( m_target->IsCasting() )
			m_target->CancelSpell(NULL); //cancel spells.
	}
	else if( (m_flags & (1 << mod->i)) == 0 ) //add these checks to mods where immunity can cancel only 1 mod and not whole spell
	{
		m_target->m_rooted--;

		if(m_target->m_rooted == 0)
			m_target->Unroot();

		m_target->m_stunned--;

		if(m_target->m_stunned == 0)
		{
			m_target->m_special_state &= ~UNIT_STATE_STUN;
			m_target->RemoveFlag(UNIT_FIELD_FLAGS, UNIT_FLAG_STUNNED);
		}

		// attack them back.. we seem to lose this sometimes for some reason
		if(m_target->GetTypeId() == TYPEID_UNIT)
		{
			Unit * target = GetUnitCaster();
			if( m_target->GetAIInterface()->GetNextTarget() != NULL )
				target = m_target->GetAIInterface()->GetNextTarget();

			if( target == NULL )
				return;
			m_target->GetAIInterface()->AttackReaction( target, 1, 0 );
		}
	}
}

void Aura::SpellAuraModDamageDone(bool apply)
{
	int32 val;

	if( m_target->IsPlayer() )
	{
		uint32 index;

		if( mod->m_amount > 0 )
		{
			if( apply )
			{
				SetPositive();
				val = mod->m_amount;
			}
			else
			{
				val = -mod->m_amount;
			}
			index = PLAYER_FIELD_MOD_DAMAGE_DONE_POS;

		}
		else
		{
			if( apply )
			{
				SetNegative();
				val = -mod->m_amount;
			}
			else
			{
				val = mod->m_amount;
			}
			index = PLAYER_FIELD_MOD_DAMAGE_DONE_NEG;
		}

		for( uint32 x = 0; x < 7; x++ )
		{
			if( mod->m_miscValue & ( ( (uint32)1 ) << x ) )
			{
				m_target->ModUnsigned32Value( index + x, val );
			}
		}
	}
	else if( m_target->GetTypeId() == TYPEID_UNIT )
	{
		if( mod->m_amount > 0 )
		{
			if( apply )
			{
				SetPositive();
				val = mod->m_amount;
			}
			else
			{
				val = -mod->m_amount;
			}

		}
		else
		{
			if( apply )
			{
				SetNegative();
				val = mod->m_amount;
			}
			else
			{
				val = -mod->m_amount;
			}
		}

		for( uint32 x = 0; x < 7; x++ )
		{
			if( mod->m_miscValue & ( ( (uint32)1 ) << x ) )
			{
				static_cast< Creature* >( m_target )->ModDamageDone[x] += val;
			}
		}
	}

	if( mod->m_miscValue & 1 )
		m_target->CalcDamage();
}

void Aura::SpellAuraModDamageTaken(bool apply)
{
	int32 val = (apply) ? mod->m_amount : -mod->m_amount;
	for(uint32 x= 0;x<7;x++)
	{
		if (mod->m_miscValue & (((uint32)1)<<x) )
		{
			m_target->DamageTakenMod[x]+=val;
		}
	}
}

void Aura::SpellAuraDamageShield(bool apply)
{
	if(apply)
	{
		SetPositive();
		DamageProc ds;// = new DamageShield();
		ds.m_damage = mod->m_amount;
		ds.m_spellId = GetSpellProto()->Id;
		ds.m_school = GetSpellProto()->School;
		ds.m_flags = PROC_ON_MELEE_HIT_VICTIM | PROC_ON_MELEE_ABILITY_LAND_VICTIM | GetSpellProto()->procFlags; //maybe later we might want to add other flags too here
		ds.owner = (void*)this;
		m_target->m_damageShields.push_back(ds);
	}
	else
	{
		for(std::list<struct DamageProc>::iterator i = m_target->m_damageShields.begin();i != m_target->m_damageShields.end();i++)
		{
			if(i->owner==this)
			{
				 m_target->m_damageShields.erase(i);
				 return;
			}
		}
	}
}

void Aura::SpellAuraModStealth(bool apply)
{
	if(apply)
	{
		if(p_target && p_target->m_bgHasFlag)
		{
			if(p_target->m_bg && p_target->m_bg->GetType() == BATTLEGROUND_WARSONG_GULCH)
			{
				((WarsongGulch*)p_target->m_bg)->HookOnFlagDrop(p_target);
			}
			if(p_target->m_bg && p_target->m_bg->GetType() == BATTLEGROUND_EYE_OF_THE_STORM)
			{
				((EyeOfTheStorm*)p_target->m_bg)->HookOnFlagDrop(p_target);
			}
	     }

		SetPositive();
		if( m_spellProto->NameHash != SPELL_HASH_VANISH)
			m_target->SetStealth(GetSpellId());

		if( m_spellProto->NameHash == SPELL_HASH_STEALTH)
			m_target->SetFlag(UNIT_FIELD_BYTES_2,0x1E000000);//sneak anim

		m_target->SetFlag(UNIT_FIELD_BYTES_1, 0x020000);
		if( m_target->IsPlayer() )
			m_target->SetFlag(PLAYER_FIELD_BYTES2, 0x2000);

		m_target->RemoveAurasByInterruptFlag(AURA_INTERRUPT_ON_STEALTH | AURA_INTERRUPT_ON_INVINCIBLE);
		m_target->m_stealthLevel += mod->m_amount;

		if( m_target->HasAura(58426) ) // Rogue - Overkill
			m_target->CastSpell( m_target, 58427, true );

		// hack fix for vanish stuff
		if( m_spellProto->NameHash == SPELL_HASH_VANISH && m_target->GetTypeId() == TYPEID_PLAYER )	 // Vanish
		{

			m_target->AquireInrangeLock();
			for( Object::InRangeSet::iterator iter = m_target->GetInRangeSetBegin();iter != m_target->GetInRangeSetEnd(); ++iter )
			{
				if ((*iter) == NULL || !(*iter)->IsUnit())
					continue;

				Unit* _unit = static_cast< Unit* >( *iter );

				if( !_unit->isAlive() )
					continue;

				if( _unit->GetCurrentSpell() && _unit->GetCurrentSpell()->GetUnitTarget() == m_target)
					_unit->GetCurrentSpell()->cancel();

				if( _unit->GetAIInterface() != NULL )
					_unit->GetAIInterface()->RemoveThreatByPtr( m_target );
			}
			m_target->ReleaseInrangeLock();

			for( uint32 x = MAX_POSITIVE_AURAS_EXTEDED_START; x < MAX_POSITIVE_AURAS_EXTEDED_END; x++ )
			{
				if( m_target->m_auras[x] != NULL )
				{
					if( m_target->m_auras[x]->GetSpellProto()->MechanicsType == MECHANIC_ROOTED || m_target->m_auras[x]->GetSpellProto()->MechanicsType == MECHANIC_ENSNARED ) // Remove roots and slow spells
					{
						m_target->m_auras[x]->Remove();
					}
					else // if got immunity for slow, remove some that are not in the mechanics
					{
						for( int i = 0; i < 3; i++ )
						{
							uint32 AuraEntry = m_target->m_auras[x]->GetSpellProto()->EffectApplyAuraName[i];
							if( AuraEntry == SPELL_AURA_MOD_DECREASE_SPEED || AuraEntry == SPELL_AURA_MOD_ROOT || AuraEntry == SPELL_AURA_MOD_STALKED)
							{
								m_target->m_auras[x]->Remove();
								break;
							}
						}
					}
				}
			}

			// check for stealth spells
			if( p_target != NULL )
			{
				uint32 stealth_id = 0;
				SpellSet::iterator itr = p_target->mSpells.begin();
				SpellSet::iterator end = p_target->mSpells.end();
				for(; itr != end; ++itr)
				{
					if( ( (*itr) == 1787 || (*itr) == 1786 || (*itr) == 1785 || (*itr) == 1784) && stealth_id < (*itr) )
					{
						stealth_id = *itr;
					}
				}
				if( stealth_id != 0 )
					p_target->CastSpell( p_target, dbcSpell.LookupEntry( stealth_id ), true );

				if( p_target->IsMounted() )
					p_target->RemoveAura( p_target->m_MountSpellId );

				if( p_target->m_bg && p_target->m_bgHasFlag )
				{
					if( p_target->m_bg->GetType() == BATTLEGROUND_WARSONG_GULCH )
					{
						((WarsongGulch*)p_target->m_bg)->HookOnFlagDrop( p_target );
					}
					if( p_target->m_bg->GetType() == BATTLEGROUND_EYE_OF_THE_STORM)
					{
						((EyeOfTheStorm*)p_target->m_bg)->HookOnFlagDrop( p_target );
					}
				}
			}
		}
	}
	else
	{
		m_target->m_stealthLevel -= mod->m_amount;

		if( m_spellProto->NameHash != SPELL_HASH_VANISH )
		{
			m_target->SetStealth(0);
			m_target->RemoveFlag(UNIT_FIELD_BYTES_2,0x1E000000);

			m_target->RemoveFlag(UNIT_FIELD_BYTES_1, 0x020000);

			if( p_target != NULL )
			{
				p_target->RemoveFlag( PLAYER_FIELD_BYTES2, 0x2000 );
				packetSMSG_COOLDOWN_EVENT cd;
				cd.guid = p_target->GetGUID();
				cd.spellid = m_spellProto->Id;
				p_target->GetSession()->OutPacket( SMSG_COOLDOWN_EVENT, sizeof( packetSMSG_COOLDOWN_EVENT ), &cd );
			}
		}

		if( (m_target->HasAurasWithNameHash(SPELL_HASH_MASTER_OF_SUBTLETY) || m_target->HasAurasWithNameHash(SPELL_HASH_OVERKILL)) && m_spellProto->NameHash == SPELL_HASH_STEALTH )
		{
			for( uint32 x=MAX_POSITIVE_AURAS_EXTEDED_START ; x<MAX_POSITIVE_AURAS_EXTEDED_END; x++ )
			{
				if( m_target->m_auras[x] && m_target->m_auras[x]->GetSpellProto()->EffectApplyAuraName[0] != SPELL_AURA_DUMMY )
				{
					if( m_target->m_auras[x]->GetSpellProto()->NameHash == SPELL_HASH_MASTER_OF_SUBTLETY )
					{
						m_target->m_auras[x]->SetDuration(6000);
						//m_target->m_auras[x]->SetTimeLeft(6000);

						sEventMgr.AddEvent(m_target->m_auras[x], &Aura::Remove, EVENT_AURA_REMOVE, 6000, 1, EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT | EVENT_FLAG_DELETES_OBJECT);
					}

					if( m_target->m_auras[x]->GetSpellProto()->NameHash == SPELL_HASH_OVERKILL )
					{
						m_target->m_auras[x]->SetDuration(20000);

						sEventMgr.AddEvent(m_target->m_auras[x], &Aura::Remove, EVENT_AURA_REMOVE, 20000, 1, EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT | EVENT_FLAG_DELETES_OBJECT);
					}
				}
			}
		}
	}

	m_target->UpdateVisibility();
}

void Aura::SpellAuraModDetect(bool apply)
{
	if(apply)
	{
		//SetPositive();
		m_target->m_stealthDetectBonus += mod->m_amount;
	}
	else
		m_target->m_stealthDetectBonus -= mod->m_amount;
}

void Aura::SpellAuraModInvisibility(bool apply)
{
	SetPositive();
	if(m_spellProto->Effect[mod->i] == 128)
		return;

	if(apply)
	{
		m_target->SetInvisibility(GetSpellId());
		m_target->m_invisFlag = static_cast<uint8>( mod->m_miscValue );
		if( m_target->GetTypeId() == TYPEID_PLAYER )
		{
			if( GetSpellId() == 32612 )
				static_cast<Player*>(m_target)->SetFlag( PLAYER_FIELD_BYTES2, 0x4000 ); //Mage Invis self visual
		}

		m_target->RemoveAurasByInterruptFlag(AURA_INTERRUPT_ON_INVINCIBLE);
	}
	else
	{
		m_target->m_invisFlag = INVIS_FLAG_NORMAL;
		if( m_target->GetTypeId() == TYPEID_PLAYER )
		{
			if( GetSpellId() == 32612 )
				static_cast<Player*>(m_target)->RemoveFlag( PLAYER_FIELD_BYTES2, 0x4000 );
		}
	}

	m_target->m_invisible = apply;
	m_target->UpdateVisibility();
}

void Aura::SpellAuraModInvisibilityDetection(bool apply)
{
	//Always Positive

	assert(mod->m_miscValue < INVIS_FLAG_TOTAL);
	if(apply)
	{
		m_target->m_invisDetect[mod->m_miscValue] += mod->m_amount;
		SetPositive ();
	}
	else
		m_target->m_invisDetect[mod->m_miscValue] -= mod->m_amount;

	if(m_target->IsPlayer())
		static_cast< Player* >( m_target )->UpdateVisibility();
}

void Aura::SpellAuraModTotalHealthRegenPct(bool apply)
{
	if(apply)
	{
		SetPositive();
		sEventMgr.AddEvent(this, &Aura::EventPeriodicHealPct,(float)mod->m_amount,
			EVENT_AURA_PERIODIC_HEALPERC,	GetSpellProto()->EffectAmplitude[mod->i],0,EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
	}
}

void Aura::EventPeriodicHealPct(float RegenPct)
{
	if(!m_target->isAlive())
		return;

	uint32 add = float2int32(m_target->GetUInt32Value(UNIT_FIELD_MAXHEALTH) * (RegenPct / 100.0f));

	uint32 newHealth = m_target->GetUInt32Value(UNIT_FIELD_HEALTH) + add;

	if(newHealth <= m_target->GetUInt32Value(UNIT_FIELD_MAXHEALTH))
		m_target->SetUInt32Value(UNIT_FIELD_HEALTH, newHealth);
	else
		m_target->SetUInt32Value(UNIT_FIELD_HEALTH, m_target->GetUInt32Value(UNIT_FIELD_MAXHEALTH));

	SendPeriodicAuraLog(m_casterGuid, m_target, m_spellProto->Id, m_spellProto->School, add, 0, 0, false, FLAG_PERIODIC_HEAL);

	if(GetSpellProto()->AuraInterruptFlags & AURA_INTERRUPT_ON_STAND_UP)
	{
		m_target->Emote(EMOTE_ONESHOT_EAT);
	}

	m_target->RemoveAurasByHeal();
}

void Aura::SpellAuraModTotalManaRegenPct(bool apply)
{
	if(apply)
	{
		SetPositive();
		sEventMgr.AddEvent(this, &Aura::EventPeriodicManaPct,(float)mod->m_amount,
			EVENT_AURA_PERIOCIC_MANA,	GetSpellProto()->EffectAmplitude[mod->i],0,EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
	}
}

void Aura::EventPeriodicManaPct(float RegenPct)
{
	if( !m_target->isAlive() )
		return;

	uint32 add = float2int32(m_target->GetUInt32Value(UNIT_FIELD_MAXPOWER1) * (RegenPct / 100.0f));

	uint32 newHealth = m_target->GetUInt32Value(UNIT_FIELD_POWER1) + add;

	if( newHealth <= m_target->GetUInt32Value(UNIT_FIELD_MAXPOWER1) )
		m_target->SetUInt32Value(UNIT_FIELD_POWER1, newHealth);
	else
		m_target->SetUInt32Value( UNIT_FIELD_POWER1, m_target->GetUInt32Value(UNIT_FIELD_MAXPOWER1) );

	if( GetSpellProto()->AuraInterruptFlags & AURA_INTERRUPT_ON_STAND_UP )
	{
		m_target->Emote(EMOTE_ONESHOT_EAT);
	}
}

void Aura::SpellAuraModResistance(bool apply)
{
	uint32 Flag = mod->m_miscValue;
	int32 amt;
	if(apply)
	{
		amt = mod->m_amount;
		if( amt <0 )//don't change it
			SetNegative();
		else
			SetPositive();
	}
	else
		amt = -mod->m_amount;

	if (!IsPositive() && GetUnitCaster() != NULL && m_target->GetTypeId() == TYPEID_UNIT)
		m_target->GetAIInterface()->AttackReaction(GetUnitCaster(), 1, GetSpellId());

	if( GetSpellProto() && ( GetSpellProto()->NameHash == SPELL_HASH_FAERIE_FIRE || GetSpellProto()->NameHash == SPELL_HASH_FAERIE_FIRE__FERAL_ ) )
		m_target->m_can_stealth = !apply;

	if( m_target->GetTypeId() == TYPEID_PLAYER )
	{
		for( uint32 x = 0; x < 7; x++ )
		{
			if(Flag & (((uint32)1)<< x) )
			{
				if(mod->m_amount>0)
						static_cast< Player* >( m_target )->FlatResistanceModifierPos[x]+=amt;
				else
						static_cast< Player* >( m_target )->FlatResistanceModifierNeg[x]-=amt;
				static_cast< Player* >( m_target )->CalcResistance(x);
			}
		}
	}
	else if(m_target->GetTypeId() == TYPEID_UNIT)
	{
		for(uint32 x= 0;x<7;x++)
		{
			if(Flag & (((uint32)1)<<x))
			{
				static_cast<Creature*>(m_target)->FlatResistanceMod[x]+=amt;
				static_cast<Creature*>(m_target)->CalcResistance(x);
			}
		}
	}
}

void Aura::SpellAuraPeriodicTriggerSpellWithValue(bool apply)
{
	if(m_spellProto->EffectTriggerSpell[mod->i] == 0)
		return;
	if(apply)
	{
		uint32 sp = GetSpellProto()->EffectTriggerSpell[mod->i];
		SpellEntry *spe = dbcSpell.LookupEntry(sp);
		if(!sp || !spe)
		{
			return; // invalid spell
		}

		Unit *m_caster = GetUnitCaster();
		if(!m_caster)
		{
			return; // invalid caster
		}

		spe->EffectBasePoints[0] = mod->m_amount; // set the base damage value

		if( m_caster->GetUInt64Value(UNIT_FIELD_CHANNEL_OBJECT) )
		{
			sEventMgr.AddEvent(this, &Aura::EventPeriodicTriggerSpell, spe,
			EVENT_AURA_PERIODIC_TRIGGERSPELL, GetSpellProto()->EffectAmplitude[mod->i], 0, EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
			periodic_target = m_caster->GetUInt64Value(UNIT_FIELD_CHANNEL_OBJECT);
		}
		else if( m_target )
		{
			sEventMgr.AddEvent(this, &Aura::EventPeriodicTriggerSpell, spe,
				EVENT_AURA_PERIODIC_TRIGGERSPELL,GetSpellProto()->EffectAmplitude[mod->i], 0,EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
			periodic_target = m_target->GetGUID();
		}
	}
}

void Aura::SpellAuraPeriodicTriggerSpell(bool apply)
{
	if( m_spellProto->EffectTriggerSpell[mod->i] == 0 )
		return;

	Unit *m_caster = GetUnitCaster();
	if( !m_caster )
		return;

	if( apply )
	{
		//FIX ME: positive or negative?
		uint32 sp = GetSpellProto()->EffectTriggerSpell[mod->i];
		SpellEntry *spe = dbcSpell.LookupEntry(sp);
		if( !sp || !spe )
			return;

		int32 amplitude = GetSpellProto()->EffectAmplitude[mod->i];
		SM_FIValue( m_caster->SM_FAmptitude, &amplitude, GetSpellProto()->SpellGroupType );
		SM_PIValue( m_caster->SM_PAmptitude, &amplitude, GetSpellProto()->SpellGroupType );

		if( GetSpellProto()->Id == 66 )
		{
			SM_FIValue( m_caster->SM_FDur, &amplitude, GetSpellProto()->SpellGroupType );
			SM_PIValue( m_caster->SM_FDur, &amplitude, GetSpellProto()->SpellGroupType );
		}

		if( amplitude < 0 )
			amplitude = 0;

		if ( GetSpellProto()->Id == 23493 || GetSpellProto()->Id == 24379 )
			// Cebernic: Restoration on battleground fixes(from p2wow's merged)
			// it wasn't working perfectly, this is just a tempfix
		{
			SetPositive();
			sEventMgr.AddEvent(this, &Aura::EventPeriodicHealPct,10.0f,
			EVENT_AURA_PERIODIC_HEALPERC, GetSpellProto()->EffectAmplitude[mod->i],0,EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);

			sEventMgr.AddEvent(this, &Aura::EventPeriodicManaPct,10.0f,
			EVENT_AURA_PERIOCIC_MANA, GetSpellProto()->EffectAmplitude[mod->i],0,EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
			return;
		}

		if( m_caster->GetUInt64Value(UNIT_FIELD_CHANNEL_OBJECT) )
		{
			sEventMgr.AddEvent(this, &Aura::EventPeriodicTriggerSpell, spe,
			EVENT_AURA_PERIODIC_TRIGGERSPELL, amplitude, 0,EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);

            periodic_target = m_caster->GetUInt64Value(UNIT_FIELD_CHANNEL_OBJECT);
		}
		else if( m_target )
		{
			sEventMgr.AddEvent(this, &Aura::EventPeriodicTriggerSpell, spe,
				EVENT_AURA_PERIODIC_TRIGGERSPELL, amplitude, 0,EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
			periodic_target = m_target->GetGUID();
		}

		if ( GetSpellProto()->Id == 552 && m_caster == m_target && m_caster->IsPlayer() ) // Body and Soul
		{
			Player *plr = TO_PLAYER( m_caster );
			if( !plr )
				return;

			if( plr->HasAura(64127) )
			{
				if( Rand(50) )
					plr->CastSpell( plr, 64134, true );
			}
			else if( plr->HasAura(64129) )
				plr->CastSpell( plr, 64134, true );
		}
	}
	else
	{
		if ( GetSpellProto()->Id == 552 && m_caster == m_target && m_caster->IsPlayer() ) // Body and Soul
		{
			Player *plr = TO_PLAYER( m_caster );
			if( plr )
				plr->RemoveAura(64134);
		}
	}
}

void Aura::EventPeriodicTriggerSpell(SpellEntry* spellInfo)
{
	// Trigger Spell
	// check for spell id
	Unit * m_caster = GetUnitCaster();
	if( m_caster == NULL || !m_caster->IsInWorld() )
		return;

	// Rogue - Killing Spree
	if( m_caster->IsPlayer() && spellInfo->NameHash == SPELL_HASH_KILLING_SPREE )
	{
		// Find target to teleport
		Player* p_caster = TO_PLAYER( m_caster );
		Unit* target = NULL;
		std::set<Object*>::iterator itr, itr2;
		for( itr2 = p_caster->GetInRangeSetBegin(); itr2 != p_caster->GetInRangeSetEnd();)
		{
			itr = itr2;
			itr2++;
			if( IsInrange( p_caster->GetPositionX(), p_caster->GetPositionY(), p_caster->GetPositionZ(), (*itr), 100 ) && 
				(*itr)->IsUnit() && static_cast<Unit*>(*itr)->isAlive() && 
				( p_caster->GetPhase() & (*itr)->GetPhase() ) && (*itr)->GetGUID() != p_caster->GetSelection() )
			{
				target = static_cast<Unit*>(*itr);
				break;
			}
		}

		if( target == NULL )
			target = p_caster->GetMapMgr()->GetUnit( p_caster->GetSelection() );

		if( target == NULL || p_caster->GetGUID() == target->GetGUID() )
			return;

		SpellEntry* se = dbcSpell.LookupEntry(57840);
		Spell* sp = new Spell( p_caster, se, true, NULL );
		if( !se || !sp )
			return;

		SpellCastTargets targets;
		targets.m_unitTarget = target->GetGUID();
		sp->prepare( &targets );

		periodic_target = target->GetGUID();
	}

	if( spellInfo->EffectImplicitTargetA[0] == 18 )			// Hellfire, if there are any others insert here
	{
		Spell *spell = new Spell( m_caster, spellInfo, true, this );
		if( !spell )
			return;

		SpellCastTargets targets;
		targets.m_targetMask = TARGET_FLAG_SOURCE_LOCATION;
		targets.m_srcX = m_caster->GetPositionX();
		targets.m_srcY = m_caster->GetPositionY();
		targets.m_srcZ = m_caster->GetPositionZ();
		spell->prepare(&targets);
		return;
	}

	Object * oTarget = m_target->GetMapMgr()->_GetObject(periodic_target);
	if(oTarget== NULL)
		return;

	if(oTarget->GetTypeId()==TYPEID_DYNAMICOBJECT)
	{
		Spell *spell = new Spell( m_caster, spellInfo, true, this );
		if (!spell)
			return;

		SpellCastTargets targets;
		targets.m_targetMask = TARGET_FLAG_DEST_LOCATION;
		targets.m_destX = oTarget->GetPositionX();
		targets.m_destY = oTarget->GetPositionY();
		targets.m_destZ = oTarget->GetPositionZ();
		spell->prepare(&targets);
		return;
	}

	Unit *pTarget = ((Unit*)oTarget);

	if(!oTarget->IsUnit())
		return;

	if(!pTarget || pTarget->IsDead())
	{
		SendInterrupted(SPELL_FAILED_TARGETS_DEAD, m_caster);
		SendChannelUpdate(0, m_caster);
		this->Remove();
		return;
	}

	if(spellInfo->spellIconID == 225 ) // this is arcane missiles to avoid casting on self
		if(m_casterGuid == pTarget->GetGUID())
			return;

	// set up our max Range
	float maxRange = GetMaxRange( dbcSpellRange.LookupEntry( spellInfo->rangeIndex ) );

	if( spellInfo->SpellGroupType )
	{
		SM_FFValue( m_caster->SM_FRange, &maxRange, spellInfo->SpellGroupType );
		SM_PFValue( m_caster->SM_PRange, &maxRange, spellInfo->SpellGroupType );
	}

	if( m_caster->IsStunned() || m_caster->IsFeared() || ( maxRange != 0 && m_caster->GetDistance2dSq( pTarget ) > ( maxRange*maxRange )) )
	{
		// no longer valid
		SendInterrupted(SPELL_FAILED_INTERRUPTED, m_caster);
		SendChannelUpdate(0, m_caster);
		this->Remove();
		return;
	}

	// Shaman - Earthen Power
	if( spellInfo->Id == 6474 && m_target->IsCreature() )
	{
		Creature* crea = static_cast< Creature* >( m_target );
		if( crea && crea->IsTotem() && crea->GetTotemOwner() )
		{
			Aura* aur = crea->GetTotemOwner()->FindAuraByNameHash(SPELL_HASH_EARTHEN_POWER);
			if( aur && Rand( aur->GetModAmount(0) ) )
			{
				m_target->CastSpell( pTarget, 59566, true );
			}
		}
	}

	// Hunter - Sniper Training
	if( spellInfo->NameHash == SPELL_HASH_SNIPER_TRAINING )
	{
		if( pTarget->GetLastPositionX() == pTarget->GetPositionX() &&
			pTarget->GetLastPositionY() == pTarget->GetPositionY() &&
			pTarget->GetLastPositionZ() == pTarget->GetPositionY() && 
			pTarget->m_standtime != 6 )
		{
			++pTarget->m_standtime;
			return;
		}
		else if( pTarget->m_standtime != 6 )
		{

			float px = pTarget->GetPositionX();
			float py = pTarget->GetPositionY();
			float pz = pTarget->GetPositionZ();

			pTarget->SetLastPositionX( px );
			pTarget->SetLastPositionY( py );
			pTarget->SetLastPositionZ( pz );
			return;
		}

		if( pTarget->m_standtime == 6 )
			pTarget->m_standtime = 0;
	}

	Spell *spell = new Spell( m_caster, spellInfo, true, this );
	if (!spell)
		return;

	SpellCastTargets targets;
	targets.m_unitTarget = pTarget->GetGUID();
	targets.m_targetMask = TARGET_FLAG_UNIT;
	spell->prepare(&targets);
}

void Aura::SpellAuraPeriodicEnergize(bool apply)
{
	if( apply )
	{
		SetPositive();
		sEventMgr.AddEvent(this, &Aura::EventPeriodicEnergize,(uint32)mod->m_amount,(uint32)mod->m_miscValue,
			EVENT_AURA_PERIODIC_ENERGIZE,GetSpellProto()->EffectAmplitude[mod->i],0,EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
	}
	else
	{
		// Druid - King of the Jungle - Bear
		if( GetSpellProto()->Id == 5229 )
			m_target->RemoveAllAuras( 51185, m_target->GetGUID() );
	}
}

void Aura::EventPeriodicEnergize( uint32 amount, uint32 type )
{
	uint32 POWER_TYPE = UNIT_FIELD_POWER1 + type;

	ASSERT( POWER_TYPE <= UNIT_FIELD_POWER5 );
	
	Unit* ucaster = GetUnitCaster();
	if( ucaster == NULL )
		return;

	ucaster->Energize( m_target, m_spellProto->Id, amount, type );

	if( ( GetSpellProto()->AuraInterruptFlags & AURA_INTERRUPT_ON_STAND_UP ) && type == POWER_TYPE_MANA )
	{
		m_target->Emote( EMOTE_ONESHOT_EAT );
	}
}

void Aura::SpellAuraModPacify(bool apply)
{
	// Can't Attack
	if( apply )
	{
		if( m_spellProto->Id == 24937 || m_spellProto->NameHash == SPELL_HASH_BLESSING_OF_PROTECTION || m_spellProto->NameHash == SPELL_HASH_HAND_OF_PROTECTION )
			SetPositive();
		else
			SetNegative();

		m_target->m_pacified++;
		m_target->m_special_state |= UNIT_STATE_PACIFY;
		m_target->SetFlag(UNIT_FIELD_FLAGS, UNIT_FLAG_PACIFIED);
	}
	else
	{
		m_target->m_pacified--;

		if(m_target->m_pacified == 0)
		{
			m_target->m_special_state &= ~UNIT_STATE_PACIFY;
			m_target->RemoveFlag(UNIT_FIELD_FLAGS, UNIT_FLAG_PACIFIED);
		}
	}
}

void Aura::SpellAuraModRoot(bool apply)
{
	if(apply)
	{
		// Check Mechanic Immunity
		if( m_target->MechanicsDispels[MECHANIC_ROOTED] )
		{
			m_flags |= 1 << mod->i;
			return;
		}

		SetNegative();

		m_target->m_rooted++;

		if(m_target->m_rooted == 1)
			m_target->Root();

		//warrior talent - second wind triggers on stun and immobilize. This is not used as proc to be triggered always !
		Unit *caster = GetUnitCaster();
		if( caster != NULL )
		{
			caster->EventStunOrImmobilize( m_target );
			m_target->EventStunOrImmobilize( caster, true );
		}
		
		if( GetSpellProto()->School == SCHOOL_FROST && !m_target->asc_frozen++ )
			m_target->SetFlag( UNIT_FIELD_AURASTATE, AURASTATE_FLAG_FROZEN );

		/* -Supalosa- TODO: Mobs will attack nearest enemy in range on aggro list when rooted. */
	}
	else if( (m_flags & (1 << mod->i)) == 0 ) //add these checks to mods where immunity can cancel only 1 mod and not whole spell
	{
		m_target->m_rooted--;

		if(m_target->m_rooted == 0)
			m_target->Unroot();

		if(m_target->GetTypeId() == TYPEID_UNIT)
			m_target->GetAIInterface()->AttackReaction(GetUnitCaster(), 1, 0);

		if( GetSpellProto()->School == SCHOOL_FROST && !--m_target->asc_frozen )
			m_target->RemoveFlag( UNIT_FIELD_AURASTATE, AURASTATE_FLAG_FROZEN );
	}
}

void Aura::SpellAuraModSilence(bool apply)
{
	if(apply)
	{
		m_target->m_silenced++;
		m_target->m_special_state |= UNIT_STATE_SILENCE;
		m_target->SetFlag(UNIT_FIELD_FLAGS, UNIT_FLAG_SILENCED);

		if (m_target->GetCurrentSpell() != NULL)
			m_target->GetCurrentSpell()->cancel();
	}
	else
	{
		m_target->m_silenced--;

		if(m_target->m_silenced == 0)
		{
			m_target->m_special_state &= ~UNIT_STATE_SILENCE;
			m_target->RemoveFlag(UNIT_FIELD_FLAGS, UNIT_FLAG_SILENCED);
		}
	}
}

void Aura::SpellAuraReflectSpells(bool apply)
{
	m_target->RemoveReflect( GetSpellId(), apply );

	if( apply )
	{
		SpellEntry *sp = dbcSpell.LookupEntry(GetSpellId());
		if (sp == NULL)
			return;

		ReflectSpellSchool *rss = new ReflectSpellSchool;
		rss->chance = mod->m_amount;
		rss->spellId = GetSpellId();
		rss->school = -1;
		rss->require_aura_hash = 0;
		rss->charges = sp->procCharges;
		rss->infront = false;

		m_target->m_reflectSpellSchool.push_back(rss);
	}
}

void Aura::SpellAuraModStat( bool apply )
{
	int32 stat = ( int32 )mod->m_miscValue;
	int32 val;

	if( apply )
	{
		val = mod->m_amount;
		if( val < 0 )
			SetNegative();
		else
			SetPositive();
	}
	else
	{
		val = -mod->m_amount;
	}

	if ( stat == -1 )//all stats
	{
		if( m_target->IsPlayer() )
		{
			for( uint8 x = 0; x < 5; x++ )
			{
				if( mod->m_amount > 0 )
					static_cast< Player* >( m_target )->FlatStatModPos[x] += val;
				else
					static_cast< Player* >( m_target )->FlatStatModNeg[x] -= val;

				static_cast< Player* >( m_target )->CalcStat(x);
			}

			static_cast< Player* >( m_target )->UpdateStats();
			static_cast< Player* >( m_target )->UpdateChances();
		}
		else if( m_target->GetTypeId() == TYPEID_UNIT )
		{
			for( uint8 x = 0; x < 5; x++ )
			{
				static_cast< Creature* >( m_target )->FlatStatMod[x] += val;
				static_cast< Creature* >( m_target )->CalcStat(x);
			}
		}
	}
	else if( stat >= 0 )
	{
		ASSERT( mod->m_miscValue < 5 );
		if( m_target->IsPlayer() )
		{
			if( mod->m_amount > 0 )
				static_cast< Player* >( m_target )->FlatStatModPos[ mod->m_miscValue ] += val;
			else
				static_cast< Player* >( m_target )->FlatStatModNeg[ mod->m_miscValue ] -= val;

			static_cast< Player* >( m_target )->CalcStat( mod->m_miscValue );

			static_cast< Player* >( m_target )->UpdateStats();
			static_cast< Player* >( m_target )->UpdateChances();
		}
		else if( m_target->GetTypeId() == TYPEID_UNIT )
		{
			static_cast< Creature* >( m_target )->FlatStatMod[ mod->m_miscValue ] += val;
			static_cast< Creature* >( m_target )->CalcStat( mod->m_miscValue );
		}
	}
}

void Aura::SpellAuraModSkill(bool apply)
{
	if (m_target->GetTypeId() == TYPEID_PLAYER)
	{
		if(apply)
		{
			SetPositive();
			static_cast< Player* >( m_target )->_ModifySkillBonus(mod->m_miscValue, mod->m_amount);
		}
		else
			static_cast< Player* >( m_target )->_ModifySkillBonus(mod->m_miscValue, -mod->m_amount);

		static_cast< Player* >( m_target )->UpdateStats();
	}
}

void Aura::SpellAuraModIncreaseSpeed(bool apply)
{
	if(apply)
		m_target->m_speedModifier += mod->m_amount;
	else
		m_target->m_speedModifier -= mod->m_amount;

	m_target->UpdateSpeed();
}

void Aura::SpellAuraModIncreaseMountedSpeed(bool apply)
{
	if( GetSpellId() == 68768 || GetSpellId() == 68769 && p_target != NULL )
	{
		int32 newspeed = 0;

		if( p_target->_GetSkillLineCurrent( SKILL_RIDING, true ) >= 150 )
			newspeed = 100;
		else if( p_target->_GetSkillLineCurrent( SKILL_RIDING, true ) >= 75 )
			newspeed = 60;

		mod->m_amount = newspeed; // EffectBasePoints + 1 (59+1 and 99+1)
	}

	if(apply)
	{
		SetPositive();
		m_target->m_mountedspeedModifier += mod->m_amount;
	}
	else
		m_target->m_mountedspeedModifier -= mod->m_amount;
	m_target->UpdateSpeed();
}

void Aura::SpellAuraModCreatureRangedAttackPower(bool apply)
{
	if(apply)
	{
		for(uint32 x = 0; x < 11; x++)
			if (mod->m_miscValue & (((uint32)1)<<x) )
				m_target->CreatureRangedAttackPowerMod[x+1] += mod->m_amount;
		if(mod->m_amount < 0)
			SetNegative();
		else
			SetPositive();
	}
	else
	{
		for(uint32 x = 0; x < 11; x++)
		{
			if (mod->m_miscValue & (((uint32)1)<<x) )
			{
				m_target->CreatureRangedAttackPowerMod[x+1] -= mod->m_amount;
			}
		}
	}
	m_target->CalcDamage();
}

void Aura::SpellAuraModDecreaseSpeed(bool apply)
{
	//there can not be 2 slow downs only most powerful is applied
	if(apply)
	{
		// Check Mechanic Immunity
		if( m_target->MechanicsDispels[MECHANIC_ENSNARED] )
		{
			m_flags |= 1 << mod->i;
			return;
		}
		switch(m_spellProto->NameHash)
		{
			case SPELL_HASH_STEALTH:			// Stealth
				SetPositive();
				break;

			case SPELL_HASH_DAZED:			// Dazed
				SetNegative();
				break;

			default:
				/* burlex: this would be better as a if(caster is hostile to target) then effect = negative) */
				if(m_casterGuid != m_target->GetGUID())
					SetNegative();
				break;
		}

		//let's check Mage talents if we proc anything
		if(m_spellProto->School==SCHOOL_FROST)
		{
			//yes we are freezing the bastard, so can we proc anything on this ?
			Unit *caster = GetUnitCaster();
			if( caster != NULL && caster->IsPlayer() && m_target )
				static_cast<Unit*>(caster)->EventChill( m_target );
			if( m_target && m_target->IsPlayer() && caster )
				static_cast<Unit*>(m_target)->EventChill( caster, true );
		}
		m_target->speedReductionMap.insert(make_pair(m_spellProto->Id, mod->m_amount));
		//m_target->m_slowdown=this;
		//m_target->m_speedModifier += mod->m_amount;
	}
	else if( (m_flags & (1 << mod->i)) == 0 ) //add these checks to mods where immunity can cancel only 1 mod and not whole spell
	{
		map< uint32, int32 >::iterator itr = m_target->speedReductionMap.find(m_spellProto->Id);
		if(itr != m_target->speedReductionMap.end())
			m_target->speedReductionMap.erase(itr);
		//m_target->m_speedModifier -= mod->m_amount;
		//m_target->m_slowdown= NULL;
	}
	if(m_target->GetSpeedDecrease())
		m_target->UpdateSpeed();
}

void Aura::UpdateAuraModDecreaseSpeed()
{
	if( m_target->MechanicsDispels[MECHANIC_ENSNARED] )
	{
		m_flags |= 1 << mod->i;
		return;
	}

	//let's check Mage talents if we proc anything
	if(m_spellProto->School==SCHOOL_FROST)
	{
		//yes we are freezing the bastard, so can we proc anything on this ?
		Unit *caster = GetUnitCaster();
		if( caster && caster->IsPlayer() && m_target )
			static_cast<Unit*>(caster)->EventChill( m_target );
		if( m_target && m_target->IsPlayer() && caster )
			static_cast<Unit*>(m_target)->EventChill( caster, true );
	}
}

void Aura::SpellAuraModIncreaseHealth(bool apply)
{
	if( !m_target )
		return;

	int32 amt;
	uint32 maxhealth = m_target->GetUInt32Value(UNIT_FIELD_MAXHEALTH);

	if( apply )
	{
		//threat special cases. We should move these to scripted spells maybe
		switch(m_spellProto->Id)
		{
			case 23782:// Gift of Life
			  mod->m_amount = 1500;
			  break;
			case 12976:// Last Stand
			  mod->m_amount = (uint32)( maxhealth * 0.3 );
			  break;
			case 50322:// Survival Instincts
			  mod->m_amount = (uint32)( ( maxhealth * mod->m_amount ) /100 );
			  break;
		}
		SetPositive();
		amt = mod->m_amount;
	}
	else
		amt =- mod->m_amount;

	if(m_target->IsPlayer())
	{
		//maybe we should not adjust hitpoints too but only maximum health
		//static_cast< Player* >( m_target )->SetHealthFromSpell(static_cast< Player* >( m_target )->GetHealthFromSpell() + amt);
		//static_cast< Player* >( m_target )->UpdateStats();
		if( apply )
		{
			m_target->SetUInt32Value(UNIT_FIELD_MAXHEALTH, ( maxhealth + amt ) );
			m_target->ModUnsigned32Value(UNIT_FIELD_HEALTH, amt);
		}
		else
		{
			m_target->SetUInt32Value(UNIT_FIELD_MAXHEALTH, maxhealth );

			if( (int32)m_target->GetUInt32Value(UNIT_FIELD_HEALTH) > -amt )//watch it on remove value is negative
				m_target->ModUnsigned32Value(UNIT_FIELD_HEALTH, amt);
			else m_target->SetUInt32Value(UNIT_FIELD_HEALTH, 1); //do not kill player but do strip him good
		}

		static_cast< Player* >( m_target )->UpdateStats();
	}
	else
		m_target->ModUnsigned32Value(UNIT_FIELD_MAXHEALTH, amt);
}

void Aura::SpellAuraModIncreaseEnergy(bool apply)
{
	SetPositive();
	//uint32 powerField,maxField ;
	//uint8 powerType = m_target->GetPowerType();

	/*if(powerType == POWER_TYPE_MANA) // Mana
	{
		powerField = UNIT_FIELD_POWER1;
		maxField = UNIT_FIELD_MAXPOWER1;
	}
	else if(powerType == POWER_TYPE_RAGE) // Rage
	{
		powerField = UNIT_FIELD_POWER2;
		maxField = UNIT_FIELD_MAXPOWER2;
	}
	else if(powerType == POWER_TYPE_ENERGY) // Energy
	{
		powerField = UNIT_FIELD_POWER4;
		maxField = UNIT_FIELD_MAXPOWER4;
	}
	else // Capt: if we can not use identify the type: do nothing
		return; */
	uint32 powerField = UNIT_FIELD_POWER1 + mod->m_miscValue;

	m_target->ModUnsigned32Value(powerField,apply?mod->m_amount:-mod->m_amount);
	m_target->ModUnsigned32Value(powerField+8,apply?mod->m_amount:-mod->m_amount);

	if(powerField == UNIT_FIELD_POWER1 && m_target->GetTypeId() == TYPEID_PLAYER)
	{
		int32 amt = apply ? mod->m_amount : -mod->m_amount;
		static_cast< Player* >( m_target )->SetManaFromSpell(static_cast< Player* >( m_target )->GetManaFromSpell() + amt);
	}
}

void Aura::SpellAuraModShapeshift(bool apply)
{
	if( p_target == NULL )
		return;

	if( p_target->m_MountSpellId && p_target->m_MountSpellId != m_spellProto->Id )
		if( !(mod->m_miscValue & ( FORM_BATTLESTANCE | FORM_DEFENSIVESTANCE | FORM_BERSERKERSTANCE ) ) )
			m_target->RemoveAura( p_target->m_MountSpellId ); // these spells are not compatible

	SpellShapeshiftForm * ssf = dbcSpellShapeshiftForm.LookupEntry( mod->m_miscValue );
	if( !ssf )
		return;

	uint32 spellId = 0;
	uint32 spellId2 = 0;
	uint32 modelId = (uint32)(apply ? ssf->modelId : 0);
	/*
	TODO:
	sff->unit_type - player should be deamon(warlock) and beast(druid) while shapeshifted
	*/

	bool freeMovements = false;

	switch( ssf->id )
	{
	case FORM_CAT:
		{//druid
			freeMovements = true;
			spellId = 3025;
			if(apply)
			{
				m_target->SetByte(UNIT_FIELD_BYTES_0,3,POWER_TYPE_ENERGY);
				m_target->SetUInt32Value(UNIT_FIELD_MAXPOWER4, 100);//100 Energy
				m_target->SetUInt32Value(UNIT_FIELD_POWER4, 0);//0 Energy
				if( m_target->getRace() != RACE_NIGHTELF && ssf->modelId2 )//TAUREN
					modelId = ssf->modelId2;

			}
			else
			{//turn back to mana
				//m_target->SetUInt32Value(UNIT_FIELD_BASEATTACKTIME,oldap);
				m_target->SetByte(UNIT_FIELD_BYTES_0,3,POWER_TYPE_MANA);
				if(m_target->m_stealth)
				{
					uint32 sp = m_target->m_stealth;
					m_target->m_stealth = 0;
					m_target->RemoveAura(sp);//prowl
				}
			}
			static_cast< Player* >( m_target )->UpdateAttackSpeed();

		} break;
	case FORM_TREE:
		{
			freeMovements = true;
			spellId = 34123; // this is area aura
			//spellId2 = 5420;
		} break;
	case FORM_TRAVEL:
		{//druid
			freeMovements = true;
			spellId = 5419;
			spellId2 = 66530; // Improved Barkskin(Passive)
		} break;
	case FORM_AQUA:
		{//druid aqua
			freeMovements = true;
			spellId = 5421;
		} break;
	case FORM_BEAR:
		{//druid only
			freeMovements = true;
			spellId = 1178;
			if(apply)
			{
				m_target->SetByte(UNIT_FIELD_BYTES_0,3,POWER_TYPE_RAGE);
				m_target->SetUInt32Value(UNIT_FIELD_MAXPOWER2, 1000);
				m_target->SetUInt32Value(UNIT_FIELD_POWER2, 0);//0 rage

				if( m_target->getRace() != RACE_NIGHTELF && ssf->modelId2 )//TAUREN
					modelId = ssf->modelId2;

				//some say there is a second effect
				SpellEntry* spellInfo = dbcSpell.LookupEntry( 21178 );

				Spell *sp = new Spell( m_target, spellInfo, true, NULL );
				if (!sp)
					return;

				SpellCastTargets tgt;
				tgt.m_unitTarget = m_target->GetGUID();
				sp->prepare( &tgt );
			}
			else
			{//reset back to mana
				m_target->SetByte(UNIT_FIELD_BYTES_0,3,POWER_TYPE_MANA);
				m_target->RemoveAura( 21178 ); // remove Bear Form (Passive2)
			}
		} break;
	case FORM_DIREBEAR:
		{//druid only
			freeMovements = true;
			spellId = 9635;
			if(apply)
			{
				m_target->SetByte(UNIT_FIELD_BYTES_0,3,POWER_TYPE_RAGE);
				m_target->SetUInt32Value(UNIT_FIELD_MAXPOWER2, 1000);
				m_target->SetUInt32Value(UNIT_FIELD_POWER2, 0);//0 rage
				if( m_target->getRace() != RACE_NIGHTELF && ssf->modelId2 )//TAUREN
					modelId = ssf->modelId2;
			}
			else //reset back to mana
				m_target->SetByte(UNIT_FIELD_BYTES_0,3,POWER_TYPE_MANA);
		} break;
	case FORM_BATTLESTANCE:
		{
			spellId = 21156;
		} break;
	case FORM_DEFENSIVESTANCE:
		{
			spellId = 7376;
		} break;
	case FORM_BERSERKERSTANCE:
		{
			spellId = 7381;
		} break;
	case FORM_SHADOW:
		{
			spellId = 49868;
			if(apply)
			{
				packetSMSG_COOLDOWN_EVENT cd;
				cd.spellid = m_spellProto->Id;
				cd.guid = m_target->GetGUID();
				((Player*)m_target)->GetSession()->OutPacket(SMSG_COOLDOWN_EVENT, sizeof(packetSMSG_COOLDOWN_EVENT), &cd);
			}
		}break;
	case FORM_FLIGHT:
		{// druid
			freeMovements = true;
			spellId = 33948;
			if(apply)
			{
				if( m_target->getRace() != RACE_NIGHTELF && ssf->modelId2 )//TAUREN
					modelId = ssf->modelId2;
			}
		}break;
	case FORM_STEALTH:
		{// rogue
			if (!m_target->m_can_stealth)
				return;
			//m_target->UpdateVisibility();
		} break;
	case FORM_MOONKIN:
		{//druid
			freeMovements = true;
			spellId = 24905;
			if( apply )
			{
				if( m_target->getRace() != RACE_NIGHTELF && ssf->modelId2 )//TAUREN
					modelId = ssf->modelId2;
			}
		}break;
	case FORM_SWIFT: //not tested yet, right now going on trust
		{// druid
			freeMovements = true;
			spellId = 40121; //Swift Form Passive
			if(apply)
			{
				if( m_target->getRace() != RACE_NIGHTELF && ssf->modelId2 )//TAUREN
					modelId = ssf->modelId2;
			}
		}break;
	case FORM_SPIRITOFREDEMPTION:
		{
			spellId = 27795;
			modelId = 12824; // Smaller spirit healer, heehee :3
		}break;
	case FORM_GHOUL:
	case FORM_SKELETON:
	case FORM_ZOMBIE:
		{
			p_target->SendAvailSpells(ssf, apply);
		}break;
	case FORM_METAMORPHOSIS:
		{
			spellId = 54817;
			spellId2 = 54879;
		}break;
	}

	if( apply )
	{
		if( m_target->getClass() == WARRIOR && m_target->GetUInt32Value( UNIT_FIELD_POWER2 ) > p_target->m_retainedrage )
			m_target->SetUInt32Value(UNIT_FIELD_POWER2, p_target->m_retainedrage );

		m_target->SetByte( UNIT_FIELD_BYTES_2, 3, (uint8)ssf->id );

		if( m_target->getClass() == DRUID )
		{
			Player *p_caster = static_cast< Player* >( m_target );
			if( !p_caster )
				return;

			if( Rand( p_caster->m_furorChance ) )
			{
				uint32 furorSpell;
				if( mod->m_miscValue == FORM_CAT )
					furorSpell = 17099;
				else if( mod->m_miscValue == FORM_BEAR || mod->m_miscValue == FORM_DIREBEAR )
					furorSpell = 17057;
				else
					furorSpell = 0;

				if( furorSpell != 0 )
				{
					SpellEntry *spellInfo = dbcSpell.LookupEntry( furorSpell );

					Spell *sp = new Spell(m_target, spellInfo, true, NULL);
					if (!sp)
						return;

					SpellCastTargets tgt;
					tgt.m_unitTarget = m_target->GetGUID();
					sp->prepare(&tgt);
				}
			}

			//Feral Swiftness - adding aura
			if( GetSpellProto()->NameHash == SPELL_HASH_BEAR_FORM ||
				GetSpellProto()->NameHash == SPELL_HASH_DIRE_BEAR_FORM ||
				GetSpellProto()->NameHash == SPELL_HASH_CAT_FORM )
			{
				if( p_caster->mSpells.find(17002) != p_caster->mSpells.end() )
				{
					p_caster->CastSpell( p_caster, 24867, true );
				}
				else if( p_caster->mSpells.find(24866) != p_caster->mSpells.end() )
				{
					p_caster->CastSpell( p_caster, 24864, true );
				}
			}

			//Master Shapeshifter - adding aura
			if( p_caster->HasAurasWithNameHash(SPELL_HASH_MASTER_SHAPESHIFTER) )
			{
				uint32 spellid = 0;
				switch( GetSpellProto()->NameHash )
				{
				case SPELL_HASH_BEAR_FORM:
				case SPELL_HASH_DIRE_BEAR_FORM:
					spellid = 48418;
					break;
				case SPELL_HASH_CAT_FORM:
					spellid = 48420;
					break;
				case SPELL_HASH_MOONKIN_FORM:
					spellid = 48421;
					break;
				case SPELL_HASH_TREE_OF_LIFE:
					spellid = 48422;
					break;
				}

				if( spellid )
				{
					SpellEntry * se = dbcSpell.LookupEntry( spellid );
					if( !se )
						return;

					Spell * sp = new Spell( p_caster, se, true, NULL );
					if( !sp )
						return;

					if( p_caster->HasAura(48411) )
						sp->forced_basepoints[0] = 2;
					else if( p_caster->HasAura(48412) )
						sp->forced_basepoints[0] = 4;

					SpellCastTargets targets( p_caster->GetGUID() );
					sp->prepare( &targets );
				}
			}
		}

		if( spellId != GetSpellId() )
		{
			if( p_target->m_ShapeShifted )
				p_target->RemoveAura( p_target->m_ShapeShifted );

			p_target->m_ShapeShifted = GetSpellId();
		}

		if( modelId != 0 )
		{
			m_target->SetUInt32Value( UNIT_FIELD_DISPLAYID, modelId );
			m_target->EventModelChange();
		}

		p_target->SetShapeShift( static_cast<uint8>( mod->m_miscValue ));

		// check for spell id
		if( spellId == 0 )
			return;

		SpellEntry* spellInfo = dbcSpell.LookupEntry(spellId );

		Spell *sp = new Spell(m_target, spellInfo, true, NULL);
		if (!sp)
			return;

		SpellCastTargets tgt;
		tgt.m_unitTarget = m_target->GetGUID();
		sp->prepare( &tgt );

		if( spellId2 != 0 )
		{
			spellInfo = dbcSpell.LookupEntry(spellId2);
			sp = new Spell(m_target, spellInfo, true, NULL);
			if (!sp)
				return;

			sp->prepare(&tgt);
		}

		// remove the caster from impairing movements
		if( freeMovements )
		{
			for( uint32 x = MAX_POSITIVE_AURAS_EXTEDED_START; x < MAX_POSITIVE_AURAS_EXTEDED_END; x++ )
			{
				if( m_target->m_auras[x] != NULL )
				{
					if( m_target->m_auras[x]->GetSpellProto()->MechanicsType == MECHANIC_ROOTED || m_target->m_auras[x]->GetSpellProto()->MechanicsType == MECHANIC_ENSNARED ) // Remove roots and slow spells
					{
						m_target->m_auras[x]->Remove();
					}
					else // if got immunity for slow, remove some that are not in the mechanics
					{
						for( int i = 0; i < 3; i++ )
						{
							if( m_target->m_auras[x]->GetSpellProto()->EffectApplyAuraName[i] == SPELL_AURA_MOD_DECREASE_SPEED || m_target->m_auras[x]->GetSpellProto()->EffectApplyAuraName[i] == SPELL_AURA_MOD_ROOT )
							{
								m_target->m_auras[x]->Remove();
								break;
							}
						}
					}
			   }
			}
		}

		//Improved Moonkin Form - haste aura
		if( mod->m_miscValue == FORM_MOONKIN  )
		{
			if( m_target->HasAura(48384) )
				m_target->CastSpell( m_target, 50170, true );
				
			if( m_target->HasAura(48395) )
				m_target->CastSpell( m_target, 50171, true );
				
			if( m_target->HasAura(48396) )
				m_target->CastSpell( m_target, 50172, true );
		}

		//execute after we changed shape
		p_target->EventTalentHearthOfWildChange( true );
	}
	else
	{
		m_target->SetByte( UNIT_FIELD_BYTES_2, 3, FORM_NORMAL );

		for(uint32 i = MAX_REMOVABLE_AURAS_START; i < MAX_REMOVABLE_AURAS_END; ++i)
		{
			if( m_target->m_auras[i] != NULL 
				&& m_target->m_auras[i]->GetSpellProto() 
				&& m_target->m_auras[i]->IsPositive()
				&& ssf->id != FORM_STEALTH 
				){
					uint32 requiredShapeShift = m_target->m_auras[i]->GetSpellProto()->RequiredShapeShift;
					if( requiredShapeShift & DecimalToMask( mod->m_miscValue ) )
						m_target->m_auras[i]->Remove();
			}
		}

		if( m_target->IsCasting() && m_target->m_currentSpell && m_target->m_currentSpell->GetProto() 
			&& ( m_target->m_currentSpell->GetProto()->RequiredShapeShift & DecimalToMask(mod->m_miscValue) ) )
			m_target->InterruptSpell();

		//Master Shapeshifter - removing aura
		if( m_target->HasAurasWithNameHash(SPELL_HASH_MASTER_SHAPESHIFTER) )
		{
			uint32 spellid = 0;
			switch( GetSpellProto()->NameHash )
			{
			case SPELL_HASH_BEAR_FORM:
			case SPELL_HASH_DIRE_BEAR_FORM:
				spellid = 48418;
				break;
			case SPELL_HASH_CAT_FORM:
				spellid = 48420;
				break;
			case SPELL_HASH_MOONKIN_FORM:
				spellid = 48421;
				break;
			case SPELL_HASH_TREE_OF_LIFE:
				spellid = 48422;
				break;
			}
			
			if( spellid )
				m_target->RemoveAura( spellid );
		}

		//execute before changing shape back
		p_target->EventTalentHearthOfWildChange( false );
		m_target->SetUInt32Value( UNIT_FIELD_DISPLAYID, m_target->GetUInt32Value( UNIT_FIELD_NATIVEDISPLAYID ) );
		m_target->EventModelChange();
		if( spellId != GetSpellId() )
		{
			if( spellId )
				m_target->RemoveAura( spellId );
		}
		
		if( spellId2 )
			m_target->RemoveAura( spellId2 );

		p_target->m_ShapeShifted = 0;
		p_target->SetShapeShift( 0 );
	}
	p_target->UpdateStats();
}

void Aura::SpellAuraModEffectImmunity(bool apply)
{
	if( m_spellProto->Id == 24937 )
		SetPositive();

	if (!apply)
	{
		if( m_spellProto->Id == 23333 || m_spellProto->Id == 23335 || m_spellProto->Id == 34976 )
		{
			Player* plr = static_cast< Player* >( GetUnitCaster() );
			if( plr == NULL || !plr->IsPlayer() || plr->m_bg == NULL)
				return;

			plr->m_bg->HookOnFlagDrop(plr);

		}
	}
}

void Aura::SpellAuraModStateImmunity(bool apply)
{
	//%50 chance to dispel 1 magic effect on target
	//23922
}

void Aura::SpellAuraModSchoolImmunity(bool apply)
{
	if( apply && ( m_spellProto->NameHash == SPELL_HASH_DIVINE_SHIELD || m_spellProto->NameHash == SPELL_HASH_ICE_BLOCK) ) // Paladin - Divine Shield
	{
		if( !m_target || !m_target->isAlive())
			return;

		Aura * pAura;
		for(uint32 i = MAX_NEGATIVE_AURAS_EXTEDED_START; i < MAX_NEGATIVE_AURAS_EXTEDED_END; ++i)
		{
			pAura = m_target->m_auras[i];
			if( pAura != this && pAura != NULL && !pAura->IsPassive() && !pAura->IsPositive() && !(pAura->GetSpellProto()->Attributes & ATTRIBUTES_IGNORE_INVULNERABILITY) )
			{
				pAura->Remove();
			}
		}
	}

	if( apply && ( m_spellProto->NameHash == SPELL_HASH_DIVINE_SHIELD || m_spellProto->NameHash == SPELL_HASH_BLESSING_OF_PROTECTION || m_spellProto->NameHash == SPELL_HASH_HAND_OF_PROTECTION || m_spellProto->NameHash == SPELL_HASH_ICE_BLOCK) )
	{
		m_target->RemoveAurasByInterruptFlag(AURA_INTERRUPT_ON_INVINCIBLE);
	}

	if(apply)
	{
		//fix me may be negative
		Unit * c = GetUnitCaster();
		if(c)
		{
			if(isAttackable(c,m_target))
				SetNegative();
			else SetPositive();
		}else
			SetPositive();

		sLog.outDebug("%s: value=%x", __FUNCTION__, mod->m_miscValue);
		for( uint8 i = 0; i < SCHOOL_COUNT; i++ )
		{
			if( mod->m_miscValue & ( 1 << i ) )
			{
				m_target->SchoolImmunityList[i]++;
				m_target->RemoveAurasOfSchool( i, false, true );
			}
		}
	}
	else
	{
		for( uint8 i = 0; i < SCHOOL_COUNT; i++ )
		{
			if( mod->m_miscValue & ( 1 << i ) &&
				m_target->SchoolImmunityList[i] > 0 ) 
			{
				m_target->SchoolImmunityList[i]--;
			}
		}
	}
}

void Aura::SpellAuraModDmgImmunity(bool apply)
{

}

void Aura::SpellAuraModDispelImmunity(bool apply)
{
	assert(mod->m_miscValue < 10);
	if(apply)
		m_target->dispels[mod->m_miscValue]++;
	else
		m_target->dispels[mod->m_miscValue]--;

	if(apply)
	{
		for(uint32 x=MAX_POSITIVE_AURAS_EXTEDED_START;x<MAX_POSITIVE_AURAS_EXTEDED_END;x++)
		{
            // HACK FIX FOR: 41425 and 25771
			if(m_target->m_auras[x] && m_target->m_auras[x]->GetSpellId() != 41425 && m_target->m_auras[x]->GetSpellId() != 25771)
				if(m_target->m_auras[x]->GetSpellProto()->DispelType==(uint32)mod->m_miscValue)
					m_target->m_auras[x]->Remove();
		}
	}
}

void Aura::SpellAuraProcTriggerSpell(bool apply)
{
	if( apply )
	{
		ProcTriggerSpell pts;
		pts.origId = GetSpellProto()->Id;
		pts.caster = GetUnitCaster()->GetGUID();
		pts.groupRelation[0] = GetSpellProto()->EffectSpellClassMask[mod->i][0];
		pts.groupRelation[1] = GetSpellProto()->EffectSpellClassMask[mod->i][1];
		pts.groupRelation[2] = GetSpellProto()->EffectSpellClassMask[mod->i][2];
		if(GetSpellProto()->EffectTriggerSpell[mod->i])
			pts.spellId = GetSpellProto()->EffectTriggerSpell[mod->i];
		else
		{
			sLog.outDebug("Warning,trigger spell is null for spell %u",GetSpellProto()->Id);
			return;
		}
		pts.procChance = GetSpellProto()->procChance;
		pts.procFlags = GetSpellProto()->procFlags;
		pts.procFlagsExtra = GetSpellProto()->procFlagExtra;
		int charges = GetSpellProto()->procCharges;

		Unit* ucaster = GetUnitCaster();
		if( GetSpellProto()->SpellGroupType && ucaster != NULL )
		{
			SM_FIValue( ucaster->SM_FCharges, &charges, GetSpellProto()->SpellGroupType );
			SM_PIValue( ucaster->SM_PCharges, &charges, GetSpellProto()->SpellGroupType );
		}
		pts.ProcType = 0;
		pts.procCharges = charges;
		pts.LastTrigger = 0;
		pts.deleted = false;

		if( m_spellProto->NameHash == SPELL_HASH_THE_TWIN_BLADES_OF_AZZINOTH && m_target->IsPlayer() )
		{
			/* The Twin Blades of Azzinoth.
			 * According to comments on wowhead, this proc has ~0.75ppm (procs-per-minute). */
			Item* mh = static_cast< Player* >( m_target )->GetItemInterface()->GetInventoryItem( EQUIPMENT_SLOT_MAINHAND );
			Item* of = static_cast< Player* >( m_target )->GetItemInterface()->GetInventoryItem( EQUIPMENT_SLOT_OFFHAND );
			if( mh != NULL && of != NULL )
			{
				float mhs = float( mh->GetProto()->Delay );
				float ohs = float( of->GetProto()->Delay );
				pts.procChance = FL2UINT( float( mhs * ohs / ( 800.0f * ( mhs + ohs ) ) ) ); // 0.75 ppm
			}
		}
/*		pts.ospinfo = m_spellProto;
		pts.spinfo = sSpellStore.LookupEntry(pts.spellId);
		if(!pts.spinfo)
		{
			sLog.outDebug("Error, could not register procspell %u\n",pts.spellId);
			return;
		}*/
		m_target->m_procSpells.push_front(pts);
		sLog.outDebug("%u is registering %u chance %u flags %u charges %u triggeronself %u interval %u\n",pts.origId,pts.spellId,pts.procChance,m_spellProto->procFlags,charges,m_spellProto->procFlags,m_spellProto->proc_interval);
	}
	else
	{
		for(std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin();itr != m_target->m_procSpells.end();itr++)
		{
			if(itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted)
			{
				itr->deleted = true;
				break; //only 1 instance of a proc spell per caster ?
			}
		}
	}

	// Warrior - Vigilance
	if( m_target && GetSpellProto()->Id == 58872 )
	{
		if( apply )
		{
			for( int8 i=0; i<7; i++ )
				m_target->DamageTakenPctMod[i] -= 0.03f;
		}
		else
		{
			for( int8 i=0; i<7; i++ )
				m_target->DamageTakenPctMod[i] += 0.03f;
		}
	}
}

void Aura::SpellAuraProcTriggerDamage(bool apply)
{
	if(apply)
	{
		DamageProc ds;
		ds.m_damage = mod->m_amount;
		ds.m_spellId = GetSpellProto()->Id;
		ds.m_school = GetSpellProto()->School;
		ds.m_flags = m_spellProto->procFlags;
		ds.owner = (void*)this;
		m_target->m_damageShields.push_back(ds);
		sLog.outDebug("registering dmg proc %u, school %u, flags %u, charges at least %u \n",ds.m_spellId,ds.m_school,ds.m_flags,m_spellProto->procCharges);
	}
	else
	{
		for(std::list<struct DamageProc>::iterator i = m_target->m_damageShields.begin();i != m_target->m_damageShields.end();i++)
		{
			if(i->owner == this)
			{
				m_target->m_damageShields.erase(i);
				break;
			}
		}
	}
}

void Aura::SpellAuraTrackCreatures(bool apply)
{
	if( p_target != NULL )
	{
		if( apply )
		{
			if( p_target->TrackingSpell != 0 )
				p_target->RemoveAura( p_target->TrackingSpell );

			p_target->SetUInt32Value( PLAYER_TRACK_CREATURES,(uint32)1 << ( mod->m_miscValue - 1 ) );
			p_target->TrackingSpell = GetSpellId();
		}
		else
		{
			p_target->TrackingSpell = 0;
			p_target->SetUInt32Value( PLAYER_TRACK_CREATURES, 0 );
		}
	}
}

void Aura::SpellAuraTrackResources(bool apply)
{
	if( p_target != NULL )
	{
		if( apply )
		{
			if( p_target->TrackingSpell != 0 )
				p_target->RemoveAura( p_target->TrackingSpell );

		p_target->SetUInt32Value( PLAYER_TRACK_RESOURCES, (uint32)1 << ( mod->m_miscValue - 1 ) );
		p_target->TrackingSpell = GetSpellId();
		}
		else
		{
			p_target->TrackingSpell = 0;
			p_target->SetUInt32Value( PLAYER_TRACK_RESOURCES, 0 );
		}
	}
}

void Aura::SpellAuraModParryPerc(bool apply)
{
	//if (m_target->GetTypeId() == TYPEID_PLAYER)
	{
		int32 amt;
		if( apply )
		{
			amt = mod->m_amount;
			if( amt < 0 )
				SetNegative();
			else
				SetPositive();

		}
		else
			amt = -mod->m_amount;

		m_target->SetParryFromSpell( m_target->GetParryFromSpell() + amt );
		if( p_target != NULL )
		{
			p_target->UpdateChances();
		}
	}
}

void Aura::SpellAuraModDodgePerc(bool apply)
{
	int32 amt = mod->m_amount;
	if( apply )
	{
		if( amt < 0 )
			SetNegative();
		else
			SetPositive();
	}
	else
		amt = -amt;

	m_target->SetDodgeFromSpell( m_target->GetDodgeFromSpell() + amt );
	if( p_target != NULL )
	{
		p_target->UpdateChances();
	}
}

void Aura::SpellAuraModBlockPerc(bool apply)
{
	//if (m_target->GetTypeId() == TYPEID_PLAYER)
	{
		int32 amt;
		if( apply )
		{
			amt = mod->m_amount;
			if( amt < 0 )
				SetNegative();
			else
				SetPositive();
		}
		else
			amt = -mod->m_amount;

		m_target->SetBlockFromSpell( m_target->GetBlockFromSpell() + amt );
		if( p_target != NULL )
		{
			p_target->UpdateStats();
		}
	}
}

void Aura::SpellAuraModCritPerc(bool apply)
{
	if( p_target != NULL )
	{
		if( apply )
		{
			WeaponModifier md;
			md.value = float( mod->m_amount );
			md.wclass = GetSpellProto()->EquippedItemClass;
			md.subclass = GetSpellProto()->EquippedItemSubClass;
			p_target->tocritchance.insert( make_pair( GetSpellId(), md ) );
		}
		else
		{
			/*std::list<WeaponModifier>::iterator i = static_cast< Player* >( m_target )->tocritchance.begin();

			for(;i!=static_cast< Player* >( m_target )->tocritchance.end();i++)
			{
				if((*i).spellid==GetSpellId())
				{
					static_cast< Player* >( m_target )->tocritchance.erase(i);
					break;
				}
			}*/
			p_target->tocritchance.erase( GetSpellId() );
		}
		p_target->UpdateChances();
	}
}

void Aura::SpellAuraPeriodicLeech(bool apply)
{
	if(apply)
	{
		SetNegative();
		uint32 amt = mod->m_amount;
		sEventMgr.AddEvent( this, &Aura::EventPeriodicLeech, amt,
			EVENT_AURA_PERIODIC_LEECH, GetSpellProto()->EffectAmplitude[mod->i], 0, EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT );

		if( GetSpellProto()->NameHash == SPELL_HASH_DEVOURING_PLAGUE )
		{
			uint32 damage = GetUnitCaster()->GetSpellDmgBonus( m_target, GetSpellProto(), amt, true, false );
			uint32 mod = 0;

			if( GetUnitCaster()->HasAura(63625) )
				mod = 5;
			else if( GetUnitCaster()->HasAura(63626) )
				mod = 10;
			else if( GetUnitCaster()->HasAura(63627) )
				mod = 15;
			
			damage += ( damage * mod ) /100;
			if( !damage )
				return;

			SpellEntry *spellInfo = dbcSpell.LookupEntry( 63675 );
			if( spellInfo )
			{
				Spell *spell = new Spell( GetUnitCaster(), spellInfo, true, NULL );
				if( !spell )
					return;

				spell->forced_basepoints[0] = damage;
				spell->ProcedOnSpell = GetSpellProto();
				SpellCastTargets targets;
				targets.m_unitTarget = m_target->GetGUID();
				spell->prepare( &targets );
			}
		}
	}
}

void Aura::EventPeriodicLeech(uint32 amount)
{
	Unit* m_caster = GetUnitCaster();
	
	// this is needed because if the victim dies while the Aura is being processed we go BOOM (crash)
	Unit* m_Target = m_target;
	SpellEntry* CastingSpell = GetSpellProto();

	if( m_caster == NULL || m_Target == NULL )
		return;

	if( m_Target->isAlive() && m_caster->isAlive() )
	{
		if( m_Target->SchoolImmunityList[CastingSpell->School] )
			return;

		int amp = CastingSpell->EffectAmplitude[mod->i];
		if( !amp )
			amp = static_cast< EventableObject* >( this )->event_GetEventPeriod( EVENT_AURA_PERIODIC_LEECH );

		amount = m_caster->GetSpellDmgBonus( m_Target, CastingSpell, amount, true, false );

		uint32 Amount = (uint32)min( amount, m_Target->GetUInt32Value( UNIT_FIELD_HEALTH ) );

		// Damage
		m_caster->DealDamage( m_Target, amount, 0, 0, CastingSpell->Id, true );
		SendPeriodicAuraLog( m_caster, m_Target, CastingSpell->Id, CastingSpell->School, amount, 0, 0, false, FLAG_PERIODIC_DAMAGE);

		//Healing
		if( CastingSpell->NameHash == SPELL_HASH_DEVOURING_PLAGUE )
			Amount = (uint32)( ( (float)(Amount) ) *0.15f );

		uint32 newHealth = m_caster->GetUInt32Value(UNIT_FIELD_HEALTH) + Amount ;

		uint32 mh = m_caster->GetUInt32Value(UNIT_FIELD_MAXHEALTH);
		if(newHealth <= mh)
			m_caster->SetUInt32Value(UNIT_FIELD_HEALTH, newHealth);
		else
			m_caster->SetUInt32Value(UNIT_FIELD_HEALTH, mh);

		WorldPacket data(SMSG_PERIODICAURALOG, 32);
		data << m_caster->GetNewGUID();
		data << m_Target->GetNewGUID();
		data << CastingSpell->Id;
		data << uint32(1);
		data << uint32(FLAG_PERIODIC_HEAL);
		data << uint32(Amount);
		m_Target->SendMessageToSet(&data,true);

		SendPeriodicAuraLog(m_Target, m_Target, CastingSpell->Id, CastingSpell->School, Amount, 0, 0, false, FLAG_PERIODIC_LEECH);
		m_caster->m_procCounter = 0;

		//some say this prevents some crashes atm
		if( !m_Target->isAlive() )
			return;

		m_caster->HandleProc( PROC_ON_DOT_DAMAGE, 0, m_Target, CastingSpell, Amount );
		m_caster->m_procCounter = 0;

		m_Target->HandleProc( PROC_ON_DOT_DAMAGE_VICTIM, 0, m_caster, CastingSpell, Amount );
		m_Target->m_procCounter = 0;

		m_Target->RemoveAurasByHeal();
	}
}

void Aura::SpellAuraModHitChance(bool apply)
{
	if (!m_target->IsUnit()) return;

	int32 val = mod->m_amount;

	Unit *c = GetUnitCaster();
	if (c && GetSpellProto()->SpellGroupType) {
		SM_FIValue(c->SM_FMiscEffect,&val,GetSpellProto()->SpellGroupType);
		SM_PIValue(c->SM_PMiscEffect,&val,GetSpellProto()->SpellGroupType);
	}

	if( apply )
	{
		static_cast< Unit* >( m_target )->SetHitFromMeleeSpell( static_cast< Unit* >( m_target )->GetHitFromMeleeSpell() + val);
		if(val<0)
			SetNegative();
		else
			SetPositive();
	}
	else
	{
		static_cast< Unit* >( m_target )->SetHitFromMeleeSpell( static_cast< Unit* >( m_target )->GetHitFromMeleeSpell() - val);
		if( static_cast< Unit* >( m_target )->GetHitFromMeleeSpell() < 0 )
		{
			static_cast< Unit* >( m_target )->SetHitFromMeleeSpell( 0 );
		}
	}
}

void Aura::SpellAuraModSpellHitChance(bool apply)
{
	if( p_target != NULL )
	{
		if( apply )
		{
			p_target->SetHitFromSpell( p_target->GetHitFromSpell() + mod->m_amount );
			if( mod->m_amount < 0 )
				SetNegative();
			else
				SetPositive();
		}
		else
		{
			p_target->SetHitFromSpell( p_target->GetHitFromSpell() - mod->m_amount );
			if( p_target->GetHitFromSpell() < 0 )
			{
				p_target->SetHitFromSpell(0);
			}
		}
	}
}

void Aura::SpellAuraTransform(bool apply)
{
	// Try a dummy SpellHandler
	if(sScriptMgr.CallScriptedDummyAura(GetSpellId(), mod->i, this, apply))
		return;

	uint32 displayId = 0;
	CreatureInfo* ci = CreatureNameStorage.LookupEntry(mod->m_miscValue);

	if(ci)
		displayId = ci->Male_DisplayID;

	if(p_target && p_target->m_MountSpellId)
		m_target->RemoveAura(p_target->m_MountSpellId);

   // SetPositive();
	switch( GetSpellProto()->Id )
	{
		case 20584://wisp
			m_target->SetUInt32Value( UNIT_FIELD_DISPLAYID, apply ? 10045:m_target->GetUInt32Value( UNIT_FIELD_NATIVEDISPLAYID ) );
		break;

		case 30167: // Red Ogre Costume
		{
			if( apply )
				m_target->SetUInt32Value( UNIT_FIELD_DISPLAYID, 11549 );
			else
				m_target->SetUInt32Value( UNIT_FIELD_DISPLAYID, m_target->GetUInt32Value( UNIT_FIELD_NATIVEDISPLAYID ) );
		}break;

		case 41301: // Time-Lost Figurine
		{
			if( apply )
				m_target->SetUInt32Value( UNIT_FIELD_DISPLAYID, 18628 );
			else
				m_target->SetUInt32Value( UNIT_FIELD_DISPLAYID, m_target->GetUInt32Value( UNIT_FIELD_NATIVEDISPLAYID ) );
		}break;

		case 50517:// Dread Corsair
		{
			if( apply )
				m_target->SetUInt32Value( UNIT_FIELD_DISPLAYID, 25037 );
			else
				m_target->SetUInt32Value( UNIT_FIELD_DISPLAYID, m_target->GetUInt32Value( UNIT_FIELD_NATIVEDISPLAYID ) );
		}break;

		case 16739: // Orb of Deception
		{
			if( apply )
			{
				if(m_target->getRace() == RACE_ORC)
				{
					if( m_target->getGender() == 0 )
						m_target->SetUInt32Value(UNIT_FIELD_DISPLAYID, 10139);
					else
						m_target->SetUInt32Value(UNIT_FIELD_DISPLAYID, 10140);
				}
				if(m_target->getRace() == RACE_TAUREN)
				{
					if( m_target->getGender() == 0 )
						m_target->SetUInt32Value(UNIT_FIELD_DISPLAYID, 10136);
					else
						m_target->SetUInt32Value(UNIT_FIELD_DISPLAYID, 10147);
				}
				if(m_target->getRace() == RACE_TROLL)
				{
					if( m_target->getGender() == 0 )
						m_target->SetUInt32Value(UNIT_FIELD_DISPLAYID, 10135);
					else
						m_target->SetUInt32Value(UNIT_FIELD_DISPLAYID, 10134);
				}
				if(m_target->getRace() == RACE_UNDEAD)
				{
					if( m_target->getGender() == 0 )
						m_target->SetUInt32Value(UNIT_FIELD_DISPLAYID, 10146);
					else
						m_target->SetUInt32Value(UNIT_FIELD_DISPLAYID, 10145);
				}
				if(m_target->getRace() == RACE_BLOODELF)
				{
					if( m_target->getGender() == 0 )
						m_target->SetUInt32Value(UNIT_FIELD_DISPLAYID, 17829);
					else
						m_target->SetUInt32Value(UNIT_FIELD_DISPLAYID, 17830);
				}

				if(m_target->getRace() == RACE_GNOME)
				{
					if( m_target->getGender() == 0 )
						m_target->SetUInt32Value(UNIT_FIELD_DISPLAYID, 10148);
					else
						m_target->SetUInt32Value(UNIT_FIELD_DISPLAYID, 10149);
				}
				if(m_target->getRace() == RACE_DWARF)
				{
					if( m_target->getGender() == 0 )
						m_target->SetUInt32Value(UNIT_FIELD_DISPLAYID, 10141);
					else
						m_target->SetUInt32Value(UNIT_FIELD_DISPLAYID, 10142);
				}
				if(m_target->getRace() == RACE_HUMAN)
				{
					if( m_target->getGender() == 0 )
						m_target->SetUInt32Value(UNIT_FIELD_DISPLAYID, 10137);
					else
						m_target->SetUInt32Value(UNIT_FIELD_DISPLAYID, 10138);
				}
				if(m_target->getRace() == RACE_NIGHTELF)
				{
					if( m_target->getGender() == 0 )
						m_target->SetUInt32Value(UNIT_FIELD_DISPLAYID, 10143);
					else
						m_target->SetUInt32Value(UNIT_FIELD_DISPLAYID, 10144);
				}
				if(m_target->getRace() == RACE_DRAENEI)
				{
					if( m_target->getGender() == 0 )
						m_target->SetUInt32Value(UNIT_FIELD_DISPLAYID, 17827);
					else
						m_target->SetUInt32Value(UNIT_FIELD_DISPLAYID, 17828);
				}
			}
			else
				m_target->SetUInt32Value( UNIT_FIELD_DISPLAYID, m_target->GetUInt32Value( UNIT_FIELD_NATIVEDISPLAYID ) );
		}break;

		case 42365:	// murloc costume
			m_target->SetUInt32Value( UNIT_FIELD_DISPLAYID, apply ? 21723 : m_target->GetUInt32Value( UNIT_FIELD_NATIVEDISPLAYID ) );
			break;

		case 118://polymorph
		case 851:
		case 5254:
		case 12824:
		case 12825:
		case 12826:
		case 13323:
		case 15534:
		case 22274:
		case 23603:
		case 28270:	 // Polymorph: Cow
		case 28271:	 // Polymorph: Turtle
		case 28272:	 // Polymorph: Pig
		case 61025:  // Polymorph: Serpent
		case 61305:  // Polymorph: Black Cat
		case 61721:  // Polymorph: Rabbit
		case 61780:  // Polymorph: Turkey
			{
				if(!displayId)
				{
					switch(GetSpellProto()->Id)
					{
					case 28270:	 // Cow
						displayId = 1060;
						break;

					case 28272:	 // Pig
						displayId = 16356 + RandomUInt(2);
						break;

					case 28271:	 // Turtle
						displayId = 16359 + RandomUInt(2);
						break;

					default:
						displayId = 856;
						break;

					}
				}

				if(apply)
				{
					if (GetUnitCaster() != NULL && m_target->GetTypeId() == TYPEID_UNIT)
						m_target->GetAIInterface()->AttackReaction(GetUnitCaster(), 1, GetSpellId());

					m_target->SetUInt32Value(UNIT_FIELD_DISPLAYID, displayId);

					// remove the current spell (for channalers)
					if(m_target->m_currentSpell && m_target->GetGUID() != m_casterGuid &&
						m_target->m_currentSpell->getState() == SPELL_STATE_CASTING )
					{
						m_target->m_currentSpell->cancel();
						m_target->m_currentSpell = 0;
					}

					sEventMgr.AddEvent(this, &Aura::EventPeriodicHeal1,(uint32)1000,EVENT_AURA_PERIODIC_HEAL,1000,0,EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
					m_target->polySpell = GetSpellProto()->Id;
				}
				else
				{
					m_target->SetUInt32Value(UNIT_FIELD_DISPLAYID, m_target->GetUInt32Value(UNIT_FIELD_NATIVEDISPLAYID));
					m_target->polySpell = 0;
				}
			}break;

		case 19937:
			{
				if( apply )
				{
					// TODO: Sniff the spell / item, we need to know the real displayID
					// guessed this may not be correct
					// human = 7820
					// dwarf = 7819
					// Halfling = 7818
					// maybe 7842 as its from a lesser npc
					m_target->SetUInt32Value( UNIT_FIELD_DISPLAYID, 7842 );
				}
				else
				{
					m_target->SetUInt32Value( UNIT_FIELD_DISPLAYID, m_target->GetUInt32Value(UNIT_FIELD_NATIVEDISPLAYID) );
				}
			}break;
		case 47585: //Dispersion
			{
				if( !displayId ) 
					return;

				if( apply )
				{
					m_target->SetUInt32Value( UNIT_FIELD_DISPLAYID, displayId );
					//m_target->RemoveAllMovementImpairing();
					//Immune to snare and movement impairing effects - is that it?
					m_target->MechanicsDispels[7]++;
					m_target->MechanicsDispels[11]++;
					m_target->RemoveAllAurasByMechanic( 7, static_cast<uint32>(-1) , false );
					m_target->RemoveAllAurasByMechanic( 11, static_cast<uint32>(-1) , false );

					sEventMgr.AddEvent( this, &Aura::EventPeriodicManaPct, 6.0f,
					EVENT_AURA_PERIOCIC_MANA, 1000, 6, EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
				}
				else
				{
					m_target->SetUInt32Value( UNIT_FIELD_DISPLAYID, m_target->GetUInt32Value(UNIT_FIELD_NATIVEDISPLAYID) );
					m_target->MechanicsDispels[7]--;
					m_target->MechanicsDispels[11]--;
				}
			}break;
		default:
		{
			if( !displayId ) 
				return;

			if( apply )
			{
				m_target->SetUInt32Value (UNIT_FIELD_DISPLAYID, displayId);
			}
			else
			{
				m_target->SetUInt32Value (UNIT_FIELD_DISPLAYID, m_target->GetUInt32Value(UNIT_FIELD_NATIVEDISPLAYID));
			}
		}break;
	};

	if( m_target )
		m_target->EventModelChange();
}

void Aura::SpellAuraModSpellCritChance(bool apply)
{
	if( p_target != NULL )
	{
		int32 amt;
		if( apply )
		{
			amt = mod->m_amount;
			if( amt < 0 )
				SetNegative();
			else
				SetPositive();
		}
		else
			amt = -mod->m_amount;

		p_target->spellcritperc += amt;
		p_target->SetSpellCritFromSpell( p_target->GetSpellCritFromSpell() + amt );
		p_target->UpdateChanceFields();
	}
}

void Aura::SpellAuraIncreaseSwimSpeed(bool apply)
{
	if(apply)
	{
		if(m_target->isAlive())  SetPositive();
		m_target->m_swimSpeed = 0.04722222f*(100+mod->m_amount);
	}
	else
		m_target->m_swimSpeed = PLAYER_NORMAL_SWIM_SPEED;
	if( p_target != NULL )
	{
		WorldPacket data( SMSG_FORCE_SWIM_SPEED_CHANGE, 17 );
		data << p_target->GetNewGUID();
		data << (uint32)2;
		data << m_target->m_swimSpeed;
		p_target->GetSession()->SendPacket( &data );
	}
}

void Aura::SpellAuraModCratureDmgDone(bool apply)
{
	if( p_target != NULL )
	{
		if( apply )
		{
			for( uint8 x = 0; x < 11; x++ )
				if( mod->m_miscValue & ( (uint32)1 << x ) )
					p_target->IncreaseDamageByType[x+1] += mod->m_amount;

			mod->m_amount < 0 ? SetNegative() : SetPositive();
		}
		else
			for( uint8 x = 0; x < 11; x++ )
				if( mod->m_miscValue & (((uint32)1) << x ) )
					p_target->IncreaseDamageByType[x+1] -= mod->m_amount;
	}
}

void Aura::SpellAuraPacifySilence(bool apply)
{
	// Can't Attack or Cast Spells
	if(apply)
	{
		if(m_spellProto->Id == 24937)
			SetPositive();
		else
			SetNegative();

		m_target->m_pacified++;
		m_target->m_silenced++;
		m_target->m_special_state |= UNIT_STATE_PACIFY | UNIT_STATE_SILENCE;
		m_target->SetFlag(UNIT_FIELD_FLAGS, UNIT_FLAG_PACIFIED | UNIT_FLAG_SILENCED);

		if(m_target->m_currentSpell && m_target->GetGUID() != m_casterGuid &&
			m_target->m_currentSpell->getState() == SPELL_STATE_CASTING )
			{
				m_target->m_currentSpell->cancel();
				m_target->m_currentSpell = 0;
			}
	}
	else
	{
		m_target->m_pacified--;

		if(m_target->m_pacified == 0)
		{
			m_target->m_special_state &= ~UNIT_STATE_PACIFY;
			m_target->RemoveFlag(UNIT_FIELD_FLAGS, UNIT_FLAG_PACIFIED);
		}

		m_target->m_silenced--;

		if(m_target->m_silenced == 0)
		{
			m_target->m_special_state &= ~UNIT_STATE_SILENCE;
			m_target->RemoveFlag(UNIT_FIELD_FLAGS, UNIT_FLAG_SILENCED);
		}
	}
}

void Aura::SpellAuraModScale(bool apply)
{
	float current = m_target->GetFloatValue(OBJECT_FIELD_SCALE_X);
	float delta = mod->m_amount/100.0f;

	m_target->SetFloatValue(OBJECT_FIELD_SCALE_X, apply ? (current+current*delta) : current/(1.0f+delta));
}

void Aura::SpellAuraPeriodicHealthFunnel(bool apply)
{
	if(apply)
	{
		uint32 amt = mod->m_amount;
		sEventMgr.AddEvent(this, &Aura::EventPeriodicHealthFunnel, amt,
			EVENT_AURA_PERIODIC_HEALTH_FUNNEL, GetSpellProto()->EffectAmplitude[mod->i], 0,EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
	}
}

void Aura::EventPeriodicHealthFunnel(uint32 amount)
{
	//Blood Siphon
	//Deals 200 damage per second.
	//Feeding Hakkar 1000 health per second.
	Unit* m_caster = GetUnitCaster();
	if(!m_caster)
		return;
	if(m_target->isAlive() && m_caster->isAlive())
	{

		m_caster->DealDamage(m_target, amount, 0, 0, GetSpellId(),true);
		uint32 newHealth = m_caster->GetUInt32Value(UNIT_FIELD_HEALTH) + 1000;

		uint32 mh = m_caster->GetUInt32Value(UNIT_FIELD_MAXHEALTH);
		if(newHealth <= mh)
			m_caster->SetUInt32Value(UNIT_FIELD_HEALTH, newHealth);
		else
			m_caster->SetUInt32Value(UNIT_FIELD_HEALTH, mh);

		SendPeriodicAuraLog(m_target, m_target, m_spellProto->Id, m_spellProto->School, 1000, 0, 0, false, FLAG_PERIODIC_LEECH);

		m_caster->RemoveAurasByHeal();
	}
}

void Aura::SpellAuraPeriodicManaLeech(bool apply)
{
	if( apply )
	{
		uint32 amt = mod->m_amount;
		uint32 mult = amt;

		amt = mult * m_target->GetUInt32Value( UNIT_FIELD_MAXPOWER1 ) / 100;
		
		Unit* caster = GetUnitCaster();
		if( caster != NULL )
		{
			if( amt > caster->GetUInt32Value( UNIT_FIELD_MAXPOWER1 ) * ( mult << 1 ) / 100 ) 
				amt = caster->GetUInt32Value( UNIT_FIELD_MAXPOWER1) * ( mult << 1 ) / 100;
		}
		sEventMgr.AddEvent( this, &Aura::EventPeriodicManaLeech, amt,
			EVENT_AURA_PERIODIC_LEECH, GetSpellProto()->EffectAmplitude[mod->i], 0, EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT );
	}
}

void Aura::EventPeriodicManaLeech(uint32 amount)
{
	Unit* m_caster = GetUnitCaster();
	if(!m_caster)
		return;
	if(m_target->isAlive() && m_caster->isAlive())
	{

		int32 amt = (int32)min( amount, m_target->GetUInt32Value( UNIT_FIELD_POWER1 ) );
		uint32 cm = m_caster->GetUInt32Value(UNIT_FIELD_POWER1)+amt;
		uint32 mm = m_caster->GetUInt32Value(UNIT_FIELD_MAXPOWER1);
		if(cm <= mm)
			m_caster->SetUInt32Value(UNIT_FIELD_POWER1, cm);
		else
			m_caster->SetUInt32Value(UNIT_FIELD_POWER1, mm);
		m_target->ModUnsigned32Value(UNIT_FIELD_POWER1, -amt);
	}
}

void Aura::SpellAuraModCastingSpeed(bool apply)
{
	float current = m_target->GetFloatValue( UNIT_MOD_CAST_SPEED) ;
	if( apply )
		current -= float( mod->m_amount ) / 100.0f;
	else
		current += float( mod->m_amount ) / 100.0f;

	m_target->SetFloatValue( UNIT_MOD_CAST_SPEED, current );
}

void Aura::SpellAuraFeignDeath(bool apply)
{
	if( p_target != NULL )
	{
		WorldPacket data(50);
		if( apply )
		{
			p_target->EventAttackStop();
			p_target->SetFlag( UNIT_FIELD_FLAGS_2, 1 );
			p_target->SetFlag( UNIT_FIELD_FLAGS, UNIT_FLAG_FEIGN_DEATH );
			//p_target->SetFlag( UNIT_FIELD_FLAGS, UNIT_FLAG_DEAD );
			p_target->SetFlag( UNIT_DYNAMIC_FLAGS, U_DYN_FLAG_DEAD );
			//p_target->SetUInt32Value( UNIT_NPC_EMOTESTATE, EMOTE_STATE_DEAD );

			data.SetOpcode( SMSG_START_MIRROR_TIMER );
			data << uint32( 2 );		// type
			data << uint32( GetDuration() );
			data << uint32( GetDuration() );
			data << uint32( 0xFFFFFFFF );
			data << uint8( 0 );
			data << uint32( m_spellProto->Id );		// ???
			p_target->GetSession()->SendPacket( &data );

			data.Initialize( SMSG_CLEAR_TARGET );
			data << p_target->GetGUID();
//			pTarget->setDeathState(DEAD);

			//now get rid of mobs agro. pTarget->CombatStatus.AttackersForgetHate() - this works only for already attacking mobs
		    for(std::set<Object*>::iterator itr = p_target->GetInRangeSetBegin(); itr != p_target->GetInRangeSetEnd(); itr++ )
			{
				if((*itr)->IsUnit() && ((Unit*)(*itr))->isAlive())
				{
					if((*itr)->GetTypeId()==TYPEID_UNIT)
						static_cast< Unit* >(*itr)->GetAIInterface()->RemoveThreatByPtr( p_target );

					//if this is player and targeting us then we interrupt cast
					if( (*itr)->IsPlayer() )
					{
						Player* plr = static_cast< Player* >( *itr );

						if( plr->IsCasting() && plr->GetSelection() == p_target->GetGUID() )
							plr->CancelSpell( NULL ); //cancel current casting spell

						plr->GetSession()->SendPacket( &data );
					}
				}
			}
			p_target->setDeathState(ALIVE);
		}
		else
		{
			p_target->RemoveFlag(UNIT_FIELD_FLAGS_2, 1);
			p_target->RemoveFlag(UNIT_FIELD_FLAGS, UNIT_FLAG_FEIGN_DEATH);
			p_target->RemoveFlag(UNIT_DYNAMIC_FLAGS, U_DYN_FLAG_DEAD);
			//p_target->RemoveFlag(UNIT_FIELD_FLAGS, UNIT_FLAG_DEAD);
			//p_target->SetUInt32Value(UNIT_NPC_EMOTESTATE, 0);
			data.SetOpcode(SMSG_STOP_MIRROR_TIMER);
            data << uint32( TIMER_FEIGNDEATH );
			p_target->GetSession()->SendPacket(&data);
		}
	}
}

void Aura::SpellAuraModDisarm(bool apply)
{
	if(apply)
	{
		if( p_target != NULL && p_target->IsInFeralForm() ) return;

		SetNegative();

		m_target->disarmed = true;
		m_target->m_special_state |= UNIT_STATE_DISARMED;
		m_target->SetFlag(UNIT_FIELD_FLAGS, UNIT_FLAG_DISARMED);
	}
	else
	{
		m_target->disarmed = false;
		m_target->m_special_state &= ~UNIT_STATE_DISARMED;
		m_target->RemoveFlag(UNIT_FIELD_FLAGS, UNIT_FLAG_DISARMED);
	}
}

void Aura::SpellAuraModStalked(bool apply)
{
	if(apply)
	{
		m_target->stalkedby = m_casterGuid;
		SetNegative();
	}
	else
	{
		m_target->stalkedby = 0;
	}
}

void Aura::SpellAuraSchoolAbsorb(bool apply)
{
	if( apply )
	{
		if( m_spellProto->NameHash == SPELL_HASH_ARDENT_DEFENDER ) // Ardent Defender it only applys on 35% hp :/
		{
			m_target->DamageTakenPctModOnHP35 += (float)(mod->m_amount);
			return;
		}

		SetPositive();
		int32 val = mod->m_amount;

		Unit* caster = GetUnitCaster();
		if( caster != NULL )
		{
			/*
			//This will fix talents that affects damage absorbed.
			int flat = 0;
			SM_FIValue( caster->SM_FMiscEffect, &flat, GetSpellProto()->SpellGroupType );
			val += float2int32( float( val * flat ) / 100.0f );
			*/

			float Base = GetSpellProto()->Base_coef_override;
			float Misc = GetSpellProto()->Misc_coef_override;
			float Coef = 0;
			SM_FFValue( caster->SM_FPenalty, &Coef, m_spellProto->SpellGroupType );
			SM_FFValue( caster->SM_PPenalty, &Coef, m_spellProto->SpellGroupType );
		
			Base += Coef / 100;
			Misc += Coef / 100;

			//For spells Affected by Bonus Healing we use Base_coef_override.
			if( Base > 0 )
				val += float2int32( float( caster->HealDoneMod[GetSpellProto()->School] ) * Base );
			//For spells Affected by Bonus Damage we use Misc_coef_override.
			else if( Misc > 0 )
				val += float2int32( float( caster->GetDamageDoneMod( GetSpellProto()->School ) ) * Misc );

			if( GetSpellProto()->AP_coef > 0 )
				val += float2int32(caster->GetAP() * GetSpellProto()->AP_coef);

			if( GetSpellProto()->RAP_coef > 0 )
				val += float2int32(caster->GetAP() * GetSpellProto()->RAP_coef);
		}

		Absorb *ab = new Absorb;
		ab->amt = val;
		ab->spellid = GetSpellId();
		ab->caster = m_casterGuid;
		for( uint8 x = 0; x < SCHOOL_COUNT; x++ )
			if( mod->m_miscValue & (((uint32)1) << x ) )
				m_target->Absorbs[x].push_back( ab );
	}
	else
	{
		if( m_spellProto->NameHash == SPELL_HASH_ARDENT_DEFENDER ) // Ardent Defender it only applys on 35% hp :/
		{
			m_target->DamageTakenPctModOnHP35 -= (float)(mod->m_amount);
			return;
		}

		Absorb *ab = NULL;
		for( uint8 x = 0; x < SCHOOL_COUNT; x++ )
		{
			if( mod->m_miscValue & (((uint32)1) << x ) )
			{
				for(SchoolAbsorb::iterator i = m_target->Absorbs[x].begin(); i != m_target->Absorbs[x].end(); i++)
				{
					if( (*i)->spellid == GetSpellId() && (*i)->caster == m_casterGuid )
					{
						ab = (*i);
						m_target->Absorbs[x].erase(i);
						delete ab;
						break;
					}
				}
			}
		}
		else
		{
			m_target->OnDispelOrFullAbsorb( this, GetUnitCaster(), NULL, 2 );
		}
	}
}

void Aura::SpellAuraModSpellCritChanceSchool(bool apply)
{
	if(apply)
	{
		for( uint8 x = 0; x < SCHOOL_COUNT; x++ )
			if( mod->m_miscValue & (((uint32)1) << x ) )
				m_target->SpellCritChanceSchool[x] += mod->m_amount;
		if( mod->m_amount < 0 )
			SetNegative();
		else
			SetPositive();
	}
	else
	{
		for(uint32 x= 0;x<7;x++)
		{
			if (mod->m_miscValue & (((uint32)1)<<x) )
			{
				m_target->SpellCritChanceSchool[x] -= mod->m_amount;
				/*if(m_target->SpellCritChanceSchool[x] < 0)
					m_target->SpellCritChanceSchool[x] = 0;*/
			}
		}
	}
	if( p_target != NULL )
		p_target->UpdateChanceFields();
}

void Aura::SpellAuraModPowerCost(bool apply)
{
	int32 val = (apply) ? mod->m_amount : -mod->m_amount;
	if( apply )
	{
		if(val > 0)
			SetNegative();
		else
			SetPositive();
	}
	for(uint32 x= 0;x<7;x++)
		if (mod->m_miscValue & (((uint32)1)<<x) )
			m_target->ModFloatValue(UNIT_FIELD_POWER_COST_MULTIPLIER+x, (float(val))/100.0f);
}

void Aura::SpellAuraModPowerCostSchool(bool apply)
{
	if(apply)
	{
		for(uint32 x=1;x<7;x++)
			if (mod->m_miscValue & (((uint32)1)<<x) )
				m_target->PowerCostMod[x] += mod->m_amount;
	}
	else
	{
		for(uint32 x=1;x<7;x++)
		{
			if (mod->m_miscValue & (((uint32)1)<<x) )
			{
				m_target->PowerCostMod[x] -= mod->m_amount;
			}
		}
	}
}

void Aura::SpellAuraReflectSpellsSchool(bool apply)
{
	m_target->RemoveReflect( GetSpellId(), apply );

	if( apply )
	{
		ReflectSpellSchool *rss = new ReflectSpellSchool;
		rss->chance = mod->m_amount;
		rss->spellId = GetSpellId();
		rss->require_aura_hash = 0;
		rss->infront = false;
		sLog.outError("rss->chance = %i", rss->chance);
		if(m_spellProto->Attributes == 0x400D0 && m_spellProto->AttributesEx == 0)
			rss->school = (int)(log10((float)mod->m_miscValue) / log10((float)2));
		else
			rss->school = m_spellProto->School;

		m_target->m_reflectSpellSchool.push_back( rss );
	}
}

void Aura::SpellAuraModLanguage(bool apply)
{
	if(apply)
		m_target->m_modlanguage = mod->m_miscValue;
	else
		m_target->m_modlanguage = -1;
}

void Aura::SpellAuraAddFarSight(bool apply)
{
	if(apply)
	{
		if(m_target->GetTypeId() != TYPEID_PLAYER)
			return;

		//FIXME:grep aka Nublex will fix this
		//Make update circle bigger here
	}
	else
	{
		//Destroy new updated objects here if they are still out of update range
		//w/e
	}
}

void Aura::SpellAuraMechanicImmunity(bool apply)
{
	if(apply)
	{
		assert(mod->m_miscValue < MECHANIC_END);
		m_target->MechanicsDispels[mod->m_miscValue]++;

		if(mod->m_miscValue != 16 && mod->m_miscValue != 25 && mod->m_miscValue != 19) // don't remove bandages, Power Word and protection effect
		{
			/* Supa's test run of Unit::RemoveAllAurasByMechanic */
			m_target->RemoveAllAurasByMechanic( (uint32)mod->m_miscValue , static_cast<uint32>(-1) , false );


			//Insignia/Medallion of A/H			//Every Man for Himself
			if( m_spellProto->Id == 42292 || m_spellProto->Id == 59752 )
			{
				for(uint32 x= MAX_NEGATIVE_AURAS_EXTEDED_START; x < MAX_NEGATIVE_AURAS_EXTEDED_END; ++x)
				{
					if(m_target->m_auras[x])
					{
						for(uint32 y = 0; y < 3; ++y)
						{
							switch(m_target->m_auras[x]->GetSpellProto()->EffectApplyAuraName[y])
							{
							case SPELL_AURA_MOD_STUN:
							case SPELL_AURA_MOD_CONFUSE:
							case SPELL_AURA_MOD_ROOT:
							case SPELL_AURA_MOD_FEAR:
							case SPELL_AURA_MOD_DECREASE_SPEED:
								m_target->m_auras[x]->Remove();
								goto out;
								break;
							}
							continue;

out:
							break;
						}
					}
				}
			}
		}
		else
			SetNegative();
	}
	else
		m_target->MechanicsDispels[mod->m_miscValue]--;

	//Hunter - The Beast Within
	//Should provide immunity for all CC effect, but the dbc specifies only stuns. Imba!
	if( GetSpellProto()->Id == 19574 || GetSpellProto()->Id == 34471)
	{
		static uint32 mechanics[15] = { MECHANIC_CHARMED, MECHANIC_DISORIENTED,	MECHANIC_DISTRACED, MECHANIC_FLEEING,
										MECHANIC_ROOTED, MECHANIC_ASLEEP, MECHANIC_ENSNARED, MECHANIC_STUNNED,
										MECHANIC_FROZEN, MECHANIC_INCAPACIPATED, MECHANIC_POLYMORPHED, MECHANIC_BANISHED,
										MECHANIC_SEDUCED, MECHANIC_HORRIFIED, MECHANIC_SAPPED };

		for( uint32 x = 0; x < 15; x++ )
		{
			if( apply )
			{
				m_target->MechanicsDispels[ mechanics[x] ]++;
				m_target->RemoveAllAurasByMechanic( mechanics[x], (uint32)(-1), false );
			}
			else
				m_target->MechanicsDispels[ mechanics[x] ]--;
		}
	}

	// Warrior - Berserker Rage
	if( GetSpellProto()->Id == 18499 )
	{
		if( p_target == NULL )
			return;

		if( apply )
			p_target->rageFromDamageTaken += 100;
		else
			p_target->rageFromDamageTaken -= 100;
	}

	// Warrior - Heroic Fury
	if( GetSpellProto()->Id == 60970 && apply )
	{
		if( !p_target )
			return;

		if( p_target->HasSpell(20252) )
			p_target->ClearCooldownForSpell(20252);

		for(uint32 x= MAX_NEGATIVE_AURAS_EXTEDED_START; x < MAX_NEGATIVE_AURAS_EXTEDED_END; ++x)
		{
			if(p_target->m_auras[x])
			{
				for(uint32 y = 0; y < 3; ++y)
				{
					switch(p_target->m_auras[x]->GetSpellProto()->EffectApplyAuraName[y])
					{
					case SPELL_AURA_MOD_ROOT:
					case SPELL_AURA_MOD_DECREASE_SPEED:
						p_target->m_auras[x]->Remove();
						goto out1;
						break;
					}
					continue;
out1:
					break;
				}
			}
		}
	}
}

void Aura::SpellAuraMounted(bool apply)
{
	if(!p_target) return;

	/*Shady: Is it necessary? Stealth should be broken since all spells with Mounted SpellEffect don't have "does not break stealth" flag (except internal Video mount spell).
	So commented, cause we don't need useless checks and hackfixes*/
	/* if(m_target->IsStealth())
	{
		uint32 id = m_target->m_stealth;
		m_target->m_stealth = 0;
		m_target->RemoveAura(id);
	}*/

	bool isVehicleSpell  = m_spellProto->Effect[1] == SPELL_EFFECT_SUMMON ? true : false;

	if(apply)
	{
		if( isVehicleSpell )
			SetDuration(100);

		SetPositive();

		//p_target->AdvanceSkillLine(762); // advance riding skill

		if(p_target->m_bg)
			p_target->m_bg->HookOnMount(p_target);

		if(p_target->m_MountSpellId)
			m_target->RemoveAura(p_target->m_MountSpellId);

		m_target->RemoveAurasByInterruptFlag(AURA_INTERRUPT_ON_MOUNT);

		CreatureInfo* ci = CreatureNameStorage.LookupEntry(mod->m_miscValue);
		if(!ci) return;

		uint32 displayId = ci->Male_DisplayID;
		if(!displayId) return;

		p_target->m_MountSpellId = m_spellProto->Id;
		p_target->flying_aura = 0;
		m_target->SetUInt32Value( UNIT_FIELD_MOUNTDISPLAYID , displayId);
		//m_target->SetFlag(UNIT_FIELD_FLAGS, UNIT_FLAG_MOUNTED_TAXI);

		if( p_target->GetShapeShift() && !(p_target->GetShapeShift() & ( FORM_BATTLESTANCE | FORM_DEFENSIVESTANCE | FORM_BERSERKERSTANCE ) ) && p_target->m_ShapeShifted != m_spellProto->Id )
			p_target->RemoveAura( p_target->m_ShapeShifted );

		p_target->DismissActivePet();
	}
	else
	{
		p_target->m_MountSpellId = 0;
		p_target->flying_aura = 0;
		m_target->SetUInt32Value(UNIT_FIELD_MOUNTDISPLAYID, 0);
		//m_target->RemoveFlag(UNIT_FIELD_FLAGS, UNIT_FLAG_MOUNTED_TAXI);

		//if we had pet then respawn
		p_target->SpawnActivePet();
		p_target->RemoveAurasByInterruptFlag( AURA_INTERRUPT_ON_DISMOUNT );
	}
}

void Aura::SpellAuraModDamagePercDone(bool apply)
{
	float val = (apply) ? mod->m_amount/100.0f : -mod->m_amount/100.0f;

	if( p_target != NULL )
	{
		switch( GetSpellId() )
		{
		case 51185: //Druid - King of the Jungle - Bear
			{
				Player *plr = TO_PLAYER( m_target );
				if( plr->mSpells.find(48492) != plr->mSpells.end() )
					val = (apply) ? 0.5f : -0.5f;
				if( plr->mSpells.find(48494) != plr->mSpells.end() )
					val = (apply) ? 0.10f : -0.10f;
				if( plr->mSpells.find(48495) != plr->mSpells.end() )
					val = (apply) ? 0.15f : -0.15f;
			}
			break;
		}

		if( GetSpellProto()->EquippedItemClass == -1 )//does not depend on weapon
		{
			for( uint8 x = 0; x < SCHOOL_COUNT; x++ )
			{
				if( mod->m_miscValue & ( (uint32)1 << x ) )
				{
					// display to client (things that are weapon dependant don't get displayed)
					p_target->ModFloatValue( PLAYER_FIELD_MOD_DAMAGE_DONE_PCT + x, val );
				}
			}
		}
		if( mod->m_miscValue & 1 )
		{
			if( apply )
			{
				WeaponModifier md;
				md.value = val;
				md.wclass = GetSpellProto()->EquippedItemClass;
				md.subclass = GetSpellProto()->EquippedItemSubClass;
				p_target->damagedone.insert( make_pair( GetSpellId(), md ) );
			}
			else
			{
				std::map< uint32, WeaponModifier >::iterator i = p_target->damagedone.begin();

				for( ; i != p_target->damagedone.end() ; i++ )
				{
					if(( *i).first == GetSpellId() )
					{
						p_target->damagedone.erase(i);
						break;
					}
				}
				p_target->damagedone.erase( GetSpellId() );
			}
		}
	}
	else
	{
		for( uint8 x = 0; x < 7; x++ )
		{
			if( mod->m_miscValue & ( (uint32)1 << x ) )
			{
				static_cast< Creature* >( m_target )->ModDamageDonePct[x] += val;
			}
		}
	}
	m_target->CalcDamage();
}

void Aura::SpellAuraModPercStat(bool apply)
{
	int32 val;
	if(apply)
	{
		val = mod->m_amount;
		if(val<0)
			SetNegative();
		else
			SetPositive();
	}
	else
		val= -mod->m_amount;

	if (mod->m_miscValue == -1)//all stats
	{
		if( p_target != NULL )
		{
			for( uint8 x = 0; x < 5; x++ )
			{
				if( mod->m_amount > 0 )
					p_target->StatModPctPos[x] += val;
				else
					p_target->StatModPctNeg[x] -= val;

				p_target->CalcStat(x);
			}

			p_target->UpdateStats();
			p_target->UpdateChances();
		}
		else
		{
			for( uint8 x = 0; x < 5; x++ )
			{
				static_cast< Creature* >( m_target )->StatModPct[x] += val;
				static_cast< Creature* >( m_target )->CalcStat(x);
			}
		}
	}
	else
	{
		ASSERT(mod->m_miscValue < 5);
		if( p_target != NULL )
		{
			if( mod->m_amount > 0 )
				p_target->StatModPctPos[mod->m_miscValue] += val;
			else
				p_target->StatModPctNeg[mod->m_miscValue] -= val;

			p_target->CalcStat(mod->m_miscValue);

			p_target->UpdateStats();
			p_target->UpdateChances();
		}
		else if( m_target->GetTypeId() == TYPEID_UNIT )
		{
			static_cast< Creature* >( m_target )->StatModPct[ mod->m_miscValue ] += val;
			static_cast< Creature* >( m_target )->CalcStat( mod->m_miscValue );
		}
	}
}

void Aura::SpellAuraSplitDamage(bool apply)
{
	if( m_target == NULL )
		return;

	Unit * caster = GetUnitCaster();
	if( caster == NULL )
		return;

	if( caster->m_damageSplitTarget )
	{
		delete caster->m_damageSplitTarget;
		caster->m_damageSplitTarget = NULL;
	}

	if(apply)
	{
		DamageSplitTarget *ds = new DamageSplitTarget;
		ds->m_flatDamageSplit = 0;
		ds->m_spellId = GetSpellProto()->Id;
		ds->m_pctDamageSplit = mod->m_miscValue / 100.0f;
		ds->damage_type = static_cast<uint8>( mod->m_type );
		ds->creator = (void*)this;
		ds->m_target = m_target->GetGUID();
		caster->m_damageSplitTarget = ds;
	}
}

void Aura::SpellAuraModRegen(bool apply)
{
	if(apply)//seems like only positive
	{
		SetPositive ();
		sEventMgr.AddEvent(this, &Aura::EventPeriodicHeal1,(uint32)((this->GetSpellProto()->EffectBasePoints[mod->i]+1)/5)*3,
			EVENT_AURA_PERIODIC_REGEN,3000,0,EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
	}
}

void Aura::SpellAuraHealAndJump(bool apply)
{
	// Priest - Prayer of Mending
	if( !m_target || !m_target->IsPlayer() || GetSpellProto()->NameHash != SPELL_HASH_PRAYER_OF_MENDING )
		return;

	Player *caster = TO_PLAYER( m_target );

	if( apply )
	{
		Player *First_new_target, *First_whatever;
		First_new_target = First_whatever = NULL;
		bool passed_prev_target = false;
		Heal_And_Jump_procCharges = caster->GetAuraStackCount(GetSpellProto()->Id);

		// Find new target
		GroupMembersSet::iterator itr;
		SubGroup * pGroup = caster->GetGroup() ? caster->GetGroup()->GetSubGroup(caster->GetSubGroup()) : 0;
		if( pGroup )
		{
			float range = 20.0f;
			range *= range;

			caster->GetGroup()->Lock();
			for( itr = pGroup->GetGroupMembersBegin(); itr != pGroup->GetGroupMembersEnd(); ++itr )
			{
				if( !(*itr)->m_loggedInPlayer || !(*itr)->m_loggedInPlayer->isAlive() )
					continue;

				//we cannot retarget self
				if( (*itr)->m_loggedInPlayer == caster )
				{
					passed_prev_target = true;
					continue;
				}

				if( IsInrange( caster->GetPositionX(), caster->GetPositionY(), caster->GetPositionZ(), (*itr)->m_loggedInPlayer, range) )
				{
					if( !First_whatever )
						First_whatever = (*itr)->m_loggedInPlayer;

					//we target stuff that has no full health. No idea if we must fill target list or not :(
					if( First_whatever && (*itr)->m_loggedInPlayer->GetUInt32Value( UNIT_FIELD_HEALTH ) == (*itr)->m_loggedInPlayer->GetUInt32Value( UNIT_FIELD_MAXHEALTH ) )
						continue;

					//first targatable player in group (like make circular buffer from normal list)
					if( !First_new_target )
						First_new_target = (*itr)->m_loggedInPlayer;

					if( passed_prev_target )
					{
						Heal_And_Jump_Next_new_target = (*itr)->m_loggedInPlayer;
						break;
					}
				}
			}
			caster->GetGroup()->Unlock();
		}

		if( First_new_target && !Heal_And_Jump_Next_new_target )
			Heal_And_Jump_Next_new_target = First_new_target; //we passed end of the list and it is time to restart it

		if( !Heal_And_Jump_Next_new_target )
			Heal_And_Jump_Next_new_target = First_whatever; //we passed end of the list and it is time to restart it
	}
	else
	{
		//if( GetTimeLeft() <= 0 )
			//return;

		// Heal
		SpellEntry *se = dbcSpell.LookupEntry( 33110 );
		if( !se )
			return;

		Spell *sp = new Spell( caster, se, true, NULL );
		if( !sp )
			return;

		sp->forced_basepoints[0] = mod->m_amount;
		SpellCastTargets targets( caster->GetGUID() ); //no target so spelltargeting will get an injured party member
		sp->prepare( &targets );

		if( Heal_And_Jump_Next_new_target && Heal_And_Jump_procCharges > 1)
		{
			Spell *spell = new Spell( caster, GetSpellProto(), true, NULL );
			if( !spell )
				return;

			spell->m_spellInfo->procCharges = ( Heal_And_Jump_procCharges - 1 );
			SpellCastTargets targets( Heal_And_Jump_Next_new_target->GetGUID() ); //no target so spelltargeting will get an injured party member
			spell->prepare( &targets );

			Heal_And_Jump_Next_new_target = NULL;
			Heal_And_Jump_procCharges = 0;
		}
	}
}

void Aura::SpellAuraPeriodicDummy(bool apply)
{
	switch( m_spellProto->NameHash )
	{
	case SPELL_HASH_ASPECT_OF_THE_VIPER:
		{
			if( apply )
			{
				SetPositive();
				sEventMgr.AddEvent(this, &Aura::EventPeriodicEnergizeVariable,(uint32)mod->m_amount,(uint32)mod->m_miscValue,
				EVENT_AURA_PERIODIC_ENERGIZE_VARIABLE, GetSpellProto()->EffectAmplitude[mod->i],0,EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
			}
			else
			{
				sEventMgr.RemoveEvents( this, EVENT_AURA_PERIODIC_ENERGIZE_VARIABLE );
			}
		}break;
	case SPELL_HASH_PREY_ON_THE_WEAK:
		{
			if( apply )
			{
				sEventMgr.AddEvent(this, &Aura::EventPeriodicDummyWithValue, (uint32)mod->m_amount,
				EVENT_UNK, GetSpellProto()->EffectAmplitude[mod->i], 0, EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
			}
			else
			{
				sEventMgr.RemoveEvents( this, EVENT_UNK );
			}
		}break;
	case SPELL_HASH_EXPLOSIVE_SHOT:
		{
			if( apply )
			{
				SetNegative();
				int32 dmg = mod->m_amount;
				dmg += float2int32( m_target->GetUInt32Value(UNIT_FIELD_RANGED_ATTACK_POWER) * 0.16f );

				SpellEntry* se = dbcSpell.LookupEntry( 53352 );
				Spell* sp = new Spell( GetUnitCaster(), se, false, NULL );
				if( se && sp )
				{
					SpellCastTargets targets( m_target->GetGUID() );
					sp->forced_basepoints[0] = GetSpellProto()->EffectBasePoints[0] + Rand(GetSpellProto()->EffectDieSides[0]) + dmg;
					sp->prepare( &targets );
				}

				sEventMgr.AddEvent(this, &Aura::EventPeriodicDamage,(uint32)dmg,
					EVENT_AURA_PERIODIC_DAMAGE,GetSpellProto()->EffectAmplitude[mod->i],0,EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
			}
			else
			{
				sEventMgr.RemoveEvents( this, EVENT_AURA_PERIODIC_DAMAGE );
			}
		}break;
	case SPELL_HASH_DEMONIC_CIRCLE__SUMMON:
		{
			// Do we really need it?
		}break;
	case SPELL_HASH_KILLING_SPREE:
		{
			if( apply )
			{
				SpellEntry* spe = dbcSpell.LookupEntry( 57841 );
				if( !spe )
					return;

				sEventMgr.AddEvent(this, &Aura::EventPeriodicTriggerSpell, spe,
				EVENT_AURA_PERIODIC_TRIGGERSPELL, GetSpellProto()->EffectAmplitude[0], 5, EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
			}
			else
			{
				sEventMgr.RemoveEvents( this, EVENT_AURA_PERIODIC_TRIGGERSPELL );
			}
		}break;
	default:
		{
			if( apply )
			{
				SetPositive();
				sEventMgr.AddEvent(this, &Aura::EventPeriodicDrink, uint32(float2int32(float(mod->m_amount)/5.0f)),
				EVENT_AURA_PERIODIC_REGEN, 1000, 0, EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
			}
			else
			{
				sEventMgr.RemoveEvents( this, EVENT_AURA_PERIODIC_REGEN );
			}
		}
	}
}

void Aura::EventPeriodicDummyWithValue(uint32 amount)
{
	if( p_target != NULL )
	{
		Unit* target = p_target->GetMapMgr()->GetUnit( p_target->GetSelection() );
		if( !target || target->IsDead() )
			return;
		
		uint32 plrHP = p_target->GetHealthPct();
		uint32 targetHP = target->GetHealthPct();

		if( plrHP > targetHP && !m_periodicmodapply )
		{
			p_target->m_modphyscritdmgPCT += amount;
			m_periodicmodapply = true;
		}
		else if( plrHP < targetHP && m_periodicmodapply )
		{
			p_target->m_modphyscritdmgPCT -= amount;
			m_periodicmodapply = false;
		}
	}
}

void Aura::EventPeriodicEnergizeVariable( uint32 amount, uint32 type )
{
	uint32 POWER_TYPE = UNIT_FIELD_POWER1 + type;

	ASSERT(POWER_TYPE<=UNIT_FIELD_POWER5);
	uint32 curEnergy = m_target->GetUInt32Value( POWER_TYPE );
	uint32 maxEnergy = m_target->GetUInt32Value( POWER_TYPE + 6 );

	switch( m_spellProto->NameHash )
	{
		case SPELL_HASH_ASPECT_OF_THE_VIPER:
			float regen, manaPct;
			// http://www.wowwiki.com/Aspect_of_the_Viper
			// MP5Viper = Intellect  22/35  ( 0.9 - Manacurrent / Manamax ) + Intellect  0.11 -- by wowwiki
			// MP5Viper = Intellect  ( 0.55 - 22/35  ( Manacurrent / Manamax - 0.2 ) -- by emsy... 55 is stored in DBC, maybe blizz changes it in future
			// We're including also the Effect[1]:Dummy (35% of player's level) from the AotV in this
			// it's missing some values in dbc plus it saves one event this way

			manaPct = (float)curEnergy / (float)maxEnergy;
			if( manaPct < 0.2f )
				manaPct = 0.2f;
			if( manaPct > 0.9f )
				manaPct = 0.9f;

			regen = ( (float)amount / 100 - 22.0f / 35.0f * (manaPct - 0.2f) ) * (float)m_target->GetUInt32Value( UNIT_FIELD_STAT3 ) + (float)m_target->getLevel()*m_spellProto->EffectBasePoints[1]/100;
			amount = (int)regen;
		break;
		default:
			//something
			;
	}
	
	Unit* ucaster = GetUnitCaster();
	if( ucaster != NULL )
		ucaster->Energize( m_target, m_spellProto->Id, amount, type );
}

void Aura::EventPeriodicDrink(uint32 amount)
{
	uint32 v = m_target->GetUInt32Value(UNIT_FIELD_POWER1) + amount;
	if( v > m_target->GetUInt32Value(UNIT_FIELD_MAXPOWER1) )
		v = m_target->GetUInt32Value(UNIT_FIELD_MAXPOWER1);

	m_target->SetUInt32Value(UNIT_FIELD_POWER1, v);
}

void Aura::EventPeriodicHeal1(uint32 amount)
{
	if( !m_target->isAlive() )
		return;

	uint32 ch = m_target->GetUInt32Value(UNIT_FIELD_HEALTH);
	ch += amount;
	uint32 mh = m_target->GetUInt32Value(UNIT_FIELD_MAXHEALTH);

	if(ch>mh)
		m_target->SetUInt32Value( UNIT_FIELD_HEALTH, mh );
	else
		m_target->SetUInt32Value( UNIT_FIELD_HEALTH, ch );

	if( GetSpellProto()->AuraInterruptFlags & AURA_INTERRUPT_ON_STAND_UP )
	{
		m_target->Emote(EMOTE_ONESHOT_EAT);
	}
	else
	{
		if( !(m_spellProto->BGR_one_buff_on_target & SPELL_TYPE_ARMOR) )
			SendPeriodicHealAuraLog(amount, false);
	}

	m_target->RemoveAurasByHeal();
}

void Aura::SpellAuraModPowerRegen(bool apply)
{
	if(!mod->m_amount)
		return;

	if(apply)
	{
		if (mod->m_amount>0)
			SetPositive();
		else
			SetNegative();
	}
	if( p_target != NULL && mod->m_miscValue == POWER_TYPE_MANA )
	{
		int32 val = (apply) ? mod->m_amount: -mod->m_amount;
		p_target->m_ModInterrMRegen +=val;
		p_target->UpdateStats();
	}
}

void Aura::SpellAuraChannelDeathItem(bool apply)
{
	SetNegative(); //this should always be negative as npcs remove negative auras on death

	if(apply)
	{
		//don't need for now
	}
	else
	{
		if( m_target->GetTypeId() == TYPEID_UNIT || m_target->GetTypeId() == TYPEID_PLAYER )
		{
			if ( m_target->GetTypeId() == TYPEID_UNIT && ((Creature*)m_target)->GetCreatureInfo() != NULL && ((Creature*)m_target)->GetCreatureInfo()->Type == UNIT_TYPE_CRITTER )
				return;

			if(m_target->IsDead())
			{
				Player *pCaster = m_target->GetMapMgr()->GetPlayer((uint32)m_casterGuid);
				if(!pCaster)
					return;
				/*int32 delta=pCaster->getLevel()-m_target->getLevel();
				if(abs(delta)>5)
					return;*/

				uint32 itemid = GetSpellProto()->EffectItemType[mod->i];

				//Warlocks only get Soul Shards from enemies that grant XP or Honor
				if (itemid == 6265 && (pCaster->getLevel() > m_target->getLevel()) )                            
					if ( (pCaster->getLevel() - m_target->getLevel() ) > 9)
						return;


				ItemPrototype *proto = ItemPrototypeStorage.LookupEntry(itemid);
				if(pCaster->GetItemInterface()->CalculateFreeSlots(proto) > 0)
				{
					Item *item = objmgr.CreateItem(itemid,pCaster);
					if(!item) return;


					item->SetUInt64Value(ITEM_FIELD_CREATOR,pCaster->GetGUID());
					if(!pCaster->GetItemInterface()->AddItemToFreeSlot(item))
					{
						pCaster->GetItemInterface()->BuildInventoryChangeError(0, 0, INV_ERR_INVENTORY_FULL);
						item->DeleteMe();
						return;
					}
					/*WorldPacket data(45);
					pCaster->GetSession()->BuildItemPushResult(&data, pCaster->GetGUID(), 1, 1, itemid ,0,0xFF,1,0xFFFFFFFF);
					pCaster->SendMessageToSet(&data, true);					*/
					SlotResult * lr = pCaster->GetItemInterface()->LastSearchResult();
					pCaster->GetSession()->SendItemPushResult(item,true,false,true,true,lr->ContainerSlot,lr->Slot,1);
				}
			}
		}
	}
}

void Aura::SpellAuraModDamagePercTaken(bool apply)
{
	float val;
	if(apply)
	{
		val = mod->m_amount/100.0f;
		if(val <= 0)
			SetPositive();
		else
			SetNegative();
	}
	else
	{
		val= -mod->m_amount/100.0f;
	}

	for( uint32 x = 0; x < 7; x++ )
	{
		if( mod->m_miscValue & (((uint32)1) << x) )
		{
			m_target->DamageTakenPctMod[x] += val;
		}
	}
}

void Aura::SpellAuraModRegenPercent(bool apply)
{
	if(apply)
		m_target->PctRegenModifier += mod->m_amount;
	else
		m_target->PctRegenModifier -= mod->m_amount;
}

void Aura::SpellAuraPeriodicDamagePercent(bool apply)
{
	if(apply)
	{
		//uint32 gr = GetSpellProto()->SpellGroupType;
		//if(gr)
		//{
		//	Unit*c=GetUnitCaster();
		//	if(c)
		//	{
		//		SM_FIValue(c->SM_FDOT,(int32*)&dmg,gr);
		//		SM_PIValue(c->SM_PDOT,(int32*)&dmg,gr);
		//	}
		//}

		/*if(m_spellProto->Id == 28347) //Dimensional Siphon
		{
			uint32 dmg = (m_target->GetUInt32Value(UNIT_FIELD_MAXHEALTH)*5)/100;
			sEventMgr.AddEvent(this, &Aura::EventPeriodicDamagePercent, dmg,
				EVENT_AURA_PERIODIC_DAMAGE_PERCENT, 1000, 0,EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
		}
		else*/
		{
			uint32 dmg = mod->m_amount;
			sEventMgr.AddEvent(this, &Aura::EventPeriodicDamagePercent, dmg,
				EVENT_AURA_PERIODIC_DAMAGE_PERCENT,GetSpellProto()->EffectAmplitude[mod->i],0,EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
		}
		SetNegative();
	}
}

void Aura::EventPeriodicDamagePercent(uint32 amount)
{
	//DOT
	if(!m_target->isAlive())
		return;
	if(m_target->SchoolImmunityList[GetSpellProto()->School])
		return;

	uint32 damage = float2int32(amount/100.0f*m_target->GetUInt32Value(UNIT_FIELD_MAXHEALTH));

	Unit * c = GetUnitCaster();

	if( m_target->m_damageSplitTarget)
	{
		damage = m_target->DoDamageSplitTarget(damage, GetSpellProto()->School, false);
	}

	if(c)
		c->SpellNonMeleeDamageLog(m_target, GetSpellProto()->Id, damage, pSpellId == 0, true);
	else
		m_target->SpellNonMeleeDamageLog(m_target, GetSpellProto()->Id, damage, pSpellId == 0, true);
}

void Aura::SpellAuraModResistChance(bool apply)
{
	apply ? m_target->m_resistChance = mod->m_amount : m_target->m_resistChance = 0;
}

void Aura::SpellAuraModDetectRange(bool apply)
{
	Unit *m_caster = GetUnitCaster();
	if( !m_caster )
		return;

	if( apply )
	{
		SetNegative();
		m_caster->setDetectRangeMod( m_target->GetGUID(), mod->m_amount );
	}
	else
	{
		m_caster->unsetDetectRangeMod( m_target->GetGUID() );
	}
}

void Aura::SpellAuraPreventsFleeing(bool apply)
{
	// Curse of Recklessness
}

void Aura::SpellAuraModUnattackable(bool apply)
{
/*
		Also known as Apply Aura: Mod Unintractable
		Used by: Spirit of Redemption, Divine Intervention, Phase Shift, Flask of Petrification
		It uses one of the UNIT_FIELD_FLAGS, either UNIT_FLAG_NOT_SELECTABLE or UNIT_FLAG_NOT_ATTACKABLE_2
*/
}

void Aura::SpellAuraInterruptRegen(bool apply)
{
	if(apply)
		m_target->m_interruptRegen++;
	else
	{
		m_target->m_interruptRegen--;
		  if(m_target->m_interruptRegen < 0)
			m_target->m_interruptRegen = 0;
	}
}

void Aura::SpellAuraGhost(bool apply)
{
	if( p_target != NULL )
	{
		m_target->m_invisible = apply;

		if( apply )
		{
			SetNegative();
			p_target->SetMovement( MOVE_WATER_WALK, 4 );
		}
		else
		{
			p_target->SetMovement( MOVE_LAND_WALK, 7 );
		}
	}
}

void Aura::SpellAuraMagnet(bool apply)
{
	if(apply){
		Unit *caster = GetUnitCaster();
		if (!caster)
			return;
		SetPositive();
		m_target->m_magnetcaster = caster->GetGUID();
	}
	else{
		m_target->m_magnetcaster = 0;
	}
}

void Aura::SpellAuraManaShield(bool apply)
{
	if( apply )
	{
		SetPositive();
		m_target->m_manashieldamt = mod->m_amount ;
		m_target->m_manaShieldId = GetSpellId();
	}
	else
	{
		m_target->m_manashieldamt = 0;
		m_target->m_manaShieldId = 0;
	}
}

void Aura::SpellAuraSkillTalent(bool apply)
{
	if( p_target != NULL )
	{
		if( apply )
		{
			SetPositive();
			p_target->_ModifySkillBonus( mod->m_miscValue, mod->m_amount );
		}
		else
			p_target->_ModifySkillBonus( mod->m_miscValue, -mod->m_amount );

		p_target->UpdateStats();
	}
}

void Aura::SpellAuraModAttackPower(bool apply)
{
	if(mod->m_amount<0)
		SetNegative();
	else
		SetPositive();
	m_target->ModUnsigned32Value(UNIT_FIELD_ATTACK_POWER_MODS,apply? mod->m_amount : -mod->m_amount);
	m_target->CalcDamage();
}

void Aura::SpellAuraVisible(bool apply)
{
	//Show positive spells on target
	if(apply)
	{
		SetNegative();
	}
}

void Aura::SpellAuraModResistancePCT(bool apply)
{
	uint32 Flag = mod->m_miscValue;
	int32 amt;
	if(apply)
	{
		amt=mod->m_amount;
	 //   if(amt>0)SetPositive();
	   // else SetNegative();
	}
	else
		amt= -mod->m_amount;

	for( uint8 x = 0; x < SCHOOL_COUNT; x++ )
	{
		if( Flag & (((uint32)1) << x ) )
		{
			if( p_target != NULL )
			{
				if( mod->m_amount > 0 )
				{
					p_target->ResistanceModPctPos[x] += amt;
				}
				else
				{
					p_target->ResistanceModPctNeg[x] -= amt;
				}
				p_target->CalcResistance(x);

			}
			else if( m_target->GetTypeId() == TYPEID_UNIT )
			{
				static_cast< Creature*>( m_target )->ResistanceModPct[x] += amt;
				static_cast< Creature*>( m_target )->CalcResistance(x);
			}
		}
	}
}

void Aura::SpellAuraModCreatureAttackPower(bool apply)
{
	if( apply )
	{
		for( uint32 x = 0; x < 11; x++ )
			if( mod->m_miscValue & ( ( ( uint32 )1 ) << x ) )
				m_target->CreatureAttackPowerMod[x+1] += mod->m_amount;

		if( mod->m_amount > 0 )
			SetPositive();
		else
			SetNegative();
	}
	else
	{
		for( uint32 x = 0; x < 11; x++ )
		{
			if( mod->m_miscValue & ( ( ( uint32 )1 ) << x ) )
			{
				m_target->CreatureAttackPowerMod[x+1] -= mod->m_amount;
			}
		}
	}
	m_target->CalcDamage();
}

void Aura::SpellAuraModTotalThreat( bool apply )
{
	if( apply )
	{
		if( mod->m_amount < 0 )
			SetPositive();
		else
			SetNegative();

		m_target->ModThreatModifyer( mod->m_amount );
	}
	else
		m_target->ModThreatModifyer(-(mod->m_amount));
}

void Aura::SpellAuraWaterWalk( bool apply )
{
	if( p_target != NULL )
	{
		WorldPacket data( 12 );
		if( apply )
		{
			SetPositive();
			data.SetOpcode( SMSG_MOVE_WATER_WALK );
			data << p_target->GetNewGUID();
			data << uint32( 8 );
		}
		else
		{
			data.SetOpcode( SMSG_MOVE_LAND_WALK );
			data << p_target->GetNewGUID();
			data << uint32( 4 );
		}
		p_target->GetSession()->SendPacket( &data );
	}
}

void Aura::SpellAuraFeatherFall( bool apply )
{
	if( p_target != NULL )
		static_cast< Player* >( m_target )->m_noFallDamage = apply;
}

void Aura::SpellAuraHover( bool apply )
{
	SetPositive();

	//TODO: FIX ME: Find true flag for this
	if( p_target != NULL)
	{
		WorldPacket data( apply ? uint16( SMSG_MOVE_SET_HOVER ) : uint16( SMSG_MOVE_UNSET_HOVER ), 13 );
		data << p_target->GetNewGUID();
		data << uint32( 0 );
		p_target->GetSession()->SendPacket( &data );
	}
}

void Aura::SpellAuraAddPctMod( bool apply )
{
	int32 val = apply ? mod->m_amount : -mod->m_amount;
	uint32* AffectedGroups = GetSpellProto()->EffectSpellClassMask[mod->i];

	switch( mod->m_miscValue )//let's generate warnings for unknown types of modifiers
	{
	case SMT_DAMAGE_DONE:
		SendModifierLog( &m_target->SM_PDamageBonus, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	case SMT_DURATION:
		SendModifierLog( &m_target->SM_PDur, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	case SMT_THREAT_REDUCED:
		SendModifierLog(&m_target->SM_PThreat, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true);
		break;

	case SMT_EFFECT_1:
		SendModifierLog( &m_target->SM_PEffect1_Bonus, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	case SMT_CHARGES:
		SendModifierLog(&m_target->SM_PCharges, val, AffectedGroups,static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_RANGE:
		SendModifierLog( &m_target->SM_PRange, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	case SMT_RADIUS:
		SendModifierLog( &m_target->SM_PRadius, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	case SMT_CRITICAL:
		SendModifierLog( &m_target->SM_PCriticalChance, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	case SMT_MISC_EFFECT:
		SendModifierLog( &m_target->SM_PMiscEffect, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	case SMT_NONINTERRUPT:
		SendModifierLog( &m_target->SM_PNonInterrupt, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		//SpellAuraResistPushback(true);
		break;

	case SMT_CAST_TIME:
		SendModifierLog( &m_target->SM_PCastTime, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	case SMT_COOLDOWN_DECREASE:
		SendModifierLog( &m_target->SM_PCooldownTime, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	case SMT_EFFECT_2:
		SendModifierLog( &m_target->SM_PEffect2_Bonus, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	case SMT_COST:
		SendModifierLog( &m_target->SM_PCost, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	case SMT_CRITICAL_DAMAGE:
		SendModifierLog( &m_target->SM_PCriticalDamage, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	case SMT_HITCHANCE:
		SendModifierLog( &m_target->SM_PHitchance, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	case SMT_ADDITIONAL_TARGET:
		SendModifierLog( &m_target->SM_PAdditionalTargets, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	case SMT_TRIGGER:
		SendModifierLog( &m_target->SM_PChanceOfSuccess, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	case SMT_AMPTITUDE:
		SendModifierLog( &m_target->SM_PAmptitude, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	case SMT_JUMP_REDUCE:
		SendModifierLog( &m_target->SM_PJumpReduce, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	case SMT_GLOBAL_COOLDOWN:
		SendModifierLog( &m_target->SM_PGlobalCooldown, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	case SMT_DAMAGE_DONE_DOTS:
		SendModifierLog( &m_target->SM_PDOT, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	case SMT_EFFECT_3:
		SendModifierLog( &m_target->SM_PEffect3_Bonus, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	case SMT_PENALTY:
		SendModifierLog( &m_target->SM_PPenalty, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	case SMT_FREQ_OF_SUCCESS:
		SendModifierLog( &m_target->SM_PFreq_Of_Success, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	case SMT_EFFECT_BONUS:
		SendModifierLog( &m_target->SM_PEffectBonus, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	case SMT_RESIST_DISPEL:
		SendModifierLog( &m_target->SM_PRezist_dispell, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	case SMT_REFUND_COST_ON_FAIL:
		SendModifierLog( &m_target->SM_PRefund_Cost, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ), true );
		break;

	default://Unknown modifier type
		sLog.outError( 
			"Unknown spell modifier type %u in spell %u.<<--report this line to the developer\n", 
			mod->m_miscValue, GetSpellId() );
		break;
	}
}

void Aura::SendModifierLog( int32** m, int32 v, uint32* mask, uint8 type, bool pct )
{
	//WorldPacket data( SMSG_SET_FLAT_SPELL_MODIFIER + pct, 6 );
	packetSMSG_SET_FLAT_SPELL_MODIFIER data;
	uint32 intbit = 0, groupnum = 0;

	if( *m == 0 )
	{
		*m = new int32[SPELL_GROUPS];
		for(uint32 bit = 0; bit < SPELL_GROUPS; ++bit, ++intbit)
		{
			if(intbit == 32)
			{
				++groupnum;
				intbit = 0;
			}
			if( ( 1 << intbit ) & mask[groupnum] )
			{
				(*m)[bit] = v;

				if( !m_target->IsPlayer() )
					continue;

				data.group = static_cast<uint8>( bit );
				data.type = type;
				data.v = v;
				static_cast<Player*>(m_target)->GetSession()->OutPacket( SMSG_SET_FLAT_SPELL_MODIFIER+ pct, sizeof( packetSMSG_SET_FLAT_SPELL_MODIFIER ), &data );
			}
			else
				(*m)[bit] = 0;
		}
	}
	else
	{
		for(uint32 bit = 0; bit < SPELL_GROUPS; ++bit, ++intbit)
		{
			if(intbit == 32)
			{
				++groupnum;
				intbit = 0;
			}
			if( ( 1 << intbit ) & mask[groupnum] )
			{
				(*m)[bit] += v;

				if( !m_target->IsPlayer() )
					continue;

				data.group = static_cast<uint8>( bit );
				data.type = type;
				data.v = (*m)[bit];
				static_cast<Player*>(m_target)->GetSession()->OutPacket( SMSG_SET_FLAT_SPELL_MODIFIER+ pct, sizeof( packetSMSG_SET_FLAT_SPELL_MODIFIER ), &data );
			}
		}
	}
}

void Aura::SendDummyModifierLog( std::map< SpellEntry*, uint32 >* m, SpellEntry* spellInfo, uint32 i, bool apply, bool pct )
{
	//WorldPacket data( SMSG_SET_FLAT_SPELL_MODIFIER + pct, 6 );
	packetSMSG_SET_FLAT_SPELL_MODIFIER data;

	int32 v = spellInfo->EffectBasePoints[i] + 1;
	uint32* mask = spellInfo->EffectSpellClassMask[i];
	uint8 type = static_cast<uint8>(spellInfo->EffectMiscValue[i]);

	if(apply)
	{
		m->insert(make_pair(spellInfo,i));
	}
	else
	{
		v = -v;
		std::map<SpellEntry*,uint32>::iterator itr = m->find(spellInfo);
		if (itr != m->end())
			m->erase(itr);
	}

	uint32 intbit = 0, groupnum = 0;
	for(uint8 bit = 0; bit < SPELL_GROUPS; ++bit, ++intbit)
	{
		if(intbit == 32)
 		{
			++groupnum;
			intbit = 0;
		}
		if( ( 1 << intbit ) & mask[groupnum] )
		{
			if( p_target == NULL)
				continue;

			data.group = bit;
			data.type = type;
			data.v = v;
			p_target->GetSession()->OutPacket( SMSG_SET_FLAT_SPELL_MODIFIER + pct, sizeof( packetSMSG_SET_FLAT_SPELL_MODIFIER ), &data );
		}
	}
}

void Aura::SpellAuraAddTargetTrigger(bool apply)
{
	if( m_target == NULL )
		return;

	if( apply )
	{
		ProcTriggerSpell pts;
		pts.origId = GetSpellProto()->Id;
		pts.caster = GetUnitCaster()->GetGUID();

		if( GetSpellProto()->EffectTriggerSpell[mod->i] )
			pts.spellId = GetSpellProto()->EffectTriggerSpell[mod->i];
		else
		{
			sLog.outDebug( "Warning, trigger spell is null for spell %u", GetSpellProto()->Id );
			return;
		}
		
		if( GetSpellProto()->procChance != 101 )
			pts.procChance = GetSpellProto()->procChance;
		else
			pts.procChance = mod->m_amount;

		pts.procFlags = GetSpellProto()->procFlags;
		pts.procFlagsExtra = GetSpellProto()->procFlagExtra;

		for( int8 i = 0; i < 3; i++ )
			pts.groupRelation[i] = GetSpellProto()->SpellGroupType[i];

		pts.ProcType = 1;

		int charges = GetSpellProto()->procCharges;
		if( GetSpellProto()->SpellGroupType && m_target != NULL )
		{
			SM_FIValue( m_target->SM_FCharges, &charges, GetSpellProto()->SpellGroupType );
			SM_PIValue( m_target->SM_PCharges, &charges, GetSpellProto()->SpellGroupType );
		}
		pts.procCharges = charges;

		pts.LastTrigger = 0;
		pts.deleted = false;
		m_target->m_procSpells.push_front( pts );
		sLog.outDebug( "%u is registering %u chance %u flags %u charges %u triggeronself %u interval %u\n", pts.origId, pts.spellId, pts.procChance, m_spellProto->procFlags, charges, m_spellProto->procFlags, m_spellProto->proc_interval );
	}
	else
	{
		for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
		{
			if( itr->origId == GetSpellId() && itr->caster == m_casterGuid && !itr->deleted )
			{
				itr->deleted = true;
				break; //only 1 instance of a proc spell per caster ?
			}
		}
	}
}

void Aura::SpellAuraModPowerRegPerc(bool apply)
{
	if( apply )
		m_target->PctPowerRegenModifier[mod->m_miscValue] += ((float)(mod->m_amount))/100.0f;
	else
		m_target->PctPowerRegenModifier[mod->m_miscValue] -= ((float)(mod->m_amount))/100.0f;
	if( p_target != NULL )
		p_target->UpdateStats();
}

void Aura::SpellAuraAddCasterHitTrigger(bool apply)
{
	Unit* ucaster = GetUnitCaster();
	if( ucaster == NULL || m_target == NULL )
		return;

	if( apply )
	{
		m_target->m_CasterHitTrigger = ucaster;

		// Warrior - Intervene, reduce thread effect
		if( GetSpellProto()->Id == 3411 )
		{
			std::vector<Unit*> target_threat;
			int count = 0;
			Unit* tmp_unit;
			for(std::set<Object*>::iterator itr = m_target->GetInRangeSetBegin(); itr != m_target->GetInRangeSetEnd(); ++itr)
			{
				if( (*itr)->GetTypeId() != TYPEID_UNIT )
					continue;
				
				tmp_unit = static_cast< Unit* >( *itr );

				if( !tmp_unit->CombatStatus.IsInCombat() || tmp_unit->GetAIInterface()->getThreatByPtr( m_target ) == 0 )
					continue;

				if( !( m_target->GetPhase() & (*itr)->GetPhase() ) ) //Can't see, can't be a threat
					continue;

				target_threat.push_back( tmp_unit );
				count++;
			}
			if ( count == 0 )
				return;

			int32 amount = 0;

			for( std::vector<Unit*>::iterator itr = target_threat.begin(); itr != target_threat.end(); ++itr )
			{
				amount = (int32)( (*itr)->GetAIInterface()->getThreatByPtr(m_target) * 0.1f );
				(*itr)->GetAIInterface()->modThreatByPtr( m_target, amount );
			}
		}
	}
	else
	{
		m_target->m_CasterHitTrigger = NULL;
	}
}

void Aura::SpellAuraOverrideClassScripts(bool apply)
{
	Unit* ucaster = GetUnitCaster();
	if( ucaster == NULL || !ucaster->IsPlayer() )
		return;


	OverrideIdMap::iterator itermap = objmgr.mOverrideIdMap.find(mod->m_miscValue);
	if( itermap == objmgr.mOverrideIdMap.end() )
		return;

	Player *plr = static_cast< Player* >( ucaster );

	if( apply )
	{
		uint32 SCM[3] = {0, 0, 0};
		//Adding bonus to effect // mod->m_amount to m_spellProto->EffectBasePoints[mod->i]+1
		switch(mod->m_miscValue)
		{
			// Glyph of Rejuveation
			case 1:
				{
					plr->FillSpellOverride(itermap->second, static_cast<float>( mod->m_amount ), SPELL_HASH_REJUVENATION, 0, 50, SCM, 257);
				}break;
			// Priest - Test of Faith
			case 21:
			case 6918:
			case 6935:
				{
					plr->FillSpellOverride(itermap->second, static_cast<float>( mod->m_amount ), 0, 0, 50, SCM, 1);
				}break;
			// Mage - Shatter
			case 849:
			case 910:
			case 911:
				if( m_target->IsPlayer() )
				{
					int32 val = 0;
					switch( mod->m_miscValue )
					{
					case 849:
						val = 17;
						break;
					case 910:
						val = 34;
						break;
					case 911:
						val = 50;
						break;
					}
					val = (apply) ? val : -val;
					static_cast< Player* >( m_target )->m_RootedCritChanceBonus += val;
				}
				break;
			// Copy of Deadly Totem of the Third Wind
			// Shaman - Deadly Totem of the Third Wind
			case 3736:
				{
					plr->FillSpellOverride(itermap->second, static_cast<float>( mod->m_amount ), 0, 0, 0, SCM, 4);
				}break;
			// Increased Rejuvenation Healing
			case 4415:
			case 4953:
				{
					plr->FillSpellOverride(itermap->second, static_cast<float>( mod->m_amount ), 0, 0, 0, SCM, 4);
				}break;
			// Increased Shock Damage
			case 4418:
				{
					SCM[0] = static_cast<uint32>( -1877999616 );
					plr->FillSpellOverride(itermap->second, static_cast<float>( mod->m_amount ), 0, 0, 0, SCM, 12);
				}break;
			// Increased Lightning damage
			case 4554:
			case 5142:
			case 6008:
				{
					SCM[0] = 3;
					plr->FillSpellOverride(itermap->second, static_cast<float>( mod->m_amount ), 0, 0, 0, SCM, 12);
				}break;
			// Druid - Improved Moonfire
			case 4555:
				{
					plr->FillSpellOverride(itermap->second, static_cast<float>( mod->m_amount ), 0, 0, 0, SCM, 4);
				}break;
			// Mage - Molten Fury
			case 4919:
			case 4920:
				{
					plr->FillSpellOverride(itermap->second, static_cast<float>( mod->m_amount ), 0, 0, 35, SCM, 1);
				}break;
			// Warlock - Soul Siphon
			case 4992:
			case 4993:
				{
					SCM[0] = 16392;
					plr->FillSpellOverride(itermap->second, static_cast<float>( mod->m_amount ), 0, 0, 0, SCM, 169);
				}break;
			// Improved Consecration
			case 5147:
				{
					plr->FillSpellOverride(itermap->second, static_cast<float>( mod->m_amount ), 0, 0, 0, SCM, 4);
				}break;
			// Idol of the Shooting Star
			case 5148:
				{
					plr->FillSpellOverride(itermap->second, static_cast<float>( mod->m_amount ), 0, 0, 0, SCM, 4);
				}break;
			// Starfire bonus
			case 5481:
				{
					plr->FillSpellOverride(itermap->second, static_cast<float>( mod->m_amount ), SPELL_HASH_MOONFIRE, SPELL_HASH_INSECT_SWARM, 0, SCM, 1);
				}break;
			// Rogue - Dirty Deeds - damage increase
			case 6427:
			case 6428:
				{
					plr->FillSpellOverride(itermap->second, static_cast<float>( m_spellProto->RankNumber * 10 ), 0, 0, 35, SCM, 1);
				}break;
			// Warlock - Death's Embrace - drain life
			case 6927:
			case 6925:
			case 6916:
				{
					plr->FillSpellOverride(itermap->second, static_cast<float>( mod->m_amount ), 0, 0, 20, SCM, 3);
				}break;
			// Warlock - Death's Embrace - shadow spells
			case 6928:
			case 6926:
			case 6917:
				{
					plr->FillSpellOverride(itermap->second, static_cast<float>( mod->m_amount ), 0, 0, 35, SCM, 1);
				}break;
			case 6953: // Warrior - Warbringer Effect[2], scripted in Spell::cast
				break;
			// Death Knight - Tundra Stalker
			case 7277:
				{
					plr->FillSpellOverride(itermap->second, static_cast<float>( mod->m_amount ), SPELL_HASH_FROST_FEVER, 0, 0, SCM, 1);
				}break;
			// Death Knight - Merciless Combat
			case 7278:
				{
					SCM[0] = 2;
					SCM[1] = 131078;
					plr->FillSpellOverride(itermap->second, static_cast<float>( mod->m_amount ), 0, 0, 35, SCM, 1);
				}break;
			// Death Knight - Rage of Rivendare
			case 7293:
				{
					plr->FillSpellOverride(itermap->second, static_cast<float>( m_spellProto->RankNumber * 2 ), SPELL_HASH_BLOOD_PLAGUE, 0, 0, SCM, 1);
				}break;
			// Priest - Twisted Faith
			case 7377:
				{
					plr->FillSpellOverride(itermap->second, static_cast<float>( mod->m_amount ), SPELL_HASH_SHADOW_WORD__PAIN, 0, 0, SCM, 17);
				}break;
			// Hunter - Marked for Death
			case 7602:
			case 7601:
			case 7600:
			case 7599:
			case 7598:
				{
					plr->FillSpellOverride(itermap->second, static_cast<float>( mod->m_amount ), SPELL_HASH_HUNTER_S_MARK, 0, 0, SCM, 1);
				}break;
			// Glyph of Regrowth
			case 7798:
				{
					plr->FillSpellOverride(itermap->second, static_cast<float>( mod->m_amount ), SPELL_HASH_REGROWTH, 0, 0, SCM, 17);
				}break;
			// Glyph of Lesser Healing Wave
			case 7871:
				{
					plr->FillSpellOverride(itermap->second, static_cast<float>( mod->m_amount ), SPELL_HASH_EARTH_SHIELD, 0, 0, SCM, 17);
				}break;
			// Priest - Renewed Hope
			case 7997:
			case 7998:
				{
					SCM[0] = 6144;
					SCM[1] = 65536;
					plr->FillSpellOverride(itermap->second, static_cast<float>( mod->m_amount ), SPELL_HASH_WEAKENED_SOUL, 0, 0, SCM, 1);
				}break;
			// Nourish Heal Boost
			case 8477:
				{
					plr->FillSpellOverride(itermap->second, static_cast<float>( mod->m_amount ), 0, 0, 0, SCM, 96);
				}break;
			// Totem of Hex
			case 8627:
				{
					SCM[0] = 3;
					plr->FillSpellOverride(itermap->second, static_cast<float>( mod->m_amount ), 0, 0, 0, SCM, 12);
				}break;
			default:
					sChatHandler.BlueSystemMessage(plr->GetSession(), "Unknown override report to devs: %u", mod->m_miscValue);
		}
	}
	else
	{
		SpellOverrideList::iterator itrSO,itrSOO; 
		for( itrSO = plr->m_SpellOverrideList.begin(); itrSO != plr->m_SpellOverrideList.end(); )
		{
			itrSOO = itrSO;
			++itrSO;
			if( itrSOO->first == itermap->second )
				plr->m_SpellOverrideList.erase(itrSOO);
		}
	}
}

void Aura::SpellAuraModRangedDamageTaken(bool apply)
{
	if(apply)
		m_target->RangedDamageTaken += mod->m_amount;
	else
	{
		m_target->RangedDamageTaken -= mod->m_amount;;
		if( m_target->RangedDamageTaken < 0)
			m_target->RangedDamageTaken = 0;
	}
}

void Aura::SpellAuraModHealing(bool apply)
{
	int32 val;
	if(apply)
	{
		 val = mod->m_amount;
		 /*if(val>0)
			 SetPositive();
		 else
			 SetNegative();*/
	}
	else
		val=-mod->m_amount;

	for(uint8 x= 0;x<7;x++)
	{
		if (mod->m_miscValue & (((uint32)1)<<x) )
		{
			m_target->HealTakenMod[x] += val;
		}
	}
}

void Aura::SpellAuraIgnoreRegenInterrupt(bool apply)
{
	if( p_target == NULL )
		return;

	if( apply )
		p_target->PctIgnoreRegenModifier += ((float)(mod->m_amount))/100;
	else
		p_target->PctIgnoreRegenModifier -= ((float)(mod->m_amount))/100;
}

void Aura::SpellAuraModMechanicResistance(bool apply)
{
	//silence=26 ?
	//mecanics=9 ?
	if(apply)
	{
		assert( mod->m_miscValue < MECHANIC_END );
		m_target->MechanicsResistancesPCT[mod->m_miscValue]+=mod->m_amount;

		if(mod->m_miscValue != MECHANIC_HEALING && mod->m_miscValue != MECHANIC_INVULNERABLE && mod->m_miscValue != MECHANIC_INVULNARABLE && mod->m_miscValue != MECHANIC_SHIELDED ) // don't remove bandages, Power Word and protection effect
		{
			SetPositive();
		}
		else
		{
			SetNegative();
		}
	}
	else
		m_target->MechanicsResistancesPCT[mod->m_miscValue]-=mod->m_amount;
}

void Aura::SpellAuraModHealingPCT(bool apply)
{
	int32 val;
	if(apply)
	{
		 val = mod->m_amount;
		 if(val<0)
			SetNegative();
		 else
			SetPositive();
	}
	else
		val=-mod->m_amount;

	for(uint8 x= 0; x<7; x++)
	{
		if (mod->m_miscValue & (((uint32)1)<<x) )
		{
			m_target->HealTakenPctMod[x] += ((float)(val))/100;
		}
	}
}

void Aura::SpellAuraUntrackable(bool apply)
{
    if(apply)
        m_target->SetFlag(UNIT_FIELD_BYTES_1, STANDSTATE_FLAG_UNTRACKABLE);
    else
        m_target->RemoveFlag(UNIT_FIELD_BYTES_1, STANDSTATE_FLAG_UNTRACKABLE);
}

void Aura::SpellAuraModRangedAttackPower(bool apply)
{
	if(apply)
	{
		if(mod->m_amount > 0)
			SetPositive();
		else
			SetNegative();
		m_target->ModUnsigned32Value(UNIT_FIELD_RANGED_ATTACK_POWER_MODS,mod->m_amount);
	}
	else
		m_target->ModUnsigned32Value(UNIT_FIELD_RANGED_ATTACK_POWER_MODS,-mod->m_amount);
	m_target->CalcDamage();
}

void Aura::SpellAuraModMeleeDamageTaken(bool apply)
{
	if(apply)
	{
		if(mod->m_amount > 0)//does not exist but let it be
			SetNegative();
		else
			SetPositive();
		m_target->DamageTakenMod[0] += mod->m_amount;
	}
	else
		m_target->DamageTakenMod[0] -= mod->m_amount;
}

void Aura::SpellAuraModMeleeDamageTakenPct(bool apply)
{
	if(apply)
	{
		if(mod->m_amount>0)//does not exist but let it be
			SetNegative();
		else
			SetPositive();
		m_target->DamageTakenPctMod[0]+=mod->m_amount/100.0f;
	}
	else
		m_target->DamageTakenPctMod[0]-=mod->m_amount/100.0f;
}

void Aura::SpellAuraRAPAttackerBonus(bool apply)
{
	if(apply)
	{
		m_target->RAPvModifier += mod->m_amount;
	}
	else
		m_target->RAPvModifier -= mod->m_amount;
}

void Aura::SpellAuraModIncreaseSpeedAlways(bool apply)
{
	if(apply)
	{
		SetPositive();
		m_target->m_speedModifier += mod->m_amount;
	}
	else
		m_target->m_speedModifier -= mod->m_amount;

	m_target->UpdateSpeed();
}

void Aura::SpellAuraModIncreaseEnergyPerc( bool apply )
{
	SetPositive();
	uint32 maxField = UNIT_FIELD_MAXPOWER1 + mod->m_miscValue;

	if(apply)
	{
		mod->fixed_amount[mod->i] = m_target->GetModPUInt32Value( maxField, mod->m_amount );
		m_target->ModUnsigned32Value( maxField, mod->fixed_amount[mod->i] );
		if( p_target != NULL && maxField == UNIT_FIELD_MAXPOWER1 )
			p_target->SetManaFromSpell( p_target->GetManaFromSpell() + mod->fixed_amount[mod->i] );
	}
	else
	{
		m_target->ModUnsigned32Value( maxField, -mod->fixed_amount[mod->i] );
		if( p_target != NULL && maxField == UNIT_FIELD_MAXPOWER1 )
			p_target->SetManaFromSpell( p_target->GetManaFromSpell() - mod->fixed_amount[mod->i] );
	}
}

void Aura::SpellAuraModIncreaseHealthPerc( bool apply )
{
	SetPositive();
	if( apply )
	{
		mod->fixed_amount[mod->i] = m_target->GetModPUInt32Value( UNIT_FIELD_MAXHEALTH, mod->m_amount );
		m_target->ModUnsigned32Value( UNIT_FIELD_MAXHEALTH, mod->fixed_amount[mod->i] );
		if( p_target != NULL )
			p_target->SetHealthFromSpell( p_target->GetHealthFromSpell() + mod->fixed_amount[mod->i] );
//		else if( m_target->IsPet() )
//			static_cast< Pet* >( m_target )->SetHealthFromSpell( ( ( Pet* )m_target )->GetHealthFromSpell() + mod->fixed_amount[mod->i] );
	}
	else
	{
		m_target->ModUnsigned32Value( UNIT_FIELD_MAXHEALTH, -mod->fixed_amount[mod->i] );
		if( m_target->GetUInt32Value( UNIT_FIELD_HEALTH ) > m_target->GetUInt32Value( UNIT_FIELD_MAXHEALTH ) )
			m_target->SetUInt32Value( UNIT_FIELD_HEALTH, m_target->GetUInt32Value( UNIT_FIELD_MAXHEALTH ) );
		if( p_target != NULL )
			p_target->SetHealthFromSpell( ( ( Player* )m_target )->GetHealthFromSpell() - mod->fixed_amount[mod->i] );
//		else if( m_target->IsPet() )
//			static_cast< Pet* >( m_target )->SetHealthFromSpell( ( ( Pet* )m_target )->GetHealthFromSpell() - mod->fixed_amount[mod->i] );
	}
}

void Aura::SpellAuraModManaRegInterrupt( bool apply )
{
	if( p_target != NULL )
	{
		if( apply )
			p_target->m_ModInterrMRegenPCT += mod->m_amount;
		else
			p_target->m_ModInterrMRegenPCT -= mod->m_amount;

		p_target->UpdateStats();
	}
}

void Aura::SpellAuraModTotalStatPerc(bool apply)
{
	int32 val;
	if(apply)
	{
	   val= mod->m_amount;
	}
	else
	   val= -mod->m_amount;

	if (mod->m_miscValue == -1)//all stats
	{
		if( p_target != NULL )
		{
			for( uint8 x = 0; x < 5; x++ )
			{
				if( mod->m_amount > 0 )
					p_target->TotalStatModPctPos[x] += val;
				else
					p_target->TotalStatModPctNeg[x] -= val;
				p_target->CalcStat(x);
			}

			p_target->UpdateStats();
			p_target->UpdateChances();
		}
		else if( m_target->GetTypeId() == TYPEID_UNIT )
		{
			for(uint8 x = 0; x < 5; x++ )
			{
				static_cast< Creature* >( m_target )->TotalStatModPct[x] += val;
				static_cast< Creature* >( m_target )->CalcStat(x);
			}
		}
	}
	else
	{
		ASSERT(mod->m_miscValue < 5);
		if( p_target != NULL )
		{
			//druid hearth of the wild should add more features based on form
			if( m_spellProto->NameHash == SPELL_HASH_HEART_OF_THE_WILD )
			{
				//we should remove effect first
				p_target->EventTalentHearthOfWildChange( false );
				//set new value
				if( apply )
					p_target->SetTalentHearthOfWildPCT( val );
				else
					p_target->SetTalentHearthOfWildPCT( 0 ); //this happens on a talent reset
				//reapply
				p_target->EventTalentHearthOfWildChange( true );
			}

			if( mod->m_amount > 0 )
				p_target->TotalStatModPctPos[mod->m_miscValue] += val;
			else
				p_target->TotalStatModPctNeg[mod->m_miscValue] -= val;

			p_target->CalcStat( mod->m_miscValue );
			p_target->UpdateStats();
			p_target->UpdateChances();
		}
		else if( m_target->GetTypeId() == TYPEID_UNIT )
		{
			static_cast< Creature* >( m_target )->TotalStatModPct[ mod->m_miscValue ] += val;
			static_cast< Creature* >( m_target )->CalcStat( mod->m_miscValue );
		}
	}
}

void Aura::SpellAuraModHaste( bool apply )
{
	//blade flurry - attack a nearby opponent
	if( m_spellProto->NameHash == SPELL_HASH_BLADE_FLURRY )
	{
		if( apply )
			m_target->AddExtraStrikeTarget(GetSpellProto(), 0);
		else
			m_target->RemoveExtraStrikeTarget(GetSpellProto());
	}

	if( mod->m_amount < 0 )
		SetNegative();
	else
		SetPositive();

	if( p_target != NULL )
	{
		if( apply )
		{
			p_target->ModAttackSpeed( mod->m_amount, MOD_MELEE );
		}
		else
		{
			p_target->ModAttackSpeed( -mod->m_amount, MOD_MELEE );
		}

		p_target->UpdateAttackSpeed();
	}
	else
	{
		if( apply )
		{
			mod->fixed_amount[mod->i] = m_target->GetModPUInt32Value( UNIT_FIELD_BASEATTACKTIME, mod->m_amount );
			mod->fixed_amount[mod->i*2] = m_target->GetModPUInt32Value( UNIT_FIELD_BASEATTACKTIME+1, mod->m_amount );

			if( (int32)m_target->GetUInt32Value ( UNIT_FIELD_BASEATTACKTIME ) <= mod->fixed_amount[mod->i] )
				mod->fixed_amount[mod->i] = m_target->GetUInt32Value ( UNIT_FIELD_BASEATTACKTIME ); //watch it, a negative timer might be bad ;)
			if( (int32)m_target->GetUInt32Value ( UNIT_FIELD_BASEATTACKTIME+1 ) <= mod->fixed_amount[mod->i*2] )
				mod->fixed_amount[mod->i*2] = m_target->GetUInt32Value ( UNIT_FIELD_BASEATTACKTIME+1 );//watch it, a negative timer might be bad ;)

			m_target->ModUnsigned32Value( UNIT_FIELD_BASEATTACKTIME, -mod->fixed_amount[mod->i] );
			m_target->ModUnsigned32Value( UNIT_FIELD_BASEATTACKTIME+1, -mod->fixed_amount[mod->i*2] );

			if ( m_target->GetTypeId() == TYPEID_UNIT )
				static_cast< Creature* >( m_target )->m_speedFromHaste += mod->fixed_amount[mod->i];
		}
		else
		{
			m_target->ModUnsigned32Value( UNIT_FIELD_BASEATTACKTIME, mod->fixed_amount[mod->i] );
			m_target->ModUnsigned32Value( UNIT_FIELD_BASEATTACKTIME+1, mod->fixed_amount[mod->i*2] );

			if ( m_target->GetTypeId() == TYPEID_UNIT )
				static_cast< Creature* >( m_target )->m_speedFromHaste -= mod->fixed_amount[mod->i];
		}
	}
}

void Aura::SpellAuraForceReaction( bool apply )
{
	map<uint32,uint32>::iterator itr;
	if( p_target != NULL )
		return;

	if( apply )
	{
		itr = p_target->m_forcedReactions.find( mod->m_miscValue );
		if( itr != p_target->m_forcedReactions.end() )
			itr->second = mod->m_amount;
		else
			p_target->m_forcedReactions.insert( make_pair( mod->m_miscValue, mod->m_amount ) );
	}
	else
		p_target->m_forcedReactions.erase( mod->m_miscValue );

	WorldPacket data( SMSG_SET_FORCED_REACTIONS, ( 8 * p_target->m_forcedReactions.size() ) + 4 );
	data << uint32(p_target->m_forcedReactions.size());
	for( itr = p_target->m_forcedReactions.begin(); itr != p_target->m_forcedReactions.end(); ++itr )
	{
		data << itr->first;
		data << itr->second;
	}

	p_target->GetSession()->SendPacket( &data );
}

void Aura::SpellAuraModRangedHaste( bool apply )
{
	if( mod->m_amount < 0 )
		SetNegative();
	else
		SetPositive();

	if( p_target != NULL )
	{
		if( apply )
			p_target->ModAttackSpeed( mod->m_amount, MOD_RANGED );
		else
			p_target->ModAttackSpeed( -mod->m_amount, MOD_RANGED );

		p_target->UpdateAttackSpeed();
	}
	else
	{
		if( apply )
		{
			mod->fixed_amount[mod->i] = m_target->GetModPUInt32Value(UNIT_FIELD_RANGEDATTACKTIME,mod->m_amount);
			m_target->ModUnsigned32Value(UNIT_FIELD_RANGEDATTACKTIME, -mod->fixed_amount[mod->i]);
		}
		else m_target->ModUnsigned32Value(UNIT_FIELD_RANGEDATTACKTIME, mod->fixed_amount[mod->i]);
	}
}

void Aura::SpellAuraModRangedAmmoHaste( bool apply )
{
	SetPositive();
	if( p_target == NULL )
		return;

	if( apply )
		p_target->ModAttackSpeed( mod->m_amount, MOD_RANGED );
	else
		p_target->ModAttackSpeed( -mod->m_amount, MOD_RANGED );

	p_target->UpdateAttackSpeed();
}

void Aura::SpellAuraModResistanceExclusive(bool apply)
{
	SpellAuraModResistance(apply);
}

void Aura::SpellAuraRetainComboPoints(bool apply)
{
	if( p_target != NULL )
		p_target->m_retainComboPoints = apply;
}

void Aura::SpellAuraResistPushback(bool apply)
{
	//DK:This is resist for spell casting delay
	//Only use on players for now

	if( p_target != NULL )
	{
		int32 val = 0;
		if( apply )
		{
			val = mod->m_amount;
			SetPositive();
		}
		else
			val = -mod->m_amount;

		for( uint8 x = 0; x < SCHOOL_COUNT; x++ )
		{
			if (mod->m_miscValue & ( ( (uint32) 1 ) << x ) )
			{
				p_target->SpellDelayResist[x] += val;
			}
		}
	}
}

void Aura::SpellAuraModShieldBlockPCT( bool apply )
{
	if( p_target != NULL )
	{
		if( apply )
		{
			p_target->m_modblockabsorbvalue += ( uint32 )mod->m_amount;
		}
		else
		{
			p_target->m_modblockabsorbvalue -= ( uint32 )mod->m_amount;
		}
		p_target->UpdateStats();
	}
}

void Aura::SpellAuraTrackStealthed(bool apply)
{
	if( p_target )
		return;

	if( apply )
		p_target->SetFlag( PLAYER_FIELD_BYTES, PLAYER_FIELD_BYTES_TRACK_STEALTHED );
	else
		p_target->RemoveFlag( PLAYER_FIELD_BYTES, PLAYER_FIELD_BYTES_TRACK_STEALTHED );
}

void Aura::SpellAuraModDetectedRange(bool apply)
{
	if( p_target == NULL )
		return;
	if(apply)
	{
		SetPositive();
		p_target->DetectedRange += mod->m_amount;
	}
	else
	{
		p_target->DetectedRange -= mod->m_amount;
	}
}

void Aura::SpellAuraSplitDamageFlat(bool apply)
{
	if( !m_target )
		return;

	if( m_target->m_damageSplitTarget )
	{
		delete m_target->m_damageSplitTarget;
		m_target->m_damageSplitTarget = NULL;
	}

	if( apply )
	{
		DamageSplitTarget *ds = new DamageSplitTarget;
		ds->m_flatDamageSplit = mod->m_miscValue;
		ds->m_spellId = GetSpellProto()->Id;
		ds->m_pctDamageSplit = 0;
		ds->damage_type = static_cast<uint8>( mod->m_type );
		ds->creator = (void*)this;
		ds->m_target = m_casterGuid;
		m_target->m_damageSplitTarget = ds;
//		printf("registering dmg split %u, amount= %u \n",ds->m_spellId, mod->m_amount, mod->m_miscValue, mod->m_type);
	}
}

void Aura::SpellAuraModStealthLevel(bool apply)
{
	if(apply)
	{
		SetPositive();
		m_target->m_stealthLevel += mod->m_amount;
	}
	else
		m_target->m_stealthLevel -= mod->m_amount;
}

void Aura::SpellAuraModUnderwaterBreathing(bool apply)
{
	if( p_target != NULL )
	{
		uint32 m_UnderwaterMaxTimeSaved = p_target->m_UnderwaterMaxTime;
		if( apply )
			p_target->m_UnderwaterMaxTime *= (1 + mod->m_amount / 100 );
		else
			p_target->m_UnderwaterMaxTime /= (1 + mod->m_amount / 100 );
		p_target->m_UnderwaterTime *= p_target->m_UnderwaterMaxTime / m_UnderwaterMaxTimeSaved;
	}
}

void Aura::SpellAuraSafeFall(bool apply)
{
	//TODO: FIX ME: Find true flag for this
	if( p_target == NULL )
		return;

	WorldPacket data( 12 );
	if( apply )
	{
		SetPositive();
		data.SetOpcode( SMSG_MOVE_FEATHER_FALL );
		p_target->m_safeFall += mod->m_amount;
	}
	else
	{
		data.SetOpcode(SMSG_MOVE_NORMAL_FALL);
		p_target->m_safeFall -= mod->m_amount;
	}

	data << m_target->GetNewGUID();
	data << uint32( 0 );
	p_target->GetSession()->SendPacket( &data );
}

void Aura::SpellAuraAddCreatureImmunity(bool apply) 
{
	if( m_target == NULL )
		return;

	for( uint32 x = 1; x < MECHANIC_END; x++ )
	{
		if( x != 16 && x != 19 && x != 25 && x != 29 && x != 31 )
		{
			if( apply )
				m_target->MechanicsDispels[x]++;
			else
				m_target->MechanicsDispels[x]--;
		}
	}
}

void Aura::SpellAuraModReputationAdjust(bool apply)
{
	/*SetPositive();
	bool updateclient = true;
	if(IsPassive())
		updateclient = false;	 // don't update client on passive

	if(m_target->GetTypeId()==TYPEID_PLAYER)
	{
		if(apply)
			  static_cast< Player* >( m_target )->modPercAllReputation(mod->m_amount, updateclient);
		  else
			static_cast< Player* >( m_target )->modPercAllReputation(-mod->m_amount, updateclient);
	}*/

	// This is _actually_ "Reputation gains increased by x%."
	// not increase all rep by x%.

	if( p_target != NULL )
	{
		SetPositive();
		if( apply )
			p_target->pctReputationMod += mod->m_amount;
		else
			p_target->pctReputationMod -= mod->m_amount;
	}
}

void Aura::SpellAuraNoPVPCredit(bool apply)
{
	if( p_target == NULL )
		return;

	if( apply )
		p_target->m_honorless++;
	else
		p_target->m_honorless--;
}

void Aura::SpellAuraModHealthRegInCombat(bool apply)
{
	// demon armor etc, they all seem to be 5 sec.
	if(apply)
	{
		sEventMgr.AddEvent(this, &Aura::EventPeriodicHeal1, uint32(mod->m_amount), EVENT_AURA_PERIODIC_HEALINCOMB, 5000, 0,EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
	}
}

void Aura::EventPeriodicBurn(uint32 amount, uint32 misc)
{
	Unit*m_caster = GetUnitCaster();

	if(!m_caster)
		return;

	if(m_target->isAlive() && m_caster->isAlive())
	{
		if(m_target->SchoolImmunityList[GetSpellProto()->School])
			return;

		uint32 field = UNIT_FIELD_POWER1 + misc;

		uint32 Amount = (uint32)min( amount, m_target->GetUInt32Value( field ) );
		uint32 newHealth = m_target->GetUInt32Value(field) - Amount ;

		SendPeriodicAuraLog(m_target, m_target, m_spellProto->Id, m_spellProto->School, newHealth, 0, 0, false, FLAG_PERIODIC_DAMAGE);
		m_caster->DealDamage(m_target, Amount, 0, 0, GetSpellProto()->Id);
	}
}

void Aura::SpellAuraPowerBurn(bool apply)
{
	//0 mana,1 rage, 3 energy
	if(apply)
		sEventMgr.AddEvent(this, &Aura::EventPeriodicBurn, uint32(mod->m_amount), (uint32)mod->m_miscValue, EVENT_AURA_PERIODIC_BURN, GetSpellProto()->EffectAmplitude[mod->i], 0,EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
}

void Aura::SpellAuraModCritDmgPhysical(bool apply)
{
	if( p_target != NULL )
	{
		if( apply )
		{
			p_target->m_modphyscritdmgPCT += (uint32)mod->m_amount;
		}
		else
		{
			p_target->m_modphyscritdmgPCT -= (uint32)mod->m_amount;
		}
	}
}


void Aura::SpellAuraWaterBreathing( bool apply )
{
   if( p_target != NULL )
   {
	   if( apply )
	   {
			SetPositive();
			WorldPacket data( 4 );
			data.SetOpcode( SMSG_STOP_MIRROR_TIMER );
			data << uint32( 1 );
			p_target->GetSession()->SendPacket( &data );
			p_target->m_UnderwaterState = 0;
	   }

	   p_target->m_bUnlimitedBreath = apply;
   }
}

void Aura::SpellAuraAPAttackerBonus(bool apply)
{
	if(apply)
	{
		m_target->APvModifier += mod->m_amount;
	}
	else
		m_target->APvModifier -= mod->m_amount;
}


void Aura::SpellAuraModPAttackPower(bool apply)
{
	//!!probably there is a flag or something that will signal if randeg or melee attack power !!! (still missing)
	if( p_target != NULL )
	{
		if( apply )
		{
			p_target->ModFloatValue( UNIT_FIELD_ATTACK_POWER_MULTIPLIER, (float)mod->m_amount / 100.0f );
		}
		else
			p_target->ModFloatValue( UNIT_FIELD_ATTACK_POWER_MULTIPLIER, -(float)mod->m_amount / 100.0f );
		p_target->CalcDamage();
	}
}

void Aura::SpellAuraModRangedAttackPowerPct(bool apply)
{
    if(m_target->IsPlayer())
	{
		m_target->ModFloatValue(UNIT_FIELD_RANGED_ATTACK_POWER_MULTIPLIER,((apply)?1:-1)*(float)mod->m_amount/100);
        m_target->CalcDamage();
    }
}

void Aura::SpellAuraIncreaseDamageTypePCT(bool apply)
{
	if(m_target->GetTypeId() == TYPEID_PLAYER)
	{
		if(apply)
		{
			for(uint32 x = 0; x < 11; x++)
				if (mod->m_miscValue & (((uint32)1)<<x) )
					static_cast< Player* >( m_target )->IncreaseDamageByTypePCT[x+1] += ((float)(mod->m_amount))/100;;
			if(mod->m_amount < 0)
				SetNegative();
			else
				SetPositive();
		}
		else
		{
			for(uint32 x = 0; x < 11; x++)
			{
				if (mod->m_miscValue & (((uint32)1)<<x) )
					static_cast< Player* >( m_target )->IncreaseDamageByTypePCT[x+1] -= ((float)(mod->m_amount))/100;;
			}
		}
	}
}

void Aura::SpellAuraIncreaseCricticalTypePCT(bool apply)
{
	if(m_target->GetTypeId() == TYPEID_PLAYER)
	{
		if(apply)
		{
			for(uint32 x = 0; x < 11; x++)
				if (mod->m_miscValue & (((uint32)1)<<x) )
					static_cast< Player* >( m_target )->IncreaseCricticalByTypePCT[x+1] += ((float)(mod->m_amount))/100;
			if(mod->m_amount < 0)
				SetNegative();
			else
				SetPositive();
		}
		else
		{
			for(uint32 x = 0; x < 11; x++)
			{
				if (mod->m_miscValue & (((uint32)1)<<x) )
					static_cast< Player* >( m_target )->IncreaseCricticalByTypePCT[x+1] -= ((float)(mod->m_amount))/100;
			}
		}
	}
}

void Aura::SpellAuraIncreasePartySpeed(bool apply)
{
	if(m_target->GetTypeId() == TYPEID_PLAYER && m_target->isAlive() && m_target->GetUInt32Value(UNIT_FIELD_MOUNTDISPLAYID) == 0)
	{
		if(apply)
		{
			m_target->m_speedModifier += mod->m_amount;
		}
		else
		{
			m_target->m_speedModifier -= mod->m_amount;
		}
		m_target->UpdateSpeed();
	}
}
/*
void Aura::SpellAuraIncreaseSpellDamageByAttribute(bool apply)
{
	int32 val;

	if(apply)
	{
		//!! caster may log out before spell expires on target !
		Unit * pCaster = GetUnitCaster();
		if(!pCaster)
			return;

		val = mod->m_amount;
		if(val<0)
			SetNegative();
		else
			SetPositive();

		mod->fixed_amount[mod->i] = val; //we wish to have the same amount when we are removing the spell as when we were applying !
	}
	else
		val = -mod->fixed_amount[mod->i];

	uint32 stat = 3;
	for(uint32 i= 0; i < 3; i++)
	{ //bit hacky but it will work with all currently available spells
		if (m_spellProto->EffectApplyAuraName[i] == SPELL_AURA_INCREASE_SPELL_HEALING_PCT)
		{
			if (m_spellProto->EffectMiscValue[i] < 5)
				stat = m_spellProto->EffectMiscValue[i];
			else
				return;
		}
	}

	if(m_target->IsPlayer())
	{
		for(uint32 x=1;x<7;x++)
		{
			if (mod->m_miscValue & (((uint32)1)<<x) )
			{
				if( apply )
				{
					mod->realamount = float2int32(((float)val/100)*m_target->GetUInt32Value(UNIT_FIELD_STAT0 + stat));
					m_target->ModUnsigned32Value( PLAYER_FIELD_MOD_DAMAGE_DONE_POS + x, mod->realamount );
				}
				else
					m_target->ModUnsigned32Value( PLAYER_FIELD_MOD_DAMAGE_DONE_POS + x, -mod->realamount );
			}
		}
		if(m_target->IsPlayer())
			static_cast< Player* >( m_target )->UpdateChanceFields();
	}
}
*/
void Aura::SpellAuraIncreaseSpellDamageByAttribute(bool apply) //no matter if it's intellect or spirit it's stil intellect >.<
{
	int32 val;

	if(apply)
	{
		Unit* pCaster = GetUnitCaster();
		if(!pCaster)
			return;

		val = mod->m_amount;

		if(val<0)
			SetNegative();
		else
			SetPositive();

		mod->realamount = val;
	}
	else
		val = -mod->realamount;

	uint32 stat = 4; //changed intellect to spirit
	for(uint32 i=0; i < 3; i++)
	{ //bit hacky but it will work with all currently available spells
		if (m_spellProto->EffectApplyAuraName[i] == SPELL_AURA_INCREASE_SPELL_HEALING_PCT)
		{
			if (m_spellProto->EffectMiscValue[i] < 5)
				stat = m_spellProto->EffectMiscValue[i];
			else
				return;
		}
	}

	if(m_target->IsPlayer())
	{	
		for(uint32 x=0;x<7;x++)
		{
			if (mod->m_miscValue & (((uint32)1)<<x) )
			{
				if( apply )
				{
					mod->fixed_amount[x] = float2int32(((float)val/100)*m_target->GetUInt32Value(UNIT_FIELD_STAT0 + stat));
					m_target->ModUnsigned32Value( PLAYER_FIELD_MOD_DAMAGE_DONE_POS + x, mod->fixed_amount[x] );
				}
				else
					m_target->ModUnsigned32Value( PLAYER_FIELD_MOD_DAMAGE_DONE_POS + x, -mod->fixed_amount[x] );
				
				static_cast<Player*>( m_target )->SpellDmgDoneByAttribute[stat][x] += ((float)(val))/100;
			}
		}
		if(m_target->IsPlayer())
			static_cast<Player*>( m_target )->UpdateChanceFields();
	}
}

void Aura::SpellAuraModSpellDamageByAP(bool apply)
{
	int32 val;

	if(apply)
	{
		//!! caster may log out before spell expires on target !
		Unit * pCaster = GetUnitCaster();
		if( pCaster == NULL )
			return;

		val = mod->m_amount * pCaster->GetAP() / 100;
		if( val < 0 )
			SetNegative();
		else
			SetPositive();

		mod->fixed_amount[mod->i] = val; //we wish to have the same amount when we are removing the spell as when we were applying !
	}
	else
		val = -mod->fixed_amount[mod->i];

	if(m_target->IsPlayer())
	{
		for(uint32 x=1;x<7;x++) //melee damage != spell damage.
			if (mod->m_miscValue & (((uint32)1)<<x) )
				m_target->ModUnsigned32Value( PLAYER_FIELD_MOD_DAMAGE_DONE_POS + x, val );
		
		static_cast< Player* >( m_target )->UpdateChanceFields();
	}
}
/*
void Aura::SpellAuraIncreaseHealingByAttribute(bool apply)
{
	int32 val;

	if(apply)
	{
		//!! caster may log out before spell expires on target !
		Unit * pCaster = GetUnitCaster();
		if(!pCaster)
			return;

		val = mod->m_amount;

		if(val<0)
			SetNegative();
		else
			SetPositive();

		mod->fixed_amount[mod->i] = val; //we wish to have the same amount when we are removing the spell as when we were applying !
	}
	else
		val = -mod->fixed_amount[mod->i];

	uint32 stat;
	if (mod->m_miscValue < 5)
		stat = mod->m_miscValue;
	else
	{
		sLog.outError(
			"Aura::SpellAuraIncreaseHealingByAttribute::Unknown spell attribute type %u in spell %u.\n",
			mod->m_miscValue,GetSpellId());
		return;
	}

	if( p_target != NULL )
	{
		for( uint8 x = 0; x < SCHOOL_COUNT; x++ )
		{
			p_target->SpellHealDoneByAttribute[stat][x] += (float)val / 100.0f;
		}
		p_target->UpdateChanceFields();
		if( apply )
		{
			mod->realamount = float2int32( ( (float)val / 100.0f ) * p_target->GetUInt32Value( UNIT_FIELD_STAT0 + stat ) );
			p_target->ModUnsigned32Value( PLAYER_FIELD_MOD_HEALING_DONE_POS, mod->realamount );
		}
		else
			p_target->ModUnsigned32Value( PLAYER_FIELD_MOD_HEALING_DONE_POS, -mod->realamount );
	}
}
*/
void Aura::SpellAuraIncreaseHealingByAttribute(bool apply)
{
	int32 val;
	if(apply)
	{
		Unit* pCaster = GetUnitCaster();
		if(!pCaster)
			return;

		val = mod->m_amount;
		SM_FIValue(pCaster->SM_FEffect2_Bonus, &val, m_spellProto->SpellGroupType);

		if(val<0)
			SetNegative();
		else
			SetPositive();

		mod->realamount = val;
	}
	else
		val = -mod->realamount;

	uint32 stat;
	if (mod->m_miscValue < 5)
		stat = mod->m_miscValue;
	else
	{
		sLog.outError(
			"Aura::SpellAuraIncreaseHealingByAttribute::Unknown spell attribute type %u in spell %u.\n",
			mod->m_miscValue,GetSpellId());
		return;
	}

	if(m_target->IsPlayer())
	{
		for( uint32 x = 1; x < 7; x++ )
		{
			static_cast< Player* >( m_target )->SpellHealDoneByAttribute[stat][x] += ((float)(val))/100;
		}
		if(m_target->IsPlayer())
		{
			static_cast< Player* >( m_target )->UpdateChanceFields();
			if( apply )
			{
				mod->fixed_amount[0] = float2int32(((float)val/100)*m_target->GetUInt32Value(UNIT_FIELD_STAT0 + stat));
				m_target->ModUnsigned32Value(PLAYER_FIELD_MOD_HEALING_DONE_POS, mod->fixed_amount[0]);
			}
			else
				m_target->ModUnsigned32Value(PLAYER_FIELD_MOD_HEALING_DONE_POS, -mod->fixed_amount[0]);
		}
	}
}

void Aura::SpellAuraModHealingByAP(bool apply)
{
	int32 val;

	if(apply)
	{
		//!! caster may log out before spell expires on target !
		Unit * pCaster = GetUnitCaster();
		if( pCaster == NULL )
			return;

		val = mod->m_amount * pCaster->GetAP() / 100;
		if( val < 0 )
			SetNegative();
		else
			SetPositive();

		mod->fixed_amount[mod->i] = val; //we wish to have the same amount when we are removing the spell as when we were applying !
	}
	else
		val = -mod->fixed_amount[mod->i];

	

	for( uint8 x = 0; x < SCHOOL_COUNT; x++ )
	{
		if( mod->m_miscValue  & (((uint32)1) << x ) )
		{
			m_target->HealDoneMod[x] += val;
		}
	}

	if( p_target != NULL )
	{
		p_target->ModUnsigned32Value( PLAYER_FIELD_MOD_HEALING_DONE_POS, val );
		p_target->UpdateChanceFields();
	}
}

void Aura::SpellAuraAddFlatModifier(bool apply)
{
	int32 val = apply ? mod->m_amount : -mod->m_amount;
	uint32* AffectedGroups = GetSpellProto()->EffectSpellClassMask[mod->i];

	switch( mod->m_miscValue )
	{
	case SMT_DAMAGE_DONE:
		SendModifierLog(&m_target->SM_FDamageBonus, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_DURATION:
		SendModifierLog(&m_target->SM_FDur, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_THREAT_REDUCED:
		SendModifierLog(&m_target->SM_FThreat, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_EFFECT_1:
		SendModifierLog(&m_target->SM_FEffect1_Bonus, val, AffectedGroups,  static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_CHARGES:
		SendModifierLog(&m_target->SM_FCharges, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_RANGE:
		SendModifierLog(&m_target->SM_FRange, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_RADIUS:
		SendModifierLog(&m_target->SM_FRadius, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_CRITICAL:
		SendModifierLog(&m_target->SM_FCriticalChance, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_MISC_EFFECT:
		SendModifierLog(&m_target->SM_FMiscEffect, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_NONINTERRUPT:
		SendModifierLog(&m_target->SM_FNonInterrupt, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_CAST_TIME:
		SendModifierLog(&m_target->SM_FCastTime, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_COOLDOWN_DECREASE:
		SendModifierLog(&m_target->SM_FCooldownTime, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_EFFECT_2:
		SendModifierLog(&m_target->SM_FEffect2_Bonus, val, AffectedGroups,  static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_COST:
		SendModifierLog(&m_target->SM_FCost, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_CRITICAL_DAMAGE:
		SendModifierLog(&m_target->SM_FCriticalDamage, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_HITCHANCE:
		SendModifierLog(&m_target->SM_FHitchance, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_ADDITIONAL_TARGET:
		SendModifierLog(&m_target->SM_FAdditionalTargets, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_TRIGGER:
		SendModifierLog(&m_target->SM_FChanceOfSuccess, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_AMPTITUDE:
		SendModifierLog(&m_target->SM_FAmptitude, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_JUMP_REDUCE:
		SendModifierLog(&m_target->SM_FJumpReduce, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_GLOBAL_COOLDOWN:
		SendModifierLog(&m_target->SM_FGlobalCooldown, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_DAMAGE_DONE_DOTS:
		SendModifierLog(&m_target->SM_FDOT, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_EFFECT_3:
		SendModifierLog(&m_target->SM_FEffect3_Bonus, val, AffectedGroups,  static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_PENALTY:
		SendModifierLog(&m_target->SM_FPenalty, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_FREQ_OF_SUCCESS:
		SendModifierLog(&m_target->SM_FFreq_Of_Success, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ),true);
		break;

	case SMT_EFFECT_BONUS:
		SendModifierLog(&m_target->SM_FEffectBonus, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ),true);
		break;

	case SMT_RESIST_DISPEL:
		SendModifierLog(&m_target->SM_FRezist_dispell, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ));
		break;

	case SMT_REFUND_COST_ON_FAIL:
		SendModifierLog(&m_target->SM_FRefund_Cost, val, AffectedGroups, static_cast<uint8>( mod->m_miscValue ));
		break;

	default://Unknown modifier type
		sLog.outError(
			"Unknown spell modifier type %u in spell %u.<<--report this line to the developer\n",
			mod->m_miscValue,GetSpellId());
		break;
	}

	if( GetSpellProto()->NameHash == SPELL_HASH_UNRELENTING_ASSAULT )
	{
		if( apply )
		{
			Unit *caster = GetUnitCaster();
			if( !caster )
				return;

			ProcTriggerSpell UAProc;
			UAProc.origId = GetSpellProto()->Id;

			if( GetSpellProto()->Id == 46859 )
				UAProc.spellId = 64849;
			else if( GetSpellProto()->Id == 46860 )
				UAProc.spellId = 64850;

			UAProc.procChance = 100;
			UAProc.procFlags = PROC_ON_MELEE_ABILITY_LAND | PROC_ON_CAST_SPELL;
			UAProc.procFlagsExtra = GetSpellProto()->procFlagExtra;
			UAProc.procCharges = GetSpellProto()->procCharges;
			UAProc.deleted = false;
			UAProc.caster = caster->GetGUID();
			UAProc.LastTrigger = 0;
			UAProc.ProcType = 0;
			UAProc.groupRelation[0] = 0;
			UAProc.groupRelation[1] = 0;
			UAProc.groupRelation[2] = 0;
			p_target->m_procSpells.push_back(UAProc);
		}
		else
		{
			for( std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin(); itr != m_target->m_procSpells.end(); itr++ )
			{
				if( itr->origId == GetSpellProto()->Id && itr->caster == m_casterGuid && !itr->deleted )
				{
					itr->deleted = true;
					break;
				}
			}
		}
	}

	//Hunter's BeastMastery talents.
	if( m_target->IsPlayer() )
	{
		Pet * p = static_cast< Player * >(m_target)->GetSummon();
		if( p )
		{
			switch( GetSpellProto()->NameHash )
			{
			case SPELL_HASH_UNLEASHED_FURY:
				p->LoadPetAuras(0);
				break;
			case SPELL_HASH_THICK_HIDE:
				p->LoadPetAuras(1);
				break;
			case SPELL_HASH_ENDURANCE_TRAINING:
				p->LoadPetAuras(2);
				break;
			case SPELL_HASH_BESTIAL_DISCIPLINE:
				p->LoadPetAuras(4);
				break;
			case SPELL_HASH_FEROCITY:
				p->LoadPetAuras(5);
				break;
			case SPELL_HASH_ANIMAL_HANDLER:
				p->LoadPetAuras(6);
				break;
			case SPELL_HASH_CATLIKE_REFLEXES:
				p->LoadPetAuras(7);
				break;
			case SPELL_HASH_SERPENT_S_SWIFTNESS:
				p->LoadPetAuras(8);
				break;
			}
		}
	}
}

void Aura::SpellAuraModHealingDone(bool apply)
{
	int32 val;
	if( apply )
	{
		val = mod->m_amount;
		if( val < 0 )
			SetNegative();
		else
			SetPositive();
	}
	else
		val = -mod->m_amount;
	
	uint32 player_class = m_target->getClass();
	if( player_class != DRUID && player_class != PALADIN && player_class != SHAMAN && player_class != PRIEST )
		val = (int32)( float( val ));
	else
		val = (int32)( float( val ) * 1.88f );

	for( uint8 x = 0; x < SCHOOL_COUNT; x++ )
	{
		if( mod->m_miscValue  & (((uint32)1) << x ) )
		{
			m_target->HealDoneMod[x] += val;
		}
	}
	if( p_target != NULL )
	{
		p_target->UpdateChanceFields();
		p_target->ModUnsigned32Value( PLAYER_FIELD_MOD_HEALING_DONE_POS, val );
	}
}

void Aura::SpellAuraModHealingDonePct(bool apply)
{
	int32 val;
	if(apply)
	{
		val=mod->m_amount;
		if(val<0)
			SetNegative();
		else
			SetPositive();
	}
	else
		val=-mod->m_amount;

	for(uint32 x= 0;x<7;x++)
	{
		if (mod->m_miscValue  & (((uint32)1)<<x) )
		{
			m_target->HealDonePctMod[x] += ( (float)(val) )/100;
		}
	}
}

void Aura::SpellAuraEmphaty(bool apply)
{
	SetPositive();
	Unit * caster = GetUnitCaster();
	if(caster == 0 || !m_target || caster->GetTypeId() != TYPEID_PLAYER)
		return;

	// Show extra info about beast
	uint32 dynflags = m_target->GetUInt32Value(UNIT_DYNAMIC_FLAGS);
	if(apply)
		dynflags |= U_DYN_FLAG_PLAYER_INFO;

	m_target->BuildFieldUpdatePacket(static_cast< Player* >(caster), UNIT_DYNAMIC_FLAGS, dynflags);
}

void Aura::SpellAuraModOffhandDamagePCT(bool apply)
{
	//Used only by talents of rogue and warrior;passive,positive
	if( p_target != NULL )
	{
		if( apply )
		{
			SetPositive();
			p_target->offhand_dmg_mod *= ( 100 + mod->m_amount ) / 100.0f;
		}
		else
			p_target->offhand_dmg_mod /= ( 100 + mod->m_amount ) / 100.0f;

		p_target->CalcDamage();
	}
}

void Aura::SpellAuraModPenetration(bool apply) // armor penetration & spell penetration
{
	if( m_spellProto->NameHash == SPELL_HASH_SERRATED_BLADES )
	{
		if( p_target == NULL )
			return;

		if( apply )
		{
			if( m_spellProto->Id == 14171 )
				p_target->PowerCostPctMod[0] += float( m_target->getLevel() * 2.67 );
			else if( m_spellProto->Id == 14172 )
				p_target->PowerCostPctMod[0] += float( m_target->getLevel() * 5.43 );
			else if( m_spellProto->Id == 14173 )
				p_target->PowerCostPctMod[0] += float( m_target->getLevel() * 8 );
		}
		else
		{
			if( m_spellProto->Id == 14171 )
				p_target->PowerCostPctMod[0] -= float( m_target->getLevel() * 2.67 );
			else if( m_spellProto->Id == 14172 )
				p_target->PowerCostPctMod[0] -= float( m_target->getLevel() * 5.43 );
			else if( m_spellProto->Id == 14173 )
				p_target->PowerCostPctMod[0] -= float( m_target->getLevel() * 8 );
		}
		return;
	}
	if( apply )
	{
		if( mod->m_amount < 0 )
			SetPositive();
		else
			SetNegative();

		for( uint8 x = 0; x < 7; x++ )
		{
			if( mod->m_miscValue & (((uint32)1) << x ) )
				m_target->PowerCostPctMod[x] -= mod->m_amount;
		}

		if( p_target != NULL )
		{
			if( mod->m_miscValue & 124 )
				m_target->ModSignedInt32Value( PLAYER_FIELD_MOD_TARGET_RESISTANCE, mod->m_amount );
			if( mod->m_miscValue & 1 )
				m_target->ModSignedInt32Value( PLAYER_FIELD_MOD_TARGET_PHYSICAL_RESISTANCE, mod->m_amount );
		}
	}
	else
	{
		for( uint8 x = 0; x < 7; x++ )
		{
			if( mod->m_miscValue & (((uint32)1)<<x) )
				m_target->PowerCostPctMod[x] += mod->m_amount;
		}
		if( p_target != NULL )
		{
			if( mod->m_miscValue & 124 )
				m_target->ModSignedInt32Value( PLAYER_FIELD_MOD_TARGET_RESISTANCE, -mod->m_amount );
			if( mod->m_miscValue & 1 )
				m_target->ModSignedInt32Value( PLAYER_FIELD_MOD_TARGET_PHYSICAL_RESISTANCE, -mod->m_amount );
		}
	}
}

void Aura::SpellAuraIncreaseArmorByPctInt(bool apply)
{
	uint32 i_Int = m_target->GetUInt32Value(UNIT_FIELD_STAT3);

	int32 amt = float2int32(i_Int * ((float)mod->m_amount / 100.0f));
	amt *= (!apply) ? -1 : 1;

	for( uint8 x = 0; x < 7; x++ )
	{
		if(mod->m_miscValue & (((uint32)1)<< x))
		{
			if( p_target == NULL )
			{
				p_target->FlatResistanceModifierPos[x] += amt;
				p_target->CalcResistance(x);
			}
			else if(m_target->GetTypeId() == TYPEID_UNIT)
			{
				static_cast<Creature*>(m_target)->FlatResistanceMod[x] += amt;
				static_cast<Creature*>(m_target)->CalcResistance(x);
			}
		}
	}
}

void Aura::SpellAuraReduceAttackerMHitChance(bool apply)
{
	if( p_target == NULL )
		return;
	if( apply )
		p_target->m_resist_hit[ MOD_MELEE ] += mod->m_amount;
	else
		p_target->m_resist_hit[ MOD_MELEE ] -= mod->m_amount;
}

void Aura::SpellAuraReduceAttackerRHitChance(bool apply)
{
	if( p_target == NULL )
		return;
	if( apply )
		p_target->m_resist_hit[ MOD_RANGED ] += mod->m_amount;
	else
		p_target->m_resist_hit[ MOD_RANGED ] -= mod->m_amount;
}

void Aura::SpellAuraReduceAttackerSHitChance(bool apply)
{
	if( p_target == NULL )
		return;
	for( uint8 i = 0; i < SCHOOL_COUNT; i++ )
	{
		if( mod->m_miscValue & ( 1 << i ) ) // check school
		{
			// signs reversed intentionally
			if( apply )
				p_target->m_resist_hit_spell[ i ] -= mod->m_amount;
			else
				p_target->m_resist_hit_spell[ i ] += mod->m_amount;
		}
	}
}

void Aura::SpellAuraReduceEnemyMCritChance(bool apply)
{
	if(!m_target->IsPlayer())
		return;
	if(apply)
	{
		//value is negative percent
		static_cast< Player* >( m_target )->res_M_crit_set(static_cast< Player* >( m_target )->res_M_crit_get()+mod->m_amount);
	}
	else
	{
		static_cast< Player* >( m_target )->res_M_crit_set(static_cast< Player* >( m_target )->res_M_crit_get()-mod->m_amount);
	}
}

void Aura::SpellAuraReduceEnemyRCritChance(bool apply)
{
	if(!m_target->IsPlayer())
		return;
	if(apply)
	{
		//value is negative percent
		static_cast< Player* >( m_target )->res_R_crit_set(static_cast< Player* >( m_target )->res_R_crit_get()+mod->m_amount);
	}
	else
	{
		static_cast< Player* >( m_target )->res_R_crit_set(static_cast< Player* >( m_target )->res_R_crit_get()-mod->m_amount);
	}
}

void Aura::SpellAuraLimitSpeed( bool apply )
{
	int32 amount = ( apply ) ? mod->m_amount : -mod->m_amount;
	m_target->m_maxSpeed += (float)amount;
	m_target->UpdateSpeed();
}

void Aura::SpellAuraIncreaseTimeBetweenAttacksPCT(bool apply)
{
	int32 val = (apply) ? mod->m_amount : -mod->m_amount;

	float pct_value = -val/100.0f;

	if( m_target->IsPlayer() )
	{
		static_cast< Player* >( m_target )->ModAttackSpeed( val, MOD_MELEE );
		static_cast< Player* >( m_target )->UpdateAttackSpeed();
	}
	else
	{
		if( apply )
		{
			mod->fixed_amount[0] = m_target->GetModPUInt32Value( UNIT_FIELD_BASEATTACKTIME, mod->m_amount );
			mod->fixed_amount[1] = m_target->GetModPUInt32Value( UNIT_FIELD_BASEATTACKTIME+1, mod->m_amount );

			if( (int32)m_target->GetUInt32Value ( UNIT_FIELD_BASEATTACKTIME ) <= mod->fixed_amount[0] )
				mod->fixed_amount[0] = m_target->GetUInt32Value ( UNIT_FIELD_BASEATTACKTIME );
			if( (int32)m_target->GetUInt32Value ( UNIT_FIELD_BASEATTACKTIME+1 ) <= mod->fixed_amount[1] )
				mod->fixed_amount[1] = m_target->GetUInt32Value ( UNIT_FIELD_BASEATTACKTIME+1 );

			m_target->ModUnsigned32Value( UNIT_FIELD_BASEATTACKTIME, -mod->fixed_amount[0] );
			m_target->ModUnsigned32Value( UNIT_FIELD_BASEATTACKTIME+1, -mod->fixed_amount[1] );
		}
		else
		{
			m_target->ModUnsigned32Value( UNIT_FIELD_BASEATTACKTIME, mod->fixed_amount[0] );
			m_target->ModUnsigned32Value( UNIT_FIELD_BASEATTACKTIME+1, mod->fixed_amount[1] );
		}
	}

	m_target->ModFloatValue( UNIT_MOD_CAST_SPEED, pct_value );
}

void Aura::SpellAuraMeleeHaste( bool apply )
{
	if( mod->m_amount < 0 )
		SetNegative();
	else
		SetPositive();

	if( m_target->IsPlayer() )
	{
		if( apply )
			static_cast< Player* >( m_target )->ModAttackSpeed( mod->m_amount, MOD_MELEE );
		else
			static_cast< Player* >( m_target )->ModAttackSpeed( -mod->m_amount, MOD_MELEE );

		static_cast< Player* >(m_target)->UpdateAttackSpeed();
	}
	else
	{
		if( apply )
		{
			mod->fixed_amount[0] = m_target->GetModPUInt32Value( UNIT_FIELD_BASEATTACKTIME, mod->m_amount );
			mod->fixed_amount[1] = m_target->GetModPUInt32Value( UNIT_FIELD_BASEATTACKTIME+1, mod->m_amount );

			if( (int32)m_target->GetUInt32Value ( UNIT_FIELD_BASEATTACKTIME ) <= mod->fixed_amount[0] )
				mod->fixed_amount[0] = m_target->GetUInt32Value ( UNIT_FIELD_BASEATTACKTIME );
			if( (int32)m_target->GetUInt32Value ( UNIT_FIELD_BASEATTACKTIME+1 ) <= mod->fixed_amount[1] )
				mod->fixed_amount[1] = m_target->GetUInt32Value ( UNIT_FIELD_BASEATTACKTIME+1 );

			m_target->ModUnsigned32Value( UNIT_FIELD_BASEATTACKTIME, -mod->fixed_amount[0] );
			m_target->ModUnsigned32Value( UNIT_FIELD_BASEATTACKTIME+1, -mod->fixed_amount[1] );
		}
		else
		{
			m_target->ModUnsigned32Value( UNIT_FIELD_BASEATTACKTIME, mod->fixed_amount[0] );
			m_target->ModUnsigned32Value( UNIT_FIELD_BASEATTACKTIME+1, mod->fixed_amount[1] );
		}
	}
}

/*
void Aura::SpellAuraIncreaseSpellDamageByInt(bool apply)
{
	 float val;
	 if(apply)
	 {
		 val = mod->m_amount/100.0f;
		 if(mod->m_amount>0)
			 SetPositive();
		 else
			 SetNegative();
	 }
	 else
		val =- mod->m_amount/100.0f;

	if(m_target->IsPlayer())
	{
		for(uint32 x=1;x<7;x++)
		{
			if (mod->m_miscValue & (((uint32)1)<<x) )
			{
				static_cast< Player* >( m_target )->SpellDmgDoneByInt[x]+=val;
			}
		}
	}
}

void Aura::SpellAuraIncreaseHealingByInt(bool apply)
{
	 float val;
	 if(apply)
	 {
		 val = mod->m_amount/100.0f;
		 if(val>0)
			 SetPositive();
		 else
			 SetNegative();
	 }
	 else
		val =- mod->m_amount/100.0f;

	if(m_target->IsPlayer())
	{
		for(uint32 x=1;x<7;x++)
		{
   //		 if (mod->m_miscValue & (((uint32)1)<<x) )
			{
				static_cast< Player* >( m_target )->SpellHealDoneByInt[x]+=val;
			}
		}
	}
}
*/
void Aura::SpellAuraModAttackerCritChance(bool apply)
{
	int32 val  = (apply) ? mod->m_amount : -mod->m_amount;
	m_target->AttackerCritChanceMod[0] +=val;
}

void Aura::SpellAuraIncreaseAllWeaponSkill(bool apply)
{
	if (m_target->GetTypeId() == TYPEID_PLAYER)
	{
		if(apply)
		{
			SetPositive();
//			static_cast< Player* >( m_target )->ModSkillBonusType(SKILL_TYPE_WEAPON, mod->m_amount);
			//since the frikkin above line does not work we have to do it manually
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_SWORDS, mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_AXES, mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_BOWS, mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_GUNS, mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_MACES, mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_2H_SWORDS, mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_STAVES, mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_2H_MACES, mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_2H_AXES, mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_DAGGERS, mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_CROSSBOWS, mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_WANDS, mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_POLEARMS, mod->m_amount);
		}
		else
		{
//			static_cast< Player* >( m_target )->ModSkillBonusType(SKILL_TYPE_WEAPON, -mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_SWORDS, -mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_AXES, -mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_BOWS, -mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_GUNS, -mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_MACES, -mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_2H_SWORDS, -mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_STAVES, -mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_2H_MACES, -mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_2H_AXES, -mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_DAGGERS, -mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_CROSSBOWS, -mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_WANDS, -mod->m_amount);
			static_cast< Player* >( m_target )->_ModifySkillBonus(SKILL_POLEARMS, -mod->m_amount);
		}

		static_cast< Player* >( m_target )->UpdateStats();
	}
}

void Aura::SpellAuraIncreaseHitRate( bool apply ) // this is wrong, temp fix
{
	if( !m_target->IsPlayer() )
		return;

	int32 amount = mod->m_amount * 8;

	if( apply )
		static_cast< Player* >( m_target )->ModifyBonuses( SPELL_HIT_RATING, amount, apply );
	else
		static_cast< Player* >( m_target )->ModifyBonuses( SPELL_HIT_RATING, -amount, apply );

	static_cast< Player* >( m_target )->UpdateStats();
}

void Aura::SpellAuraIncreaseRageFromDamageDealtPCT(bool apply)
{
	if(!m_target->IsPlayer())
		return;

	static_cast< Player* >( m_target )->rageFromDamageDealt += (apply) ? mod->m_amount : -mod->m_amount;
}

int32 Aura::event_GetInstanceID()
{
	return m_target->event_GetInstanceID();
}

void Aura::RelocateEvents()
{
	event_Relocate();
}

void Aura::SpellAuraReduceCritMeleeAttackDmg(bool apply)
{
	if(!m_target)
		return;

	signed int val;
	if(apply)
		val = mod->m_amount;
	else
		val = -mod->m_amount;

	for(uint32 x=1;x<7;x++)
		if (mod->m_miscValue & (((uint32)1)<<x) )
			m_target->CritMeleeDamageTakenPctMod[x] += val/100.0f;
}

void Aura::SpellAuraReduceCritRangedAttackDmg(bool apply)
{
	if(!m_target)
		return;

	signed int val;
	if(apply)
		val = mod->m_amount;
	else
		val = -mod->m_amount;

	for(uint32 x=1;x<7;x++)
		if (mod->m_miscValue & (((uint32)1)<<x) )
			m_target->CritRangedDamageTakenPctMod[x] += val/100.0f;
}

void Aura::SpellAuraEnableFlight(bool apply)
{
	if(apply)
	{
		m_target->EnableFlight();
		m_target->m_flyspeedModifier += mod->m_amount;
		m_target->UpdateSpeed();
		if(m_target->IsPlayer())
		{
			static_cast< Player* >( m_target )->flying_aura = m_spellProto->Id;
		}
	}
	else
	{
		m_target->DisableFlight();
		m_target->m_flyspeedModifier -= mod->m_amount;
		m_target->UpdateSpeed();
		if(m_target->IsPlayer())
		{
			static_cast< Player* >( m_target )->flying_aura = 0;
		}
	}
}

void Aura::SpellAuraEnableFlightWithUnmountedSpeed(bool apply)
{
	// Used in flight form (only so far)
	if(apply)
	{
		m_target->EnableFlight();
		m_target->m_flyspeedModifier += mod->m_amount;
		m_target->UpdateSpeed();
		if(m_target->IsPlayer())
		{
			static_cast< Player* >( m_target )->flying_aura = m_spellProto->Id;
		}
	}
	else
	{
		m_target->DisableFlight();
		m_target->m_flyspeedModifier -= mod->m_amount;
		m_target->UpdateSpeed();
		if(m_target->IsPlayer())
		{
			static_cast< Player* >( m_target )->flying_aura = 0;
		}
	}
}

void Aura::SpellAuraIncreaseMovementAndMountedSpeed( bool apply )
{
	if( apply )
		m_target->m_mountedspeedModifier += mod->m_amount;
	else
		m_target->m_mountedspeedModifier -= mod->m_amount;
	m_target->UpdateSpeed();
}

void Aura::SpellAuraIncreaseFlightSpeed( bool apply )
{
	if( apply )
		m_target->m_flyspeedModifier += mod->m_amount;
	else
		m_target->m_flyspeedModifier -= mod->m_amount;
	m_target->UpdateSpeed();
}


void Aura::SpellAuraIncreaseRating( bool apply )
{
	int v = apply ? mod->m_amount : -mod->m_amount;

	if( !m_target->IsPlayer() )
		return;

	Player* plr = static_cast< Player* >( m_target );
	for( uint32 x = 1; x < 24; x++ )//skip x= 0
		if( ( ( ( uint32 )1 ) << x ) & mod->m_miscValue )
			plr->ModifyBonuses( 11 + x, mod->m_amount, apply );

	//MELEE_CRITICAL_AVOIDANCE_RATING + RANGED_CRITICAL_AVOIDANCE_RATING + SPELL_CRITICAL_AVOIDANCE_RATING
	//comes only as combination of them  - ModifyBonuses() not adding them individually anyhow
	if( mod->m_miscValue & (0x0004000|0x0008000|0x0010000) )
			plr->ModifyBonuses( RESILIENCE_RATING, mod->m_amount, apply );

	if( mod->m_miscValue & 1 )//weapon skill
	{
		std::map<uint32, uint32>::iterator i;
		for( uint32 y = 0; y < 20; y++ )
			if( m_spellProto->EquippedItemSubClass & ( ( ( uint32 )1 ) << y ) )
			{
					i = static_cast< Player* >( m_target )->m_wratings.find( y );
					if( i == static_cast< Player* >( m_target )->m_wratings.end() )//no prev
					{
						static_cast< Player* >( m_target )->m_wratings[y] = v;
					}else
					{
						i->second += v;
						if( i->second == 0 )
							static_cast< Player* >( m_target )->m_wratings.erase( i );
					}
			}
	}

	plr->UpdateStats();
}

void Aura::EventPeriodicRegenManaStatPct(uint32 perc, uint32 stat)
{
	if(m_target->IsDead())
		return;

	uint32 mana = m_target->GetUInt32Value(UNIT_FIELD_POWER1) + (m_target->GetUInt32Value(UNIT_FIELD_STAT0 + stat)*perc)/100;

	if(mana <= m_target->GetUInt32Value(UNIT_FIELD_MAXPOWER1))
		m_target->SetUInt32Value(UNIT_FIELD_POWER1, mana);
	else
		m_target->SetUInt32Value(UNIT_FIELD_POWER1, m_target->GetUInt32Value(UNIT_FIELD_MAXPOWER1));
}

void Aura::SpellAuraRegenManaStatPCT(bool apply)
{
	if(apply)
	{
		SetPositive();
		sEventMgr.AddEvent(this, &Aura::EventPeriodicRegenManaStatPct,(uint32)mod->m_amount,(uint32)mod->m_miscValue,  EVENT_AURA_REGEN_MANA_STAT_PCT, 5000, 0,EVENT_FLAG_DO_NOT_EXECUTE_IN_WORLD_CONTEXT);
	}
}

void Aura::SpellAuraSpellHealingStatPCT(bool apply)
{
	if( !m_target->IsPlayer() )
		return;

	if(apply)
	{
		//SetPositive();
		/*mod->realamount = ( mod->m_amount * m_target->GetUInt32Value( UNIT_FIELD_STAT0 + mod->m_miscValue ) /1 00;

		for( uint32 x = 1; x < 7; x++ )
			m_target->HealDoneMod[x] += mod->realamount;*/

		mod->realamount = ( ( m_target->GetUInt32Value(UNIT_FIELD_SPIRIT) * mod->m_amount ) / 100 );

		TO_PLAYER( m_target )->ModifyBonuses( CRITICAL_STRIKE_RATING, mod->realamount, true );
		TO_PLAYER( m_target )->UpdateChances();
	}
	else
	{
		/*for( uint32 x = 1; x < 7; x++ )
			m_target->HealDoneMod[x] -= mod->realamount;*/

		TO_PLAYER( m_target )->ModifyBonuses( CRITICAL_STRIKE_RATING, mod->realamount, false );
		TO_PLAYER( m_target )->UpdateChances();
	}
}

void Aura::SpellAuraAllowFlight(bool apply)
{
    // allow fly
    WorldPacket data;
    if(apply)
        data.Initialize(SMSG_MOVE_SET_CAN_FLY);
    else
        data.Initialize(SMSG_MOVE_UNSET_CAN_FLY);
    //data.append(m_target->m_PackGUID);
    data << uint32(0);                                      // unk
    m_target->SendMessageToSet(&data, true);
}

void Aura::SpellAuraFinishingMovesCannotBeDodged(bool apply)
{
	if(apply)
	{
		if( !m_target->IsPlayer() )
			return;

		static_cast< Player* >( m_target )->m_finishingmovesdodge = true;
	}
	else
	{
		if( !m_target->IsPlayer() )
			return;

		static_cast< Player* >( m_target )->m_finishingmovesdodge = false;
	}
}

void Aura::SpellAuraModStealthDetection(bool apply)
{
	if(apply)
	{
		m_target->m_stealthDetectBonus += 9999;
	}
	else
		m_target->m_stealthDetectBonus -= 9999;
}

void Aura::SpellAuraReduceAOEDamageTaken(bool apply)
{
	if( !m_target )
		return;
	
	float val = mod->m_amount / 100.0f;
	if( apply )
	{
		mod->fixed_amount[0] = (int)(m_target->AOEDmgMod * val);
		m_target->AOEDmgMod += mod->fixed_amount[0];
	}
	else
		m_target->AOEDmgMod -= mod->fixed_amount[0];
}

void Aura::SpellAuraIncreaseMaxHealth(bool apply)
{
	//should only be used by a player
	//and only ever target players
	if( !m_target->IsPlayer() )
		return;

	int32 amount;
	if( apply )
		amount = mod->m_amount;
	else
		amount = -mod->m_amount;

	static_cast< Player* >( m_target )->SetHealthFromSpell( static_cast< Player* >( m_target )->GetHealthFromSpell() + amount );
	static_cast< Player* >( m_target )->UpdateStats();
}

void Aura::SpellAuraProcTriggerSpellWithValue(bool apply)
{
	Unit* ucaster = GetUnitCaster();
	if( ucaster == NULL || m_target == NULL )
		return;

	if(apply)
	{
		ProcTriggerSpell pts;
		pts.origId = GetSpellProto()->Id;

		if( GetSpellProto()->EffectTriggerSpell[mod->i] )
		{
			pts.spellId = GetSpellProto()->EffectTriggerSpell[mod->i];
		}
		else
		{
			sLog.outDebug("Warning,trigger spell is null for spell %u",GetSpellProto()->Id);
			return;
		}

		pts.caster = GetUnitCaster()->GetGUID();
		pts.procChance = GetSpellProto()->procChance;
		pts.procFlags = GetSpellProto()->procFlags;
		pts.procFlagsExtra = GetSpellProto()->procFlagExtra;

		int charges = GetSpellProto()->procCharges;
		if( GetSpellProto()->SpellGroupType )
		{
			SM_FIValue( ucaster->SM_FCharges, &charges, GetSpellProto()->SpellGroupType );
			SM_PIValue( ucaster->SM_PCharges, &charges, GetSpellProto()->SpellGroupType );
		}

		pts.procCharges = charges;
		pts.LastTrigger = 0;
		pts.ProcType = 0;
		pts.groupRelation[0] = GetSpellProto()->EffectSpellClassMask[mod->i][0];
		pts.groupRelation[1] = GetSpellProto()->EffectSpellClassMask[mod->i][1];
		pts.groupRelation[2] = GetSpellProto()->EffectSpellClassMask[mod->i][2];
		//pst.value = mod->m_amount;
		pts.deleted = false;
		m_target->m_procSpells.push_front(pts);

		sLog.outDebug("%u is registering %u chance %u flags %u charges %u triggeronself %u interval %u\n",pts.origId,pts.spellId,pts.procChance,m_spellProto->procFlags,charges,m_spellProto->procFlags,m_spellProto->proc_interval);

		if( m_target->HasAura(31226) )
			m_target->m_RemoveEnvenom -= 33;
		else if( m_target->HasAura(31227) )
			m_target->m_RemoveEnvenom -= 66;
		else if( m_target->HasAura(58410) )
			m_target->m_RemoveEnvenom -= 100;
	}
	else
	{
		for(std::list<struct ProcTriggerSpell>::iterator itr = m_target->m_procSpells.begin();itr != m_target->m_procSpells.end();itr++)
		{
			if(itr->origId == GetSpellId() && itr->caster == m_casterGuid && !itr->deleted)
			{
				itr->deleted = true;
				break;
			}
		}

		if( m_target->HasAura(31226) )
			m_target->m_RemoveEnvenom += 33;
		else if( m_target->HasAura(31227) )
			m_target->m_RemoveEnvenom += 66;
		else if( m_target->HasAura(58410) )
			m_target->m_RemoveEnvenom += 100;
	}
}

void Aura::SpellAuraSpiritOfRedemption(bool apply)
{
	if(!m_target->IsPlayer())
		return;

	if(apply)
	{
		m_target->SetFloatValue(OBJECT_FIELD_SCALE_X, 0.5);
		m_target->SetUInt32Value(UNIT_FIELD_HEALTH, 1);
		SpellEntry * sorInfo = dbcSpell.LookupEntry(27792);
		if(!sorInfo) return;
		Spell * sor = new Spell(m_target, sorInfo, true, NULL);
		if (!sor)
			return;

		SpellCastTargets targets;
		targets.m_unitTarget = m_target->GetGUID();
		sor->prepare(&targets);
	}
	else
	{
		m_target->SetFloatValue(OBJECT_FIELD_SCALE_X, 1);
		m_target->RemoveAura(27792);
		m_target->SetUInt32Value(UNIT_FIELD_HEALTH, 0);
	}
}

void Aura::SpellAuraIncreaseAttackerSpellCrit(bool apply)
{
	int32 val = mod->m_amount;

	if( apply )
	{
		if (mod->m_amount>0)
			SetNegative();
		else
			SetPositive();
	}
	else
		val = -val;

	for(uint32 x= 0;x<7;x++)
	{
		if (mod->m_miscValue & (((uint32)1)<<x))
			m_target->AttackerCritChanceMod[x] += val;
	}
}

void Aura::SpellAuraIncreaseRepGainPct(bool apply)
{
	if(p_target)
	{
		SetPositive();
		if(apply)
			p_target->pctReputationMod += mod->m_amount;//re use
		else
			p_target->pctReputationMod -= mod->m_amount;//re use
	}
}

void Aura::SpellAuraIncreaseRAPbyStatPct( bool apply )
{
	if( apply )
	{
		if( mod->m_amount > 0 )
			SetPositive();
		else
			SetNegative();

		mod->fixed_amount[mod->i] = m_target->GetUInt32Value( UNIT_FIELD_STAT0 + mod->m_miscValue ) * mod->m_amount / 100;
		m_target->ModUnsigned32Value( UNIT_FIELD_RANGED_ATTACK_POWER_MODS, mod->fixed_amount[mod->i] );
	}
	else
		m_target->ModUnsigned32Value( UNIT_FIELD_RANGED_ATTACK_POWER_MODS, -mod->fixed_amount[mod->i] );

	m_target->CalcDamage();
}

/* not used
void Aura::SpellAuraModRangedDamageTakenPCT(bool apply)
{
	if(apply)
		m_target->RangedDamageTakenPct += mod->m_amount;
	else
		m_target->RangedDamageTakenPct -= mod->m_amount;
}*/

void Aura::SpellAuraModBlockValue(bool apply)
{
	if( p_target != NULL)
 	{
		int32 amt;
 		if( apply )
 		{
			amt = mod->m_amount;
			if( amt < 0 )
				SetNegative();
			else
				SetPositive();
 		}
		else
		{
			amt = -mod->m_amount;
		}
		p_target->m_modblockvaluefromspells += amt;
		p_target->UpdateStats();
	}
}

void Aura::SendInterrupted(uint8 result, Object * m_caster)
{
	if( !m_caster->IsInWorld() )
		return;

	WorldPacket data( SMSG_SPELL_FAILURE, 20 );
	if( m_caster->IsPlayer() )
	{
		data << m_caster->GetNewGUID();
		data << m_spellProto->Id;
		data << uint8( result );
		static_cast< Player* >( m_caster )->GetSession()->SendPacket( &data );
	}

	data.Initialize( SMSG_SPELL_FAILED_OTHER );
	data << m_caster->GetNewGUID();
	data << m_spellProto->Id;
	m_caster->SendMessageToSet( &data, false );

	m_interrupted = (int16)result;
}

void Aura::SendChannelUpdate(uint32 time, Object * m_caster)
{
	WorldPacket data(MSG_CHANNEL_UPDATE, 18);
	data << m_caster->GetNewGUID();
	data << time;

	m_caster->SendMessageToSet(&data, true);
}

void Aura::SpellAuraExpertise(bool apply)
{
	if( !m_target->IsPlayer() )
		return;

	static_cast< Player* >( m_target )->CalcExpertise();
}

void Aura::SpellAuraForceMoveForward(bool apply)
{
	if( m_target || !m_target->IsPlayer() )
        return;

    if( apply )
        m_target->SetFlag( UNIT_FIELD_FLAGS_2, UNIT_FLAG2_FORCE_MOVE );
    else
        m_target->RemoveFlag( UNIT_FIELD_FLAGS_2, UNIT_FLAG2_FORCE_MOVE );
}

void Aura::SpellAuraComprehendLanguage(bool apply)
{
    if( apply )
        m_target->SetFlag( UNIT_FIELD_FLAGS_2, UNIT_FLAG2_COMPREHEND_LANG );
    else
        m_target->RemoveFlag( UNIT_FIELD_FLAGS_2, UNIT_FLAG2_COMPREHEND_LANG );
}

void Aura::SpellAuraReduceEffectDurationByDispelType(bool apply)
{
	if( !m_target->IsPlayer() )
		return;

	int32 val;
	if( apply )
	{
		//SetPositive();
		val = mod->m_amount;
	}
	else
	{
		val = -mod->m_amount;
	}

	if( mod->m_miscValue > 0 && mod->m_miscValue < 10 )
	{
		static_cast< Player* >( m_target )->DispelDurationPctMod[mod->m_miscValue] += val;
	}
}

void Aura::SpellAuraModPossessPet(bool apply)
{
	Unit *caster = GetUnitCaster();
	Player* pCaster;
	if( caster != NULL && caster->IsPlayer() && caster->IsInWorld() )
		pCaster = static_cast< Player* >( caster );
	else
		return;

	if( !m_target->IsPet() || pCaster->GetSummon() != m_target )
		return;


	if( apply )
	{
		pCaster->Possess( m_target );
		pCaster->SpeedCheatDelay( GetDuration() );
	}
	else
	{
		pCaster->UnPossess();

	}
}

void Aura::SpellAuraReduceEffectDuration(bool apply)
{
	if(!m_target->IsPlayer())
		return;

	int32 val;
	if( apply )
	{
		SetPositive();
		val = mod->m_amount; // TODO Only maximum effect should be used for Silence or Interrupt effects reduction
	}
	else
	{
		val = -mod->m_amount;
	}

	if(mod->m_miscValue > 0 && mod->m_miscValue < 28)
	{
		static_cast< Player* >( m_target )->MechanicDurationPctMod[mod->m_miscValue] += val;
	}
}

void Aura::HandleAuraControlVehicle(bool apply)
{
	//we are casting this spell as player. Just making sure in future noone is dumb enough to forget that
	Unit* ucaster = GetUnitCaster();
	if( ucaster == NULL || !ucaster->IsPlayer() || !m_target->IsUnit() )
		return;

	Player *pcaster = static_cast< Player* >( ucaster );

	if( apply )
	{
		WorldPacket data(SMSG_CLIENT_CONTROL_UPDATE, 9);
		data << m_target->GetNewGUID();
		data << (uint8)1; // we are going to loose control !
		pcaster->GetSession()->SendPacket(&data);

		pcaster->SetVehicle( static_cast< Vehicle* >( m_target ), -1);
		pcaster->SetUInt64Value( UNIT_FIELD_CHARM, pcaster->GetVehicle()->GetGUID() );
		pcaster->SetUInt64Value( PLAYER_FARSIGHT, pcaster->GetVehicle()->GetGUID() ); //focus camera on this

		//add mana to the vehicle. It is supposed to already have mana
		if( m_target->GetUInt32Value( UNIT_FIELD_MAXPOWER1 ) < 100 )
			m_target->SetUInt32Value( UNIT_FIELD_MAXPOWER1, 100000 );
		m_target->SetUInt32Value( UNIT_FIELD_POWER1, m_target->GetUInt32Value( UNIT_FIELD_MAXPOWER1 ) );

		//root the player
		pcaster->Root();

		//set our speed to the speed of the controlled vehicle
		WorldPacket data5(SMSG_FORCE_RUN_SPEED_CHANGE, 0);
		data5 << m_target->GetNewGUID();
		data5 << pcaster->m_speedChangeCounter++;
		data5 << uint8( 1 );
		data5 << float( 40 );
		pcaster->GetSession()->SendPacket(&data5);

		//show the interface for the vehicle
		WorldPacket data2(SMSG_CONTROL_VECHICLE, 0);
		pcaster->GetSession()->SendPacket(&data2);

		//port ourselfs on it
		pcaster->SetPosition( m_target->GetPosition() );
		float o = m_target->GetOrientation();
		pcaster->SetOrientation( o );
/*		WorldPacket data3(MSG_MOVE_TELEPORT_ACK, 74);
		data3 << pcaster->GetNewGUID();
		data3 << uint32(1); // no idea really
		data3 << uint32(0x200); //some might think this is the spell targeting mask for a unit ;)
		data3 << uint16(0);
//		data3 << uint32( getMSTime() ); //got a strong feeling this is something else
		data3 << uint32( 0 ); //got a strong feeling this is something else
		data3 << pcaster->GetPosition();
		data3 << pcaster->GetOrientation();
		data3 << m_target->GetGUID();
		data3 << float( 0.213100001216 ); // maybe orientation for vehicle seat ?
		data3 << uint32( 0 );
		data3 << float( 1.86570000648 ); // maybe orientation for vehicle seat ?
		data3 << uint32( 0 );
		data3 << float( 1.86570000648 ); // some orientation or not ?
		data3 << uint32( 0 );
		data3 << uint8( 0 );
		pcaster->GetSession()->SendPacket(&data3);/**/

		//the pet spells. These should be fetched from some dbc i guess
		/*{
			if( m_target->IsCreature() )
			{
				Creature *vehicle = static_cast< Creature* >( m_target );
				if( vehicle->GetCreatureInfo() )
				{
					CreatureSpellDataEntry * SpellData = dbcCreatureSpellData.LookupEntry( vehicle->GetCreatureInfo()->SpellDataID );
					if( SpellData )
						for( uint32 i = 0; i < 3; ++i )
							if( SpellData->Spells[i] != 0 )
								AddSpell( dbcSpell.LookupEntry( SpellData->Spells[i] ), false ); //add spell to pet
				}
		}*/

		WorldPacket data4(SMSG_PET_SPELLS, 62);
		data4 << m_target->GetGUID();
		data4 << uint16(0);
		data4 << uint32(0);
		data4 << uint32(0x101);
		data4 << uint32(0x0800CC28); //cc28 = 52264 =
		data4 << uint32(0x0900CC2C);
		data4 << uint32(0x0A000000);
		data4 << uint32(0x0B000000);
		data4 << uint32(0x0C000000);
		data4 << uint32(0x0D000000);
		data4 << uint32(0x0E000000);
		data4 << uint32(0x0F000000);
		data4 << uint32(0x10000000);
		data4 << uint32(0x11000000);
		data4 << uint16(0x0);
		pcaster->GetSession()->SendPacket(&data4);
	}
	else
	{
		WorldPacket data(SMSG_CLIENT_CONTROL_UPDATE, 9);
		data << m_target->GetNewGUID();
		data << (uint8)0;
		pcaster->GetSession()->SendPacket(&data);

		pcaster->SetUInt64Value( UNIT_FIELD_CHARM, 0 );
		pcaster->SetUInt64Value( PLAYER_FARSIGHT, 0 );

		//make the sound of the vehicle. I'm sure this should be dinamic from somewhere :P
		WorldPacket data2(SMSG_PET_DISMISS_SOUND, 16);
		data2 << uint32(0x41);
		data2 << m_target->GetPosition();
		pcaster->GetSession()->SendPacket(&data2);

		pcaster->ResetVehicleSettings();

		//unroot the player
		pcaster->Unroot();

		//put him near vehicle. Or not ?

		//need to send him no more pet spells ?
		WorldPacket data3(SMSG_PET_SPELLS, 8);
		data3 << uint64(0);
		pcaster->GetSession()->SendPacket(&data3);
	}
}

void Aura::SpellAuraModCombatResultChance(bool apply)
{
	if( !m_target )
		return;

	if( apply )
	{
		switch( mod->m_miscValue )
		{
		case 1:
			//m_target->m_CombatResult_Parry += mod->m_amount; // parry?
			break;
		case 2:
			m_target->m_CombatResult_Dodge += mod->m_amount;
			break;
		}
	}
	else
	{
		switch( mod->m_miscValue )
		{
		case 1:
			//m_target->m_CombatResult_Parry += -mod->m_amount; // parry?
			break;
		case 2:
			m_target->m_CombatResult_Dodge += -mod->m_amount;
			break;
		}
	}
}

void Aura::SpellAuraConvertRune(bool apply)
{
    if( !m_target || !m_target->IsPlayer() )
        return;

    Player *plr = TO_PLAYER(m_target);

    if( plr->getClass() != DEATHKNIGHT )
        return;

    for(uint32 i = 0; i < TOTAL_USED_RUNES; ++i)
    {
        if( apply )
        {
            if( !plr->m_runetimer[i] )
            {
                plr->ConvertRune( (uint8)i, (uint8)GetSpellProto()->EffectMiscValueB[mod->i] );
                break;
            }
        }
        else
        {
            if( plr->m_runes[i] == GetSpellProto()->EffectMiscValueB[mod->i] )
            {
                plr->ConvertRune( (uint8)i, plr->GetRune(i) );
                break;
            }
        }
    }
}

void Aura::SpellAuraAddHealth(bool apply)
{
	if ( apply )
	{
		SetPositive();
		m_target->ModUnsigned32Value( UNIT_FIELD_MAXHEALTH, mod->m_amount );
		m_target->ModUnsigned32Value( UNIT_FIELD_HEALTH, mod->m_amount );
	}
	else
	{
		m_target->ModUnsigned32Value( UNIT_FIELD_MAXHEALTH, -mod->m_amount );
		uint32 maxHealth = m_target->GetUInt32Value( UNIT_FIELD_MAXHEALTH );
		if(m_target->GetUInt32Value( UNIT_FIELD_HEALTH) > maxHealth )
			m_target->SetUInt32Value( UNIT_FIELD_MAXHEALTH, maxHealth );
	}
}

void Aura::SpellAuraRemoveReagentCost(bool apply)
{
	if( !m_target->IsPlayer() )
		return;

	if ( apply )
	{
		static_cast<Player*>(m_target)->removeReagentCost = true;
	}
	else
	{
		static_cast<Player*>(m_target)->removeReagentCost = false;
	}
}
void Aura::SpellAuraBlockMultipleDamage(bool apply)
{
	if( !m_target->IsPlayer() )
		return;

	if ( apply )
	{
		static_cast<Player*>(m_target)->m_BlockModPct += mod->m_amount;
	}
	else
	{
		static_cast<Player*>(m_target)->m_BlockModPct += -mod->m_amount;
	}
}

void Aura::SpellAuraModMechanicDmgTakenPct( bool apply )
{
	if( !m_target )
		return;
	
	if( apply )
	{
		m_target->ModDamageTakenByMechPCT[mod->m_miscValue] += (float)mod->m_amount/100;
		
	}
	else
	{
		m_target->ModDamageTakenByMechPCT[mod->m_miscValue] -= (float)mod->m_amount/100;
	}
}

void Aura::SpellAuraPhase(bool apply)
{
	if ( m_target )
	{
		if ( m_target->GetAuraStackCountByType(SPELL_AURA_PHASE) > 1 )
		{
			if ( m_target->IsPlayer() )
				static_cast<Player*>(m_target)->GetSession()->SystemMessage("You can have only one phase aura!");
			Remove();
			return;
		}

		if( apply )
			m_target->Phase( PHASE_SET, m_spellProto->EffectMiscValue[mod->i] );
		else
			m_target->Phase( PHASE_RESET );

		if ( m_target->IsPlayer() )
		{
			WorldPacket data(SMSG_SET_PHASE_SHIFT, 4);
			data << uint32(m_target->m_phase);
			static_cast<Player*>(m_target)->GetSession()->SendPacket(&data);
		}
	}
}

void Aura::SpellAuraIgnoreTargetAuraState( bool apply )
{
	if( !m_target->IsPlayer() )
		return;

	if( apply )
	{
		static_cast<Player*>(m_target)->ignoreAuraStateCheck = true;
	}
	else
	{
		static_cast<Player*>(m_target)->ignoreAuraStateCheck = false;
	}
}

void Aura::SpellAuraAllowOnlyAbility(bool apply)
{
	// cannot perform any abilities (other than those in EffectMask), currently only works on players
	if ( !p_target ) 
		return;

	// Generic
	if( apply )
	{
		p_target->m_castFilterEnabled = true;
		for( uint32 x= 0; x<3; x++ )
			p_target->m_castFilter[x] |= m_spellProto->EffectSpellClassMask[mod->i][x];
	}
	else
	{
		p_target->m_castFilterEnabled = false;	// check if we can turn it off
		for( uint32 x= 0; x<3; x++ )
		{
			p_target->m_castFilter[x] &= ~m_spellProto->EffectSpellClassMask[mod->i][x];
			if(p_target->m_castFilter[x])
				p_target->m_castFilterEnabled = true;
		}
	}
}

void Aura::SpellAuraIncreaseAPbyStatPct( bool apply )
{
	if( apply )
	{
		if( mod->m_amount > 0 )
			SetPositive();
		else
			SetNegative();

		mod->fixed_amount[mod->i] = m_target->GetUInt32Value( UNIT_FIELD_STAT0 + mod->m_miscValue ) * mod->m_amount / 100;
		m_target->ModUnsigned32Value( UNIT_FIELD_ATTACK_POWER_MODS, mod->fixed_amount[mod->i] );
	}
	else
		m_target->ModUnsigned32Value( UNIT_FIELD_ATTACK_POWER_MODS, -mod->fixed_amount[mod->i] );

	m_target->CalcDamage();
}

void Aura::SpellAuraModSpellDamageFromCaster(bool apply)
{
	Unit* caster = GetUnitCaster();
	if( !m_target || !caster )
		return;

	int32 val = (apply) ? mod->m_amount : -mod->m_amount;

	if( apply )
	{
		if( m_spellProto->NameHash == SPELL_HASH_HAUNT )
			m_target->DmgIncreaseFromCasterDoT += val;
		else
			m_target->DmgIncreaseCaster = GetUnitCaster()->GetGUID();
	}
	else
	{
		if( m_spellProto->NameHash == SPELL_HASH_HAUNT )
		{
			m_target->DmgIncreaseFromCaster += val;

			SpellEntry* se = dbcSpell.LookupEntry( 48210 );
			Spell* sp = new Spell( caster, se, true, NULL );
			if( se && sp )
			{
				sp->forced_basepoints[0] = caster->m_HauntDamageDone;
				SpellCastTargets tgt( caster->GetGUID() );
				sp->prepare( &tgt );
			}

			caster->m_HauntDamageDone = 0;
		}
		else
			m_target->DmgIncreaseCaster = 0;
	}
}

void Aura::SpellAuraIgnoreShapeshift( bool apply )
{
	if(!m_target->IsPlayer())
		return;

	if( apply )
	{
		static_cast<Player*>(m_target)->ignoreShapeShiftChecks = true;
	}
	else
	{
		static_cast<Player*>(m_target)->ignoreShapeShiftChecks = false;
	}
}
void Aura::SpellAuraModDisarmRanged(bool apply)
{
	if(!m_target)
		return;

	if(apply)
	{
		//TODO
	}
	else
	{
		//TODO
	}
}

void Aura::SpellAuraModIgnoreArmorPct(bool apply)
{
	if(!m_target)
		return;

	if(apply)
	{
		if( GetSpellProto()->NameHash == SPELL_HASH_MACE_SPECIALIZATION )
		{
			m_target->m_ignoreArmorPctMaceSpec += (mod->m_amount / 100.0f);
		}
		else
			m_target->m_ignoreArmorPct += (mod->m_amount / 100.0f);
	}
	else
	{
		if( GetSpellProto()->NameHash == SPELL_HASH_MACE_SPECIALIZATION )
		{
			m_target->m_ignoreArmorPctMaceSpec -= (mod->m_amount / 100.0f);
		}
		else
			m_target->m_ignoreArmorPct -= (mod->m_amount / 100.0f);
	}
}

void Aura::SpellAuraModBaseHealth(bool apply)
{
	if( !p_target )
		return;

	if( apply )
		mod->fixed_amount[0] = p_target->GetUInt32Value(UNIT_FIELD_BASE_HEALTH);

	int32 amt = mod->fixed_amount[0] * mod->m_amount / 100;

	if( !apply )
		amt *= -1;

	p_target->SetHealthFromSpell( p_target->GetHealthFromSpell() + amt );
	p_target->UpdateStats();
}

void Aura::SpellAuraModAttackPowerOfArmor( bool apply )
{
	if(!m_target)
		return;

	/* Need more info about mods, currently it's only for armor
	uint32 modifier;
	switch( mod->m_miscValue ):
	{
	case 1: //Armor
		modifier = UNIT_FIELD_RESISTANCES;
		break;
	}
	*/
	
	if( apply )
	{
		if( mod->m_amount > 0 )
			SetPositive();
		else
			SetNegative();
		
		mod->fixed_amount[mod->i] = m_target->GetUInt32Value( UNIT_FIELD_RESISTANCES ) / mod->m_amount;
		m_target->ModUnsigned32Value( UNIT_FIELD_ATTACK_POWER_MODS, mod->fixed_amount[mod->i] );
	}
	else
		m_target->ModUnsigned32Value( UNIT_FIELD_ATTACK_POWER_MODS, -mod->fixed_amount[mod->i] );

	m_target->CalcDamage();
}

void Aura::SpellAuraAllowDotHotCrit(bool apply)
{
	if( !m_target )
		return;

	if( apply )
		m_target->allowDoTHoTCrit = true;
	else
		m_target->allowDoTHoTCrit = false;
}

void Aura::SpellAuraReflectSpellsInfront(bool apply)
{
	m_target->RemoveReflect( GetSpellId(), apply );

	if( apply )
	{
		SpellEntry *sp = dbcSpell.LookupEntry(GetSpellId());
		if (sp == NULL)
			return;

		ReflectSpellSchool *rss = new ReflectSpellSchool;
		rss->chance = mod->m_amount;
		rss->spellId = GetSpellId();
		rss->school = -1;
		rss->require_aura_hash = 0;
		rss->charges = static_cast<uint32>( -1 );
		rss->infront = true;

		m_target->m_reflectSpellSchool.push_back(rss);
	}
}

void Aura::SpellAuraModCritChanceAll(bool apply)
{
	if( !m_target || !m_target->IsPlayer() )
		return;

	if( apply )
	{
		WeaponModifier md;
		md.value = float(mod->m_amount);
		md.wclass = GetSpellProto()->EquippedItemClass;
		md.subclass = GetSpellProto()->EquippedItemSubClass;
		static_cast< Player* >( m_target )->tocritchance.insert( make_pair(GetSpellId(), md) );

		static_cast< Player* >( m_target )->SetSpellCritFromSpell( static_cast< Player* >( m_target )->GetSpellCritFromSpell() + float(mod->m_amount) );
	}
	else
	{
		static_cast< Player* >( m_target )->tocritchance.erase( GetSpellId() );
		static_cast< Player* >( m_target )->SetSpellCritFromSpell( static_cast< Player* >( m_target )->GetSpellCritFromSpell() - float(mod->m_amount) );
	}

	static_cast< Player* >( m_target )->UpdateChances();
	static_cast< Player* >( m_target )->UpdateChanceFields();
}