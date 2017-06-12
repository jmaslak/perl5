/* -*- buffer-read-only: t -*-
 *
 *    embedvar.h
 *
 *    Copyright (C) 1993, 1994, 1995, 1996, 1997, 1998, 1999, 2000, 2001,
 *    2002, 2003, 2004, 2005, 2006, 2007, 2008, 2009 by Larry Wall and others
 *
 *    You may distribute under the terms of either the GNU General Public
 *    License or the Artistic License, as specified in the README file.
 *
 * !!!!!!!   DO NOT EDIT THIS FILE   !!!!!!!
 * This file is built by regen/embed.pl from data in embed.fnc,
 * regen/embed.pl, regen/opcodes, intrpvar.h and perlvars.h.
 * Any changes made here will be lost!
 *
 * Edit those files and run 'make regen_headers' to effect changes.
 */

/* (Doing namespace management portably in C is really gross.) */

/*
   The following combinations of MULTIPLICITY and PERL_IMPLICIT_CONTEXT
   are supported:
     1) none
     2) MULTIPLICITY	# supported for compatibility
     3) MULTIPLICITY && PERL_IMPLICIT_CONTEXT

   All other combinations of these flags are errors.

   only #3 is supported directly, while #2 is a special
   case of #3 (supported by redefining vTHX appropriately).
*/

#if defined(MULTIPLICITY)
/* cases 2 and 3 above */

#  if defined(PERL_IMPLICIT_CONTEXT)
#    define vTHX	aTHX
#  else
#    define vTHX	PERL_GET_INTERP
#  endif

