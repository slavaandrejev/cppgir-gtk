// AUTO-GENERATED

#ifndef _GI_GIO_FILEATTRIBUTEINFOLIST_IMPL_HPP_
#define _GI_GIO_FILEATTRIBUTEINFOLIST_IMPL_HPP_

namespace gi {

namespace repository {

namespace Gio {

namespace base {

static ::GFileAttributeInfo* _field_infos_get (const ::GFileAttributeInfoList* obj) { return (::GFileAttributeInfo*) obj->infos; }
// ::GFileAttributeInfo* /*none*/ FileAttributeInfoList::infos (const ::GFileAttributeInfoList* obj /*none*/);
// ::GFileAttributeInfo* /*none*/ FileAttributeInfoList::infos (const ::GFileAttributeInfoList* obj /*none*/);
Gio::FileAttributeInfo_Ref base::FileAttributeInfoListBase::infos_ () const noexcept
{
  typedef ::GFileAttributeInfo* (*call_wrap_t) (const ::GFileAttributeInfoList* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_infos_get;
  auto _temp_ret = call_wrap_v ((const ::GFileAttributeInfoList*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

static gint _field_n_infos_get (const ::GFileAttributeInfoList* obj) { return (gint) obj->n_infos; }
// gint FileAttributeInfoList::n_infos (const ::GFileAttributeInfoList* obj /*none*/);
// gint FileAttributeInfoList::n_infos (const ::GFileAttributeInfoList* obj /*none*/);
gint base::FileAttributeInfoListBase::n_infos_ () const noexcept
{
  typedef gint (*call_wrap_t) (const ::GFileAttributeInfoList* obj);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_n_infos_get;
  auto _temp_ret = call_wrap_v ((const ::GFileAttributeInfoList*) (gobj_()));
  return _temp_ret;
}

static void _field_n_infos_set (::GFileAttributeInfoList* obj, gint _value) { obj->n_infos = (decltype(obj->n_infos)) _value; }
//  FileAttributeInfoList::n_infos (::GFileAttributeInfoList* obj /*none*/, gint _value);
// void FileAttributeInfoList::n_infos (::GFileAttributeInfoList* obj /*none*/, gint _value);
void base::FileAttributeInfoListBase::n_infos_ (gint _value) noexcept
{
  typedef void (*call_wrap_t) (::GFileAttributeInfoList* obj, gint _value);
  call_wrap_t call_wrap_v = (call_wrap_t) _field_n_infos_set;
  auto _value_to_c = _value;
  call_wrap_v ((::GFileAttributeInfoList*) (gobj_()), (gint) (_value_to_c));
}

// GFileAttributeInfoList* /*full*/ g_file_attribute_info_list_new ();
// ::GFileAttributeInfoList* /*full*/ g_file_attribute_info_list_new ();
Gio::FileAttributeInfoList base::FileAttributeInfoListBase::new_ () noexcept
{
  typedef ::GFileAttributeInfoList* (*call_wrap_t) ();
  call_wrap_t call_wrap_v = (call_wrap_t) g_file_attribute_info_list_new;
  auto _temp_ret = call_wrap_v ();
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// void g_file_attribute_info_list_add (GFileAttributeInfoList* list /*none*/, const char* name /*none*/, GFileAttributeType type, GFileAttributeInfoFlags flags);
// void g_file_attribute_info_list_add (::GFileAttributeInfoList* list /*none*/, const char* name /*none*/, ::GFileAttributeType type, ::GFileAttributeInfoFlags flags);
void base::FileAttributeInfoListBase::add (const gi::cstring_v name, Gio::FileAttributeType type, Gio::FileAttributeInfoFlags flags) noexcept
{
  typedef void (*call_wrap_t) (::GFileAttributeInfoList* list, const char* name, ::GFileAttributeType type, ::GFileAttributeInfoFlags flags);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_attribute_info_list_add;
  auto flags_to_c = gi::unwrap (flags);
  auto type_to_c = gi::unwrap (type);
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  call_wrap_v ((::GFileAttributeInfoList*) (gobj_()), (const char*) (name_to_c), (::GFileAttributeType) (type_to_c), (::GFileAttributeInfoFlags) (flags_to_c));
}

// GFileAttributeInfoList* /*full*/ g_file_attribute_info_list_dup (GFileAttributeInfoList* list /*none*/);
// ::GFileAttributeInfoList* /*full*/ g_file_attribute_info_list_dup (::GFileAttributeInfoList* list /*none*/);
Gio::FileAttributeInfoList base::FileAttributeInfoListBase::dup () noexcept
{
  typedef ::GFileAttributeInfoList* (*call_wrap_t) (::GFileAttributeInfoList* list);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_attribute_info_list_dup;
  auto _temp_ret = call_wrap_v ((::GFileAttributeInfoList*) (gobj_()));
  return gi::wrap (_temp_ret, gi::transfer_full);
}

// const GFileAttributeInfo* /*none*/ g_file_attribute_info_list_lookup (GFileAttributeInfoList* list /*none*/, const char* name /*none*/);
// const ::GFileAttributeInfo* /*none*/ g_file_attribute_info_list_lookup (::GFileAttributeInfoList* list /*none*/, const char* name /*none*/);
Gio::FileAttributeInfo_Ref base::FileAttributeInfoListBase::lookup (const gi::cstring_v name) noexcept
{
  typedef const ::GFileAttributeInfo* (*call_wrap_t) (::GFileAttributeInfoList* list, const char* name);
  call_wrap_t call_wrap_v = (call_wrap_t) ::g_file_attribute_info_list_lookup;
  auto name_to_c = gi::unwrap (name, gi::transfer_none);
  auto _temp_ret = call_wrap_v ((::GFileAttributeInfoList*) (gobj_()), (const char*) (name_to_c));
  return gi::wrap (_temp_ret, gi::transfer_none);
}

// GFileAttributeInfoList* /*full*/ g_file_attribute_info_list_ref (GFileAttributeInfoList* list /*none*/);
// ::GFileAttributeInfoList* /*full*/ g_file_attribute_info_list_ref (::GFileAttributeInfoList* list /*none*/);
// IGNORE; marked ignore

// void g_file_attribute_info_list_unref (GFileAttributeInfoList* list /*none*/);
// void g_file_attribute_info_list_unref (::GFileAttributeInfoList* list /*none*/);
// IGNORE; marked ignore


} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/fileattributeinfolist_extra_def_impl.hpp>)
#include <gio/fileattributeinfolist_extra_def_impl.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/fileattributeinfolist_extra_impl.hpp>)
#include <gio/fileattributeinfolist_extra_impl.hpp>
#endif
#endif

#endif
