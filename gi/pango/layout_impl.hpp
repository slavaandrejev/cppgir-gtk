// AUTO-GENERATED

#ifndef _GI_PANGO_LAYOUT_IMPL_HPP_
#define _GI_PANGO_LAYOUT_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// PangoLayout* /*full*/ pango_layout_new (PangoContext* context /*none*/);
// ::PangoLayout* /*full*/ pango_layout_new (::PangoContext* context /*none*/);
Pango::Layout base::LayoutBase::new_ (Pango::Context context) noexcept
{
  typedef ::PangoLayout* (*call_wrap_t) (::PangoContext* context);
  call_wrap_t call_wrap_v = (call_wrap_t) pango_layout_new;
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoContext*) (context_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoLayout* /*full,nullable*/ pango_layout_deserialize (PangoContext* context /*none*/, GBytes* bytes /*none*/, PangoLayoutDeserializeFlags flags, GError ** error);
// ::PangoLayout* /*full,nullable*/ pango_layout_deserialize (::PangoContext* context /*none*/, ::GBytes* bytes /*none*/, ::PangoLayoutDeserializeFlags flags, GError ** error);
Pango::Layout base::LayoutBase::deserialize (Pango::Context context, GLib::Bytes_Ref bytes, Pango::LayoutDeserializeFlags flags)
{
  typedef ::PangoLayout* (*call_wrap_t) (::PangoContext* context, ::GBytes* bytes, ::PangoLayoutDeserializeFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_deserialize;
  auto flags_to_c = gi::unwrap (flags);
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::PangoContext*) (context_to_c), (::GBytes*) (bytes_to_c), (::PangoLayoutDeserializeFlags) (flags_to_c), &error);
  gi::check_error (error);
  return gi::wrap (_temp_ret, gi::transfer_full);
}
Pango::Layout base::LayoutBase::deserialize (Pango::Context context, GLib::Bytes_Ref bytes, Pango::LayoutDeserializeFlags flags, GLib::Error * _error) noexcept
{
  typedef ::PangoLayout* (*call_wrap_t) (::PangoContext* context, ::GBytes* bytes, ::PangoLayoutDeserializeFlags flags, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_deserialize;
  auto flags_to_c = gi::unwrap (flags);
  auto bytes_to_c = gi::unwrap (bytes, gi::transfer_none);
  auto context_to_c = gi::unwrap (context, gi::transfer_none);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::PangoContext*) (context_to_c), (::GBytes*) (bytes_to_c), (::PangoLayoutDeserializeFlags) (flags_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void pango_layout_context_changed (PangoLayout* layout /*none*/);
// void pango_layout_context_changed (::PangoLayout* layout /*none*/);
void base::LayoutBase::context_changed () noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_context_changed;
  call_wrap_v ((::PangoLayout*) (gobj_()));
}

// PangoLayout* /*full*/ pango_layout_copy (PangoLayout* src /*none*/);
// ::PangoLayout* /*full*/ pango_layout_copy (::PangoLayout* src /*none*/);
Pango::Layout base::LayoutBase::copy () noexcept
{
  typedef ::PangoLayout* (*call_wrap_t) (::PangoLayout* src);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_copy;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoAlignment pango_layout_get_alignment (PangoLayout* layout /*none*/);
// ::PangoAlignment pango_layout_get_alignment (::PangoLayout* layout /*none*/);
Pango::Alignment base::LayoutBase::get_alignment () noexcept
{
  typedef ::PangoAlignment (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_alignment;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// PangoAttrList* /*none,nullable*/ pango_layout_get_attributes (PangoLayout* layout /*none*/);
// ::PangoAttrList* /*none,nullable*/ pango_layout_get_attributes (::PangoLayout* layout /*none*/);
Pango::AttrList_Ref base::LayoutBase::get_attributes () noexcept
{
  typedef ::PangoAttrList* (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_attributes;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean pango_layout_get_auto_dir (PangoLayout* layout /*none*/);
// gboolean pango_layout_get_auto_dir (::PangoLayout* layout /*none*/);
bool base::LayoutBase::get_auto_dir () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_auto_dir;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return _temp_ret;
}

// int pango_layout_get_baseline (PangoLayout* layout /*none*/);
// gint pango_layout_get_baseline (::PangoLayout* layout /*none*/);
gint base::LayoutBase::get_baseline () noexcept
{
  typedef gint (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_baseline;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return _temp_ret;
}

// void pango_layout_get_caret_pos (PangoLayout* layout /*none*/, int index_, PangoRectangle* strong_pos /*none,out,opt,ca*/, PangoRectangle* weak_pos /*none,out,opt,ca*/);
// void pango_layout_get_caret_pos (::PangoLayout* layout /*none*/, gint index_, ::PangoRectangle* strong_pos /*none,out,opt,ca*/, ::PangoRectangle* weak_pos /*none,out,opt,ca*/);
void base::LayoutBase::get_caret_pos (gint index_, Pango::Rectangle * strong_pos, Pango::Rectangle * weak_pos) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, gint index_, ::PangoRectangle* strong_pos, ::PangoRectangle* weak_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_caret_pos;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*weak_pos).gobj_()), "");
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*strong_pos).gobj_()), "");
  auto index__to_c = index_;
  call_wrap_v ((::PangoLayout*) (gobj_()), (gint) (index__to_c), (::PangoRectangle*) (strong_pos ? (::PangoRectangle*) (*strong_pos).gobj_() : nullptr), (::PangoRectangle*) (weak_pos ? (::PangoRectangle*) (*weak_pos).gobj_() : nullptr));
}
std::tuple<Pango::Rectangle, Pango::Rectangle> base::LayoutBase::get_caret_pos (gint index_) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, gint index_, ::PangoRectangle* strong_pos, ::PangoRectangle* weak_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_caret_pos;
  Pango::Rectangle weak_pos_c;
  auto weak_pos = &weak_pos_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*weak_pos).gobj_()), "");
  Pango::Rectangle strong_pos_c;
  auto strong_pos = &strong_pos_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*strong_pos).gobj_()), "");
  auto index__to_c = index_;
  call_wrap_v ((::PangoLayout*) (gobj_()), (gint) (index__to_c), (::PangoRectangle*) (strong_pos ? (::PangoRectangle*) (*strong_pos).gobj_() : nullptr), (::PangoRectangle*) (weak_pos ? (::PangoRectangle*) (*weak_pos).gobj_() : nullptr));
  auto &&tmp_return_1 = strong_pos_c;
  auto &&tmp_return_2 = weak_pos_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// gint pango_layout_get_character_count (PangoLayout* layout /*none*/);
