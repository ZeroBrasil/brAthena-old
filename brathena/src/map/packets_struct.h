/****************************************************************************!
*                _           _   _   _                                       *
*               | |__  _ __ / \ | |_| |__   ___ _ __   __ _                  *
*               | '_ \| '__/ _ \| __| '_ \ / _ \ '_ \ / _` |                 *
*               | |_) | | / ___ \ |_| | | |  __/ | | | (_| |                 *
*               |_.__/|_|/_/   \_\__|_| |_|\___|_| |_|\__,_|                 *
*                                                                            *
*                                                                            *
* \file src/map/packets_struct.h                                             *
* Descri��o Prim�ria.                                                        *
* Descri��o mais elaborada sobre o arquivo.                                  *
* \author brAthena, Athena, eAthena                                          *
* \date ?                                                                    *
* \todo ?                                                                    *
*****************************************************************************/

#ifndef _PACKETS_STRUCT_H_
#define _PACKETS_STRUCT_H_

#include "../common/mmo.h"

/**
 *
 **/
enum packet_headers {
	banking_withdraw_ackType = 0x9aa,
	banking_deposit_ackType = 0x9a8,
	banking_checkType = 0x9a6,
	cart_additem_ackType = 0x12c,
	sc_notickType = 0x196,
#if PACKETVER < 20061218
	additemType = 0xa0,
#elif PACKETVER < 20071002
	additemType = 0x29a,
#elif PACKETVER < 20120925
	additemType = 0x2d4,
#else
	additemType = 0x990,
#endif
#if PACKETVER < 4
	idle_unitType = 0x78,
#elif PACKETVER < 7
	idle_unitType = 0x1d8,
#elif PACKETVER < 20080102
	idle_unitType = 0x22a,
#elif PACKETVER < 20091103
	idle_unitType = 0x2ee,
#elif PACKETVER < 20101124
	idle_unitType = 0x7f9,
#elif PACKETVER < 20140000 //atual 20120221
	idle_unitType = 0x857,
#else
	idle_unitType = 0x915,
#endif
#if PACKETVER >= 20120618
	status_changeType = 0x983,
#elif PACKETVER >= 20090121
	status_changeType = 0x43f,
#else
	status_changeType = sc_notickType,/* 0x196 */
#endif
	status_change2Type = 0x43f,
	status_change_endType = 0x196,
#if PACKETVER < 20091103
	spawn_unit2Type = 0x7c,
	idle_unit2Type = 0x78,
#endif
#if PACKETVER < 4
	spawn_unitType = 0x79,
#elif PACKETVER < 7
	spawn_unitType = 0x1d9,
#elif PACKETVER < 20080102
	spawn_unitType = 0x22b,
#elif PACKETVER < 20091103
	spawn_unitType = 0x2ed,
#elif PACKETVER < 20101124
	spawn_unitType = 0x7f8,
#elif PACKETVER < 20140000 //atual 20120221
	spawn_unitType = 0x858,
#else
	spawn_unitType = 0x90f,
#endif
#if PACKETVER < 20080102
	authokType = 0x73,
#else
	authokType = 0x2eb,
#endif
	script_clearType = 0x8d6,
	package_item_announceType = 0x7fd,
#if PACKETVER < 4
	unit_walkingType = 0x7b,
#elif PACKETVER < 7
	unit_walkingType = 0x1da,
#elif PACKETVER < 20080102
	unit_walkingType = 0x22c,
#elif PACKETVER < 20091103
	unit_walkingType = 0x2ec,
#elif PACKETVER < 20101124
	unit_walkingType = 0x7f7,
#elif PACKETVER < 20140000 //atual 20120221
	unit_walkingType = 0x856,
#else
	unit_walkingType = 0x914,
#endif
	bgqueue_ackType = 0x8d8,
	bgqueue_notice_deleteType = 0x8db,
	bgqueue_registerType = 0x8d7,
	bgqueue_updateinfoType = 0x8d9,
	bgqueue_checkstateType = 0x90a,
	bgqueue_revokereqType = 0x8da,
	bgqueue_battlebeginackType = 0x8e0,
	bgqueue_notify_entryType = 0x8d9,
	bgqueue_battlebegins = 0x8df,
#if PACKETVER > 20130000 /* data desconhecida */
	dropflooritemType = 0x84b,
#else
	dropflooritemType = 0x9e,
#endif
#if PACKETVER >= 20120925
	inventorylistnormalType = 0x991,
#elif PACKETVER >= 20080102
	inventorylistnormalType = 0x2e8,
#elif PACKETVER >= 20071002
	inventorylistnormalType = 0x1ee,
#else
	inventorylistnormalType = 0xa3,
#endif
#if PACKETVER >= 20120925
	inventorylistequipType = 0x992,
#elif PACKETVER >= 20080102
	inventorylistequipType = 0x2d0,
#elif PACKETVER >= 20071002
	inventorylistequipType = 0x295,
#else
	inventorylistequipType = 0xa4,
#endif
#if PACKETVER >= 20120925
	storagelistnormalType = 0x995,
#elif PACKETVER >= 20080102
	storagelistnormalType = 0x2ea,
#elif PACKETVER >= 20071002
	storagelistnormalType = 0x295,
#else
	storagelistnormalType = 0xa5,
#endif
#if PACKETVER >= 20120925
	storagelistequipType = 0x996,
#elif PACKETVER >= 20080102
	storagelistequipType = 0x2d1,
#elif PACKETVER >= 20071002
	storagelistequipType = 0x296,
#else
	storagelistequipType = 0xa6,
#endif
#if PACKETVER >= 20120925
	cartlistnormalType = 0x993,
#elif PACKETVER >= 20080102
	cartlistnormalType = 0x2e9,
#elif PACKETVER >= 20071002
	cartlistnormalType = 0x1ef,
#else
	cartlistnormalType = 0x123,
#endif
#if PACKETVER >= 20120925
	cartlistequipType = 0x994,
#elif PACKETVER >= 20080102
	cartlistequipType = 0x2d2,
#elif PACKETVER >= 20071002
	cartlistequipType = 0x297,
#else
	cartlistequipType = 0x122,
#endif
#if PACKETVER >= 20120925
	equipitemType = 0x998,
#else
	equipitemType = 0xa9,
#endif
#if PACKETVER >= 20120925
	equipitemackType = 0x999,
#else
	equipitemackType = 0xaa,
#endif
#if PACKETVER >= 20120925
	unequipitemackType = 0x99a,
#else
	unequipitemackType = 0xac,
#endif
#if PACKETVER >= 20120925
	viewequipackType = 0x997,
#elif PACKETVER >= 20101124
	viewequipackType = 0x859,
#else
	viewequipackType = 0x2d7,
#endif
	monsterhpType = 0x977,
	maptypeproperty2Type = 0x99b,
};

