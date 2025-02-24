#include "stdbool.h"

extern void systray_ready();
extern void systray_on_exit();
extern void systray_menu_item_selected(int menu_id);
void registerSystray(void);
int nativeLoop(void);

void setIcon(const char* iconBytes, int length, bool template);
void setMenuItemIcon(const char* iconBytes, int length, int menuId, bool template);
void setTitle(char* title);
void setTooltip(char* tooltip);
void add_or_update_menu_item(int menuId, int parentMenuId, char* title, char* tooltip, short disabled, short checked, short isCheckable);
void add_separator(int menuId);
void hide_menu_item(int menuId);
void show_menu_item(int menuId);
void quit();

void remove_menu_item(int menuId);
void setMenuItemIconWithSize(const char* iconBytes, int length, int menuId, bool template, int width, int height);
void add_or_update_right_menu_item(int menuId, int parentMenuId, char* title, char* tooltip, short disabled, short checked, short isCheckable);
void add_right_separator(int menuId);
void toggle_right_menu(int enable);