#define PL_AboveLatin1		(vTHX->IAboveLatin1)
#define PL_Argv			(vTHX->IArgv)
#define PL_Assigned_invlist	(vTHX->IAssigned_invlist)
#define PL_Cmd			(vTHX->ICmd)
#define PL_DBcontrol		(vTHX->IDBcontrol)
#define PL_DBcv			(vTHX->IDBcv)
#define PL_DBgv			(vTHX->IDBgv)
#define PL_DBline		(vTHX->IDBline)
#define PL_DBsignal		(vTHX->IDBsignal)
#define PL_DBsingle		(vTHX->IDBsingle)
#define PL_DBsub		(vTHX->IDBsub)
#define PL_DBtrace		(vTHX->IDBtrace)
#define PL_Dir			(vTHX->IDir)
#define PL_Env			(vTHX->IEnv)
#define PL_GCB_invlist		(vTHX->IGCB_invlist)
#define PL_HasMultiCharFold	(vTHX->IHasMultiCharFold)
#define PL_InBitmap		(vTHX->IInBitmap)
#define PL_LB_invlist		(vTHX->ILB_invlist)
#define PL_LIO			(vTHX->ILIO)
#define PL_Latin1		(vTHX->ILatin1)
#define PL_Mem			(vTHX->IMem)
#define PL_MemParse		(vTHX->IMemParse)
#define PL_MemShared		(vTHX->IMemShared)
#define PL_NonL1NonFinalFold	(vTHX->INonL1NonFinalFold)
#define PL_Posix_ptrs		(vTHX->IPosix_ptrs)
#define PL_Proc			(vTHX->IProc)
#define PL_SB_invlist		(vTHX->ISB_invlist)
#define PL_Sock			(vTHX->ISock)
#define PL_StdIO		(vTHX->IStdIO)
#define PL_Sv			(vTHX->ISv)
#define PL_UpperLatin1		(vTHX->IUpperLatin1)
#define PL_WB_invlist		(vTHX->IWB_invlist)
#define PL_XPosix_ptrs		(vTHX->IXPosix_ptrs)
#define PL_Xpv			(vTHX->IXpv)
#define PL_an			(vTHX->Ian)
#define PL_argvgv		(vTHX->Iargvgv)
#define PL_argvout_stack	(vTHX->Iargvout_stack)
#define PL_argvoutgv		(vTHX->Iargvoutgv)
#define PL_basetime		(vTHX->Ibasetime)
#define PL_beginav		(vTHX->Ibeginav)
#define PL_beginav_save		(vTHX->Ibeginav_save)
#define PL_blockhooks		(vTHX->Iblockhooks)
#define PL_body_arenas		(vTHX->Ibody_arenas)
#define PL_body_roots		(vTHX->Ibody_roots)
#define PL_bodytarget		(vTHX->Ibodytarget)
#define PL_breakable_sub_gen	(vTHX->Ibreakable_sub_gen)
#define PL_checkav		(vTHX->Icheckav)
#define PL_checkav_save		(vTHX->Icheckav_save)
#define PL_chopset		(vTHX->Ichopset)
#define PL_clocktick		(vTHX->Iclocktick)
#define PL_collation_ix		(vTHX->Icollation_ix)
#define PL_collation_name	(vTHX->Icollation_name)
#define PL_collation_standard	(vTHX->Icollation_standard)
#define PL_collxfrm_base	(vTHX->Icollxfrm_base)
#define PL_collxfrm_mult	(vTHX->Icollxfrm_mult)
#define PL_colors		(vTHX->Icolors)
#define PL_colorset		(vTHX->Icolorset)
#define PL_compcv		(vTHX->Icompcv)
#define PL_compiling		(vTHX->Icompiling)
#define PL_comppad		(vTHX->Icomppad)
#define PL_comppad_name		(vTHX->Icomppad_name)
#define PL_comppad_name_fill	(vTHX->Icomppad_name_fill)
#define PL_comppad_name_floor	(vTHX->Icomppad_name_floor)
#define PL_constpadix		(vTHX->Iconstpadix)
#define PL_cop_seqmax		(vTHX->Icop_seqmax)
#define PL_cryptseen		(vTHX->Icryptseen)
#define PL_curcop		(vTHX->Icurcop)
#define PL_curcopdb		(vTHX->Icurcopdb)
#define PL_curpad		(vTHX->Icurpad)
#define PL_curpm		(vTHX->Icurpm)
#define PL_curpm_under		(vTHX->Icurpm_under)
#define PL_curstack		(vTHX->Icurstack)
#define PL_curstackinfo		(vTHX->Icurstackinfo)
#define PL_curstash		(vTHX->Icurstash)
#define PL_curstname		(vTHX->Icurstname)
#define PL_custom_op_descs	(vTHX->Icustom_op_descs)
#define PL_custom_op_names	(vTHX->Icustom_op_names)
#define PL_custom_ops		(vTHX->Icustom_ops)
#define PL_cv_has_eval		(vTHX->Icv_has_eval)
#define PL_dbargs		(vTHX->Idbargs)
#define PL_debstash		(vTHX->Idebstash)
#define PL_debug		(vTHX->Idebug)
#define PL_debug_pad		(vTHX->Idebug_pad)
#define PL_def_layerlist	(vTHX->Idef_layerlist)
#define PL_defgv		(vTHX->Idefgv)
#define PL_defoutgv		(vTHX->Idefoutgv)
#define PL_defstash		(vTHX->Idefstash)
#define PL_delaymagic		(vTHX->Idelaymagic)
#define PL_delaymagic_egid	(vTHX->Idelaymagic_egid)
#define PL_delaymagic_euid	(vTHX->Idelaymagic_euid)
#define PL_delaymagic_gid	(vTHX->Idelaymagic_gid)
#define PL_delaymagic_uid	(vTHX->Idelaymagic_uid)
#define PL_destroyhook		(vTHX->Idestroyhook)
#define PL_diehook		(vTHX->Idiehook)
#define PL_doswitches		(vTHX->Idoswitches)
#define PL_dowarn		(vTHX->Idowarn)
#define PL_dump_re_max_len	(vTHX->Idump_re_max_len)
#define PL_dumper_fd		(vTHX->Idumper_fd)
#define PL_dumpindent		(vTHX->Idumpindent)
#define PL_e_script		(vTHX->Ie_script)
#define PL_efloatbuf		(vTHX->Iefloatbuf)
#define PL_efloatsize		(vTHX->Iefloatsize)
#define PL_endav		(vTHX->Iendav)
#define PL_envgv		(vTHX->Ienvgv)
#define PL_errgv		(vTHX->Ierrgv)
#define PL_errors		(vTHX->Ierrors)
#define PL_eval_root		(vTHX->Ieval_root)
#define PL_eval_start		(vTHX->Ieval_start)
#define PL_evalseq		(vTHX->Ievalseq)
#define PL_exit_flags		(vTHX->Iexit_flags)
#define PL_exitlist		(vTHX->Iexitlist)
#define PL_exitlistlen		(vTHX->Iexitlistlen)
#define PL_fdpid		(vTHX->Ifdpid)
#define PL_filemode		(vTHX->Ifilemode)
#define PL_firstgv		(vTHX->Ifirstgv)
#define PL_forkprocess		(vTHX->Iforkprocess)
#define PL_formtarget		(vTHX->Iformtarget)
#define PL_generation		(vTHX->Igeneration)
#define PL_gensym		(vTHX->Igensym)
#define PL_globalstash		(vTHX->Iglobalstash)
#define PL_globhook		(vTHX->Iglobhook)
#define PL_hash_rand_bits	(vTHX->Ihash_rand_bits)
#define PL_hash_rand_bits_enabled	(vTHX->Ihash_rand_bits_enabled)
#define PL_hintgv		(vTHX->Ihintgv)
#define PL_hv_fetch_ent_mh	(vTHX->Ihv_fetch_ent_mh)
#define PL_in_clean_all		(vTHX->Iin_clean_all)
#define PL_in_clean_objs	(vTHX->Iin_clean_objs)
#define PL_in_eval		(vTHX->Iin_eval)
#define PL_in_load_module	(vTHX->Iin_load_module)
#define PL_in_utf8_COLLATE_locale	(vTHX->Iin_utf8_COLLATE_locale)
#define PL_in_utf8_CTYPE_locale	(vTHX->Iin_utf8_CTYPE_locale)
#define PL_incgv		(vTHX->Iincgv)
#define PL_initav		(vTHX->Iinitav)
#define PL_inplace		(vTHX->Iinplace)
#define PL_internal_random_state	(vTHX->Iinternal_random_state)
#define PL_isarev		(vTHX->Iisarev)
#define PL_known_layers		(vTHX->Iknown_layers)
#define PL_langinfo_buf		(vTHX->Ilanginfo_buf)
#define PL_langinfo_bufsize	(vTHX->Ilanginfo_bufsize)
#define PL_last_in_gv		(vTHX->Ilast_in_gv)
#define PL_last_swash_hv	(vTHX->Ilast_swash_hv)
#define PL_last_swash_key	(vTHX->Ilast_swash_key)
#define PL_last_swash_klen	(vTHX->Ilast_swash_klen)
#define PL_last_swash_slen	(vTHX->Ilast_swash_slen)
#define PL_last_swash_tmps	(vTHX->Ilast_swash_tmps)
#define PL_lastfd		(vTHX->Ilastfd)
#define PL_lastgotoprobe	(vTHX->Ilastgotoprobe)
#define PL_laststatval		(vTHX->Ilaststatval)
#define PL_laststype		(vTHX->Ilaststype)
#define PL_localizing		(vTHX->Ilocalizing)
#define PL_localpatches		(vTHX->Ilocalpatches)
#define PL_lockhook		(vTHX->Ilockhook)
#define PL_main_cv		(vTHX->Imain_cv)
#define PL_main_root		(vTHX->Imain_root)
#define PL_main_start		(vTHX->Imain_start)
#define PL_mainstack		(vTHX->Imainstack)
#define PL_markstack		(vTHX->Imarkstack)
#define PL_markstack_max	(vTHX->Imarkstack_max)
#define PL_markstack_ptr	(vTHX->Imarkstack_ptr)
#define PL_max_intro_pending	(vTHX->Imax_intro_pending)
#define PL_maxsysfd		(vTHX->Imaxsysfd)
#define PL_memory_debug_header	(vTHX->Imemory_debug_header)
#define PL_mess_sv		(vTHX->Imess_sv)
#define PL_min_intro_pending	(vTHX->Imin_intro_pending)
#define PL_minus_E		(vTHX->Iminus_E)
#define PL_minus_F		(vTHX->Iminus_F)
#define PL_minus_a		(vTHX->Iminus_a)
#define PL_minus_c		(vTHX->Iminus_c)
#define PL_minus_l		(vTHX->Iminus_l)
#define PL_minus_n		(vTHX->Iminus_n)
#define PL_minus_p		(vTHX->Iminus_p)
#define PL_modcount		(vTHX->Imodcount)
#define PL_modglobal		(vTHX->Imodglobal)
#define PL_multideref_pc	(vTHX->Imultideref_pc)
#define PL_my_cxt_keys		(vTHX->Imy_cxt_keys)
#define PL_my_cxt_list		(vTHX->Imy_cxt_list)
#define PL_my_cxt_size		(vTHX->Imy_cxt_size)
#define PL_na			(vTHX->Ina)
#define PL_nomemok		(vTHX->Inomemok)
#define PL_numeric_local	(vTHX->Inumeric_local)
#define PL_numeric_name		(vTHX->Inumeric_name)
#define PL_numeric_radix_sv	(vTHX->Inumeric_radix_sv)
#define PL_numeric_standard	(vTHX->Inumeric_standard)
#define PL_ofsgv		(vTHX->Iofsgv)
#define PL_oldname		(vTHX->Ioldname)
#define PL_op			(vTHX->Iop)
#define PL_op_exec_cnt		(vTHX->Iop_exec_cnt)
#define PL_op_mask		(vTHX->Iop_mask)
#define PL_opfreehook		(vTHX->Iopfreehook)
#define PL_origalen		(vTHX->Iorigalen)
#define PL_origargc		(vTHX->Iorigargc)
#define PL_origargv		(vTHX->Iorigargv)
#define PL_origenviron		(vTHX->Iorigenviron)
#define PL_origfilename		(vTHX->Iorigfilename)
#define PL_ors_sv		(vTHX->Iors_sv)
#define PL_osname		(vTHX->Iosname)
#define PL_pad_reset_pending	(vTHX->Ipad_reset_pending)
#define PL_padix		(vTHX->Ipadix)
#define PL_padix_floor		(vTHX->Ipadix_floor)
#define PL_padlist_generation	(vTHX->Ipadlist_generation)
#define PL_padname_const	(vTHX->Ipadname_const)
#define PL_padname_undef	(vTHX->Ipadname_undef)
#define PL_parser		(vTHX->Iparser)
#define PL_patchlevel		(vTHX->Ipatchlevel)
#define PL_peepp		(vTHX->Ipeepp)
#define PL_perl_destruct_level	(vTHX->Iperl_destruct_level)
#define PL_perldb		(vTHX->Iperldb)
#define PL_perlio		(vTHX->Iperlio)
#define PL_phase		(vTHX->Iphase)
#define PL_pidstatus		(vTHX->Ipidstatus)
#define PL_preambleav		(vTHX->Ipreambleav)
#define PL_profiledata		(vTHX->Iprofiledata)
#define PL_psig_name		(vTHX->Ipsig_name)
#define PL_psig_pend		(vTHX->Ipsig_pend)
#define PL_psig_ptr		(vTHX->Ipsig_ptr)
#define PL_ptr_table		(vTHX->Iptr_table)
#define PL_random_state		(vTHX->Irandom_state)
#define PL_reentrant_buffer	(vTHX->Ireentrant_buffer)
#define PL_reentrant_retint	(vTHX->Ireentrant_retint)
#define PL_reg_curpm		(vTHX->Ireg_curpm)
#define PL_regex_pad		(vTHX->Iregex_pad)
#define PL_regex_padav		(vTHX->Iregex_padav)
#define PL_registered_mros	(vTHX->Iregistered_mros)
#define PL_regmatch_slab	(vTHX->Iregmatch_slab)
#define PL_regmatch_state	(vTHX->Iregmatch_state)
#define PL_replgv		(vTHX->Ireplgv)
#define PL_restartjmpenv	(vTHX->Irestartjmpenv)
#define PL_restartop		(vTHX->Irestartop)
#define PL_rpeepp		(vTHX->Irpeepp)
#define PL_rs			(vTHX->Irs)
#define PL_runops		(vTHX->Irunops)
#define PL_savebegin		(vTHX->Isavebegin)
#define PL_savestack		(vTHX->Isavestack)
#define PL_savestack_ix		(vTHX->Isavestack_ix)
#define PL_savestack_max	(vTHX->Isavestack_max)
#ifndef PL_sawampersand
#define PL_sawampersand		(vTHX->Isawampersand)
#endif
#define PL_scopestack		(vTHX->Iscopestack)
#define PL_scopestack_ix	(vTHX->Iscopestack_ix)
#define PL_scopestack_max	(vTHX->Iscopestack_max)
#define PL_scopestack_name	(vTHX->Iscopestack_name)
#define PL_secondgv		(vTHX->Isecondgv)
#define PL_seen_deprecated_macro	(vTHX->Iseen_deprecated_macro)
#define PL_sharehook		(vTHX->Isharehook)
#define PL_sig_pending		(vTHX->Isig_pending)
#define PL_sighandlerp		(vTHX->Isighandlerp)
#define PL_signalhook		(vTHX->Isignalhook)
#define PL_signals		(vTHX->Isignals)
#define PL_sort_RealCmp		(vTHX->Isort_RealCmp)
#define PL_sortcop		(vTHX->Isortcop)
#define PL_sortstash		(vTHX->Isortstash)
#define PL_splitstr		(vTHX->Isplitstr)
#define PL_srand_called		(vTHX->Isrand_called)
#define PL_stack_base		(vTHX->Istack_base)
#define PL_stack_max		(vTHX->Istack_max)
#define PL_stack_sp		(vTHX->Istack_sp)
#define PL_start_env		(vTHX->Istart_env)
#define PL_stashcache		(vTHX->Istashcache)
#define PL_stashpad		(vTHX->Istashpad)
#define PL_stashpadix		(vTHX->Istashpadix)
#define PL_stashpadmax		(vTHX->Istashpadmax)
#define PL_statcache		(vTHX->Istatcache)
#define PL_statgv		(vTHX->Istatgv)
#define PL_static_memory_buffer (vTHX->Istatic_memory_buffer)
#define PL_static_memory_from   (vTHX->Istatic_memory_from)
#define PL_static_memory_to     (vTHX->Istatic_memory_to)
#define PL_statname		(vTHX->Istatname)
#define PL_statusvalue		(vTHX->Istatusvalue)
#define PL_statusvalue_posix	(vTHX->Istatusvalue_posix)
#define PL_statusvalue_vms	(vTHX->Istatusvalue_vms)
#define PL_stderrgv		(vTHX->Istderrgv)
#define PL_stdingv		(vTHX->Istdingv)
#define PL_strtab		(vTHX->Istrtab)
#define PL_strxfrm_NUL_replacement	(vTHX->Istrxfrm_NUL_replacement)
#define PL_strxfrm_is_behaved	(vTHX->Istrxfrm_is_behaved)
#define PL_strxfrm_max_cp	(vTHX->Istrxfrm_max_cp)
#define PL_sub_generation	(vTHX->Isub_generation)
#define PL_subline		(vTHX->Isubline)
#define PL_subname		(vTHX->Isubname)
#define PL_sv_arenaroot		(vTHX->Isv_arenaroot)
#define PL_sv_consts		(vTHX->Isv_consts)
#define PL_sv_count		(vTHX->Isv_count)
#define PL_sv_immortals		(vTHX->Isv_immortals)
#define PL_sv_no		(vTHX->Isv_no)
#define PL_sv_root		(vTHX->Isv_root)
#define PL_sv_serial		(vTHX->Isv_serial)
#define PL_sv_undef		(vTHX->Isv_undef)
#define PL_sv_yes		(vTHX->Isv_yes)
#define PL_sv_zero		(vTHX->Isv_zero)
#define PL_sys_intern		(vTHX->Isys_intern)
#define PL_taint_warn		(vTHX->Itaint_warn)
#define PL_tainted		(vTHX->Itainted)
#define PL_tainting		(vTHX->Itainting)
#define PL_threadhook		(vTHX->Ithreadhook)
#define PL_tmps_floor		(vTHX->Itmps_floor)
#define PL_tmps_ix		(vTHX->Itmps_ix)
#define PL_tmps_max		(vTHX->Itmps_max)
#define PL_tmps_stack		(vTHX->Itmps_stack)
#define PL_top_env		(vTHX->Itop_env)
#define PL_toptarget		(vTHX->Itoptarget)
#define PL_unicode		(vTHX->Iunicode)
#define PL_unitcheckav		(vTHX->Iunitcheckav)
#define PL_unitcheckav_save	(vTHX->Iunitcheckav_save)
#define PL_unlockhook		(vTHX->Iunlockhook)
#define PL_unsafe		(vTHX->Iunsafe)
#define PL_utf8_charname_begin	(vTHX->Iutf8_charname_begin)
#define PL_utf8_charname_continue	(vTHX->Iutf8_charname_continue)
#define PL_utf8_foldable	(vTHX->Iutf8_foldable)
#define PL_utf8_foldclosures	(vTHX->Iutf8_foldclosures)
#define PL_utf8_idcont		(vTHX->Iutf8_idcont)
#define PL_utf8_idstart		(vTHX->Iutf8_idstart)
#define PL_utf8_mark		(vTHX->Iutf8_mark)
#define PL_utf8_perl_idcont	(vTHX->Iutf8_perl_idcont)
#define PL_utf8_perl_idstart	(vTHX->Iutf8_perl_idstart)
#define PL_utf8_swash_ptrs	(vTHX->Iutf8_swash_ptrs)
#define PL_utf8_tofold		(vTHX->Iutf8_tofold)
#define PL_utf8_tolower		(vTHX->Iutf8_tolower)
#define PL_utf8_totitle		(vTHX->Iutf8_totitle)
#define PL_utf8_toupper		(vTHX->Iutf8_toupper)
#define PL_utf8_xidcont		(vTHX->Iutf8_xidcont)
#define PL_utf8_xidstart	(vTHX->Iutf8_xidstart)
#define PL_utf8cache		(vTHX->Iutf8cache)
#define PL_utf8locale		(vTHX->Iutf8locale)
#define PL_warn_locale		(vTHX->Iwarn_locale)
#define PL_warnhook		(vTHX->Iwarnhook)
#define PL_watchaddr		(vTHX->Iwatchaddr)
#define PL_watchok		(vTHX->Iwatchok)
#define PL_xsubfilename		(vTHX->Ixsubfilename)

