// AUTO-GENERATED

#ifndef _GI_GTK_PAGESETUP_HPP_
#define _GI_GTK_PAGESETUP_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class PaperSize;
class PaperSize_Ref;

class PageSetup;

namespace base {


#define GI_GTK_PAGESETUP_BASE base::PageSetupBase
class PageSetupBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkPageSetup BaseObjectType;

PageSetupBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_page_setup_get_type(); } 

// GtkPageSetup* /*full*/ gtk_page_setup_new ();
// ::GtkPageSetup* /*full*/ gtk_page_setup_new ();
static GI_INLINE_DECL Gtk::PageSetup new_ () noexcept;

// GtkPageSetup* /*full*/ gtk_page_setup_new_from_file (const char* file_name /*none*/, GError ** error);
// ::GtkPageSetup* /*full*/ gtk_page_setup_new_from_file (const char* file_name /*none*/, GError ** error);
static GI_INLINE_DECL Gtk::PageSetup new_from_file (const gi::cstring_v file_name);
static GI_INLINE_DECL Gtk::PageSetup new_from_file (const gi::cstring_v file_name, GLib::Error * _error) noexcept;

// GtkPageSetup* /*full*/ gtk_page_setup_new_from_gvariant (GVariant* variant /*none*/);
// ::GtkPageSetup* /*full*/ gtk_page_setup_new_from_gvariant (::GVariant* variant /*none*/);
static GI_INLINE_DECL Gtk::PageSetup new_from_gvariant (GLib::Variant variant) noexcept;

