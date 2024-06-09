// AUTO-GENERATED

#ifndef _GI_PANGO_FONTFACE_IMPL_HPP_
#define _GI_PANGO_FONTFACE_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// PangoFontDescription* /*full*/ pango_font_face_describe (PangoFontFace* face /*none*/);
// ::PangoFontDescription* /*full*/ pango_font_face_describe (::PangoFontFace* face /*none*/);
Pango::FontDescription base::FontFaceBase::describe () noexcept
{
  typedef ::PangoFontDescription* (*call_wrap_t) (::PangoFontFace* face);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_face_describe;
  auto _temp_ret = call_wrap_v ((::PangoFontFace*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const char* /*none*/ pango_font_face_get_face_name (PangoFontFace* face /*none*/);
// const char* /*none*/ pango_font_face_get_face_name (::PangoFontFace* face /*none*/);
gi::cstring_v base::FontFaceBase::get_face_name () noexcept
{
  typedef const char* (*call_wrap_t) (::PangoFontFace* face);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_face_get_face_name;
  auto _temp_ret = call_wrap_v ((::PangoFontFace*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoFontFamily* /*none*/ pango_font_face_get_family (PangoFontFace* face /*none*/);
// ::PangoFontFamily* /*none*/ pango_font_face_get_family (::PangoFontFace* face /*none*/);
Pango::FontFamily base::FontFaceBase::get_family () noexcept
{
  typedef ::PangoFontFamily* (*call_wrap_t) (::PangoFontFace* face);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_face_get_family;
  auto _temp_ret = call_wrap_v ((::PangoFontFace*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean pango_font_face_is_synthesized (PangoFontFace* face /*none*/);
// gboolean pango_font_face_is_synthesized (::PangoFontFace* face /*none*/);
bool base::FontFaceBase::is_synthesized () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoFontFace* face);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_face_is_synthesized;
  auto _temp_ret = call_wrap_v ((::PangoFontFace*) (gobj_()));
  return _temp_ret;
}

// void pango_font_face_list_sizes (PangoFontFace* face /*none*/, int** sizes /*full,out,opt,nullable*/, int* n_sizes);
// void pango_font_face_list_sizes (::PangoFontFace* face /*none*/, gint** sizes /*full,out,opt,nullable*/, gint* n_sizes);
void base::FontFaceBase::list_sizes (gi::Collection<gi::DSpan, gint, gi::transfer_full_t> & sizes) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontFace* face, gint** sizes, gint* n_sizes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_face_list_sizes;
  typedef gint sizes_cpptype;
  typedef traits::ctype<sizes_cpptype>::type sizes_ctype;
  sizes_ctype *sizes_o;
  gint n_sizes;
  call_wrap_v ((::PangoFontFace*) (gobj_()), (gint**) ((gint**) &sizes_o), (gint*) (&n_sizes));
  sizes = gi::wrap_to<gi::Collection<gi::DSpan, gint, gi::transfer_full_t>>(sizes_o, n_sizes, gi::transfer_full);
}
gi::Collection<gi::DSpan, gint, gi::transfer_full_t> base::FontFaceBase::list_sizes () noexcept
{
  typedef void (*call_wrap_t) (::PangoFontFace* face, gint** sizes, gint* n_sizes);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_face_list_sizes;
  typedef gint sizes_cpptype;
  typedef traits::ctype<sizes_cpptype>::type sizes_ctype;
  sizes_ctype *sizes_o;
  gint n_sizes;
  call_wrap_v ((::PangoFontFace*) (gobj_()), (gint**) ((gint**) &sizes_o), (gint*) (&n_sizes));
  gi::Collection<gi::DSpan, gint, gi::transfer_full_t> sizes;
  sizes = gi::wrap_to<gi::Collection<gi::DSpan, gint, gi::transfer_full_t>>(sizes_o, n_sizes, gi::transfer_full);
  return sizes;
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/fontface_extra_def_impl.hpp>)
#include <pango/fontface_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/fontface_extra_impl.hpp>)
#include <pango/fontface_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

namespace impl {

namespace internal {

void FontFaceClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::PangoFontFaceClass *methods = (::PangoFontFaceClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.describe) methods->describe = (decltype (methods->describe)) detail::method_wrapper<self, Pango::FontDescription (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::describe_>;
  if (init_data.get_face_name) methods->get_face_name = (decltype (methods->get_face_name)) detail::method_wrapper<self, gi::cstring_v (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_face_name_>;
  if (init_data.get_family) methods->get_family = (decltype (methods->get_family)) detail::method_wrapper<self, Pango::FontFamily (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_family_>;
  if (init_data.is_synthesized) methods->is_synthesized = (decltype (methods->is_synthesized)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::is_synthesized_>;
  if (init_data.list_sizes) methods->list_sizes = (decltype (methods->list_sizes)) detail::method_wrapper<self, void (*) (gi::Collection<gi::DSpan, gint, gi::transfer_full_t> & sizes), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_full_t, false, void, detail::args_index<0, 1>>>, void  (gint** sizes, gint* n_sizes)>::wrapper<&self::list_sizes_>;
}

// PangoFontDescription* /*full*/ FontFace::describe (PangoFontFace* face /*none*/);
// ::PangoFontDescription* /*full*/ FontFace::describe (::PangoFontFace* face /*none*/);
Pango::FontDescription FontFaceClass::describe_ () noexcept
{
  if (!get_struct_()->describe) { g_critical ("no method in class struct"); return {}; }
  typedef ::PangoFontDescription* (*call_wrap_t) (::PangoFontFace* face);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->describe;
  auto _temp_ret = call_wrap_v ((::PangoFontFace*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const char* /*none*/ FontFace::get_face_name (PangoFontFace* face /*none*/);
// const char* /*none*/ FontFace::get_face_name (::PangoFontFace* face /*none*/);
gi::cstring_v FontFaceClass::get_face_name_ () noexcept
{
  if (!get_struct_()->get_face_name) { g_critical ("no method in class struct"); return {}; }
  typedef const char* (*call_wrap_t) (::PangoFontFace* face);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_face_name;
  auto _temp_ret = call_wrap_v ((::PangoFontFace*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// PangoFontFamily* /*none*/ FontFace::get_family (PangoFontFace* face /*none*/);
// ::PangoFontFamily* /*none*/ FontFace::get_family (::PangoFontFace* face /*none*/);
Pango::FontFamily FontFaceClass::get_family_ () noexcept
{
  if (!get_struct_()->get_family) { g_critical ("no method in class struct"); return {}; }
  typedef ::PangoFontFamily* (*call_wrap_t) (::PangoFontFace* face);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_family;
  auto _temp_ret = call_wrap_v ((::PangoFontFace*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean FontFace::is_synthesized (PangoFontFace* face /*none*/);
// gboolean FontFace::is_synthesized (::PangoFontFace* face /*none*/);
bool FontFaceClass::is_synthesized_ () noexcept
{
  if (!get_struct_()->is_synthesized) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::PangoFontFace* face);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_synthesized;
  auto _temp_ret = call_wrap_v ((::PangoFontFace*) (gobj_()));
  return _temp_ret;
}

// void FontFace::list_sizes (PangoFontFace* face /*none*/, int** sizes /*full,out,opt,nullable*/, int* n_sizes);
// void FontFace::list_sizes (::PangoFontFace* face /*none*/, gint** sizes /*full,out,opt,nullable*/, gint* n_sizes);
void FontFaceClass::list_sizes_ (gi::Collection<gi::DSpan, gint, gi::transfer_full_t> & sizes) noexcept
{
  if (!get_struct_()->list_sizes) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::PangoFontFace* face, gint** sizes, gint* n_sizes);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->list_sizes;
  typedef gint sizes_cpptype;
  typedef traits::ctype<sizes_cpptype>::type sizes_ctype;
  sizes_ctype *sizes_o;
  gint n_sizes;
  call_wrap_v ((::PangoFontFace*) (gobj_()), (gint**) ((gint**) &sizes_o), (gint*) (&n_sizes));
  sizes = gi::wrap_to<gi::Collection<gi::DSpan, gint, gi::transfer_full_t>>(sizes_o, n_sizes, gi::transfer_full);
}

} // namespace internal

} // namespace impl

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