// gint pango_layout_get_character_count (::PangoLayout* layout /*none*/);
gint base::LayoutBase::get_character_count () noexcept
{
  typedef gint (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_character_count;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return _temp_ret;
}

// PangoContext* /*none*/ pango_layout_get_context (PangoLayout* layout /*none*/);
// ::PangoContext* /*none*/ pango_layout_get_context (::PangoLayout* layout /*none*/);
Pango::Context base::LayoutBase::get_context () noexcept
{
  typedef ::PangoContext* (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_context;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// void pango_layout_get_cursor_pos (PangoLayout* layout /*none*/, int index_, PangoRectangle* strong_pos /*none,out,opt,ca*/, PangoRectangle* weak_pos /*none,out,opt,ca*/);
// void pango_layout_get_cursor_pos (::PangoLayout* layout /*none*/, gint index_, ::PangoRectangle* strong_pos /*none,out,opt,ca*/, ::PangoRectangle* weak_pos /*none,out,opt,ca*/);
void base::LayoutBase::get_cursor_pos (gint index_, Pango::Rectangle * strong_pos, Pango::Rectangle * weak_pos) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, gint index_, ::PangoRectangle* strong_pos, ::PangoRectangle* weak_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_cursor_pos;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*weak_pos).gobj_()), "");
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*strong_pos).gobj_()), "");
  auto index__to_c = index_;
  call_wrap_v ((::PangoLayout*) (gobj_()), (gint) (index__to_c), (::PangoRectangle*) (strong_pos ? (::PangoRectangle*) (*strong_pos).gobj_() : nullptr), (::PangoRectangle*) (weak_pos ? (::PangoRectangle*) (*weak_pos).gobj_() : nullptr));
}
std::tuple<Pango::Rectangle, Pango::Rectangle> base::LayoutBase::get_cursor_pos (gint index_) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, gint index_, ::PangoRectangle* strong_pos, ::PangoRectangle* weak_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_cursor_pos;
  Pango::Rectangle weak_pos_c;
  auto weak_pos = &weak_pos_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*weak_pos).gobj_()), "");
  Pango::Rectangle strong_pos_c;
  auto strong_pos = &strong_pos_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*strong_pos).gobj_()), "");
  auto index__to_c = index_;
  call_wrap_v ((::PangoLayout*) (gobj_()), (gint) (index__to_c), (::PangoRectangle*) (strong_pos ? (::PangoRectangle*) (*strong_pos).gobj_() : nullptr), (::PangoRectangle*) (weak_pos ? (::PangoRectangle*) (*weak_pos).gobj_() : nullptr));
  auto &&tmp_return_1 = strong_pos_c;
  auto &&tmp_return_2 = weak_pos_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// PangoDirection pango_layout_get_direction (PangoLayout* layout /*none*/, int index);
// ::PangoDirection pango_layout_get_direction (::PangoLayout* layout /*none*/, gint index);
Pango::Direction base::LayoutBase::get_direction (gint index) noexcept
{
  typedef ::PangoDirection (*call_wrap_t) (::PangoLayout* layout, gint index);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_direction;
  auto index_to_c = index;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()), (gint) (index_to_c));
  return gi::wrap (_temp_ret);
}

// PangoEllipsizeMode pango_layout_get_ellipsize (PangoLayout* layout /*none*/);
// ::PangoEllipsizeMode pango_layout_get_ellipsize (::PangoLayout* layout /*none*/);
Pango::EllipsizeMode base::LayoutBase::get_ellipsize () noexcept
{
  typedef ::PangoEllipsizeMode (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_ellipsize;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void pango_layout_get_extents (PangoLayout* layout /*none*/, PangoRectangle* ink_rect /*none,out,opt,ca*/, PangoRectangle* logical_rect /*none,out,opt,ca*/);
// void pango_layout_get_extents (::PangoLayout* layout /*none*/, ::PangoRectangle* ink_rect /*none,out,opt,ca*/, ::PangoRectangle* logical_rect /*none,out,opt,ca*/);
void base::LayoutBase::get_extents (Pango::Rectangle * ink_rect, Pango::Rectangle * logical_rect) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_extents;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*logical_rect).gobj_()), "");
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*ink_rect).gobj_()), "");
  call_wrap_v ((::PangoLayout*) (gobj_()), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) (*ink_rect).gobj_() : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) (*logical_rect).gobj_() : nullptr));
}
std::tuple<Pango::Rectangle, Pango::Rectangle> base::LayoutBase::get_extents () noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_extents;
  Pango::Rectangle logical_rect_c;
  auto logical_rect = &logical_rect_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*logical_rect).gobj_()), "");
  Pango::Rectangle ink_rect_c;
  auto ink_rect = &ink_rect_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*ink_rect).gobj_()), "");
  call_wrap_v ((::PangoLayout*) (gobj_()), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) (*ink_rect).gobj_() : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) (*logical_rect).gobj_() : nullptr));
  auto &&tmp_return_1 = ink_rect_c;
  auto &&tmp_return_2 = logical_rect_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// const PangoFontDescription* /*none,nullable*/ pango_layout_get_font_description (PangoLayout* layout /*none*/);
