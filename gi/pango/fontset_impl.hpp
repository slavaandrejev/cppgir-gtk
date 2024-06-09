// AUTO-GENERATED

#ifndef _GI_PANGO_FONTSET_IMPL_HPP_
#define _GI_PANGO_FONTSET_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// void pango_fontset_foreach (PangoFontset* fontset /*none*/, PangoFontsetForeachFunc func /*none*/, gpointer data);
// void pango_fontset_foreach (::PangoFontset* fontset /*none*/, Pango::FontsetForeachFunc::cfunction_type func /*none*/, void* data);
void base::FontsetBase::foreach (Pango::FontsetForeachFunc func) noexcept
{
  typedef void (*call_wrap_t) (::PangoFontset* fontset, Pango::FontsetForeachFunc::cfunction_type func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_fontset_foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  call_wrap_v ((::PangoFontset*) (gobj_()), (Pango::FontsetForeachFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// PangoFont* /*full*/ pango_fontset_get_font (PangoFontset* fontset /*none*/, guint wc);
// ::PangoFont* /*full*/ pango_fontset_get_font (::PangoFontset* fontset /*none*/, guint wc);
Pango::Font base::FontsetBase::get_font (guint wc) noexcept
{
  typedef ::PangoFont* (*call_wrap_t) (::PangoFontset* fontset, guint wc);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_fontset_get_font;
  auto wc_to_c = wc;
  auto _temp_ret = call_wrap_v ((::PangoFontset*) (gobj_()), (guint) (wc_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoFontMetrics* /*full*/ pango_fontset_get_metrics (PangoFontset* fontset /*none*/);
// ::PangoFontMetrics* /*full*/ pango_fontset_get_metrics (::PangoFontset* fontset /*none*/);
Pango::FontMetrics base::FontsetBase::get_metrics () noexcept
{
  typedef ::PangoFontMetrics* (*call_wrap_t) (::PangoFontset* fontset);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_fontset_get_metrics;
  auto _temp_ret = call_wrap_v ((::PangoFontset*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/fontset_extra_def_impl.hpp>)
#include <pango/fontset_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/fontset_extra_impl.hpp>)
#include <pango/fontset_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Pango {

namespace impl {

namespace internal {

void FontsetClassDef::class_init (gpointer class_struct, gpointer factory)
{
  ::PangoFontsetClass *methods = (::PangoFontsetClass *) class_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.foreach) methods->foreach = (decltype (methods->foreach)) detail::method_wrapper<self, void (*) (Pango::FontsetForeachFunc func), gi::transfer_full_t, std::tuple<detail::arg_info<gi::transfer_none_t, false, Pango::internal::FontsetForeachFunc_CB_Trait, detail::args_index<0, 1>>>, void  (Pango::FontsetForeachFunc::cfunction_type func, void* data)>::wrapper<&self::foreach_>;
  if (init_data.get_font) methods->get_font = (decltype (methods->get_font)) detail::method_wrapper<self, Pango::Font (*) (guint wc), gi::transfer_full_t, std::tuple<gi::transfer_none_t>>::wrapper<&self::get_font_>;
  if (init_data.get_language) methods->get_language = (decltype (methods->get_language)) detail::method_wrapper<self, Pango::Language (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_language_>;
  if (init_data.get_metrics) methods->get_metrics = (decltype (methods->get_metrics)) detail::method_wrapper<self, Pango::FontMetrics (*) (), gi::transfer_full_t, std::tuple<>>::wrapper<&self::get_metrics_>;
}

// void Fontset::foreach (PangoFontset* fontset /*none*/, PangoFontsetForeachFunc func /*none*/, gpointer data);
// void Fontset::foreach (::PangoFontset* fontset /*none*/, Pango::FontsetForeachFunc::cfunction_type func /*none*/, void* data);
void FontsetClass::foreach_ (Pango::FontsetForeachFunc func) noexcept
{
  if (!get_struct_()->foreach) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::PangoFontset* fontset, Pango::FontsetForeachFunc::cfunction_type func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->foreach;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  call_wrap_v ((::PangoFontset*) (gobj_()), (Pango::FontsetForeachFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
}

// PangoFont* /*full*/ Fontset::get_font (PangoFontset* fontset /*none*/, guint wc);
// ::PangoFont* /*full*/ Fontset::get_font (::PangoFontset* fontset /*none*/, guint wc);
Pango::Font FontsetClass::get_font_ (guint wc) noexcept
{
  if (!get_struct_()->get_font) { g_critical ("no method in class struct"); return {}; }
  typedef ::PangoFont* (*call_wrap_t) (::PangoFontset* fontset, guint wc);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_font;
  auto wc_to_c = wc;
  auto _temp_ret = call_wrap_v ((::PangoFontset*) (gobj_()), (guint) (wc_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoLanguage* /*full*/ Fontset::get_language (PangoFontset* fontset /*none*/);
// ::PangoLanguage* /*full*/ Fontset::get_language (::PangoFontset* fontset /*none*/);
Pango::Language FontsetClass::get_language_ () noexcept
{
  if (!get_struct_()->get_language) { g_critical ("no method in class struct"); return {}; }
  typedef ::PangoLanguage* (*call_wrap_t) (::PangoFontset* fontset);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_language;
  auto _temp_ret = call_wrap_v ((::PangoFontset*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// PangoFontMetrics* /*full*/ Fontset::get_metrics (PangoFontset* fontset /*none*/);
// ::PangoFontMetrics* /*full*/ Fontset::get_metrics (::PangoFontset* fontset /*none*/);
Pango::FontMetrics FontsetClass::get_metrics_ () noexcept
{
  if (!get_struct_()->get_metrics) { g_critical ("no method in class struct"); return {}; }
  typedef ::PangoFontMetrics* (*call_wrap_t) (::PangoFontset* fontset);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_metrics;
  auto _temp_ret = call_wrap_v ((::PangoFontset*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

} // namespace internal

} // namespace impl

} // namespace Pango

} // namespace repository

} // namespace gi

#endif
