// AUTO-GENERATED

#ifndef _GI_GTK_RECENTDATA_HPP_
#define _GI_GTK_RECENTDATA_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class RecentData_Ref;

class RecentData;

namespace base {


#define GI_GTK_RECENTDATA_BASE base::RecentDataBase
class RecentDataBase : public gi::detail::CBoxedWrapperBase<RecentDataBase, ::GtkRecentData>
{
typedef gi::detail::CBoxedWrapperBase<RecentDataBase, ::GtkRecentData> super_type;
public:

RecentDataBase (std::nullptr_t = nullptr) : super_type() {}

// char* /*none*/ RecentData::display_name (const ::GtkRecentData* obj /*none*/);
// char* /*none*/ RecentData::display_name (const ::GtkRecentData* obj /*none*/);
GI_INLINE_DECL gi::cstring_v display_name_ () const noexcept;

// char* /*none*/ RecentData::description (const ::GtkRecentData* obj /*none*/);
// char* /*none*/ RecentData::description (const ::GtkRecentData* obj /*none*/);
GI_INLINE_DECL gi::cstring_v description_ () const noexcept;

// char* /*none*/ RecentData::mime_type (const ::GtkRecentData* obj /*none*/);
// char* /*none*/ RecentData::mime_type (const ::GtkRecentData* obj /*none*/);
GI_INLINE_DECL gi::cstring_v mime_type_ () const noexcept;

// char* /*none*/ RecentData::app_name (const ::GtkRecentData* obj /*none*/);
// char* /*none*/ RecentData::app_name (const ::GtkRecentData* obj /*none*/);
GI_INLINE_DECL gi::cstring_v app_name_ () const noexcept;

// char* /*none*/ RecentData::app_exec (const ::GtkRecentData* obj /*none*/);
// char* /*none*/ RecentData::app_exec (const ::GtkRecentData* obj /*none*/);
GI_INLINE_DECL gi::cstring_v app_exec_ () const noexcept;

// gboolean RecentData::is_private (const ::GtkRecentData* obj /*none*/);
// gboolean RecentData::is_private (const ::GtkRecentData* obj /*none*/);
GI_INLINE_DECL bool is_private_ () const noexcept;

//  RecentData::is_private (::GtkRecentData* obj /*none*/, gboolean _value);
// void RecentData::is_private (::GtkRecentData* obj /*none*/, gboolean _value);
GI_INLINE_DECL void is_private_ (gboolean _value) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/recentdata_extra_def.hpp>)
#include <gtk/recentdata_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/recentdata_extra.hpp>)
#include <gtk/recentdata_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class RecentData_Ref;

class RecentData : public gi::detail::CBoxedWrapper<RecentData, ::GtkRecentData, GI_GTK_RECENTDATA_BASE, RecentData_Ref>
{ typedef gi::detail::CBoxedWrapper<RecentData, ::GtkRecentData, GI_GTK_RECENTDATA_BASE, RecentData_Ref> super_type; using super_type::super_type; };


class RecentData_Ref : public gi::detail::CBoxedRefWrapper<RecentData, ::GtkRecentData, GI_GTK_RECENTDATA_BASE>
{ typedef gi::detail::CBoxedRefWrapper<RecentData, ::GtkRecentData, GI_GTK_RECENTDATA_BASE> super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkRecentData>
{ typedef Gtk::RecentData type; }; 

} // namespace repository

} // namespace gi

#endif