#pragma pack(push, 1)

/**
 * structs for data
 */
struct EQUIPSLOTINFO {
	unsigned short card[4];
} __attribute__((packed));

struct NORMALITEM_INFO {
	short index;
	unsigned short ITID;
	unsigned char type;
#if PACKETVER < 20120925
	uint8 IsIdentified;
#endif
	short count;
#if PACKETVER >= 20120925
	unsigned int WearState;
#else
	unsigned short WearState;
#endif
#if PACKETVER >= 5
	struct EQUIPSLOTINFO slot;
#endif
#if PACKETVER >= 20080102
	int HireExpireDate;
#endif
#if PACKETVER >= 20120925
	struct {
		unsigned int IsIdentified : 1;
		unsigned int PlaceETCTab : 1;
		unsigned int SpareBits : 6;
	} Flag;
#endif
} __attribute__((packed));

struct EQUIPITEM_INFO {
	short index;
	unsigned short ITID;
	unsigned char type;
#if PACKETVER < 20120925
	uint8 IsIdentified;
#endif
#if PACKETVER >= 20120925
	unsigned int location;
	unsigned int WearState;
#else
	unsigned short location;
	unsigned short WearState;
#endif
#if PACKETVER < 20120925
	uint8 IsDamaged;
#endif
	unsigned char RefiningLevel;
	struct EQUIPSLOTINFO slot;
#if PACKETVER >= 20071002
	int HireExpireDate;
#endif
#if PACKETVER >= 20080102
    unsigned short bindOnEquipType;
#endif
#if PACKETVER >= 20100629
    unsigned short wItemSpriteNumber;
#endif
#if PACKETVER >= 20120925
	struct {
		unsigned int IsIdentified : 1;
		unsigned int IsDamaged : 1;
		unsigned int PlaceETCTab : 1;
		unsigned int SpareBits : 5;
	} Flag;
#endif
} __attribute__((packed));