// const ::PangoFontDescription* /*none,nullable*/ pango_layout_get_font_description (::PangoLayout* layout /*none*/);
Pango::FontDescription_Ref base::LayoutBase::get_font_description () noexcept
{
  typedef const ::PangoFontDescription* (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_font_description;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int pango_layout_get_height (PangoLayout* layout /*none*/);
// gint pango_layout_get_height (::PangoLayout* layout /*none*/);
gint base::LayoutBase::get_height () noexcept
{
  typedef gint (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_height;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return _temp_ret;
}

// int pango_layout_get_indent (PangoLayout* layout /*none*/);
// gint pango_layout_get_indent (::PangoLayout* layout /*none*/);
gint base::LayoutBase::get_indent () noexcept
{
  typedef gint (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_indent;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return _temp_ret;
}

// PangoLayoutIter* /*full*/ pango_layout_get_iter (PangoLayout* layout /*none*/);
// ::PangoLayoutIter* /*full*/ pango_layout_get_iter (::PangoLayout* layout /*none*/);
Pango::LayoutIter base::LayoutBase::get_iter () noexcept
{
  typedef ::PangoLayoutIter* (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_iter;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean pango_layout_get_justify (PangoLayout* layout /*none*/);
// gboolean pango_layout_get_justify (::PangoLayout* layout /*none*/);
bool base::LayoutBase::get_justify () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_justify;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return _temp_ret;
}

// gboolean pango_layout_get_justify_last_line (PangoLayout* layout /*none*/);
// gboolean pango_layout_get_justify_last_line (::PangoLayout* layout /*none*/);
bool base::LayoutBase::get_justify_last_line () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_justify_last_line;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return _temp_ret;
}

// PangoLayoutLine* /*none,nullable*/ pango_layout_get_line (PangoLayout* layout /*none*/, int line);
// ::PangoLayoutLine* /*none,nullable*/ pango_layout_get_line (::PangoLayout* layout /*none*/, gint line);
Pango::LayoutLine_Ref base::LayoutBase::get_line (gint line) noexcept
{
  typedef ::PangoLayoutLine* (*call_wrap_t) (::PangoLayout* layout, gint line);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_line;
  auto line_to_c = line;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()), (gint) (line_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int pango_layout_get_line_count (PangoLayout* layout /*none*/);
// gint pango_layout_get_line_count (::PangoLayout* layout /*none*/);
gint base::LayoutBase::get_line_count () noexcept
{
  typedef gint (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_line_count;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return _temp_ret;
}

// PangoLayoutLine* /*none,nullable*/ pango_layout_get_line_readonly (PangoLayout* layout /*none*/, int line);
// ::PangoLayoutLine* /*none,nullable*/ pango_layout_get_line_readonly (::PangoLayout* layout /*none*/, gint line);
Pango::LayoutLine_Ref base::LayoutBase::get_line_readonly (gint line) noexcept
{
  typedef ::PangoLayoutLine* (*call_wrap_t) (::PangoLayout* layout, gint line);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_line_readonly;
  auto line_to_c = line;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()), (gint) (line_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// float pango_layout_get_line_spacing (PangoLayout* layout /*none*/);
// gfloat pango_layout_get_line_spacing (::PangoLayout* layout /*none*/);
gfloat base::LayoutBase::get_line_spacing () noexcept
{
  typedef gfloat (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_line_spacing;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return _temp_ret;
}

// GSList* /*none*/ pango_layout_get_lines (PangoLayout* layout /*none*/);
// ::GSList* /*none*/ pango_layout_get_lines (::PangoLayout* layout /*none*/);
gi::Collection<GSList, ::PangoLayoutLine*, gi::transfer_none_t> base::LayoutBase::get_lines () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_lines;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return gi::wrap_to<gi::Collection<GSList, ::PangoLayoutLine*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// GSList* /*none*/ pango_layout_get_lines_readonly (PangoLayout* layout /*none*/);
// ::GSList* /*none*/ pango_layout_get_lines_readonly (::PangoLayout* layout /*none*/);
gi::Collection<GSList, ::PangoLayoutLine*, gi::transfer_none_t> base::LayoutBase::get_lines_readonly () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_lines_readonly;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return gi::wrap_to<gi::Collection<GSList, ::PangoLayoutLine*, gi::transfer_none_t>>(_temp_ret, gi::transfer_none);
}

// void pango_layout_get_log_attrs (PangoLayout* layout /*none*/, PangoLogAttr** attrs /*container,out*/, gint* n_attrs);
// void pango_layout_get_log_attrs (::PangoLayout* layout /*none*/, ::PangoLogAttr*** attrs /*container,out*/, gint* n_attrs);
// SKIP; attrs out boxed array not supported (depth 2)

// const PangoLogAttr* /*none*/ pango_layout_get_log_attrs_readonly (PangoLayout* layout /*none*/, gint* n_attrs);
// const ::PangoLogAttr** /*none*/ pango_layout_get_log_attrs_readonly (::PangoLayout* layout /*none*/, gint* n_attrs);
// SKIP;  return boxed array not supported (depth 1)

// void pango_layout_get_pixel_extents (PangoLayout* layout /*none*/, PangoRectangle* ink_rect /*none,out,opt,ca*/, PangoRectangle* logical_rect /*none,out,opt,ca*/);
// void pango_layout_get_pixel_extents (::PangoLayout* layout /*none*/, ::PangoRectangle* ink_rect /*none,out,opt,ca*/, ::PangoRectangle* logical_rect /*none,out,opt,ca*/);
void base::LayoutBase::get_pixel_extents (Pango::Rectangle * ink_rect, Pango::Rectangle * logical_rect) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_pixel_extents;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*logical_rect).gobj_()), "");
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*ink_rect).gobj_()), "");
  call_wrap_v ((::PangoLayout*) (gobj_()), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) (*ink_rect).gobj_() : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) (*logical_rect).gobj_() : nullptr));
}
std::tuple<Pango::Rectangle, Pango::Rectangle> base::LayoutBase::get_pixel_extents () noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, ::PangoRectangle* ink_rect, ::PangoRectangle* logical_rect);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_pixel_extents;
  Pango::Rectangle logical_rect_c;
  auto logical_rect = &logical_rect_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*logical_rect).gobj_()), "");
  Pango::Rectangle ink_rect_c;
  auto ink_rect = &ink_rect_c;
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*ink_rect).gobj_()), "");
  call_wrap_v ((::PangoLayout*) (gobj_()), (::PangoRectangle*) (ink_rect ? (::PangoRectangle*) (*ink_rect).gobj_() : nullptr), (::PangoRectangle*) (logical_rect ? (::PangoRectangle*) (*logical_rect).gobj_() : nullptr));
  auto &&tmp_return_1 = ink_rect_c;
  auto &&tmp_return_2 = logical_rect_c;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void pango_layout_get_pixel_size (PangoLayout* layout /*none*/, int* width, int* height);
