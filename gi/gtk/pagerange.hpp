// AUTO-GENERATED

#ifndef _GI_GTK_PAGERANGE_HPP_
#define _GI_GTK_PAGERANGE_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class PageRange_Ref;

class PageRange;

namespace base {


#define GI_GTK_PAGERANGE_BASE base::PageRangeBase
class PageRangeBase : public gi::detail::CBoxedWrapperBase<PageRangeBase, ::GtkPageRange>
{
typedef gi::detail::CBoxedWrapperBase<PageRangeBase, ::GtkPageRange> super_type;
public:

PageRangeBase (std::nullptr_t = nullptr) : super_type() {}

// gint PageRange::start (const ::GtkPageRange* obj /*none*/);
// gint PageRange::start (const ::GtkPageRange* obj /*none*/);
GI_INLINE_DECL gint start_ () const noexcept;

//  PageRange::start (::GtkPageRange* obj /*none*/, gint _value);
// void PageRange::start (::GtkPageRange* obj /*none*/, gint _value);
GI_INLINE_DECL void start_ (gint _value) noexcept;

// gint PageRange::end (const ::GtkPageRange* obj /*none*/);
// gint PageRange::end (const ::GtkPageRange* obj /*none*/);
GI_INLINE_DECL gint end_ () const noexcept;

//  PageRange::end (::GtkPageRange* obj /*none*/, gint _value);
// void PageRange::end (::GtkPageRange* obj /*none*/, gint _value);
GI_INLINE_DECL void end_ (gint _value) noexcept;

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/pagerange_extra_def.hpp>)
#include <gtk/pagerange_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/pagerange_extra.hpp>)
#include <gtk/pagerange_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class PageRange_Ref;

class PageRange : public gi::detail::CBoxedWrapper<PageRange, ::GtkPageRange, GI_GTK_PAGERANGE_BASE, PageRange_Ref>
{ typedef gi::detail::CBoxedWrapper<PageRange, ::GtkPageRange, GI_GTK_PAGERANGE_BASE, PageRange_Ref> super_type; using super_type::super_type; };


class PageRange_Ref : public gi::detail::CBoxedRefWrapper<PageRange, ::GtkPageRange, GI_GTK_PAGERANGE_BASE>
{ typedef gi::detail::CBoxedRefWrapper<PageRange, ::GtkPageRange, GI_GTK_PAGERANGE_BASE> super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkPageRange>
{ typedef Gtk::PageRange type; }; 

} // namespace repository

} // namespace gi

#endif
