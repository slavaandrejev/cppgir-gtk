// AUTO-GENERATED

#ifndef _GI_GTK_PAPERSIZE_HPP_
#define _GI_GTK_PAPERSIZE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class PaperSize_Ref;

class PaperSize;

namespace base {


#define GI_GTK_PAPERSIZE_BASE base::PaperSizeBase
class PaperSizeBase : public gi::detail::GBoxedWrapperBase<PaperSizeBase, ::GtkPaperSize>
{
typedef gi::detail::GBoxedWrapperBase<PaperSizeBase, ::GtkPaperSize> super_type;
public:

PaperSizeBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_paper_size_get_type(); } 

// GtkPaperSize* /*full*/ gtk_paper_size_new (const char* name /*none,nullable*/);
// ::GtkPaperSize* /*full*/ gtk_paper_size_new (const char* name /*none,nullable*/);
static GI_INLINE_DECL Gtk::PaperSize new_ (const gi::cstring_v name) noexcept;
static GI_INLINE_DECL Gtk::PaperSize new_ () noexcept;

// GtkPaperSize* /*full*/ gtk_paper_size_new_custom (const char* name /*none*/, const char* display_name /*none*/, double width, double height, GtkUnit unit);
// ::GtkPaperSize* /*full*/ gtk_paper_size_new_custom (const char* name /*none*/, const char* display_name /*none*/, gdouble width, gdouble height, ::GtkUnit unit);
static GI_INLINE_DECL Gtk::PaperSize new_custom (const gi::cstring_v name, const gi::cstring_v display_name, gdouble width, gdouble height, Gtk::Unit unit) noexcept;

// GtkPaperSize* /*full*/ gtk_paper_size_new_from_gvariant (GVariant* variant /*none*/);
// ::GtkPaperSize* /*full*/ gtk_paper_size_new_from_gvariant (::GVariant* variant /*none*/);
static GI_INLINE_DECL Gtk::PaperSize new_from_gvariant (GLib::Variant variant) noexcept;

// GtkPaperSize* /*full*/ gtk_paper_size_new_from_ipp (const char* ipp_name /*none*/, double width, double height);
// ::GtkPaperSize* /*full*/ gtk_paper_size_new_from_ipp (const char* ipp_name /*none*/, gdouble width, gdouble height);
static GI_INLINE_DECL Gtk::PaperSize new_from_ipp (const gi::cstring_v ipp_name, gdouble width, gdouble height) noexcept;

// GtkPaperSize* /*full*/ gtk_paper_size_new_from_key_file (GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/, GError ** error);
// ::GtkPaperSize* /*full*/ gtk_paper_size_new_from_key_file (::GKeyFile* key_file /*none*/, const char* group_name /*none,nullable*/, GError ** error);
static GI_INLINE_DECL Gtk::PaperSize new_from_key_file (GLib::KeyFile_Ref key_file, const gi::cstring_v group_name);
static GI_INLINE_DECL Gtk::PaperSize new_from_key_file (GLib::KeyFile_Ref key_file);
static GI_INLINE_DECL Gtk::PaperSize new_from_key_file (GLib::KeyFile_Ref key_file, const gi::cstring_v group_name, GLib::Error * _error) noexcept;
static GI_INLINE_DECL Gtk::PaperSize new_from_key_file (GLib::KeyFile_Ref key_file, GLib::Error * _error) noexcept;

// GtkPaperSize* /*full*/ gtk_paper_size_new_from_ppd (const char* ppd_name /*none*/, const char* ppd_display_name /*none*/, double width, double height);
// ::GtkPaperSize* /*full*/ gtk_paper_size_new_from_ppd (const char* ppd_name /*none*/, const char* ppd_display_name /*none*/, gdouble width, gdouble height);
static GI_INLINE_DECL Gtk::PaperSize new_from_ppd (const gi::cstring_v ppd_name, const gi::cstring_v ppd_display_name, gdouble width, gdouble height) noexcept;

// GtkPaperSize* /*full*/ gtk_paper_size_copy (GtkPaperSize* other /*none*/);
// ::GtkPaperSize* /*full*/ gtk_paper_size_copy (::GtkPaperSize* other /*none*/);
GI_INLINE_DECL Gtk::PaperSize copy () noexcept;

// void gtk_paper_size_free (GtkPaperSize* size /*none*/);
// void gtk_paper_size_free (::GtkPaperSize* size /*none*/);
// IGNORE; marked ignore

// double gtk_paper_size_get_default_bottom_margin (GtkPaperSize* size /*none*/, GtkUnit unit);
// gdouble gtk_paper_size_get_default_bottom_margin (::GtkPaperSize* size /*none*/, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_default_bottom_margin (Gtk::Unit unit) noexcept;

// double gtk_paper_size_get_default_left_margin (GtkPaperSize* size /*none*/, GtkUnit unit);
// gdouble gtk_paper_size_get_default_left_margin (::GtkPaperSize* size /*none*/, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_default_left_margin (Gtk::Unit unit) noexcept;

// double gtk_paper_size_get_default_right_margin (GtkPaperSize* size /*none*/, GtkUnit unit);
// gdouble gtk_paper_size_get_default_right_margin (::GtkPaperSize* size /*none*/, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_default_right_margin (Gtk::Unit unit) noexcept;

// double gtk_paper_size_get_default_top_margin (GtkPaperSize* size /*none*/, GtkUnit unit);
// gdouble gtk_paper_size_get_default_top_margin (::GtkPaperSize* size /*none*/, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_default_top_margin (Gtk::Unit unit) noexcept;

// const char* /*none*/ gtk_paper_size_get_display_name (GtkPaperSize* size /*none*/);
// const char* /*none*/ gtk_paper_size_get_display_name (::GtkPaperSize* size /*none*/);
GI_INLINE_DECL gi::cstring_v get_display_name () noexcept;

// double gtk_paper_size_get_height (GtkPaperSize* size /*none*/, GtkUnit unit);
// gdouble gtk_paper_size_get_height (::GtkPaperSize* size /*none*/, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_height (Gtk::Unit unit) noexcept;

// const char* /*none*/ gtk_paper_size_get_name (GtkPaperSize* size /*none*/);
// const char* /*none*/ gtk_paper_size_get_name (::GtkPaperSize* size /*none*/);
GI_INLINE_DECL gi::cstring_v get_name () noexcept;

// const char* /*none*/ gtk_paper_size_get_ppd_name (GtkPaperSize* size /*none*/);
// const char* /*none*/ gtk_paper_size_get_ppd_name (::GtkPaperSize* size /*none*/);
GI_INLINE_DECL gi::cstring_v get_ppd_name () noexcept;

// double gtk_paper_size_get_width (GtkPaperSize* size /*none*/, GtkUnit unit);
// gdouble gtk_paper_size_get_width (::GtkPaperSize* size /*none*/, ::GtkUnit unit);
GI_INLINE_DECL gdouble get_width (Gtk::Unit unit) noexcept;

// gboolean gtk_paper_size_is_custom (GtkPaperSize* size /*none*/);
// gboolean gtk_paper_size_is_custom (::GtkPaperSize* size /*none*/);
GI_INLINE_DECL bool is_custom () noexcept;

// gboolean gtk_paper_size_is_equal (GtkPaperSize* size1 /*none*/, GtkPaperSize* size2 /*none*/);
// gboolean gtk_paper_size_is_equal (::GtkPaperSize* size1 /*none*/, ::GtkPaperSize* size2 /*none*/);
GI_INLINE_DECL bool is_equal (Gtk::PaperSize_Ref size2) noexcept;

// gboolean gtk_paper_size_is_ipp (GtkPaperSize* size /*none*/);
// gboolean gtk_paper_size_is_ipp (::GtkPaperSize* size /*none*/);
GI_INLINE_DECL bool is_ipp () noexcept;

// void gtk_paper_size_set_size (GtkPaperSize* size /*none*/, double width, double height, GtkUnit unit);
// void gtk_paper_size_set_size (::GtkPaperSize* size /*none*/, gdouble width, gdouble height, ::GtkUnit unit);
GI_INLINE_DECL void set_size (gdouble width, gdouble height, Gtk::Unit unit) noexcept;

// GVariant* /*none*/ gtk_paper_size_to_gvariant (GtkPaperSize* paper_size /*none*/);
// ::GVariant* /*none*/ gtk_paper_size_to_gvariant (::GtkPaperSize* paper_size /*none*/);
GI_INLINE_DECL GLib::Variant to_gvariant () noexcept;

// void gtk_paper_size_to_key_file (GtkPaperSize* size /*none*/, GKeyFile* key_file /*none*/, const char* group_name /*none*/);
// void gtk_paper_size_to_key_file (::GtkPaperSize* size /*none*/, ::GKeyFile* key_file /*none*/, const char* group_name /*none*/);
GI_INLINE_DECL void to_key_file (GLib::KeyFile_Ref key_file, const gi::cstring_v group_name) noexcept;

// const char* /*none*/ gtk_paper_size_get_default ();
// const char* /*none*/ gtk_paper_size_get_default ();
static GI_INLINE_DECL gi::cstring_v get_default () noexcept;

// GList* /*full*/ gtk_paper_size_get_paper_sizes (gboolean include_custom);
// ::GList* /*full*/ gtk_paper_size_get_paper_sizes (gboolean include_custom);
static GI_INLINE_DECL gi::Collection<GList, ::GtkPaperSize*, gi::transfer_full_t> get_paper_sizes (gboolean include_custom) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/papersize_extra_def.hpp>)
#include <gtk/papersize_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/papersize_extra.hpp>)
#include <gtk/papersize_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PaperSize_Ref;

class PaperSize : public gi::detail::GBoxedWrapper<PaperSize, ::GtkPaperSize, GI_GTK_PAPERSIZE_BASE, PaperSize_Ref>
{ typedef gi::detail::GBoxedWrapper<PaperSize, ::GtkPaperSize, GI_GTK_PAPERSIZE_BASE, PaperSize_Ref> super_type; using super_type::super_type; };


class PaperSize_Ref : public gi::detail::GBoxedRefWrapper<PaperSize, ::GtkPaperSize, GI_GTK_PAPERSIZE_BASE>
{ typedef gi::detail::GBoxedRefWrapper<PaperSize, ::GtkPaperSize, GI_GTK_PAPERSIZE_BASE> super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPaperSize>
{ typedef Gtk::PaperSize type; }; 

} // namespace repository

} // namespace gi

#endif
