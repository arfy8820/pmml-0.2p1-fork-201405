/* This file is automatically generated from 'keywords' by mkkw.sh. */
/* 80: ac              */ { F_REG|F_OPD|F_C   ,    0,   R_ac, do_reg },
/* 81: add_eff_chs     */ { F_C               ,    0,      0, do_eff_chs },
/* 82: add_eff_etypes  */ { F_C               ,    0,      0, do_eff_etypes },
/* 83: all             */ { 0                 ,    0,      0, NULL },
/* 84: alt             */ { F_C               ,    0,      0, do_alt },
/* 85: append          */ { F_M               ,    0,      0, do_append },
/* 86: arbit           */ { F_C               ,    0,      0, do_excl },
/* 87: attach          */ { F_C               ,    0,      0, do_attach },
/* 88: bend            */ { F_C               ,    0,      0, do_ctrl },
/* 89: break           */ { F_M               ,    0,      0, do_break },
/* 8a: case            */ { 0                 ,    0,      0, NULL },
/* 8b: ch              */ { F_REG|F_OPD|F_C   ,    0,   R_ch, do_reg },
/* 8c: close           */ { F_C               ,    0,      0, do_close },
/* 8d: cpr             */ { F_C               ,    0,      0, do_ctrl },
/* 8e: ctrl            */ { F_C               ,    0,      0, do_ctrl },
/* 8f: ctrl_any        */ { F_C               ,    0,      0, do_ctrl_any },
/* 90: ctrl_cto        */ { F_C               ,    0,      0, do_cont_ctrl },
/* 91: ctrl_pt         */ { F_C               ,    0,      0, do_cont_ctrl },
/* 92: ctrl_to         */ { F_C               ,    0,      0, do_cont_ctrl },
/* 93: def             */ { F_M               ,    0,      0, do_def },
/* 94: default         */ { 0                 ,    0,      0, NULL },
/* 95: defeff          */ { F_C               ,    0,      0, do_defeff },
/* 96: defthread       */ { F_C               ,    0,      0, do_defthread },
/* 97: del_eff_chs     */ { F_C               ,    0,      0, do_eff_chs },
/* 98: del_eff_etypes  */ { F_C               ,    0,      0, do_eff_etypes },
/* 99: detach          */ { 0                 ,    0,      0, NULL },
/* 9a: disable         */ { F_C               ,    0,      0, do_enable },
/* 9b: do              */ { F_REG|F_OPD|F_C   ,    0,   R_do, do_reg },
/* 9c: dp              */ { F_REG|F_OPD|F_C   ,    0,   R_dp, do_reg },
/* 9d: dr              */ { F_REG|F_OPD|F_C   ,    0,   R_dp, do_reg },
/* 9e: dt              */ { F_REG|F_OPD|F_C   ,    0,   R_dt, do_reg },
/* 9f: du              */ { F_REG|F_OPD|F_C   ,    0,   R_do, do_reg },
/* a0: ecode           */ { F_M               ,    0,      0, do_ecode },
/* a1: edef            */ { F_M               ,    0,      0, do_def },
/* a2: else            */ { 0                 ,    0,      0, NULL },
/* a3: elsif           */ { 0                 ,    0,      0, NULL },
/* a4: enable          */ { F_C               ,    0,      0, do_enable },
/* a5: end             */ { F_C               ,    0,      0, do_end },
/* a6: eval            */ { F_EV              ,    0,      0, do_eval },
/* a7: evalstr         */ { F_EV              ,    0,      0, do_evalstr },
/* a8: excl            */ { F_C               ,    0,      0, do_excl },
/* a9: excl2           */ { F_C               ,    0,      0, do_excl },
/* aa: for             */ { F_M               ,    0,      0, do_for },
/* ab: foreach         */ { F_M               ,    0,      0, do_foreach },
/* ac: if              */ { F_M               ,    0,      0, do_if },
/* ad: include         */ { F_M               ,    0,      0, do_include },
/* ae: init            */ { 0                 ,    0,      0, NULL },
/* af: insert          */ { F_M               ,    0,      0, do_insert },
/* b0: key             */ { F_REG|F_OPD|F_C   ,    0,  R_key, do_reg },
/* b1: keysig          */ { F_C               ,    0,      0, do_keysig },
/* b2: kp              */ { F_C               ,    0,      0, do_ctrl },
/* b3: l               */ { F_REG|F_OPD|F_C   ,    0,    R_l, do_reg },
/* b4: load            */ { F_C               ,    0,      0, do_load },
/* b5: loadtrk         */ { F_C               ,    0,      0, do_load },
/* b6: local           */ { F_M               ,    0,      0, identifier },
/* b7: meta            */ { F_C               ,    0,      0, do_meta },
/* b8: n               */ { F_REG|F_OPD|F_C   ,    0,    R_n, do_reg },
/* b9: note            */ { F_C               ,    0,      0, do_pitch },
/* ba: note_off        */ { F_C               ,    0,      0, do_note_off },
/* bb: note_on         */ { F_C               ,    0,      0, do_note_on },
/* bc: null            */ { F_M               ,    0,      0, do_null },
/* bd: nv              */ { F_REG|F_OPD|F_C   ,    0,   R_nv, do_reg },
/* be: o               */ { F_REG|F_OPD|F_C   ,    0,    R_o, do_reg },
/* bf: prog            */ { F_C               ,    0,      0, do_ctrl },
/* c0: reject          */ { 0                 ,    0,      0, NULL },
/* c1: repeat          */ { F_M               ,    0,      0, do_repeat },
/* c2: rt              */ { F_REG|F_OPD|F_C   ,    0,    R_t, do_reg },
/* c3: seqno           */ { F_C               ,    0,      0, do_seqno },
/* c4: set_eff_chs     */ { F_C               ,    0,      0, do_eff_chs },
/* c5: set_eff_etypes  */ { F_C               ,    0,      0, do_eff_etypes },
/* c6: set_thru_chs    */ { F_C               ,    0,      0, do_eff_chs },
/* c7: set_thru_etypes */ { F_C               ,    0,      0, do_eff_etypes },
/* c8: sh              */ { F_REG|F_OPD|F_C   ,    0,   R_sh, do_reg },
/* c9: shift           */ { F_M               ,    0,      0, do_shift },
/* ca: shl             */ { F_B|F_HAVEEQ|F_PU ,    9, T_SHLEQ, op_shl },
/* cb: shr             */ { F_B|F_HAVEEQ|F_PU ,    9, T_SHREQ, op_shr },
/* cc: signal          */ { F_C               ,    0,      0, do_signal },
/* cd: smpte           */ { F_C               ,    0,      0, do_smpte },
/* ce: switch          */ { F_M               ,    0,      0, do_switch },
/* cf: t               */ { F_REG|F_OPD|F_C   ,    0,    R_t, do_reg },
/* d0: tb              */ { F_REG|F_OPD|F_C   ,    0,   R_tb, do_reg },
/* d1: tempo           */ { F_C               ,    0,      0, do_ctrl },
/* d2: text            */ { F_C               ,    0,      0, do_text },
/* d3: timesig         */ { F_C               ,    0,      0, do_timesig },
/* d4: tk              */ { F_REG|F_OPD|F_C   ,    0,   R_tk, do_reg },
/* d5: tp              */ { F_REG|F_OPD|F_C   ,    0,   R_tp, do_reg },
/* d6: undef           */ { F_M               ,    0,      0, do_undef },
/* d7: v               */ { F_REG|F_OPD|F_C   ,    0,    R_v, do_reg },
/* d8: wait            */ { F_C               ,    0,      0, do_wait },
/* d9: while           */ { F_M               ,    0,      0, do_while },
/* da: wrap            */ { 0                 ,    0,      0, NULL },
/* db: xor             */ { F_B|F_HAVEEQ|F_PU ,    5, T_XOREQ, op_xor },