#endif	/* MULTIPLICITY */

#if defined(PERL_GLOBAL_STRUCT)

#define PL_C_locale_obj		(my_vars->GC_locale_obj)
#define PL_GC_locale_obj	(my_vars->GC_locale_obj)
#define PL_appctx		(my_vars->Gappctx)
#define PL_Gappctx		(my_vars->Gappctx)
#define PL_check		(my_vars->Gcheck)
#define PL_Gcheck		(my_vars->Gcheck)
#define PL_check_mutex		(my_vars->Gcheck_mutex)
#define PL_Gcheck_mutex		(my_vars->Gcheck_mutex)
#define PL_csighandlerp		(my_vars->Gcsighandlerp)
#define PL_Gcsighandlerp	(my_vars->Gcsighandlerp)
#define PL_curinterp		(my_vars->Gcurinterp)
#define PL_Gcurinterp		(my_vars->Gcurinterp)
#define PL_do_undump		(my_vars->Gdo_undump)
#define PL_Gdo_undump		(my_vars->Gdo_undump)
#define PL_dollarzero_mutex	(my_vars->Gdollarzero_mutex)
#define PL_Gdollarzero_mutex	(my_vars->Gdollarzero_mutex)
#define PL_fold_locale		(my_vars->Gfold_locale)
#define PL_Gfold_locale		(my_vars->Gfold_locale)
#define PL_hash_chars		(my_vars->Ghash_chars)
#define PL_Ghash_chars		(my_vars->Ghash_chars)
#define PL_hash_seed		(my_vars->Ghash_seed)
#define PL_Ghash_seed		(my_vars->Ghash_seed)
#define PL_hash_seed_set	(my_vars->Ghash_seed_set)
#define PL_Ghash_seed_set	(my_vars->Ghash_seed_set)
#define PL_hash_state		(my_vars->Ghash_state)
#define PL_Ghash_state		(my_vars->Ghash_state)
#define PL_hints_mutex		(my_vars->Ghints_mutex)
#define PL_Ghints_mutex		(my_vars->Ghints_mutex)
#define PL_keyword_plugin	(my_vars->Gkeyword_plugin)
#define PL_Gkeyword_plugin	(my_vars->Gkeyword_plugin)
#define PL_locale_mutex		(my_vars->Glocale_mutex)
#define PL_Glocale_mutex	(my_vars->Glocale_mutex)
#define PL_malloc_mutex		(my_vars->Gmalloc_mutex)
#define PL_Gmalloc_mutex	(my_vars->Gmalloc_mutex)
#define PL_mmap_page_size	(my_vars->Gmmap_page_size)
#define PL_Gmmap_page_size	(my_vars->Gmmap_page_size)
#define PL_my_ctx_mutex		(my_vars->Gmy_ctx_mutex)
#define PL_Gmy_ctx_mutex	(my_vars->Gmy_ctx_mutex)
#define PL_my_cxt_index		(my_vars->Gmy_cxt_index)
#define PL_Gmy_cxt_index	(my_vars->Gmy_cxt_index)
#define PL_op_mutex		(my_vars->Gop_mutex)
#define PL_Gop_mutex		(my_vars->Gop_mutex)
#define PL_op_seq		(my_vars->Gop_seq)
#define PL_Gop_seq		(my_vars->Gop_seq)
#define PL_op_sequence		(my_vars->Gop_sequence)
#define PL_Gop_sequence		(my_vars->Gop_sequence)
#define PL_perlio_debug_fd	(my_vars->Gperlio_debug_fd)
#define PL_Gperlio_debug_fd	(my_vars->Gperlio_debug_fd)
#define PL_perlio_fd_refcnt	(my_vars->Gperlio_fd_refcnt)
#define PL_Gperlio_fd_refcnt	(my_vars->Gperlio_fd_refcnt)
#define PL_perlio_fd_refcnt_size	(my_vars->Gperlio_fd_refcnt_size)
#define PL_Gperlio_fd_refcnt_size	(my_vars->Gperlio_fd_refcnt_size)
#define PL_perlio_mutex		(my_vars->Gperlio_mutex)
#define PL_Gperlio_mutex	(my_vars->Gperlio_mutex)
#ifdef __VMS
#define PL_perllib_sep		(my_vars->Gperllib_sep)
#define PL_Gperllib_sep		(my_vars->Gperllib_sep)
#endif
#define PL_ppaddr		(my_vars->Gppaddr)
#define PL_Gppaddr		(my_vars->Gppaddr)
#ifdef OS2
#define PL_sh_path		(my_vars->Gsh_path)
#define PL_Gsh_path		(my_vars->Gsh_path)
#endif
#define PL_sig_defaulting	(my_vars->Gsig_defaulting)
#define PL_Gsig_defaulting	(my_vars->Gsig_defaulting)
#define PL_sig_handlers_initted	(my_vars->Gsig_handlers_initted)
#define PL_Gsig_handlers_initted	(my_vars->Gsig_handlers_initted)
#define PL_sig_ignoring		(my_vars->Gsig_ignoring)
#define PL_Gsig_ignoring	(my_vars->Gsig_ignoring)
#define PL_sig_trapped		(my_vars->Gsig_trapped)
#define PL_Gsig_trapped		(my_vars->Gsig_trapped)
#define PL_sigfpe_saved		(my_vars->Gsigfpe_saved)
#define PL_Gsigfpe_saved	(my_vars->Gsigfpe_saved)
#define PL_sv_placeholder	(my_vars->Gsv_placeholder)
#define PL_Gsv_placeholder	(my_vars->Gsv_placeholder)
#define PL_thr_key		(my_vars->Gthr_key)
#define PL_Gthr_key		(my_vars->Gthr_key)
#define PL_timesbase		(my_vars->Gtimesbase)
#define PL_Gtimesbase		(my_vars->Gtimesbase)
#define PL_use_safe_putenv	(my_vars->Guse_safe_putenv)
#define PL_Guse_safe_putenv	(my_vars->Guse_safe_putenv)
#define PL_veto_cleanup		(my_vars->Gveto_cleanup)
#define PL_Gveto_cleanup	(my_vars->Gveto_cleanup)
#define PL_watch_pvx		(my_vars->Gwatch_pvx)
#define PL_Gwatch_pvx		(my_vars->Gwatch_pvx)

#endif /* PERL_GLOBAL_STRUCT */

/* ex: set ro: */
