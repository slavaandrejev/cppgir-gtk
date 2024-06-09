// AUTO-GENERATED

#ifndef _GI_PANGO_LAYOUT_HPP_
#define _GI_PANGO_LAYOUT_HPP_


namespace gi {

namespace repository {

namespace Pango {

class AttrList;
class AttrList_Ref;
class Context;
class FontDescription;
class FontDescription_Ref;
class LayoutIter;
class LayoutIter_Ref;
class LayoutLine;
class LayoutLine_Ref;
class LogAttr;
class LogAttr_Ref;
class Rectangle;
class Rectangle_Ref;
class TabArray;
class TabArray_Ref;

class Layout;

namespace base {


#define GI_PANGO_LAYOUT_BASE base::LayoutBase
class LayoutBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::PangoLayout BaseObjectType;

LayoutBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return pango_layout_get_type(); } 

// PangoLayout* /*full*/ pango_layout_new (PangoContext* context /*none*/);
// ::PangoLayout* /*full*/ pango_layout_new (::PangoContext* context /*none*/);
static GI_INLINE_DECL Pango::Layout new_ (Pango::Context context) noexcept;

// PangoLayout* /*full,nullable*/ pango_layout_deserialize (PangoContext* context /*none*/, GBytes* bytes /*none*/, PangoLayoutDeserializeFlags flags, GError ** error);
// ::PangoLayout* /*full,nullable*/ pango_layout_deserialize (::PangoContext* context /*none*/, ::GBytes* bytes /*none*/, ::PangoLayoutDeserializeFlags flags, GError ** error);
static GI_INLINE_DECL Pango::Layout deserialize (Pango::Context context, GLib::Bytes_Ref bytes, Pango::LayoutDeserializeFlags flags);
static GI_INLINE_DECL Pango::Layout deserialize (Pango::Context context, GLib::Bytes_Ref bytes, Pango::LayoutDeserializeFlags flags, GLib::Error * _error) noexcept;

// void pango_layout_context_changed (PangoLayout* layout /*none*/);
// void pango_layout_context_changed (::PangoLayout* layout /*none*/);
GI_INLINE_DECL void context_changed () noexcept;

// PangoLayout* /*full*/ pango_layout_copy (PangoLayout* src /*none*/);
// ::PangoLayout* /*full*/ pango_layout_copy (::PangoLayout* src /*none*/);
GI_INLINE_DECL Pango::Layout copy () noexcept;

// PangoAlignment pango_layout_get_alignment (PangoLayout* layout /*none*/);
// ::PangoAlignment pango_layout_get_alignment (::PangoLayout* layout /*none*/);
GI_INLINE_DECL Pango::Alignment get_alignment () noexcept;

// PangoAttrList* /*none,nullable*/ pango_layout_get_attributes (PangoLayout* layout /*none*/);
// ::PangoAttrList* /*none,nullable*/ pango_layout_get_attributes (::PangoLayout* layout /*none*/);
GI_INLINE_DECL Pango::AttrList_Ref get_attributes () noexcept;

// gboolean pango_layout_get_auto_dir (PangoLayout* layout /*none*/);
// gboolean pango_layout_get_auto_dir (::PangoLayout* layout /*none*/);
GI_INLINE_DECL bool get_auto_dir () noexcept;

// int pango_layout_get_baseline (PangoLayout* layout /*none*/);
// gint pango_layout_get_baseline (::PangoLayout* layout /*none*/);
GI_INLINE_DECL gint get_baseline () noexcept;

// void pango_layout_get_caret_pos (PangoLayout* layout /*none*/, int index_, PangoRectangle* strong_pos /*none,out,opt,ca*/, PangoRectangle* weak_pos /*none,out,opt,ca*/);
// void pango_layout_get_caret_pos (::PangoLayout* layout /*none*/, gint index_, ::PangoRectangle* strong_pos /*none,out,opt,ca*/, ::PangoRectangle* weak_pos /*none,out,opt,ca*/);
GI_INLINE_DECL void get_caret_pos (gint index_, Pango::Rectangle * strong_pos, Pango::Rectangle * weak_pos) noexcept;
GI_INLINE_DECL std::tuple<Pango::Rectangle, Pango::Rectangle> get_caret_pos (gint index_) noexcept;

// gint pango_layout_get_character_count (PangoLayout* layout /*none*/);
// gint pango_layout_get_character_count (::PangoLayout* layout /*none*/);
GI_INLINE_DECL gint get_character_count () noexcept;

// PangoContext* /*none*/ pango_layout_get_context (PangoLayout* layout /*none*/);
// ::PangoContext* /*none*/ pango_layout_get_context (::PangoLayout* layout /*none*/);
GI_INLINE_DECL Pango::Context get_context () noexcept;

// void pango_layout_get_cursor_pos (PangoLayout* layout /*none*/, int index_, PangoRectangle* strong_pos /*none,out,opt,ca*/, PangoRectangle* weak_pos /*none,out,opt,ca*/);
// void pango_layout_get_cursor_pos (::PangoLayout* layout /*none*/, gint index_, ::PangoRectangle* strong_pos /*none,out,opt,ca*/, ::PangoRectangle* weak_pos /*none,out,opt,ca*/);
GI_INLINE_DECL void get_cursor_pos (gint index_, Pango::Rectangle * strong_pos, Pango::Rectangle * weak_pos) noexcept;
GI_INLINE_DECL std::tuple<Pango::Rectangle, Pango::Rectangle> get_cursor_pos (gint index_) noexcept;

// PangoDirection pango_layout_get_direction (PangoLayout* layout /*none*/, int index);
// ::PangoDirection pango_layout_get_direction (::PangoLayout* layout /*none*/, gint index);
GI_INLINE_DECL Pango::Direction get_direction (gint index) noexcept;

// PangoEllipsizeMode pango_layout_get_ellipsize (PangoLayout* layout /*none*/);
// ::PangoEllipsizeMode pango_layout_get_ellipsize (::PangoLayout* layout /*none*/);
GI_INLINE_DECL Pango::EllipsizeMode get_ellipsize () noexcept;

// void pango_layout_get_extents (PangoLayout* layout /*none*/, PangoRectangle* ink_rect /*none,out,opt,ca*/, PangoRectangle* logical_rect /*none,out,opt,ca*/);
// void pango_layout_get_extents (::PangoLayout* layout /*none*/, ::PangoRectangle* ink_rect /*none,out,opt,ca*/, ::PangoRectangle* logical_rect /*none,out,opt,ca*/);
GI_INLINE_DECL void get_extents (Pango::Rectangle * ink_rect, Pango::Rectangle * logical_rect) noexcept;
GI_INLINE_DECL std::tuple<Pango::Rectangle, Pango::Rectangle> get_extents () noexcept;

// const PangoFontDescription* /*none,nullable*/ pango_layout_get_font_description (PangoLayout* layout /*none*/);
// const ::PangoFontDescription* /*none,nullable*/ pango_layout_get_font_description (::PangoLayout* layout /*none*/);
GI_INLINE_DECL Pango::FontDescription_Ref get_font_description () noexcept;

// int pango_layout_get_height (PangoLayout* layout /*none*/);
// gint pango_layout_get_height (::PangoLayout* layout /*none*/);
GI_INLINE_DECL gint get_height () noexcept;

// int pango_layout_get_indent (PangoLayout* layout /*none*/);
// gint pango_layout_get_indent (::PangoLayout* layout /*none*/);
GI_INLINE_DECL gint get_indent () noexcept;

// PangoLayoutIter* /*full*/ pango_layout_get_iter (PangoLayout* layout /*none*/);
// ::PangoLayoutIter* /*full*/ pango_layout_get_iter (::PangoLayout* layout /*none*/);
GI_INLINE_DECL Pango::LayoutIter get_iter () noexcept;

// gboolean pango_layout_get_justify (PangoLayout* layout /*none*/);
// gboolean pango_layout_get_justify (::PangoLayout* layout /*none*/);
GI_INLINE_DECL bool get_justify () noexcept;

// gboolean pango_layout_get_justify_last_line (PangoLayout* layout /*none*/);
// gboolean pango_layout_get_justify_last_line (::PangoLayout* layout /*none*/);
GI_INLINE_DECL bool get_justify_last_line () noexcept;

// PangoLayoutLine* /*none,nullable*/ pango_layout_get_line (PangoLayout* layout /*none*/, int line);
// ::PangoLayoutLine* /*none,nullable*/ pango_layout_get_line (::PangoLayout* layout /*none*/, gint line);
GI_INLINE_DECL Pango::LayoutLine_Ref get_line (gint line) noexcept;

// int pango_layout_get_line_count (PangoLayout* layout /*none*/);
// gint pango_layout_get_line_count (::PangoLayout* layout /*none*/);
GI_INLINE_DECL gint get_line_count () noexcept;

// PangoLayoutLine* /*none,nullable*/ pango_layout_get_line_readonly (PangoLayout* layout /*none*/, int line);
// ::PangoLayoutLine* /*none,nullable*/ pango_layout_get_line_readonly (::PangoLayout* layout /*none*/, gint line);
GI_INLINE_DECL Pango::LayoutLine_Ref get_line_readonly (gint line) noexcept;

// float pango_layout_get_line_spacing (PangoLayout* layout /*none*/);
// gfloat pango_layout_get_line_spacing (::PangoLayout* layout /*none*/);
GI_INLINE_DECL gfloat get_line_spacing () noexcept;

// GSList* /*none*/ pango_layout_get_lines (PangoLayout* layout /*none*/);
// ::GSList* /*none*/ pango_layout_get_lines (::PangoLayout* layout /*none*/);
GI_INLINE_DECL gi::Collection<GSList, ::PangoLayoutLine*, gi::transfer_none_t> get_lines () noexcept;

// GSList* /*none*/ pango_layout_get_lines_readonly (PangoLayout* layout /*none*/);
// ::GSList* /*none*/ pango_layout_get_lines_readonly (::PangoLayout* layout /*none*/);
GI_INLINE_DECL gi::Collection<GSList, ::PangoLayoutLine*, gi::transfer_none_t> get_lines_readonly () noexcept;

// void pango_layout_get_log_attrs (PangoLayout* layout /*none*/, PangoLogAttr** attrs /*container,out*/, gint* n_attrs);
// void pango_layout_get_log_attrs (::PangoLayout* layout /*none*/, ::PangoLogAttr*** attrs /*container,out*/, gint* n_attrs);
// SKIP; attrs out boxed array not supported (depth 2)

// const PangoLogAttr* /*none*/ pango_layout_get_log_attrs_readonly (PangoLayout* layout /*none*/, gint* n_attrs);
// const ::PangoLogAttr** /*none*/ pango_layout_get_log_attrs_readonly (::PangoLayout* layout /*none*/, gint* n_attrs);
// SKIP;  return boxed array not supported (depth 1)

// void pango_layout_get_pixel_extents (PangoLayout* layout /*none*/, PangoRectangle* ink_rect /*none,out,opt,ca*/, PangoRectangle* logical_rect /*none,out,opt,ca*/);
// void pango_layout_get_pixel_extents (::PangoLayout* layout /*none*/, ::PangoRectangle* ink_rect /*none,out,opt,ca*/, ::PangoRectangle* logical_rect /*none,out,opt,ca*/);
GI_INLINE_DECL void get_pixel_extents (Pango::Rectangle * ink_rect, Pango::Rectangle * logical_rect) noexcept;
GI_INLINE_DECL std::tuple<Pango::Rectangle, Pango::Rectangle> get_pixel_extents () noexcept;

// void pango_layout_get_pixel_size (PangoLayout* layout /*none*/, int* width, int* height);
// void pango_layout_get_pixel_size (::PangoLayout* layout /*none*/, gint* width, gint* height);
GI_INLINE_DECL void get_pixel_size (gint * width, gint * height) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_pixel_size () noexcept;

// guint pango_layout_get_serial (PangoLayout* layout /*none*/);
// guint pango_layout_get_serial (::PangoLayout* layout /*none*/);
GI_INLINE_DECL guint get_serial () noexcept;

// gboolean pango_layout_get_single_paragraph_mode (PangoLayout* layout /*none*/);
// gboolean pango_layout_get_single_paragraph_mode (::PangoLayout* layout /*none*/);
GI_INLINE_DECL bool get_single_paragraph_mode () noexcept;

// void pango_layout_get_size (PangoLayout* layout /*none*/, int* width, int* height);
// void pango_layout_get_size (::PangoLayout* layout /*none*/, gint* width, gint* height);
GI_INLINE_DECL void get_size (gint * width, gint * height) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> get_size () noexcept;

// int pango_layout_get_spacing (PangoLayout* layout /*none*/);
// gint pango_layout_get_spacing (::PangoLayout* layout /*none*/);
GI_INLINE_DECL gint get_spacing () noexcept;

// PangoTabArray* /*full,nullable*/ pango_layout_get_tabs (PangoLayout* layout /*none*/);
// ::PangoTabArray* /*full,nullable*/ pango_layout_get_tabs (::PangoLayout* layout /*none*/);
GI_INLINE_DECL Pango::TabArray get_tabs () noexcept;

// const char* /*none*/ pango_layout_get_text (PangoLayout* layout /*none*/);
// const char* /*none*/ pango_layout_get_text (::PangoLayout* layout /*none*/);
GI_INLINE_DECL gi::cstring_v get_text () noexcept;

// int pango_layout_get_unknown_glyphs_count (PangoLayout* layout /*none*/);
// gint pango_layout_get_unknown_glyphs_count (::PangoLayout* layout /*none*/);
GI_INLINE_DECL gint get_unknown_glyphs_count () noexcept;

// int pango_layout_get_width (PangoLayout* layout /*none*/);
// gint pango_layout_get_width (::PangoLayout* layout /*none*/);
GI_INLINE_DECL gint get_width () noexcept;

// PangoWrapMode pango_layout_get_wrap (PangoLayout* layout /*none*/);
// ::PangoWrapMode pango_layout_get_wrap (::PangoLayout* layout /*none*/);
GI_INLINE_DECL Pango::WrapMode get_wrap () noexcept;

// void pango_layout_index_to_line_x (PangoLayout* layout /*none*/, int index_, gboolean trailing, int* line, int* x_pos);
// void pango_layout_index_to_line_x (::PangoLayout* layout /*none*/, gint index_, gboolean trailing, gint* line, gint* x_pos);
GI_INLINE_DECL void index_to_line_x (gint index_, gboolean trailing, gint * line, gint * x_pos) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> index_to_line_x (gint index_, gboolean trailing) noexcept;

// void pango_layout_index_to_pos (PangoLayout* layout /*none*/, int index_, PangoRectangle* pos /*none,out,ca*/);
// void pango_layout_index_to_pos (::PangoLayout* layout /*none*/, gint index_, ::PangoRectangle* pos /*none,out,ca*/);
GI_INLINE_DECL void index_to_pos (gint index_, Pango::Rectangle & pos) noexcept;
GI_INLINE_DECL Pango::Rectangle index_to_pos (gint index_) noexcept;

// gboolean pango_layout_is_ellipsized (PangoLayout* layout /*none*/);
// gboolean pango_layout_is_ellipsized (::PangoLayout* layout /*none*/);
GI_INLINE_DECL bool is_ellipsized () noexcept;

// gboolean pango_layout_is_wrapped (PangoLayout* layout /*none*/);
// gboolean pango_layout_is_wrapped (::PangoLayout* layout /*none*/);
GI_INLINE_DECL bool is_wrapped () noexcept;

// void pango_layout_move_cursor_visually (PangoLayout* layout /*none*/, gboolean strong, int old_index, int old_trailing, int direction, int* new_index, int* new_trailing);
// void pango_layout_move_cursor_visually (::PangoLayout* layout /*none*/, gboolean strong, gint old_index, gint old_trailing, gint direction, gint* new_index, gint* new_trailing);
GI_INLINE_DECL void move_cursor_visually (gboolean strong, gint old_index, gint old_trailing, gint direction, gint & new_index, gint & new_trailing) noexcept;
GI_INLINE_DECL std::tuple<gint, gint> move_cursor_visually (gboolean strong, gint old_index, gint old_trailing, gint direction) noexcept;

// GBytes* /*full*/ pango_layout_serialize (PangoLayout* layout /*none*/, PangoLayoutSerializeFlags flags);
// ::GBytes* /*full*/ pango_layout_serialize (::PangoLayout* layout /*none*/, ::PangoLayoutSerializeFlags flags);
GI_INLINE_DECL GLib::Bytes serialize (Pango::LayoutSerializeFlags flags) noexcept;

// void pango_layout_set_alignment (PangoLayout* layout /*none*/, PangoAlignment alignment);
// void pango_layout_set_alignment (::PangoLayout* layout /*none*/, ::PangoAlignment alignment);
GI_INLINE_DECL void set_alignment (Pango::Alignment alignment) noexcept;

// void pango_layout_set_attributes (PangoLayout* layout /*none*/, PangoAttrList* attrs /*none,nullable*/);
// void pango_layout_set_attributes (::PangoLayout* layout /*none*/, ::PangoAttrList* attrs /*none,nullable*/);
GI_INLINE_DECL void set_attributes (Pango::AttrList_Ref attrs) noexcept;
GI_INLINE_DECL void set_attributes () noexcept;

// void pango_layout_set_auto_dir (PangoLayout* layout /*none*/, gboolean auto_dir);
// void pango_layout_set_auto_dir (::PangoLayout* layout /*none*/, gboolean auto_dir);
GI_INLINE_DECL void set_auto_dir (gboolean auto_dir) noexcept;

// void pango_layout_set_ellipsize (PangoLayout* layout /*none*/, PangoEllipsizeMode ellipsize);
// void pango_layout_set_ellipsize (::PangoLayout* layout /*none*/, ::PangoEllipsizeMode ellipsize);
GI_INLINE_DECL void set_ellipsize (Pango::EllipsizeMode ellipsize) noexcept;

// void pango_layout_set_font_description (PangoLayout* layout /*none*/, const PangoFontDescription* desc /*none,nullable*/);
// void pango_layout_set_font_description (::PangoLayout* layout /*none*/, const ::PangoFontDescription* desc /*none,nullable*/);
GI_INLINE_DECL void set_font_description (const Pango::FontDescription_Ref desc) noexcept;
GI_INLINE_DECL void set_font_description () noexcept;

// void pango_layout_set_height (PangoLayout* layout /*none*/, int height);
// void pango_layout_set_height (::PangoLayout* layout /*none*/, gint height);
GI_INLINE_DECL void set_height (gint height) noexcept;

// void pango_layout_set_indent (PangoLayout* layout /*none*/, int indent);
// void pango_layout_set_indent (::PangoLayout* layout /*none*/, gint indent);
GI_INLINE_DECL void set_indent (gint indent) noexcept;

// void pango_layout_set_justify (PangoLayout* layout /*none*/, gboolean justify);
// void pango_layout_set_justify (::PangoLayout* layout /*none*/, gboolean justify);
GI_INLINE_DECL void set_justify (gboolean justify) noexcept;

// void pango_layout_set_justify_last_line (PangoLayout* layout /*none*/, gboolean justify);
// void pango_layout_set_justify_last_line (::PangoLayout* layout /*none*/, gboolean justify);
GI_INLINE_DECL void set_justify_last_line (gboolean justify) noexcept;

// void pango_layout_set_line_spacing (PangoLayout* layout /*none*/, float factor);
// void pango_layout_set_line_spacing (::PangoLayout* layout /*none*/, gfloat factor);
GI_INLINE_DECL void set_line_spacing (gfloat factor) noexcept;

// void pango_layout_set_markup (PangoLayout* layout /*none*/, const char* markup /*none*/, int length);
// void pango_layout_set_markup (::PangoLayout* layout /*none*/, const char* markup /*none*/, gint length);
GI_INLINE_DECL void set_markup (const gi::cstring_v markup, gint length) noexcept;

// void pango_layout_set_markup_with_accel (PangoLayout* layout /*none*/, const char* markup /*none*/, int length, gunichar accel_marker, gunichar* accel_char);
// void pango_layout_set_markup_with_accel (::PangoLayout* layout /*none*/, const char* markup /*none*/, gint length, gunichar accel_marker, gunichar* accel_char);
GI_INLINE_DECL void set_markup_with_accel (const gi::cstring_v markup, gint length, gunichar accel_marker, gunichar * accel_char) noexcept;
GI_INLINE_DECL gunichar set_markup_with_accel (const gi::cstring_v markup, gint length, gunichar accel_marker) noexcept;

// void pango_layout_set_single_paragraph_mode (PangoLayout* layout /*none*/, gboolean setting);
// void pango_layout_set_single_paragraph_mode (::PangoLayout* layout /*none*/, gboolean setting);
GI_INLINE_DECL void set_single_paragraph_mode (gboolean setting) noexcept;

// void pango_layout_set_spacing (PangoLayout* layout /*none*/, int spacing);
// void pango_layout_set_spacing (::PangoLayout* layout /*none*/, gint spacing);
GI_INLINE_DECL void set_spacing (gint spacing) noexcept;

// void pango_layout_set_tabs (PangoLayout* layout /*none*/, PangoTabArray* tabs /*none,nullable*/);
// void pango_layout_set_tabs (::PangoLayout* layout /*none*/, ::PangoTabArray* tabs /*none,nullable*/);
GI_INLINE_DECL void set_tabs (Pango::TabArray_Ref tabs) noexcept;
GI_INLINE_DECL void set_tabs () noexcept;

// void pango_layout_set_text (PangoLayout* layout /*none*/, const char* text /*none*/, int length);
// void pango_layout_set_text (::PangoLayout* layout /*none*/, const char* text /*none*/, gint length);
GI_INLINE_DECL void set_text (const gi::cstring_v text, gint length) noexcept;

// void pango_layout_set_width (PangoLayout* layout /*none*/, int width);
// void pango_layout_set_width (::PangoLayout* layout /*none*/, gint width);
GI_INLINE_DECL void set_width (gint width) noexcept;

// void pango_layout_set_wrap (PangoLayout* layout /*none*/, PangoWrapMode wrap);
// void pango_layout_set_wrap (::PangoLayout* layout /*none*/, ::PangoWrapMode wrap);
GI_INLINE_DECL void set_wrap (Pango::WrapMode wrap) noexcept;

// gboolean pango_layout_write_to_file (PangoLayout* layout /*none*/, PangoLayoutSerializeFlags flags, const char* filename /*none*/, GError ** error);
// gboolean pango_layout_write_to_file (::PangoLayout* layout /*none*/, ::PangoLayoutSerializeFlags flags, const char* filename /*none*/, GError ** error);
GI_INLINE_DECL bool write_to_file (Pango::LayoutSerializeFlags flags, const gi::cstring_v filename);
GI_INLINE_DECL bool write_to_file (Pango::LayoutSerializeFlags flags, const gi::cstring_v filename, GLib::Error * _error) noexcept;

// gboolean pango_layout_xy_to_index (PangoLayout* layout /*none*/, int x, int y, int* index_, int* trailing);
// gboolean pango_layout_xy_to_index (::PangoLayout* layout /*none*/, gint x, gint y, gint* index_, gint* trailing);
GI_INLINE_DECL bool xy_to_index (gint x, gint y, gint & index_, gint & trailing) noexcept;
GI_INLINE_DECL std::tuple<bool, gint, gint> xy_to_index (gint x, gint y) noexcept;

}; // class

} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/layout_extra_def.hpp>)
#include <pango/layout_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/layout_extra.hpp>)
#include <pango/layout_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

class Layout : public GI_PANGO_LAYOUT_BASE
{ typedef GI_PANGO_LAYOUT_BASE super_type; using super_type::super_type; };

} // namespace Pango

template<> struct declare_cpptype_of<::PangoLayout>
{ typedef Pango::Layout type; }; 

} // namespace repository

} // namespace gi

#endif
