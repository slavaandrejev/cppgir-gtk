// AUTO-GENERATED

#ifndef _GI_PANGO_ATTRLIST_IMPL_HPP_
#define _GI_PANGO_ATTRLIST_IMPL_HPP_

namespace gi {

namespace repository {

namespace Pango {

namespace base {

// PangoAttrList* /*full*/ pango_attr_list_new ();
// ::PangoAttrList* /*full*/ pango_attr_list_new ();
Pango::AttrList base::AttrListBase::new_ () noexcept
{
  typedef ::PangoAttrList* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) pango_attr_list_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void pango_attr_list_change (PangoAttrList* list /*none*/, PangoAttribute* attr /*full*/);
// void pango_attr_list_change (::PangoAttrList* list /*none*/, ::PangoAttribute* attr /*full*/);
void base::AttrListBase::change (Pango::Attribute attr) noexcept
{
  typedef void (*call_wrap_t) (::PangoAttrList* list, ::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_list_change;
  auto attr_to_c = gi::unwrap (std::move(attr), gi::transfer_full);
  call_wrap_v ((::PangoAttrList*) (gobj_()), (::PangoAttribute*) (attr_to_c));
}

// PangoAttrList* /*full,nullable*/ pango_attr_list_copy (PangoAttrList* list /*none,nullable*/);
// ::PangoAttrList* /*full,nullable*/ pango_attr_list_copy (::PangoAttrList* list /*none,nullable*/);
Pango::AttrList base::AttrListBase::copy () noexcept
{
  typedef ::PangoAttrList* (*call_wrap_t) (::PangoAttrList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_list_copy;
  auto _temp_ret = call_wrap_v ((::PangoAttrList*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// gboolean pango_attr_list_equal (PangoAttrList* list /*none*/, PangoAttrList* other_list /*none*/);
// gboolean pango_attr_list_equal (::PangoAttrList* list /*none*/, ::PangoAttrList* other_list /*none*/);
bool base::AttrListBase::equal (Pango::AttrList_Ref other_list) noexcept
{
  typedef gboolean (*call_wrap_t) (::PangoAttrList* list, ::PangoAttrList* other_list);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_list_equal;
  auto other_list_to_c = gi::unwrap (other_list, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::PangoAttrList*) (gobj_()), (::PangoAttrList*) (other_list_to_c));
  return _temp_ret;
}

// PangoAttrList* /*full,nullable*/ pango_attr_list_filter (PangoAttrList* list /*none*/, PangoAttrFilterFunc func /*none*/, gpointer data);
// ::PangoAttrList* /*full,nullable*/ pango_attr_list_filter (::PangoAttrList* list /*none*/, Pango::AttrFilterFunc::cfunction_type func /*none*/, void* data);
Pango::AttrList base::AttrListBase::filter (Pango::AttrFilterFunc func) noexcept
{
  typedef ::PangoAttrList* (*call_wrap_t) (::PangoAttrList* list, Pango::AttrFilterFunc::cfunction_type func, void* data);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_list_filter;
  auto func_wrap_ = func ? unwrap (std::move (func), gi::scope_call) : nullptr;
  std::unique_ptr<std::remove_pointer<decltype(func_wrap_)>::type> func_wrap__sp (func_wrap_);
  auto _temp_ret = call_wrap_v ((::PangoAttrList*) (gobj_()), (Pango::AttrFilterFunc::cfunction_type) (func_wrap_ ? &func_wrap_->wrapper : nullptr), (void*) (func_wrap_));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// GSList* /*full*/ pango_attr_list_get_attributes (PangoAttrList* list /*none*/);
// ::GSList* /*full*/ pango_attr_list_get_attributes (::PangoAttrList* list /*none*/);
gi::Collection<GSList, ::PangoAttribute*, gi::transfer_full_t> base::AttrListBase::get_attributes () noexcept
{
  typedef ::GSList* (*call_wrap_t) (::PangoAttrList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_list_get_attributes;
  auto _temp_ret = call_wrap_v ((::PangoAttrList*) (gobj_()));
  return gi::wrap_to<gi::Collection<GSList, ::PangoAttribute*, gi::transfer_full_t>>(_temp_ret, gi::transfer_full);
}

// PangoAttrIterator* /*full*/ pango_attr_list_get_iterator (PangoAttrList* list /*none*/);
// ::PangoAttrIterator* /*full*/ pango_attr_list_get_iterator (::PangoAttrList* list /*none*/);
Pango::AttrIterator base::AttrListBase::get_iterator () noexcept
{
  typedef ::PangoAttrIterator* (*call_wrap_t) (::PangoAttrList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_list_get_iterator;
  auto _temp_ret = call_wrap_v ((::PangoAttrList*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void pango_attr_list_insert (PangoAttrList* list /*none*/, PangoAttribute* attr /*full*/);
// void pango_attr_list_insert (::PangoAttrList* list /*none*/, ::PangoAttribute* attr /*full*/);
void base::AttrListBase::insert (Pango::Attribute attr) noexcept
{
  typedef void (*call_wrap_t) (::PangoAttrList* list, ::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_list_insert;
  auto attr_to_c = gi::unwrap (std::move(attr), gi::transfer_full);
  call_wrap_v ((::PangoAttrList*) (gobj_()), (::PangoAttribute*) (attr_to_c));
}

// void pango_attr_list_insert_before (PangoAttrList* list /*none*/, PangoAttribute* attr /*full*/);
// void pango_attr_list_insert_before (::PangoAttrList* list /*none*/, ::PangoAttribute* attr /*full*/);
void base::AttrListBase::insert_before (Pango::Attribute attr) noexcept
{
  typedef void (*call_wrap_t) (::PangoAttrList* list, ::PangoAttribute* attr);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_list_insert_before;
  auto attr_to_c = gi::unwrap (std::move(attr), gi::transfer_full);
  call_wrap_v ((::PangoAttrList*) (gobj_()), (::PangoAttribute*) (attr_to_c));
}

// PangoAttrList* /*full*/ pango_attr_list_ref (PangoAttrList* list /*none,nullable*/);
// ::PangoAttrList* /*full*/ pango_attr_list_ref (::PangoAttrList* list /*none,nullable*/);
// IGNORE; marked ignore

// void pango_attr_list_splice (PangoAttrList* list /*none*/, PangoAttrList* other /*none*/, int pos, int len);
// void pango_attr_list_splice (::PangoAttrList* list /*none*/, ::PangoAttrList* other /*none*/, gint pos, gint len);
void base::AttrListBase::splice (Pango::AttrList_Ref other, gint pos, gint len) noexcept
{
  typedef void (*call_wrap_t) (::PangoAttrList* list, ::PangoAttrList* other, gint pos, gint len);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_list_splice;
  auto len_to_c = len;
  auto pos_to_c = pos;
  auto other_to_c = gi::unwrap (other, gi::transfer_none);
  call_wrap_v ((::PangoAttrList*) (gobj_()), (::PangoAttrList*) (other_to_c), (gint) (pos_to_c), (gint) (len_to_c));
}

// char* /*full*/ pango_attr_list_to_string (PangoAttrList* list /*none*/);
// char* /*full*/ pango_attr_list_to_string (::PangoAttrList* list /*none*/);
gi::cstring base::AttrListBase::to_string () noexcept
{
  typedef char* (*call_wrap_t) (::PangoAttrList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_list_to_string;
  auto _temp_ret = call_wrap_v ((::PangoAttrList*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void pango_attr_list_unref (PangoAttrList* list /*none,nullable*/);
// void pango_attr_list_unref (::PangoAttrList* list /*none,nullable*/);
// IGNORE; marked ignore

// void pango_attr_list_update (PangoAttrList* list /*none*/, int pos, int remove, int add);
// void pango_attr_list_update (::PangoAttrList* list /*none*/, gint pos, gint remove, gint add);
void base::AttrListBase::update (gint pos, gint remove, gint add) noexcept
{
  typedef void (*call_wrap_t) (::PangoAttrList* list, gint pos, gint remove, gint add);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_list_update;
  auto add_to_c = add;
  auto remove_to_c = remove;
  auto pos_to_c = pos;
  call_wrap_v ((::PangoAttrList*) (gobj_()), (gint) (pos_to_c), (gint) (remove_to_c), (gint) (add_to_c));
}

// PangoAttrList* /*full,nullable*/ pango_attr_list_from_string (const char* text /*none*/);
// ::PangoAttrList* /*full,nullable*/ pango_attr_list_from_string (const char* text /*none*/);
Pango::AttrList base::AttrListBase::from_string (const gi::cstring_v text) noexcept
{
  typedef ::PangoAttrList* (*call_wrap_t) (const char* text);
  call_wrap_t call_wrap_v = (call_wrap_t) ::pango_attr_list_from_string;
  auto text_to_c = gi::unwrap (text, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((const char*) (text_to_c));
  return gi::wrap (_temp_ret, gi::transfer_full);
}


} // namespace base

} // namespace Pango

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<pango/attrlist_extra_def_impl.hpp>)
#include <pango/attrlist_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<pango/attrlist_extra_impl.hpp>)
#include <pango/attrlist_extra_impl.hpp>
#endif
#endif

#endif
