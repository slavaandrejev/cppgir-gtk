// AUTO-GENERATED

#ifndef _GI_GTK_SCROLLINFO_HPP_
#define _GI_GTK_SCROLLINFO_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class ScrollInfo_Ref;

class ScrollInfo;

namespace base {


#define GI_GTK_SCROLLINFO_BASE base::ScrollInfoBase
class ScrollInfoBase : public gi::detail::GBoxedWrapperBase<ScrollInfoBase, ::GtkScrollInfo>
{
typedef gi::detail::GBoxedWrapperBase<ScrollInfoBase, ::GtkScrollInfo> super_type;
public:

ScrollInfoBase (std::nullptr_t = nullptr) : super_type() {}

static GType get_type_ () G_GNUC_CONST { return gtk_scroll_info_get_type(); } 

// GtkScrollInfo* /*full*/ gtk_scroll_info_new ();
// ::GtkScrollInfo* /*full*/ gtk_scroll_info_new ();
static GI_INLINE_DECL Gtk::ScrollInfo new_ () noexcept;

// gboolean gtk_scroll_info_get_enable_horizontal (GtkScrollInfo* self /*none*/);
// gboolean gtk_scroll_info_get_enable_horizontal (::GtkScrollInfo* self /*none*/);
GI_INLINE_DECL bool get_enable_horizontal () noexcept;

// gboolean gtk_scroll_info_get_enable_vertical (GtkScrollInfo* self /*none*/);
// gboolean gtk_scroll_info_get_enable_vertical (::GtkScrollInfo* self /*none*/);
GI_INLINE_DECL bool get_enable_vertical () noexcept;

// GtkScrollInfo* /*full*/ gtk_scroll_info_ref (GtkScrollInfo* self /*none*/);
// ::GtkScrollInfo* /*full*/ gtk_scroll_info_ref (::GtkScrollInfo* self /*none*/);
// IGNORE; marked ignore

// void gtk_scroll_info_set_enable_horizontal (GtkScrollInfo* self /*none*/, gboolean horizontal);
// void gtk_scroll_info_set_enable_horizontal (::GtkScrollInfo* self /*none*/, gboolean horizontal);
GI_INLINE_DECL void set_enable_horizontal (gboolean horizontal) noexcept;

// void gtk_scroll_info_set_enable_vertical (GtkScrollInfo* self /*none*/, gboolean vertical);
// void gtk_scroll_info_set_enable_vertical (::GtkScrollInfo* self /*none*/, gboolean vertical);
GI_INLINE_DECL void set_enable_vertical (gboolean vertical) noexcept;

// void gtk_scroll_info_unref (GtkScrollInfo* self /*none*/);
// void gtk_scroll_info_unref (::GtkScrollInfo* self /*none*/);
// IGNORE; marked ignore

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/scrollinfo_extra_def.hpp>)
#include <gtk/scrollinfo_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/scrollinfo_extra.hpp>)
#include <gtk/scrollinfo_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class ScrollInfo_Ref;

class ScrollInfo : public gi::detail::GBoxedWrapper<ScrollInfo, ::GtkScrollInfo, GI_GTK_SCROLLINFO_BASE, ScrollInfo_Ref>
{ typedef gi::detail::GBoxedWrapper<ScrollInfo, ::GtkScrollInfo, GI_GTK_SCROLLINFO_BASE, ScrollInfo_Ref> super_type; using super_type::super_type; };


class ScrollInfo_Ref : public gi::detail::GBoxedRefWrapper<ScrollInfo, ::GtkScrollInfo, GI_GTK_SCROLLINFO_BASE>
{ typedef gi::detail::GBoxedRefWrapper<ScrollInfo, ::GtkScrollInfo, GI_GTK_SCROLLINFO_BASE> super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkScrollInfo>
{ typedef Gtk::ScrollInfo type; }; 

} // namespace repository

} // namespace gi

#endif