// void pango_layout_get_pixel_size (::PangoLayout* layout /*none*/, gint* width, gint* height);
void base::LayoutBase::get_pixel_size (gint * width, gint * height) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_pixel_size;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::PangoLayout*) (gobj_()), (gint*) (width ? &width_o : nullptr), (gint*) (height ? &height_o : nullptr));
  if (height) *height = height_o;
  if (width) *width = width_o;
}
std::tuple<gint, gint> base::LayoutBase::get_pixel_size () noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_pixel_size;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::PangoLayout*) (gobj_()), (gint*) (&width_o), (gint*) (&height_o));
  auto &&tmp_return_1 = width_o;
  auto &&tmp_return_2 = height_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// guint pango_layout_get_serial (PangoLayout* layout /*none*/);
// guint pango_layout_get_serial (::PangoLayout* layout /*none*/);
guint base::LayoutBase::get_serial () noexcept
{
  typedef guint (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_serial;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return _temp_ret;
}

// gboolean pango_layout_get_single_paragraph_mode (PangoLayout* layout /*none*/);
// gboolean pango_layout_get_single_paragraph_mode (::PangoLayout* layout /*none*/);
bool base::LayoutBase::get_single_paragraph_mode () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_single_paragraph_mode;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return _temp_ret;
}

// void pango_layout_get_size (PangoLayout* layout /*none*/, int* width, int* height);
// void pango_layout_get_size (::PangoLayout* layout /*none*/, gint* width, gint* height);
void base::LayoutBase::get_size (gint * width, gint * height) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_size;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::PangoLayout*) (gobj_()), (gint*) (width ? &width_o : nullptr), (gint*) (height ? &height_o : nullptr));
  if (height) *height = height_o;
  if (width) *width = width_o;
}
std::tuple<gint, gint> base::LayoutBase::get_size () noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, gint* width, gint* height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_size;
  gint height_o {};
  gint width_o {};
  call_wrap_v ((::PangoLayout*) (gobj_()), (gint*) (&width_o), (gint*) (&height_o));
  auto &&tmp_return_1 = width_o;
  auto &&tmp_return_2 = height_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// int pango_layout_get_spacing (PangoLayout* layout /*none*/);
