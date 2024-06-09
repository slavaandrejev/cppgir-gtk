// AUTO-GENERATED

#ifndef _GI_GTK_SECTIONMODEL_IMPL_HPP_
#define _GI_GTK_SECTIONMODEL_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

// void gtk_section_model_get_section (GtkSectionModel* self /*none*/, guint position, guint* out_start, guint* out_end);
// void gtk_section_model_get_section (::GtkSectionModel* self /*none*/, guint position, guint* out_start, guint* out_end);
void base::SectionModelBase::get_section (guint position, guint & out_start, guint & out_end) noexcept
{
  typedef void (*call_wrap_t) (::GtkSectionModel* self, guint position, guint* out_start, guint* out_end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_section_model_get_section;
  guint out_end_o {};
  guint out_start_o {};
  auto position_to_c = position;
  call_wrap_v ((::GtkSectionModel*) (gobj_()), (guint) (position_to_c), (guint*) (&out_start_o), (guint*) (&out_end_o));
  out_end = out_end_o;
  out_start = out_start_o;
}
std::tuple<guint, guint> base::SectionModelBase::get_section (guint position) noexcept
{
  typedef void (*call_wrap_t) (::GtkSectionModel* self, guint position, guint* out_start, guint* out_end);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_section_model_get_section;
  guint out_end_o {};
  guint out_start_o {};
  auto position_to_c = position;
  call_wrap_v ((::GtkSectionModel*) (gobj_()), (guint) (position_to_c), (guint*) (&out_start_o), (guint*) (&out_end_o));
  auto &&tmp_return_1 = out_start_o;
  auto &&tmp_return_2 = out_end_o;
  return std::make_tuple (std::move(tmp_return_1),std::move(tmp_return_2));
}

// void gtk_section_model_sections_changed (GtkSectionModel* self /*none*/, guint position, guint n_items);
// void gtk_section_model_sections_changed (::GtkSectionModel* self /*none*/, guint position, guint n_items);
void base::SectionModelBase::sections_changed (guint position, guint n_items) noexcept
{
  typedef void (*call_wrap_t) (::GtkSectionModel* self, guint position, guint n_items);
  call_wrap_t call_wrap_v = (call_wrap_t) ::gtk_section_model_sections_changed;
  auto n_items_to_c = n_items;
  auto position_to_c = position;
  call_wrap_v ((::GtkSectionModel*) (gobj_()), (guint) (position_to_c), (guint) (n_items_to_c));
}



} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/sectionmodel_extra_def_impl.hpp>)
#include <gtk/sectionmodel_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/sectionmodel_extra_impl.hpp>)
#include <gtk/sectionmodel_extra_impl.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {

void SectionModelInterfaceDef::interface_init (gpointer interface_struct, gpointer factory)
{
  ::GtkSectionModelInterface *methods = (::GtkSectionModelInterface *) interface_struct;
  (void) methods;

  auto init_data = GI_MEMBER_INIT_DATA(TypeInitData, factory);
  (void) init_data;

  if (init_data.get_section) methods->get_section = (decltype (methods->get_section)) detail::method_wrapper<self, void (*) (guint position, guint & out_start, guint & out_end), gi::transfer_full_t, std::tuple<gi::transfer_none_t, gi::transfer_full_t, gi::transfer_full_t>>::wrapper<&self::get_section_>;
}

// void SectionModel::get_section (GtkSectionModel* self /*none*/, guint position, guint* out_start, guint* out_end);
// void SectionModel::get_section (::GtkSectionModel* self /*none*/, guint position, guint* out_start, guint* out_end);
void SectionModelInterfaceClassImpl::get_section_ (guint position, guint & out_start, guint & out_end) noexcept
{
  if (!get_struct_()->get_section) { g_critical ("no method in class struct"); return ; }
  typedef void (*call_wrap_t) (::GtkSectionModel* self, guint position, guint* out_start, guint* out_end);
  call_wrap_t call_wrap_v = (call_wrap_t) get_struct_()->get_section;
  guint out_end_o {};
  guint out_start_o {};
  auto position_to_c = position;
  call_wrap_v ((::GtkSectionModel*) (gobj_()), (guint) (position_to_c), (guint*) (&out_start_o), (guint*) (&out_end_o));
  out_end = out_end_o;
  out_start = out_start_o;
}

} // namespace internal

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
