// AUTO-GENERATED

#ifndef _GI_GTK_PADACTIONENTRY_IMPL_HPP_
#define _GI_GTK_PADACTIONENTRY_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gtk {

namespace base {

static ::GtkPadActionType _field_type_get (const ::GtkPadActionEntry* obj) { return (::GtkPadActionType) obj->type; }
// ::GtkPadActionType PadActionEntry::type (const ::GtkPadActionEntry* obj /*none*/);
// ::GtkPadActionType PadActionEntry::type (const ::GtkPadActionEntry* obj /*none*/);
Gtk::PadActionType base::PadActionEntryBase::type_ () const noexcept
{
  typedef ::GtkPadActionType (*call_wrap_t) (const ::GtkPadActionEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_get;
  auto _temp_ret = call_wrap_v ((const ::GtkPadActionEntry*) (gobj_()));
  return gi::wrap (_temp_ret);
}

static void _field_type_set (::GtkPadActionEntry* obj, ::GtkPadActionType _value) { obj->type = (decltype(obj->type)) _value; }
//  PadActionEntry::type (::GtkPadActionEntry* obj /*none*/, ::GtkPadActionType _value);
// void PadActionEntry::type (::GtkPadActionEntry* obj /*none*/, ::GtkPadActionType _value);
void base::PadActionEntryBase::type_ (Gtk::PadActionType _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkPadActionEntry* obj, ::GtkPadActionType _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_type_set;
  auto _value_to_c = gi::unwrap (_value);
  call_wrap_v ((::GtkPadActionEntry*) (gobj_()), (::GtkPadActionType) (_value_to_c));
}

static gint _field_index_get (const ::GtkPadActionEntry* obj) { return (gint) obj->index; }
// gint PadActionEntry::index (const ::GtkPadActionEntry* obj /*none*/);
// gint PadActionEntry::index (const ::GtkPadActionEntry* obj /*none*/);
gint base::PadActionEntryBase::index_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkPadActionEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_index_get;
  auto _temp_ret = call_wrap_v ((const ::GtkPadActionEntry*) (gobj_()));
  return _temp_ret;
}

static void _field_index_set (::GtkPadActionEntry* obj, gint _value) { obj->index = (decltype(obj->index)) _value; }
//  PadActionEntry::index (::GtkPadActionEntry* obj /*none*/, gint _value);
// void PadActionEntry::index (::GtkPadActionEntry* obj /*none*/, gint _value);
void base::PadActionEntryBase::index_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkPadActionEntry* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_index_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkPadActionEntry*) (gobj_()), (gint) (_value_to_c));
}

static gint _field_mode_get (const ::GtkPadActionEntry* obj) { return (gint) obj->mode; }
// gint PadActionEntry::mode (const ::GtkPadActionEntry* obj /*none*/);
// gint PadActionEntry::mode (const ::GtkPadActionEntry* obj /*none*/);
gint base::PadActionEntryBase::mode_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GtkPadActionEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_mode_get;
  auto _temp_ret = call_wrap_v ((const ::GtkPadActionEntry*) (gobj_()));
  return _temp_ret;
}

static void _field_mode_set (::GtkPadActionEntry* obj, gint _value) { obj->mode = (decltype(obj->mode)) _value; }
//  PadActionEntry::mode (::GtkPadActionEntry* obj /*none*/, gint _value);
// void PadActionEntry::mode (::GtkPadActionEntry* obj /*none*/, gint _value);
void base::PadActionEntryBase::mode_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GtkPadActionEntry* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_mode_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GtkPadActionEntry*) (gobj_()), (gint) (_value_to_c));
}

static const char* _field_label_get (const ::GtkPadActionEntry* obj) { return (const char*) obj->label; }
// const char* /*none*/ PadActionEntry::label (const ::GtkPadActionEntry* obj /*none*/);
// const char* /*none*/ PadActionEntry::label (const ::GtkPadActionEntry* obj /*none*/);
gi::cstring_v base::PadActionEntryBase::label_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GtkPadActionEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_label_get;
  auto _temp_ret = call_wrap_v ((const ::GtkPadActionEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static const char* _field_action_name_get (const ::GtkPadActionEntry* obj) { return (const char*) obj->action_name; }
// const char* /*none*/ PadActionEntry::action_name (const ::GtkPadActionEntry* obj /*none*/);
// const char* /*none*/ PadActionEntry::action_name (const ::GtkPadActionEntry* obj /*none*/);
gi::cstring_v base::PadActionEntryBase::action_name_ () const noexcept
{
  typedef const char* (*call_wrap_t) (const ::GtkPadActionEntry* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_action_name_get;
  auto _temp_ret = call_wrap_v ((const ::GtkPadActionEntry*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}


} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/padactionentry_extra_def_impl.hpp>)
#include <gtk/padactionentry_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/padactionentry_extra_impl.hpp>)
#include <gtk/padactionentry_extra_impl.hpp>
#endif
#endif

#endif