// gint pango_layout_get_spacing (::PangoLayout* layout /*none*/);
gint base::LayoutBase::get_spacing () noexcept
{
  typedef gint (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_spacing;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return _temp_ret;
}

// PangoTabArray* /*full,nullable*/ pango_layout_get_tabs (PangoLayout* layout /*none*/);
// ::PangoTabArray* /*full,nullable*/ pango_layout_get_tabs (::PangoLayout* layout /*none*/);
Pango::TabArray base::LayoutBase::get_tabs () noexcept
{
  typedef ::PangoTabArray* (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_tabs;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const char* /*none*/ pango_layout_get_text (PangoLayout* layout /*none*/);
// const char* /*none*/ pango_layout_get_text (::PangoLayout* layout /*none*/);
gi::cstring_v base::LayoutBase::get_text () noexcept
{
  typedef const char* (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_text;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// int pango_layout_get_unknown_glyphs_count (PangoLayout* layout /*none*/);
// gint pango_layout_get_unknown_glyphs_count (::PangoLayout* layout /*none*/);
gint base::LayoutBase::get_unknown_glyphs_count () noexcept
{
  typedef gint (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_unknown_glyphs_count;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return _temp_ret;
}

// int pango_layout_get_width (PangoLayout* layout /*none*/);
// gint pango_layout_get_width (::PangoLayout* layout /*none*/);
gint base::LayoutBase::get_width () noexcept
{
  typedef gint (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_width;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return _temp_ret;
}

// PangoWrapMode pango_layout_get_wrap (PangoLayout* layout /*none*/);
// ::PangoWrapMode pango_layout_get_wrap (::PangoLayout* layout /*none*/);
Pango::WrapMode base::LayoutBase::get_wrap () noexcept
{
  typedef ::PangoWrapMode (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_get_wrap;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return gi::wrap (_temp_ret);
}

// void pango_layout_index_to_line_x (PangoLayout* layout /*none*/, int index_, gboolean trailing, int* line, int* x_pos);
// void pango_layout_index_to_line_x (::PangoLayout* layout /*none*/, gint index_, gboolean trailing, gint* line, gint* x_pos);
void base::LayoutBase::index_to_line_x (gint index_, gboolean trailing, gint * line, gint * x_pos) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, gint index_, gboolean trailing, gint* line, gint* x_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_index_to_line_x;
  gint x_pos_o {};
  gint line_o {};
  auto trailing_to_c = trailing;
  auto index__to_c = index_;
  call_wrap_v ((::PangoLayout*) (gobj_()), (gint) (index__to_c), (gboolean) (trailing_to_c), (gint*) (line ? &line_o : nullptr), (gint*) (x_pos ? &x_pos_o : nullptr));
  if (x_pos) *x_pos = x_pos_o;
  if (line) *line = line_o;
}
std::tuple<gint, gint> base::LayoutBase::index_to_line_x (gint index_, gboolean trailing) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, gint index_, gboolean trailing, gint* line, gint* x_pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_index_to_line_x;
  gint x_pos_o {};
  gint line_o {};
  auto trailing_to_c = trailing;
  auto index__to_c = index_;
  call_wrap_v ((::PangoLayout*) (gobj_()), (gint) (index__to_c), (gboolean) (trailing_to_c), (gint*) (&line_o), (gint*) (&x_pos_o));
  auto &&tmp_return_1 = line_o;
  auto &&tmp_return_2 = x_pos_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void pango_layout_index_to_pos (PangoLayout* layout /*none*/, int index_, PangoRectangle* pos /*none,out,ca*/);
// void pango_layout_index_to_pos (::PangoLayout* layout /*none*/, gint index_, ::PangoRectangle* pos /*none,out,ca*/);
void base::LayoutBase::index_to_pos (gint index_, Pango::Rectangle & pos) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, gint index_, ::PangoRectangle* pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_index_to_pos;
  detail::allocate(pos);
  static_assert(sizeof(::PangoRectangle) == sizeof(*(pos).gobj_()), "");
  auto index__to_c = index_;
  call_wrap_v ((::PangoLayout*) (gobj_()), (gint) (index__to_c), (::PangoRectangle*) ((::PangoRectangle*) (pos).gobj_()));
}
Pango::Rectangle base::LayoutBase::index_to_pos (gint index_) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, gint index_, ::PangoRectangle* pos);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_index_to_pos;
  Pango::Rectangle pos_c;
  auto pos = &pos_c;
  detail::allocate(*pos);
  static_assert(sizeof(::PangoRectangle) == sizeof(*(*pos).gobj_()), "");
  auto index__to_c = index_;
  call_wrap_v ((::PangoLayout*) (gobj_()), (gint) (index__to_c), (::PangoRectangle*) (pos ? (::PangoRectangle*) (*pos).gobj_() : nullptr));
  return pos_c;
}

// gboolean pango_layout_is_ellipsized (PangoLayout* layout /*none*/);
// gboolean pango_layout_is_ellipsized (::PangoLayout* layout /*none*/);
bool base::LayoutBase::is_ellipsized () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_is_ellipsized;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return _temp_ret;
}

// gboolean pango_layout_is_wrapped (PangoLayout* layout /*none*/);
// gboolean pango_layout_is_wrapped (::PangoLayout* layout /*none*/);
bool base::LayoutBase::is_wrapped () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLayout* layout);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_is_wrapped;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()));
  return _temp_ret;
}

