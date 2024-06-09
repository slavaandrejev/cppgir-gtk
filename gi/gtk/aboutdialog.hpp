// AUTO-GENERATED

#ifndef _GI_GTK_ABOUTDIALOG_HPP_
#define _GI_GTK_ABOUTDIALOG_HPP_

#include "window.hpp"

namespace gi {

namespace repository {

namespace Gtk {


class AboutDialog;

namespace base {


#define GI_GTK_ABOUTDIALOG_BASE base::AboutDialogBase
class AboutDialogBase : public Gtk::Window
{
typedef Gtk::Window super_type;
public:
typedef ::GtkAboutDialog BaseObjectType;

AboutDialogBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_about_dialog_get_type(); } 

// GtkWidget* /*none*/ gtk_about_dialog_new ();
// ::GtkAboutDialog* /*none*/ gtk_about_dialog_new ();
static GI_INLINE_DECL Gtk::AboutDialog new_ () noexcept;

// void gtk_about_dialog_add_credit_section (GtkAboutDialog* about /*none*/, const char* section_name /*none*/, const char** people /*none*/);
// void gtk_about_dialog_add_credit_section (::GtkAboutDialog* about /*none*/, const char* section_name /*none*/, const char** people /*none*/);
GI_INLINE_DECL void add_credit_section (const gi::cstring_v section_name, gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> people) noexcept;

// const char* const* /*none*/ gtk_about_dialog_get_artists (GtkAboutDialog* about /*none*/);
// const char** /*none*/ gtk_about_dialog_get_artists (::GtkAboutDialog* about /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_artists () noexcept;

// const char* const* /*none*/ gtk_about_dialog_get_authors (GtkAboutDialog* about /*none*/);
// const char** /*none*/ gtk_about_dialog_get_authors (::GtkAboutDialog* about /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_authors () noexcept;

// const char* /*none,nullable*/ gtk_about_dialog_get_comments (GtkAboutDialog* about /*none*/);
// const char* /*none,nullable*/ gtk_about_dialog_get_comments (::GtkAboutDialog* about /*none*/);
GI_INLINE_DECL gi::cstring_v get_comments () noexcept;

// const char* /*none,nullable*/ gtk_about_dialog_get_copyright (GtkAboutDialog* about /*none*/);
// const char* /*none,nullable*/ gtk_about_dialog_get_copyright (::GtkAboutDialog* about /*none*/);
GI_INLINE_DECL gi::cstring_v get_copyright () noexcept;

// const char* const* /*none*/ gtk_about_dialog_get_documenters (GtkAboutDialog* about /*none*/);
// const char** /*none*/ gtk_about_dialog_get_documenters (::GtkAboutDialog* about /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_documenters () noexcept;

// const char* /*none,nullable*/ gtk_about_dialog_get_license (GtkAboutDialog* about /*none*/);
// const char* /*none,nullable*/ gtk_about_dialog_get_license (::GtkAboutDialog* about /*none*/);
GI_INLINE_DECL gi::cstring_v get_license () noexcept;

// GtkLicense gtk_about_dialog_get_license_type (GtkAboutDialog* about /*none*/);
// ::GtkLicense gtk_about_dialog_get_license_type (::GtkAboutDialog* about /*none*/);
GI_INLINE_DECL Gtk::License get_license_type () noexcept;

// GdkPaintable* /*none,nullable*/ gtk_about_dialog_get_logo (GtkAboutDialog* about /*none*/);
// ::GdkPaintable* /*none,nullable*/ gtk_about_dialog_get_logo (::GtkAboutDialog* about /*none*/);
GI_INLINE_DECL Gdk::Paintable get_logo () noexcept;

// const char* /*none,nullable*/ gtk_about_dialog_get_logo_icon_name (GtkAboutDialog* about /*none*/);
// const char* /*none,nullable*/ gtk_about_dialog_get_logo_icon_name (::GtkAboutDialog* about /*none*/);
GI_INLINE_DECL gi::cstring_v get_logo_icon_name () noexcept;

// const char* /*none,nullable*/ gtk_about_dialog_get_program_name (GtkAboutDialog* about /*none*/);
// const char* /*none,nullable*/ gtk_about_dialog_get_program_name (::GtkAboutDialog* about /*none*/);
GI_INLINE_DECL gi::cstring_v get_program_name () noexcept;

// const char* /*none,nullable*/ gtk_about_dialog_get_system_information (GtkAboutDialog* about /*none*/);
// const char* /*none,nullable*/ gtk_about_dialog_get_system_information (::GtkAboutDialog* about /*none*/);
GI_INLINE_DECL gi::cstring_v get_system_information () noexcept;

// const char* /*none,nullable*/ gtk_about_dialog_get_translator_credits (GtkAboutDialog* about /*none*/);
// const char* /*none,nullable*/ gtk_about_dialog_get_translator_credits (::GtkAboutDialog* about /*none*/);
GI_INLINE_DECL gi::cstring_v get_translator_credits () noexcept;

// const char* /*none,nullable*/ gtk_about_dialog_get_version (GtkAboutDialog* about /*none*/);
// const char* /*none,nullable*/ gtk_about_dialog_get_version (::GtkAboutDialog* about /*none*/);
GI_INLINE_DECL gi::cstring_v get_version () noexcept;

// const char* /*none,nullable*/ gtk_about_dialog_get_website (GtkAboutDialog* about /*none*/);
// const char* /*none,nullable*/ gtk_about_dialog_get_website (::GtkAboutDialog* about /*none*/);
GI_INLINE_DECL gi::cstring_v get_website () noexcept;

// const char* /*none,nullable*/ gtk_about_dialog_get_website_label (GtkAboutDialog* about /*none*/);
// const char* /*none,nullable*/ gtk_about_dialog_get_website_label (::GtkAboutDialog* about /*none*/);
GI_INLINE_DECL gi::cstring_v get_website_label () noexcept;

// gboolean gtk_about_dialog_get_wrap_license (GtkAboutDialog* about /*none*/);
// gboolean gtk_about_dialog_get_wrap_license (::GtkAboutDialog* about /*none*/);
GI_INLINE_DECL bool get_wrap_license () noexcept;

// void gtk_about_dialog_set_artists (GtkAboutDialog* about /*none*/, const char** artists /*none*/);
// void gtk_about_dialog_set_artists (::GtkAboutDialog* about /*none*/, const char** artists /*none*/);
GI_INLINE_DECL void set_artists (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> artists) noexcept;

// void gtk_about_dialog_set_authors (GtkAboutDialog* about /*none*/, const char** authors /*none*/);
// void gtk_about_dialog_set_authors (::GtkAboutDialog* about /*none*/, const char** authors /*none*/);
GI_INLINE_DECL void set_authors (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> authors) noexcept;

// void gtk_about_dialog_set_comments (GtkAboutDialog* about /*none*/, const char* comments /*none,nullable*/);
// void gtk_about_dialog_set_comments (::GtkAboutDialog* about /*none*/, const char* comments /*none,nullable*/);
GI_INLINE_DECL void set_comments (const gi::cstring_v comments) noexcept;
GI_INLINE_DECL void set_comments () noexcept;

// void gtk_about_dialog_set_copyright (GtkAboutDialog* about /*none*/, const char* copyright /*none,nullable*/);
// void gtk_about_dialog_set_copyright (::GtkAboutDialog* about /*none*/, const char* copyright /*none,nullable*/);
GI_INLINE_DECL void set_copyright (const gi::cstring_v copyright) noexcept;
GI_INLINE_DECL void set_copyright () noexcept;

// void gtk_about_dialog_set_documenters (GtkAboutDialog* about /*none*/, const char** documenters /*none*/);
// void gtk_about_dialog_set_documenters (::GtkAboutDialog* about /*none*/, const char** documenters /*none*/);
GI_INLINE_DECL void set_documenters (gi::CollectionParameter<gi::ZTSpan, char*, gi::transfer_none_t> documenters) noexcept;

// void gtk_about_dialog_set_license (GtkAboutDialog* about /*none*/, const char* license /*none,nullable*/);
// void gtk_about_dialog_set_license (::GtkAboutDialog* about /*none*/, const char* license /*none,nullable*/);
GI_INLINE_DECL void set_license (const gi::cstring_v license) noexcept;
GI_INLINE_DECL void set_license () noexcept;

// void gtk_about_dialog_set_license_type (GtkAboutDialog* about /*none*/, GtkLicense license_type);
// void gtk_about_dialog_set_license_type (::GtkAboutDialog* about /*none*/, ::GtkLicense license_type);
GI_INLINE_DECL void set_license_type (Gtk::License license_type) noexcept;

// void gtk_about_dialog_set_logo (GtkAboutDialog* about /*none*/, GdkPaintable* logo /*none,nullable*/);
// void gtk_about_dialog_set_logo (::GtkAboutDialog* about /*none*/, ::GdkPaintable* logo /*none,nullable*/);
GI_INLINE_DECL void set_logo (Gdk::Paintable logo) noexcept;
GI_INLINE_DECL void set_logo () noexcept;

// void gtk_about_dialog_set_logo_icon_name (GtkAboutDialog* about /*none*/, const char* icon_name /*none,nullable*/);
// void gtk_about_dialog_set_logo_icon_name (::GtkAboutDialog* about /*none*/, const char* icon_name /*none,nullable*/);
GI_INLINE_DECL void set_logo_icon_name (const gi::cstring_v icon_name) noexcept;
GI_INLINE_DECL void set_logo_icon_name () noexcept;

// void gtk_about_dialog_set_program_name (GtkAboutDialog* about /*none*/, const char* name /*none,nullable*/);
// void gtk_about_dialog_set_program_name (::GtkAboutDialog* about /*none*/, const char* name /*none,nullable*/);
GI_INLINE_DECL void set_program_name (const gi::cstring_v name) noexcept;
GI_INLINE_DECL void set_program_name () noexcept;

// void gtk_about_dialog_set_system_information (GtkAboutDialog* about /*none*/, const char* system_information /*none,nullable*/);
// void gtk_about_dialog_set_system_information (::GtkAboutDialog* about /*none*/, const char* system_information /*none,nullable*/);
GI_INLINE_DECL void set_system_information (const gi::cstring_v system_information) noexcept;
GI_INLINE_DECL void set_system_information () noexcept;

// void gtk_about_dialog_set_translator_credits (GtkAboutDialog* about /*none*/, const char* translator_credits /*none,nullable*/);
// void gtk_about_dialog_set_translator_credits (::GtkAboutDialog* about /*none*/, const char* translator_credits /*none,nullable*/);
GI_INLINE_DECL void set_translator_credits (const gi::cstring_v translator_credits) noexcept;
GI_INLINE_DECL void set_translator_credits () noexcept;

// void gtk_about_dialog_set_version (GtkAboutDialog* about /*none*/, const char* version /*none,nullable*/);
// void gtk_about_dialog_set_version (::GtkAboutDialog* about /*none*/, const char* version /*none,nullable*/);
GI_INLINE_DECL void set_version (const gi::cstring_v version) noexcept;
GI_INLINE_DECL void set_version () noexcept;

// void gtk_about_dialog_set_website (GtkAboutDialog* about /*none*/, const char* website /*none,nullable*/);
// void gtk_about_dialog_set_website (::GtkAboutDialog* about /*none*/, const char* website /*none,nullable*/);
GI_INLINE_DECL void set_website (const gi::cstring_v website) noexcept;
GI_INLINE_DECL void set_website () noexcept;

// void gtk_about_dialog_set_website_label (GtkAboutDialog* about /*none*/, const char* website_label /*none*/);
// void gtk_about_dialog_set_website_label (::GtkAboutDialog* about /*none*/, const char* website_label /*none*/);
GI_INLINE_DECL void set_website_label (const gi::cstring_v website_label) noexcept;

// void gtk_about_dialog_set_wrap_license (GtkAboutDialog* about /*none*/, gboolean wrap_license);
// void gtk_about_dialog_set_wrap_license (::GtkAboutDialog* about /*none*/, gboolean wrap_license);
GI_INLINE_DECL void set_wrap_license (gboolean wrap_license) noexcept;

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_comments()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "comments"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_comments() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "comments"); }

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_copyright()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "copyright"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_copyright() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "copyright"); }

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_license()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "license"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_license() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "license"); }

