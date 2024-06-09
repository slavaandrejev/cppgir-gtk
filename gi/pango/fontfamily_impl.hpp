// AUTO-GENERATED

#ifndef _GI_PANGO_FONTFAMILY_IMPL_HPP_
#define _GI_PANGO_FONTFAMILY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

Gio::ListModel FontFamilyBase::interface_ (gi::interface_tag<Gio::ListModel>)
{ return gi::wrap ((Gio::ListModel::BaseObjectType*) gobj_copy_(), gi::transfer_full); }

FontFamilyBase::operator Gio::ListModel ()
{ return interface_ (gi::interface_tag<Gio::ListModel>()); }

// PangoFontFace* /*none,nullable*/ pango_font_family_get_face (PangoFontFamily* family /*none*/, const char* name /*none,nullable*/);
// ::PangoFontFace* /*none,nullable*/ pango_font_family_get_face (::PangoFontFamily* family /*none*/, const char* name /*none,nullable*/);
Pango::FontFace base::FontFamilyBase::get_face (const gi::cstring_v name) noexcept
{
  typedef ::PangoFontFace* (*call_wrap_t) (::PangoFontFamily* family, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_family_get_face;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoFontFamily*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}
Pango::FontFace base::FontFamilyBase::get_face () noexcept
{
  typedef ::PangoFontFace* (*call_wrap_t) (::PangoFontFamily* family, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_family_get_face;
  auto name_to_c = nullptr;
  auto _temp_ret = call_wrap_v ((::PangoFontFamily*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ pango_font_family_get_name (PangoFontFamily* family /*none*/);
// const char* /*none*/ pango_font_family_get_name (::PangoFontFamily* family /*none*/);
gi::cstring_v base::FontFamilyBase::get_name () noexcept
{
  typedef const char* (*call_wrap_t) (::PangoFontFamily* family);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_family_get_name;
  auto _temp_ret = call_wrap_v ((::PangoFontFamily*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean pango_font_family_is_monospace (PangoFontFamily* family /*none*/);
// gboolean pango_font_family_is_monospace (::PangoFontFamily* family /*none*/);
bool base::FontFamilyBase::is_monospace () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoFontFamily* family);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_family_is_monospace;
  auto _temp_ret = call_wrap_v ((::PangoFontFamily*) (gobj_()));
  return _temp_ret;
}

// gboolean pango_font_family_is_variable (PangoFontFamily* family /*none*/);
// gboolean pango_font_family_is_variable (::PangoFontFamily* family /*none*/);
bool base::FontFamilyBase::is_variable () noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoFontFamily* family);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_family_is_variable;
  auto _temp_ret = call_wrap_v ((::PangoFontFamily*) (gobj_()));
  return _temp_ret;
}

// void pango_font_family_list_faces (PangoFontFamily* family /*none*/, PangoFontFace*** faces /*container,out,opt*/, int* n_faces);
// void pango_font_family_list_faces (::PangoFontFamily* family /*none*/, ::PangoFontFace*** faces /*container,out,opt*/, gint* n_faces);
void base::FontFamilyBase::list_faces (gi::Collection<gi::DSpan, ::PangoFontFace*, gi::transfer_container_t> & faces) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontFamily* family, ::PangoFontFace*** faces, gint* n_faces);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_family_list_faces;
  typedef Pango::FontFace faces_cpptype;
  typedef traits::ctype<faces_cpptype>::type faces_ctype;
  faces_ctype *faces_o;
  gint n_faces;
  call_wrap_v ((::PangoFontFamily*) (gobj_()), (::PangoFontFace***) ((::PangoFontFace***) &faces_o), (gint*) (&n_faces));
  faces = gi::wrap_to<gi::Collection<gi::DSpan, ::PangoFontFace*, gi::transfer_container_t>>(faces_o, n_faces, gi::transfer_container);
}
gi::Collection<gi::DSpan, ::PangoFontFace*, gi::transfer_container_t> base::FontFamilyBase::list_faces () noexcept
{
  typedef void (*call_wrap_t) (::PangoFontFamily* family, ::PangoFontFace*** faces, gint* n_faces);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_font_family_list_faces;
  typedef Pango::FontFace faces_cpptype;
  typedef traits::ctype<faces_cpptype>::type faces_ctype;
  faces_ctype *faces_o;
  gint n_faces;
  call_wrap_v ((::PangoFontFamily*) (gobj_()), (::PangoFontFace***) ((::PangoFontFace***) &faces_o), (gint*) (&n_faces));
  gi::Collection<gi::DSpan, ::PangoFontFace*, gi::transfer_container_t> faces;
  faces = gi::wrap_to<gi::Collection<gi::DSpan, ::PangoFontFace*, gi::transfer_container_t>>(faces_o, n_faces, gi::transfer_container);
  return faces;
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/fontfamily_extra_def_impl.hpp>)
#include <pango/fontfamily_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/fontfamily_extra_impl.hpp>)
#include <pango/fontfamily_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

namespace impl {

namespace internal {

void FontFamilyClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::PangoFontFamilyClass *methods = (::PangoFontFamilyClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_face) methods->get_face = (decltype (methods->get_face)) detail::method_wrapper<self, Pango::FontFace (*) (const gi::cstring_v name), gi::transfer_none_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_face_>;
  if (init_data.get_name) methods->get_name = (decltype (methods->get_name)) detail::method_wrapper<self, gi::cstring_v (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::get_name_>;
  if (init_data.is_monospace) methods->is_monospace = (decltype (methods->is_monospace)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::is_monospace_>;
  if (init_data.is_variable) methods->is_variable = (decltype (methods->is_variable)) detail::method_wrapper<self, bool (*) (), gi::transfer_none_t, std::tuple<>>::wrapper<&self::is_variable_>;
  if (init_data.list_faces) methods->list_faces = (decltype (methods->list_faces)) detail::method_wrapper<self, void (*) (gi::Collection<gi::DSpan, ::PangoFontFace*, gi::transfer_container_t> & faces), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_container_t, false, void, detail::args_index<0, 1>>>, void  (::PangoFontFace*** faces, gint* n_faces)>::wrapper<&self::list_faces_>;
}

// PangoFontFace* /*none,nullable*/ FontFamily::get_face (PangoFontFamily* family /*none*/, const char* name /*none,nullable*/);
// ::PangoFontFace* /*none,nullable*/ FontFamily::get_face (::PangoFontFamily* family /*none*/, const char* name /*none,nullable*/);
Pango::FontFace FontFamilyClass::get_face_ (const gi::cstring_v name) noexcept
{
  if (!get_struct_()->get_face) { g_critical ("no method in class struct"); return {}; }
  typedef ::PangoFontFace* (*call_wrap_t) (::PangoFontFamily* family, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_face;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoFontFamily*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// const char* /*none*/ FontFamily::get_name (PangoFontFamily* family /*none*/);
// const char* /*none*/ FontFamily::get_name (::PangoFontFamily* family /*none*/);
gi::cstring_v FontFamilyClass::get_name_ () noexcept
{
  if (!get_struct_()->get_name) { g_critical ("no method in class struct"); return {}; }
  typedef const char* (*call_wrap_t) (::PangoFontFamily* family);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_name;
  auto _temp_ret = call_wrap_v ((::PangoFontFamily*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// gboolean FontFamily::is_monospace (PangoFontFamily* family /*none*/);
// gboolean FontFamily::is_monospace (::PangoFontFamily* family /*none*/);
bool FontFamilyClass::is_monospace_ () noexcept
{
  if (!get_struct_()->is_monospace) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::PangoFontFamily* family);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_monospace;
  auto _temp_ret = call_wrap_v ((::PangoFontFamily*) (gobj_()));
  return _temp_ret;
}

// gboolean FontFamily::is_variable (PangoFontFamily* family /*none*/);
// gboolean FontFamily::is_variable (::PangoFontFamily* family /*none*/);
bool FontFamilyClass::is_variable_ () noexcept
{
  if (!get_struct_()->is_variable) { g_critical ("no method in class struct"); return {}; }
  typedef gboolean (*call_wrap_t) (::PangoFontFamily* family);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->is_variable;
  auto _temp_ret = call_wrap_v ((::PangoFontFamily*) (gobj_()));
  return _temp_ret;
}

// void FontFamily::list_faces (PangoFontFamily* family /*none*/, PangoFontFace*** faces /*container,out,opt*/, int* n_faces);
// void FontFamily::list_faces (::PangoFontFamily* family /*none*/, ::PangoFontFace*** faces /*container,out,opt*/, gint* n_faces);
void FontFamilyClass::list_faces_ (gi::Collection<gi::DSpan, ::PangoFontFace*, gi::transfer_container_t> & faces) noexcept
{
  if (!get_struct_()->list_faces) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::PangoFontFamily* family, ::PangoFontFace*** faces, gint* n_faces);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->list_faces;
  typedef Pango::FontFace faces_cpptype;
  typedef traits::ctype<faces_cpptype>::type faces_ctype;
  faces_ctype *faces_o;
  gint n_faces;
  call_wrap_v ((::PangoFontFamily*) (gobj_()), (::PangoFontFace***) ((::PangoFontFace***) &faces_o), (gint*) (&n_faces));
  faces = gi::wrap_to<gi::Collection<gi::DSpan, ::PangoFontFace*, gi::transfer_container_t>>(faces_o, n_faces, gi::transfer_container);
}

} // namespace internal

} // namespace impl

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