// void pango_layout_move_cursor_visually (PangoLayout* layout /*none*/, gboolean strong, int old_index, int old_trailing, int direction, int* new_index, int* new_trailing);
// void pango_layout_move_cursor_visually (::PangoLayout* layout /*none*/, gboolean strong, gint old_index, gint old_trailing, gint direction, gint* new_index, gint* new_trailing);
void base::LayoutBase::move_cursor_visually (gboolean strong, gint old_index, gint old_trailing, gint direction, gint & new_index, gint & new_trailing) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, gboolean strong, gint old_index, gint old_trailing, gint direction, gint* new_index, gint* new_trailing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_move_cursor_visually;
  gint new_trailing_o {};
  gint new_index_o {};
  auto direction_to_c = direction;
  auto old_trailing_to_c = old_trailing;
  auto old_index_to_c = old_index;
  auto strong_to_c = strong;
  call_wrap_v ((::PangoLayout*) (gobj_()), (gboolean) (strong_to_c), (gint) (old_index_to_c), (gint) (old_trailing_to_c), (gint) (direction_to_c), (gint*) (&new_index_o), (gint*) (&new_trailing_o));
  new_trailing = new_trailing_o;
  new_index = new_index_o;
}
std::tuple<gint, gint> base::LayoutBase::move_cursor_visually (gboolean strong, gint old_index, gint old_trailing, gint direction) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, gboolean strong, gint old_index, gint old_trailing, gint direction, gint* new_index, gint* new_trailing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_move_cursor_visually;
  gint new_trailing_o {};
  gint new_index_o {};
  auto direction_to_c = direction;
  auto old_trailing_to_c = old_trailing;
  auto old_index_to_c = old_index;
  auto strong_to_c = strong;
  call_wrap_v ((::PangoLayout*) (gobj_()), (gboolean) (strong_to_c), (gint) (old_index_to_c), (gint) (old_trailing_to_c), (gint) (direction_to_c), (gint*) (&new_index_o), (gint*) (&new_trailing_o));
  auto &&tmp_return_1 = new_index_o;
  auto &&tmp_return_2 = new_trailing_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// GBytes* /*full*/ pango_layout_serialize (PangoLayout* layout /*none*/, PangoLayoutSerializeFlags flags);
// ::GBytes* /*full*/ pango_layout_serialize (::PangoLayout* layout /*none*/, ::PangoLayoutSerializeFlags flags);
GLib::Bytes base::LayoutBase::serialize (Pango::LayoutSerializeFlags flags) noexcept
{
  typedef ::GBytes* (*call_wrap_t) (::PangoLayout* layout, ::PangoLayoutSerializeFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_serialize;
  auto flags_to_c = gi::unwrap (flags);
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()), (::PangoLayoutSerializeFlags) (flags_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void pango_layout_set_alignment (PangoLayout* layout /*none*/, PangoAlignment alignment);
// void pango_layout_set_alignment (::PangoLayout* layout /*none*/, ::PangoAlignment alignment);
void base::LayoutBase::set_alignment (Pango::Alignment alignment) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, ::PangoAlignment alignment);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_set_alignment;
  auto alignment_to_c = gi::unwrap (alignment);
  call_wrap_v ((::PangoLayout*) (gobj_()), (::PangoAlignment) (alignment_to_c));
}

// void pango_layout_set_attributes (PangoLayout* layout /*none*/, PangoAttrList* attrs /*none,nullable*/);
// void pango_layout_set_attributes (::PangoLayout* layout /*none*/, ::PangoAttrList* attrs /*none,nullable*/);
void base::LayoutBase::set_attributes (Pango::AttrList_Ref attrs) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, ::PangoAttrList* attrs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_set_attributes;
  auto attrs_to_c = gi::unwrap (attrs, gi::transfer_none);
  call_wrap_v ((::PangoLayout*) (gobj_()), (::PangoAttrList*) (attrs_to_c));
}
void base::LayoutBase::set_attributes () noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, ::PangoAttrList* attrs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_set_attributes;
  auto attrs_to_c = nullptr;
  call_wrap_v ((::PangoLayout*) (gobj_()), (::PangoAttrList*) (attrs_to_c));
}

// void pango_layout_set_auto_dir (PangoLayout* layout /*none*/, gboolean auto_dir);
// void pango_layout_set_auto_dir (::PangoLayout* layout /*none*/, gboolean auto_dir);
void base::LayoutBase::set_auto_dir (gboolean auto_dir) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, gboolean auto_dir);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_set_auto_dir;
  auto auto_dir_to_c = auto_dir;
  call_wrap_v ((::PangoLayout*) (gobj_()), (gboolean) (auto_dir_to_c));
}

// void pango_layout_set_ellipsize (PangoLayout* layout /*none*/, PangoEllipsizeMode ellipsize);
// void pango_layout_set_ellipsize (::PangoLayout* layout /*none*/, ::PangoEllipsizeMode ellipsize);
void base::LayoutBase::set_ellipsize (Pango::EllipsizeMode ellipsize) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, ::PangoEllipsizeMode ellipsize);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_set_ellipsize;
  auto ellipsize_to_c = gi::unwrap (ellipsize);
  call_wrap_v ((::PangoLayout*) (gobj_()), (::PangoEllipsizeMode) (ellipsize_to_c));
}

// void pango_layout_set_font_description (PangoLayout* layout /*none*/, const PangoFontDescription* desc /*none,nullable*/);
// void pango_layout_set_font_description (::PangoLayout* layout /*none*/, const ::PangoFontDescription* desc /*none,nullable*/);
void base::LayoutBase::set_font_description (const Pango::FontDescription_Ref desc) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_set_font_description;
  auto desc_to_c = gi::unwrap (desc, gi::transfer_none);
  call_wrap_v ((::PangoLayout*) (gobj_()), (const ::PangoFontDescription*) (desc_to_c));
}
void base::LayoutBase::set_font_description () noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, const ::PangoFontDescription* desc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_set_font_description;
  auto desc_to_c = nullptr;
  call_wrap_v ((::PangoLayout*) (gobj_()), (const ::PangoFontDescription*) (desc_to_c));
}

