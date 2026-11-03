// teleport_player console command (0x101803a0), a free __cdecl function with no arguments.
// Reads the engine command line through 0x1070b22c slots 84 (Cmd_Argv, +0x150) / 85 (Cmd_Argc, +0x154):
// argc == 2 -> find the entity named argv[1] (sub_100f7770) and teleport the client to its origin;
// argc == 7 -> parse argv[1..3] as the destination (atof), argv[4..6] as the target vector (only the first is kept
// as the y? see the note) and place the player; argc >= 4 -> parse argv[1..3] and only move the player;
// otherwise print the usage lines. The command client comes from sub_101193b0() (a CBasePlayer*; its destination
// vector is m_vec206c +0x206c, CBasePlayer.h). See the release note for the exact offsets.
#pragma once

class CBasePlayer;

void sub_101803a0();