// GtkPageSetup* /*full*/ gtk_page_setup_new_from_key_file (GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/, GError ** error);
// ::GtkPageSetup* /*full*/ gtk_page_setup_new_from_key_file (::GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/, GError ** error);
static GI_INLINE_DECL Gtk::PageSetup new_from_key_file (GLib::KeyFile_Ref key_file, const gi::cstring_v group_name);
static GI_INLINE_DECL Gtk::PageSetup new_from_key_file (GLib::KeyFile_Ref key_file);
static GI_INLINE_DECL Gtk::PageSetup new_from_key_file (GLib::KeyFile_Ref key_file, const gi::cstring_v group_name, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gtk::PageSetup new_from_key_file (GLib::KeyFile_Ref key_file, GLib::Error * _error) noexcept;

// GtkPageSetup* /*full*/ gtk_page_setup_copy (GtkPageSetup* other /*none*/);
// ::GtkPageSetup* /*full*/ gtk_page_setup_copy (::GtkPageSetup* other /*none*/);
GI_INLINE_DECL Gtk::PageSetup copy () noexcept;

// double gtk_page_setup_get_bottom_margin (GtkPageSetup* setup /*none*/, GtkUnit unit);
// gdouble gtk_page_setup_get_bottom_margin (::GtkPageSetup* setup /*none*/, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_bottom_margin (Gtk::Unit unit) noexcept;

// double gtk_page_setup_get_left_margin (GtkPageSetup* setup /*none*/, GtkUnit unit);
// gdouble gtk_page_setup_get_left_margin (::GtkPageSetup* setup /*none*/, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_left_margin (Gtk::Unit unit) noexcept;

// GtkPageOrientation gtk_page_setup_get_orientation (GtkPageSetup* setup /*none*/);
// ::GtkPageOrientation gtk_page_setup_get_orientation (::GtkPageSetup* setup /*none*/);
GI_INLINE_DECL Gtk::PageOrientation get_orientation () noexcept;

// double gtk_page_setup_get_page_height (GtkPageSetup* setup /*none*/, GtkUnit unit);
// gdouble gtk_page_setup_get_page_height (::GtkPageSetup* setup /*none*/, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_page_height (Gtk::Unit unit) noexcept;

// double gtk_page_setup_get_page_width (GtkPageSetup* setup /*none*/, GtkUnit unit);
// gdouble gtk_page_setup_get_page_width (::GtkPageSetup* setup /*none*/, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_page_width (Gtk::Unit unit) noexcept;

// double gtk_page_setup_get_paper_height (GtkPageSetup* setup /*none*/, GtkUnit unit);
// gdouble gtk_page_setup_get_paper_height (::GtkPageSetup* setup /*none*/, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_paper_height (Gtk::Unit unit) noexcept;

// GtkPaperSize* /*none*/ gtk_page_setup_get_paper_size (GtkPageSetup* setup /*none*/);
// ::GtkPaperSize* /*none*/ gtk_page_setup_get_paper_size (::GtkPageSetup* setup /*none*/);
GI_INLINE_DECL Gtk::PaperSize_Ref get_paper_size () noexcept;

// double gtk_page_setup_get_paper_width (GtkPageSetup* setup /*none*/, GtkUnit unit);
// gdouble gtk_page_setup_get_paper_width (::GtkPageSetup* setup /*none*/, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_paper_width (Gtk::Unit unit) noexcept;

// double gtk_page_setup_get_right_margin (GtkPageSetup* setup /*none*/, GtkUnit unit);
// gdouble gtk_page_setup_get_right_margin (::GtkPageSetup* setup /*none*/, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_right_margin (Gtk::Unit unit) noexcept;

// double gtk_page_setup_get_top_margin (GtkPageSetup* setup /*none*/, GtkUnit unit);
// gdouble gtk_page_setup_get_top_margin (::GtkPageSetup* setup /*none*/, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_top_margin (Gtk::Unit unit) noexcept;

// gboolean gtk_page_setup_load_file (GtkPageSetup* setup /*none*/, const char* file_name /*none*/, GError ** error);
// gboolean gtk_page_setup_load_file (::GtkPageSetup* setup /*none*/, const char* file_name /*none*/, GError ** error);
GI_INLINE_DECL bool load_file (const gi::cstring_v file_name);
GI_INLINE_DECL bool load_file (const gi::cstring_v file_name, GLib::Error * _error) noexcept;

// gboolean gtk_page_setup_load_key_file (GtkPageSetup* setup /*none*/, GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/, GError ** error);
// gboolean gtk_page_setup_load_key_file (::GtkPageSetup* setup /*none*/, ::GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/, GError ** error);
GI_INLINE_DECL bool load_key_file (GLib::KeyFile_Ref key_file, const gi::cstring_v group_name);
GI_INLINE_DECL bool load_key_file (GLib::KeyFile_Ref key_file);
GI_INLINE_DECL bool load_key_file (GLib::KeyFile_Ref key_file, const gi::cstring_v group_name, GLib::Error * _error) noexcept;
GI_INLINE_DECL bool load_key_file (GLib::KeyFile_Ref key_file, GLib::Error * _error) noexcept;

// void gtk_page_setup_set_bottom_margin (GtkPageSetup* setup /*none*/, double margin, GtkUnit unit);
// void gtk_page_setup_set_bottom_margin (::GtkPageSetup* setup /*none*/, gdouble margin, ::GtkUnit unit);
GI_INLINE_DECL void set_bottom_margin (gdouble margin, Gtk::Unit unit) noexcept;

// void gtk_page_setup_set_left_margin (GtkPageSetup* setup /*none*/, double margin, GtkUnit unit);
// void gtk_page_setup_set_left_margin (::GtkPageSetup* setup /*none*/, gdouble margin, ::GtkUnit unit);
GI_INLINE_DECL void set_left_margin (gdouble margin, Gtk::Unit unit) noexcept;

// void gtk_page_setup_set_orientation (GtkPageSetup* setup /*none*/, GtkPageOrientation orientation);
// void gtk_page_setup_set_orientation (::GtkPageSetup* setup /*none*/, ::GtkPageOrientation orientation);
GI_INLINE_DECL void set_orientation (Gtk::PageOrientation orientation) noexcept;

// void gtk_page_setup_set_paper_size (GtkPageSetup* setup /*none*/, GtkPaperSize* size /*none*/);
// void gtk_page_setup_set_paper_size (::GtkPageSetup* setup /*none*/, ::GtkPaperSize* size /*none*/);
GI_INLINE_DECL void set_paper_size (Gtk::PaperSize_Ref size) noexcept;

// void gtk_page_setup_set_paper_size_and_default_margins (GtkPageSetup* setup /*none*/, GtkPaperSize* size /*none*/);
// void gtk_page_setup_set_paper_size_and_default_margins (::GtkPageSetup* setup /*none*/, ::GtkPaperSize* size /*none*/);
GI_INLINE_DECL void set_paper_size_and_default_margins (Gtk::PaperSize_Ref size) noexcept;

// void gtk_page_setup_set_right_margin (GtkPageSetup* setup /*none*/, double margin, GtkUnit unit);
// void gtk_page_setup_set_right_margin (::GtkPageSetup* setup /*none*/, gdouble margin, ::GtkUnit unit);
GI_INLINE_DECL void set_right_margin (gdouble margin, Gtk::Unit unit) noexcept;

// void gtk_page_setup_set_top_margin (GtkPageSetup* setup /*none*/, double margin, GtkUnit unit);
// void gtk_page_setup_set_top_margin (::GtkPageSetup* setup /*none*/, gdouble margin, ::GtkUnit unit);
GI_INLINE_DECL void set_top_margin (gdouble margin, Gtk::Unit unit) noexcept;

// gboolean gtk_page_setup_to_file (GtkPageSetup* setup /*none*/, const char* file_name /*none*/, GError ** error);
// gboolean gtk_page_setup_to_file (::GtkPageSetup* setup /*none*/, const char* file_name /*none*/, GError ** error);
GI_INLINE_DECL bool to_file (const gi::cstring_v file_name);
GI_INLINE_DECL bool to_file (const gi::cstring_v file_name, GLib::Error * _error) noexcept;

// GVariant* /*none*/ gtk_page_setup_to_gvariant (GtkPageSetup* setup /*none*/);
// ::GVariant* /*none*/ gtk_page_setup_to_gvariant (::GtkPageSetup* setup /*none*/);
GI_INLINE_DECL GLib::Variant to_gvariant () noexcept;

// void gtk_page_setup_to_key_file (GtkPageSetup* setup /*none*/, GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/);
// void gtk_page_setup_to_key_file (::GtkPageSetup* setup /*none*/, ::GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/);
GI_INLINE_DECL void to_key_file (GLib::KeyFile_Ref key_file, const gi::cstring_v group_name) noexcept;
GI_INLINE_DECL void to_key_file (GLib::KeyFile_Ref key_file) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/pagesetup_extra_def.hpp>)
#include <gtk/pagesetup_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/pagesetup_extra.hpp>)
#include <gtk/pagesetup_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PageSetup : public GI_GTK_PAGESETUP_BASE
{ typedef GI_GTK_PAGESETUP_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPageSetup>
{ typedef Gtk::PageSetup type; }; 

} // namespace repository

} // namespace gi

#endif