// void pango_layout_set_height (PangoLayout* layout /*none*/, int height);
// void pango_layout_set_height (::PangoLayout* layout /*none*/, gint height);
void base::LayoutBase::set_height (gint height) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, gint height);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_set_height;
  auto height_to_c = height;
  call_wrap_v ((::PangoLayout*) (gobj_()), (gint) (height_to_c));
}

// void pango_layout_set_indent (PangoLayout* layout /*none*/, int indent);
// void pango_layout_set_indent (::PangoLayout* layout /*none*/, gint indent);
void base::LayoutBase::set_indent (gint indent) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, gint indent);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_set_indent;
  auto indent_to_c = indent;
  call_wrap_v ((::PangoLayout*) (gobj_()), (gint) (indent_to_c));
}

// void pango_layout_set_justify (PangoLayout* layout /*none*/, gboolean justify);
// void pango_layout_set_justify (::PangoLayout* layout /*none*/, gboolean justify);
void base::LayoutBase::set_justify (gboolean justify) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, gboolean justify);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_set_justify;
  auto justify_to_c = justify;
  call_wrap_v ((::PangoLayout*) (gobj_()), (gboolean) (justify_to_c));
}

// void pango_layout_set_justify_last_line (PangoLayout* layout /*none*/, gboolean justify);
// void pango_layout_set_justify_last_line (::PangoLayout* layout /*none*/, gboolean justify);
void base::LayoutBase::set_justify_last_line (gboolean justify) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, gboolean justify);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_set_justify_last_line;
  auto justify_to_c = justify;
  call_wrap_v ((::PangoLayout*) (gobj_()), (gboolean) (justify_to_c));
}

// void pango_layout_set_line_spacing (PangoLayout* layout /*none*/, float factor);
// void pango_layout_set_line_spacing (::PangoLayout* layout /*none*/, gfloat factor);
void base::LayoutBase::set_line_spacing (gfloat factor) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, gfloat factor);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_set_line_spacing;
  auto factor_to_c = factor;
  call_wrap_v ((::PangoLayout*) (gobj_()), (gfloat) (factor_to_c));
}

// void pango_layout_set_markup (PangoLayout* layout /*none*/, const char* markup /*none*/, int length);
// void pango_layout_set_markup (::PangoLayout* layout /*none*/, const char* markup /*none*/, gint length);
void base::LayoutBase::set_markup (const gi::cstring_v markup, gint length) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, const char* markup, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_set_markup;
  auto length_to_c = length;
  auto markup_to_c = gi::unwrap (markup, gi::transfer_none);
  call_wrap_v ((::PangoLayout*) (gobj_()), (const char*) (markup_to_c), (gint) (length_to_c));
}

// void pango_layout_set_markup_with_accel (PangoLayout* layout /*none*/, const char* markup /*none*/, int length, gunichar accel_marker, gunichar* accel_char);
// void pango_layout_set_markup_with_accel (::PangoLayout* layout /*none*/, const char* markup /*none*/, gint length, gunichar accel_marker, gunichar* accel_char);
void base::LayoutBase::set_markup_with_accel (const gi::cstring_v markup, gint length, gunichar accel_marker, gunichar * accel_char) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, const char* markup, gint length, gunichar accel_marker, gunichar* accel_char);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_set_markup_with_accel;
  gunichar accel_char_o {};
  auto accel_marker_to_c = accel_marker;
  auto length_to_c = length;
  auto markup_to_c = gi::unwrap (markup, gi::transfer_none);
  call_wrap_v ((::PangoLayout*) (gobj_()), (const char*) (markup_to_c), (gint) (length_to_c), (gunichar) (accel_marker_to_c), (gunichar*) (accel_char ? &accel_char_o : nullptr));
  if (accel_char) *accel_char = accel_char_o;
}
gunichar base::LayoutBase::set_markup_with_accel (const gi::cstring_v markup, gint length, gunichar accel_marker) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, const char* markup, gint length, gunichar accel_marker, gunichar* accel_char);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_set_markup_with_accel;
  gunichar accel_char_o {};
  auto accel_marker_to_c = accel_marker;
  auto length_to_c = length;
  auto markup_to_c = gi::unwrap (markup, gi::transfer_none);
  call_wrap_v ((::PangoLayout*) (gobj_()), (const char*) (markup_to_c), (gint) (length_to_c), (gunichar) (accel_marker_to_c), (gunichar*) (&accel_char_o));
  return accel_char_o;
}

// void pango_layout_set_single_paragraph_mode (PangoLayout* layout /*none*/, gboolean setting);
// void pango_layout_set_single_paragraph_mode (::PangoLayout* layout /*none*/, gboolean setting);
void base::LayoutBase::set_single_paragraph_mode (gboolean setting) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, gboolean setting);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_set_single_paragraph_mode;
  auto setting_to_c = setting;
  call_wrap_v ((::PangoLayout*) (gobj_()), (gboolean) (setting_to_c));
}

// void pango_layout_set_spacing (PangoLayout* layout /*none*/, int spacing);
// void pango_layout_set_spacing (::PangoLayout* layout /*none*/, gint spacing);
void base::LayoutBase::set_spacing (gint spacing) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, gint spacing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_set_spacing;
  auto spacing_to_c = spacing;
  call_wrap_v ((::PangoLayout*) (gobj_()), (gint) (spacing_to_c));
}

