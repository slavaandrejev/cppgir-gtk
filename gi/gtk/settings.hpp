// AUTO-GENERATED

#ifndef _GI_GTK_SETTINGS_HPP_
#define _GI_GTK_SETTINGS_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class StyleProvider;

class Settings;

namespace base {


#define GI_GTK_SETTINGS_BASE base::SettingsBase
class SettingsBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkSettings BaseObjectType;

SettingsBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_settings_get_type(); } 

GI_INLINE_DECL Gtk::StyleProvider interface_ (gi::interface_tag<Gtk::StyleProvider>);

GI_INLINE_DECL operator Gtk::StyleProvider ();

// GtkSettings* /*none,nullable*/ gtk_settings_get_default ();
// ::GtkSettings* /*none,nullable*/ gtk_settings_get_default ();
static GI_INLINE_DECL Gtk::Settings get_default () noexcept;

// GtkSettings* /*none*/ gtk_settings_get_for_display (GdkDisplay* display /*none*/);
// ::GtkSettings* /*none*/ gtk_settings_get_for_display (::GdkDisplay* display /*none*/);
static GI_INLINE_DECL Gtk::Settings get_for_display (Gdk::Display display) noexcept;

// void gtk_settings_reset_property (GtkSettings* settings /*none*/, const char* name /*none*/);
// void gtk_settings_reset_property (::GtkSettings* settings /*none*/, const char* name /*none*/);
GI_INLINE_DECL void reset_property (const gi::cstring_v name) noexcept;

gi::property_proxy<bool, base::SettingsBase> property_gtk_alternative_button_order()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-alternative-button-order"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_alternative_button_order() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-alternative-button-order"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_alternative_sort_arrows()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-alternative-sort-arrows"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_alternative_sort_arrows() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-alternative-sort-arrows"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_application_prefer_dark_theme()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-application-prefer-dark-theme"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_application_prefer_dark_theme() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-application-prefer-dark-theme"); }

gi::property_proxy<gdouble, base::SettingsBase> property_gtk_cursor_aspect_ratio()
{ return gi::property_proxy<gdouble, base::SettingsBase> (*this, "gtk-cursor-aspect-ratio"); }
const gi::property_proxy<gdouble, base::SettingsBase> property_gtk_cursor_aspect_ratio() const
{ return gi::property_proxy<gdouble, base::SettingsBase> (*this, "gtk-cursor-aspect-ratio"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_cursor_blink()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-cursor-blink"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_cursor_blink() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-cursor-blink"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_cursor_blink_time()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-cursor-blink-time"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_cursor_blink_time() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-cursor-blink-time"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_cursor_blink_timeout()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-cursor-blink-timeout"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_cursor_blink_timeout() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-cursor-blink-timeout"); }

gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_cursor_theme_name()
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-cursor-theme-name"); }
const gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_cursor_theme_name() const
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-cursor-theme-name"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_cursor_theme_size()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-cursor-theme-size"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_cursor_theme_size() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-cursor-theme-size"); }

gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_decoration_layout()
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-decoration-layout"); }
const gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_decoration_layout() const
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-decoration-layout"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_dialogs_use_header()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-dialogs-use-header"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_dialogs_use_header() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-dialogs-use-header"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_dnd_drag_threshold()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-dnd-drag-threshold"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_dnd_drag_threshold() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-dnd-drag-threshold"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_double_click_distance()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-double-click-distance"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_double_click_distance() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-double-click-distance"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_double_click_time()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-double-click-time"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_double_click_time() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-double-click-time"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_enable_accels()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-enable-accels"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_enable_accels() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-enable-accels"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_enable_animations()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-enable-animations"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_enable_animations() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-enable-animations"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_enable_event_sounds()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-enable-event-sounds"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_enable_event_sounds() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-enable-event-sounds"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_enable_input_feedback_sounds()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-enable-input-feedback-sounds"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_enable_input_feedback_sounds() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-enable-input-feedback-sounds"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_enable_primary_paste()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-enable-primary-paste"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_enable_primary_paste() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-enable-primary-paste"); }

gi::property_proxy<guint, base::SettingsBase> property_gtk_entry_password_hint_timeout()
{ return gi::property_proxy<guint, base::SettingsBase> (*this, "gtk-entry-password-hint-timeout"); }
const gi::property_proxy<guint, base::SettingsBase> property_gtk_entry_password_hint_timeout() const
{ return gi::property_proxy<guint, base::SettingsBase> (*this, "gtk-entry-password-hint-timeout"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_entry_select_on_focus()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-entry-select-on-focus"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_entry_select_on_focus() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-entry-select-on-focus"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_error_bell()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-error-bell"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_error_bell() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-error-bell"); }

gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_font_name()
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-font-name"); }
const gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_font_name() const
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-font-name"); }

gi::property_proxy<guint, base::SettingsBase> property_gtk_fontconfig_timestamp()
{ return gi::property_proxy<guint, base::SettingsBase> (*this, "gtk-fontconfig-timestamp"); }
const gi::property_proxy<guint, base::SettingsBase> property_gtk_fontconfig_timestamp() const
{ return gi::property_proxy<guint, base::SettingsBase> (*this, "gtk-fontconfig-timestamp"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_hint_font_metrics()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-hint-font-metrics"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_hint_font_metrics() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-hint-font-metrics"); }

gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_icon_theme_name()
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-icon-theme-name"); }
const gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_icon_theme_name() const
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-icon-theme-name"); }

gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_im_module()
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-im-module"); }
const gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_im_module() const
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-im-module"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_keynav_use_caret()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-keynav-use-caret"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_keynav_use_caret() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-keynav-use-caret"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_label_select_on_focus()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-label-select-on-focus"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_label_select_on_focus() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-label-select-on-focus"); }

gi::property_proxy<guint, base::SettingsBase> property_gtk_long_press_time()
{ return gi::property_proxy<guint, base::SettingsBase> (*this, "gtk-long-press-time"); }
const gi::property_proxy<guint, base::SettingsBase> property_gtk_long_press_time() const
{ return gi::property_proxy<guint, base::SettingsBase> (*this, "gtk-long-press-time"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_overlay_scrolling()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-overlay-scrolling"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_overlay_scrolling() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-overlay-scrolling"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_primary_button_warps_slider()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-primary-button-warps-slider"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_primary_button_warps_slider() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-primary-button-warps-slider"); }

gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_print_backends()
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-print-backends"); }
const gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_print_backends() const
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-print-backends"); }

gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_print_preview_command()
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-print-preview-command"); }
const gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_print_preview_command() const
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-print-preview-command"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_recent_files_enabled()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-recent-files-enabled"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_recent_files_enabled() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-recent-files-enabled"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_recent_files_max_age()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-recent-files-max-age"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_recent_files_max_age() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-recent-files-max-age"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_shell_shows_app_menu()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-shell-shows-app-menu"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_shell_shows_app_menu() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-shell-shows-app-menu"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_shell_shows_desktop()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-shell-shows-desktop"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_shell_shows_desktop() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-shell-shows-desktop"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_shell_shows_menubar()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-shell-shows-menubar"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_shell_shows_menubar() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-shell-shows-menubar"); }

gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_sound_theme_name()
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-sound-theme-name"); }
const gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_sound_theme_name() const
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-sound-theme-name"); }

gi::property_proxy<bool, base::SettingsBase> property_gtk_split_cursor()
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-split-cursor"); }
const gi::property_proxy<bool, base::SettingsBase> property_gtk_split_cursor() const
{ return gi::property_proxy<bool, base::SettingsBase> (*this, "gtk-split-cursor"); }

gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_theme_name()
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-theme-name"); }
const gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_theme_name() const
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-theme-name"); }

gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_titlebar_double_click()
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-titlebar-double-click"); }
const gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_titlebar_double_click() const
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-titlebar-double-click"); }

gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_titlebar_middle_click()
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-titlebar-middle-click"); }
const gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_titlebar_middle_click() const
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-titlebar-middle-click"); }

gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_titlebar_right_click()
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-titlebar-right-click"); }
const gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_titlebar_right_click() const
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-titlebar-right-click"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_xft_antialias()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-xft-antialias"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_xft_antialias() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-xft-antialias"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_xft_dpi()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-xft-dpi"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_xft_dpi() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-xft-dpi"); }

gi::property_proxy<gint, base::SettingsBase> property_gtk_xft_hinting()
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-xft-hinting"); }
const gi::property_proxy<gint, base::SettingsBase> property_gtk_xft_hinting() const
{ return gi::property_proxy<gint, base::SettingsBase> (*this, "gtk-xft-hinting"); }

gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_xft_hintstyle()
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-xft-hintstyle"); }
const gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_xft_hintstyle() const
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-xft-hintstyle"); }

gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_xft_rgba()
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-xft-rgba"); }
const gi::property_proxy<gi::cstring, base::SettingsBase> property_gtk_xft_rgba() const
{ return gi::property_proxy<gi::cstring, base::SettingsBase> (*this, "gtk-xft-rgba"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/settings_extra_def.hpp>)
#include <gtk/settings_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/settings_extra.hpp>)
#include <gtk/settings_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class Settings : public GI_GTK_SETTINGS_BASE
{ typedef GI_GTK_SETTINGS_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkSettings>
{ typedef Gtk::Settings type; }; 

} // namespace repository

} // namespace gi

#endif