struct packet_authok {
	short PacketType;
	unsigned int startTime;
	unsigned char PosDir[3];
	unsigned char xSize;
	unsigned char ySize;
#if PACKETVER >= 20080102
	short font;
#endif
} __attribute__((packed));

struct packet_monster_hp {
	short PacketType;
	unsigned int GID;
	int HP;
	int MaxHP;
} __attribute__((packed));

struct packet_sc_notick {
	short PacketType;
	short index;
	unsigned int AID;
	unsigned char state;
} __attribute__((packed));

struct packet_additem {
	short PacketType;
	unsigned short Index;
	unsigned short count;
	unsigned short nameid;
	uint8 IsIdentified;
	uint8 IsDamaged;
	unsigned char refiningLevel;
	struct EQUIPSLOTINFO slot;
#if PACKETVER >= 20120925
	unsigned int location;
#else
	unsigned short location;
#endif
	unsigned char type;
	unsigned char result;
#if PACKETVER >= 20061218
	int HireExpireDate;
#endif
#if PACKETVER >= 20071002
	unsigned short bindOnEquipType;
#endif
} __attribute__((packed));

struct packet_dropflooritem {
	short PacketType;
	unsigned int ITAID;
	unsigned short ITID;
#if PACKETVER >= 20130000 /* data desconhecida */
	unsigned short type;
#endif
	uint8 IsIdentified;
	short xPos;
	short yPos;
	unsigned char subX;
	unsigned char subY;
	short count;
} __attribute__((packed));
#if PACKETVER < 20091103
struct packet_idle_unit2 {
	short PacketType;
#if PACKETVER >= 20071106
	unsigned char objecttype;
#endif
	unsigned int GID;
	short speed;
	short bodyState;
	short healthState;
	short effectState;
	short job;
	short head;
	short weapon;
	short accessory;
	short shield;
	short accessory2;
	short accessory3;
	short headpalette;
	short bodypalette;
	short headDir;
	unsigned int GUID;
	short GEmblemVer;
	short honor;
	short virtue;
	uint8 isPKModeON;
	unsigned char sex;
	unsigned char PosDir[3];
	unsigned char xSize;
	unsigned char ySize;
	unsigned char state;
	short clevel;
} __attribute__((packed));
struct packet_spawn_unit2 {
	short PacketType;
#if PACKETVER >= 20071106
	unsigned char objecttype;
#endif
	unsigned int GID;
	short speed;
	short bodyState;
	short healthState;
	short effectState;
	short head;
	short weapon;
	short accessory;
	short job;
	short shield;
	short accessory2;
	short accessory3;
	short headpalette;
	short bodypalette;
	short headDir;
	uint8 isPKModeON;
	unsigned char sex;
	unsigned char PosDir[3];
	unsigned char xSize;
	unsigned char ySize;
} __attribute__((packed));
#endif
struct packet_spawn_unit {
	short PacketType;
#if PACKETVER >= 20091103
	short PacketLength;
	unsigned char objecttype;
#endif
	unsigned int GID;
	short speed;
	short bodyState;
	short healthState;
#if PACKETVER < 20080102
	short effectState;
#else
	int effectState;
#endif
	short job;
	short head;
#if PACKETVER < 7
	short weapon;
#else
	int weapon;
#endif
	short accessory;
#if PACKETVER < 7
	short shield;
#endif
	short accessory2;
	short accessory3;
	short headpalette;
	short bodypalette;
	short headDir;
#if PACKETVER >= 20101124
	short robe;
#endif
	unsigned int GUID;
	short GEmblemVer;
	short honor;
#if PACKETVER > 7
	int virtue;
#else
	short virtue;
#endif
	uint8 isPKModeON;
	unsigned char sex;
	unsigned char PosDir[3];
	unsigned char xSize;
	unsigned char ySize;
	short clevel;
#if PACKETVER >= 20080102
	short font;
#endif
#if PACKETVER >= 20140000 //atual 20120221
	int maxHP;
	int HP;
	unsigned char isBoss;
#endif
} __attribute__((packed));