gi::property_proxy<Gtk::License, base::AboutDialogBase> property_license_type()
{ return gi::property_proxy<Gtk::License, base::AboutDialogBase> (*this, "license-type"); }
const gi::property_proxy<Gtk::License, base::AboutDialogBase> property_license_type() const
{ return gi::property_proxy<Gtk::License, base::AboutDialogBase> (*this, "license-type"); }

gi::property_proxy<Gdk::Paintable, base::AboutDialogBase> property_logo()
{ return gi::property_proxy<Gdk::Paintable, base::AboutDialogBase> (*this, "logo"); }
const gi::property_proxy<Gdk::Paintable, base::AboutDialogBase> property_logo() const
{ return gi::property_proxy<Gdk::Paintable, base::AboutDialogBase> (*this, "logo"); }

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_logo_icon_name()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "logo-icon-name"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_logo_icon_name() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "logo-icon-name"); }

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_program_name()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "program-name"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_program_name() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "program-name"); }

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_system_information()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "system-information"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_system_information() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "system-information"); }

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_translator_credits()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "translator-credits"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_translator_credits() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "translator-credits"); }

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_version()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "version"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_version() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "version"); }

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_website()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "website"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_website() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "website"); }

gi::property_proxy<gi::cstring, base::AboutDialogBase> property_website_label()
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "website-label"); }
const gi::property_proxy<gi::cstring, base::AboutDialogBase> property_website_label() const
{ return gi::property_proxy<gi::cstring, base::AboutDialogBase> (*this, "website-label"); }

gi::property_proxy<bool, base::AboutDialogBase> property_wrap_license()
{ return gi::property_proxy<bool, base::AboutDialogBase> (*this, "wrap-license"); }
const gi::property_proxy<bool, base::AboutDialogBase> property_wrap_license() const
{ return gi::property_proxy<bool, base::AboutDialogBase> (*this, "wrap-license"); }

// (signal) gboolean activate-link (gchar* uri /*none*/);
// (signal) gboolean activate-link (char* uri /*none*/);
gi::signal_proxy<bool(Gtk::AboutDialog, gi::cstring_v uri)> signal_activate_link()
{ return gi::signal_proxy<bool(Gtk::AboutDialog, gi::cstring_v uri)> (*this, "activate-link"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/aboutdialog_extra_def.hpp>)
#include <gtk/aboutdialog_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/aboutdialog_extra.hpp>)
#include <gtk/aboutdialog_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class AboutDialog : public GI_GTK_ABOUTDIALOG_BASE
{ typedef GI_GTK_ABOUTDIALOG_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkAboutDialog>
{ typedef Gtk::AboutDialog type; }; 

} // namespace repository

} // namespace gi

#endif