// void pango_layout_set_tabs (PangoLayout* layout /*none*/, PangoTabArray* tabs /*none,nullable*/);
// void pango_layout_set_tabs (::PangoLayout* layout /*none*/, ::PangoTabArray* tabs /*none,nullable*/);
void base::LayoutBase::set_tabs (Pango::TabArray_Ref tabs) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, ::PangoTabArray* tabs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_set_tabs;
  auto tabs_to_c = gi::unwrap (tabs, gi::transfer_none);
  call_wrap_v ((::PangoLayout*) (gobj_()), (::PangoTabArray*) (tabs_to_c));
}
void base::LayoutBase::set_tabs () noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, ::PangoTabArray* tabs);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_set_tabs;
  auto tabs_to_c = nullptr;
  call_wrap_v ((::PangoLayout*) (gobj_()), (::PangoTabArray*) (tabs_to_c));
}

// void pango_layout_set_text (PangoLayout* layout /*none*/, const char* text /*none*/, int length);
// void pango_layout_set_text (::PangoLayout* layout /*none*/, const char* text /*none*/, gint length);
void base::LayoutBase::set_text (const gi::cstring_v text, gint length) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, const char* text, gint length);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_set_text;
  auto length_to_c = length;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  call_wrap_v ((::PangoLayout*) (gobj_()), (const char*) (text_to_c), (gint) (length_to_c));
}

// void pango_layout_set_width (PangoLayout* layout /*none*/, int width);
// void pango_layout_set_width (::PangoLayout* layout /*none*/, gint width);
void base::LayoutBase::set_width (gint width) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, gint width);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_set_width;
  auto width_to_c = width;
  call_wrap_v ((::PangoLayout*) (gobj_()), (gint) (width_to_c));
}

// void pango_layout_set_wrap (PangoLayout* layout /*none*/, PangoWrapMode wrap);
// void pango_layout_set_wrap (::PangoLayout* layout /*none*/, ::PangoWrapMode wrap);
void base::LayoutBase::set_wrap (Pango::WrapMode wrap) noexcept
{
  typedef void (*call_wrap_t) (::PangoLayout* layout, ::PangoWrapMode wrap);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_set_wrap;
  auto wrap_to_c = gi::unwrap (wrap);
  call_wrap_v ((::PangoLayout*) (gobj_()), (::PangoWrapMode) (wrap_to_c));
}

// gboolean pango_layout_write_to_file (PangoLayout* layout /*none*/, PangoLayoutSerializeFlags flags, const char* filename /*none*/, GError ** error);
// gboolean pango_layout_write_to_file (::PangoLayout* layout /*none*/, ::PangoLayoutSerializeFlags flags, const char* filename /*none*/, GError ** error);
bool base::LayoutBase::write_to_file (Pango::LayoutSerializeFlags flags, const gi::cstring_v filename)
{
  typedef gboolean (*call_wrap_t) (::PangoLayout* layout, ::PangoLayoutSerializeFlags flags, const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_write_to_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError *error = NULL;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()), (::PangoLayoutSerializeFlags) (flags_to_c), (const char*) (filename_to_c), &error);
  gi::check_error (error);
  return _temp_ret;
}
bool base::LayoutBase::write_to_file (Pango::LayoutSerializeFlags flags, const gi::cstring_v filename, GLib::Error * _error) noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLayout* layout, ::PangoLayoutSerializeFlags flags, const char* filename, GError ** error);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_write_to_file;
  auto filename_to_c = gi::unwrap (filename, gi::transfer_none);
  auto flags_to_c = gi::unwrap (flags);
  GError* _error_o {};
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()), (::PangoLayoutSerializeFlags) (flags_to_c), (const char*) (filename_to_c), _error ? &_error_o : nullptr);
  if (_error) *_error = gi::wrap (_error_o, gi::transfer_full);
  return _temp_ret;
}

// gboolean pango_layout_xy_to_index (PangoLayout* layout /*none*/, int x, int y, int* index_, int* trailing);
// gboolean pango_layout_xy_to_index (::PangoLayout* layout /*none*/, gint x, gint y, gint* index_, gint* trailing);
bool base::LayoutBase::xy_to_index (gint x, gint y, gint & index_, gint & trailing) noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLayout* layout, gint x, gint y, gint* index_, gint* trailing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_xy_to_index;
  gint trailing_o {};
  gint index__o {};
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (gint*) (&index__o), (gint*) (&trailing_o));
  trailing = trailing_o;
  index_ = index__o;
  return _temp_ret;
}
std::tuple<bool, gint, gint> base::LayoutBase::xy_to_index (gint x, gint y) noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoLayout* layout, gint x, gint y, gint* index_, gint* trailing);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_layout_xy_to_index;
  gint trailing_o {};
  gint index__o {};
  auto y_to_c = y;
  auto x_to_c = x;
  auto _temp_ret = call_wrap_v ((::PangoLayout*) (gobj_()), (gint) (x_to_c), (gint) (y_to_c), (gint*) (&index__o), (gint*) (&trailing_o));
  auto &&tmp_return_1 = _temp_ret;
  auto &&tmp_return_2 = index__o;
  auto &&tmp_return_3 = trailing_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2),std::move(tmp_return_3));
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/layout_extra_def_impl.hpp>)
#include <pango/layout_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/layout_extra_impl.hpp>)
#include <pango/layout_extra_impl.hpp>
#endif
#endif

#endif