struct packet_unit_walking {
	short PacketType;
#if PACKETVER >= 20091103
	short PacketLength;
#endif
#if PACKETVER > 20071106
	unsigned char objecttype;
#endif
	unsigned int GID;
	short speed;
	short bodyState;
	short healthState;
#if PACKETVER < 7
	short effectState;
#else
	int effectState;
#endif
	short job;
	short head;
#if PACKETVER < 7
	short weapon;
#else
	int weapon;
#endif
	short accessory;
	unsigned int moveStartTime;
#if PACKETVER < 7
	short shield;
#endif
	short accessory2;
	short accessory3;
	short headpalette;
	short bodypalette;
	short headDir;
#if PACKETVER >= 20101124
	short robe;
#endif
	unsigned int GUID;
	short GEmblemVer;
	short honor;
#if PACKETVER > 7
	int virtue;
#else
	short virtue;
#endif
	uint8 isPKModeON;
	unsigned char sex;
	unsigned char MoveData[6];
	unsigned char xSize;
	unsigned char ySize;
	short clevel;
#if PACKETVER >= 20080102
	short font;
#endif
#if PACKETVER >= 20140000 //atual 20120221
	int maxHP;
	int HP;
	unsigned char isBoss;
#endif
} __attribute__((packed));

struct packet_idle_unit {
	short PacketType;
#if PACKETVER >= 20091103
	short PacketLength;
	unsigned char objecttype;
#endif
	unsigned int GID;
	short speed;
	short bodyState;
	short healthState;
#if PACKETVER < 20080102
	short effectState;
#else
	int effectState;
#endif
	short job;
	short head;
#if PACKETVER < 7
	short weapon;
#else
	int weapon;
#endif
	short accessory;
#if PACKETVER < 7
	short shield;
#endif
	short accessory2;
	short accessory3;
	short headpalette;
	short bodypalette;
	short headDir;
#if PACKETVER >= 20101124
	short robe;
#endif
	unsigned int GUID;
	short GEmblemVer;
	short honor;
#if PACKETVER > 7
	int virtue;
#else
	short virtue;
#endif
	uint8 isPKModeON;
	unsigned char sex;
	unsigned char PosDir[3];
	unsigned char xSize;
	unsigned char ySize;
	unsigned char state;
	short clevel;
#if PACKETVER >= 20080102
	short font;
#endif
#if PACKETVER >= 20140000 //atual 20120221
	int maxHP;
	int HP;
	unsigned char isBoss;
#endif
} __attribute__((packed));

struct packet_status_change {
	short PacketType;
	short index;
	unsigned int AID;
	unsigned char state;
#if PACKETVER >= 20120618
	unsigned int Total;
#endif
#if PACKETVER >= 20090121	
	unsigned int Left;
	int val1;
	int val2;
	int val3;
#endif
} __attribute__((packed));

struct packet_status_change_end {
	short PacketType;
	short index;
	unsigned int AID;
	unsigned char state;
} __attribute__((packed));

struct packet_status_change2 {
	short PacketType;
	short index;
	unsigned int AID;
	unsigned char state;
	unsigned int Left;
	int val1;
	int val2;
	int val3;
} __attribute__((packed));

struct packet_maptypeproperty2 {
	short PacketType;
	short type;
	struct {
		unsigned int party             : 1;  /// Exibe cursor de ataque para membros que n�o s�o do grupo em (PvP)
		unsigned int guild             : 1;  /// Exibe cursor de ataque para membros que n�o s�o do cl� em (GvG)
		unsigned int siege             : 1;  /// Exibe emblema sobre a cabe�a dos personagens quando em GvG (Castelo de WoE)
		unsigned int mineffect         : 1;  /// Habilitar automaticamente /mineffect
		unsigned int nolockon          : 1;  /// Exibe o cursor de ataque para membros sem partido
		unsigned int countpk           : 1;  /// Exibe o contador de PvP
		unsigned int nopartyformation  : 1;  /// Impede a cria��o/modifica��o do grupo
		unsigned int bg                : 1;  /// Exibe cursor de ataque para membros que n�o s�o do grupo da (BG)
		unsigned int noitemconsumption : 1;  /// Exibe uma mensagem "Nada encontrado no mapa selecionado" quando definida
		unsigned int usecart           : 1;  /// Permitir abrir ou bloqueia o invent�rio do carrinho
		unsigned int summonstarmiracle : 1;  /// Permitir ou bloquear que Milagre do Mestre Taekwon
		unsigned int SpareBits         : 15; /// Ignorado, reservado para futuras atualiza��es
	} flag;
} __attribute__((packed));

struct packet_bgqueue_ack {
	short PacketType;
	unsigned char type;
	char bg_name[NAME_LENGTH];
} __attribute__((packed));

struct packet_bgqueue_notice_delete {
	short PacketType;
	unsigned char type;
	char bg_name[NAME_LENGTH];
} __attribute__((packed));

