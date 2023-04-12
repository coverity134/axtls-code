
/* confdata.c */
P(conf_parse,void,( char *name));
P(conf_read,int,( char *name));
P(conf_write,int,( char *name));

/* menu.c */
P(rootmenu,struct menu,);

P(menu_is_visible,bool,(struct menu *menu));
P(menu_get_prompt, char *,(struct menu *menu));
P(menu_get_root_menu,struct menu *,(struct menu *menu));
P(menu_get_parent_menu,struct menu *,(struct menu *menu));

/* symbol.c */
P(symbol_hash,struct symbol *,[SYMBOL_HASHSIZE]);
P(sym_change_count,int,);

P(sym_lookup,struct symbol *,( char *name, int isconst));
P(sym_find,struct symbol *,( char *name));
P(sym_re_search,struct symbol **,( char *pattern));
P(sym_type_name, char *,(enum symbol_type type));
P(sym_calc_value,void,(struct symbol *sym));
P(sym_get_type,enum symbol_type,(struct symbol *sym));
P(sym_tristate_within_range,bool,(struct symbol *sym,tristate tri));
P(sym_set_tristate_value,bool,(struct symbol *sym,tristate tri));
P(sym_toggle_tristate_value,tristate,(struct symbol *sym));
P(sym_string_valid,bool,(struct symbol *sym,  char *newval));
P(sym_string_within_range,bool,(struct symbol *sym,  char *str));
P(sym_set_string_value,bool,(struct symbol *sym,  char *newval));
P(sym_is_changable,bool,(struct symbol *sym));
P(sym_get_choice_prop,struct property *,(struct symbol *sym));
P(sym_get_default_prop,struct property *,(struct symbol *sym));
P(sym_get_string_value, char *,(struct symbol *sym));

P(prop_get_type_name, char *,(enum prop_type type));

/* expr.c */
P(expr_compare_type,int,(enum expr_type t1, enum expr_type t2));
P(expr_print,void,(struct expr *e, void (*fn)(void *,  char *), void *data, int prevtoken));