struct packet_bgqueue_register {
	short PacketType;
	short type;
	char bg_name[NAME_LENGTH];
} __attribute__((packed));

struct packet_bgqueue_update_info {
	short PacketType;
	char bg_name[NAME_LENGTH];
	int	position;
} __attribute__((packed));

struct packet_bgqueue_checkstate {
	short PacketType;
	char bg_name[NAME_LENGTH];
} __attribute__((packed));

struct packet_bgqueue_revoke_req {
	short PacketType;
	char bg_name[NAME_LENGTH];
} __attribute__((packed));

struct packet_bgqueue_battlebegin_ack {
	short PacketType;
	unsigned char result;
	char bg_name[NAME_LENGTH];
	char game_name[NAME_LENGTH];
} __attribute__((packed));

struct packet_bgqueue_notify_entry {
	short PacketType;
	char name[NAME_LENGTH];
	int position;
} __attribute__((packed));

struct packet_bgqueue_battlebegins {
	short PacketType;
	char bg_name[NAME_LENGTH];
	char game_name[NAME_LENGTH];
} __attribute__((packed));

struct packet_script_clear {
	short PacketType;
	unsigned int NpcID;
} __attribute__((packed));
struct packet_package_item_announce {
	short PacketType;
	short PacketLength;
	unsigned char type;
	unsigned short ItemID;
	char len;
	char Name[NAME_LENGTH];
	char unknown;
	unsigned short BoxItemID;
} __attribute__((packed));

struct packet_cart_additem_ack {
	short PacketType;
	char result;
} __attribute__((packed));

struct packet_banking_check {
	short PacketType;
	int64 Money;
	short Reason;
} __attribute__((packed));

struct packet_banking_deposit_req {
	short PacketType;
	unsigned int AID;
	int Money;
} __attribute__((packed));

struct packet_banking_withdraw_req {
	short PacketType;
	unsigned int AID;
	int Money;
} __attribute__((packed));

struct packet_banking_deposit_ack {
	short PacketType;
	short Reason;
	int64 Money;
	int Balance;
} __attribute__((packed));

struct packet_banking_withdraw_ack {
	short PacketType;
	short Reason;
	int64 Money;
	int Balance;
} __attribute__((packed));

struct packet_itemlist_normal {
	short PacketType;
	short PacketLength;
	struct NORMALITEM_INFO list[MAX_ITEMLIST];
} __attribute__((packed));

struct packet_itemlist_equip {
	short PacketType;
	short PacketLength;
	struct EQUIPITEM_INFO list[MAX_ITEMLIST];
} __attribute__((packed));

struct packet_storelist_normal {
	short PacketType;
	short PacketLength;
#if PACKETVER >= 20120925
	char name[NAME_LENGTH];
#endif
	struct NORMALITEM_INFO list[MAX_ITEMLIST];
} __attribute__((packed));

struct packet_storelist_equip {
	short PacketType;
	short PacketLength;
#if PACKETVER >= 20120925
	char name[NAME_LENGTH];
#endif
	struct EQUIPITEM_INFO list[MAX_ITEMLIST];
} __attribute__((packed));

struct packet_equip_item {
	short PacketType;
	unsigned short index;
#if PACKETVER >= 20120925
	unsigned int wearLocation;
#else
	unsigned short wearLocation;
#endif
} __attribute__((packed));

struct packet_equipitem_ack {
	short PacketType;
	unsigned short index;
#if PACKETVER >= 20120925
	unsigned int wearLocation;
#else
	unsigned short wearLocation;
#endif
#if PACKETVER >= 20100629
	unsigned short wItemSpriteNumber;
#endif
	unsigned char result;
} __attribute__((packed));

struct packet_unequipitem_ack {
	short PacketType;
	unsigned short index;
#if PACKETVER >= 20120925
	unsigned int wearLocation;
#else
	unsigned short wearLocation;
#endif
	unsigned char result;
} __attribute__((packed));

struct packet_viewequip_ack {
	short PacketType;
	short PacketLength;
	char characterName[NAME_LENGTH];
	short job;
	short head;
	short accessory;
	short accessory2;
	short accessory3;
#if PACKETVER >= 20101124
	short robe;
#endif
	short headpalette;
	short bodypalette;
	unsigned char sex;
	struct EQUIPITEM_INFO list[MAX_INVENTORY];
} __attribute__((packed));


#pragma pack(pop)

#endif /* _PACKETS_STRUCT_H_ */
