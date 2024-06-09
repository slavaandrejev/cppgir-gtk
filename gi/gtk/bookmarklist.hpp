// AUTO-GENERATED

#ifndef _GI_GTK_BOOKMARKLIST_HPP_
#define _GI_GTK_BOOKMARKLIST_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class BookmarkList;

namespace base {


#define GI_GTK_BOOKMARKLIST_BASE base::BookmarkListBase
class BookmarkListBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkBookmarkList BaseObjectType;

BookmarkListBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_bookmark_list_get_type(); } 

GI_INLINE_DECL Gio::ListModel interface_ (gi::interface_tag<Gio::ListModel>);

GI_INLINE_DECL operator Gio::ListModel ();

// GtkBookmarkList* /*full*/ gtk_bookmark_list_new (const char* filename /*none,nullable*/, const char* attributes /*none,nullable*/);
// ::GtkBookmarkList* /*full*/ gtk_bookmark_list_new (const char* filename /*none,nullable*/, const char* attributes /*none,nullable*/);
static GI_INLINE_DECL Gtk::BookmarkList new_ (const gi::cstring_v filename, const gi::cstring_v attributes) noexcept;
static GI_INLINE_DECL Gtk::BookmarkList new_ () noexcept;

// const char* /*none,nullable*/ gtk_bookmark_list_get_attributes (GtkBookmarkList* self /*none*/);
// const char* /*none,nullable*/ gtk_bookmark_list_get_attributes (::GtkBookmarkList* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_attributes () noexcept;

// const char* /*none*/ gtk_bookmark_list_get_filename (GtkBookmarkList* self /*none*/);
// const char* /*none*/ gtk_bookmark_list_get_filename (::GtkBookmarkList* self /*none*/);
GI_INLINE_DECL gi::cstring_v get_filename () noexcept;

// int gtk_bookmark_list_get_io_priority (GtkBookmarkList* self /*none*/);
// gint gtk_bookmark_list_get_io_priority (::GtkBookmarkList* self /*none*/);
GI_INLINE_DECL gint get_io_priority () noexcept;

// gboolean gtk_bookmark_list_is_loading (GtkBookmarkList* self /*none*/);
// gboolean gtk_bookmark_list_is_loading (::GtkBookmarkList* self /*none*/);
GI_INLINE_DECL bool is_loading () noexcept;

// void gtk_bookmark_list_set_attributes (GtkBookmarkList* self /*none*/, const char* attributes /*none,nullable*/);
// void gtk_bookmark_list_set_attributes (::GtkBookmarkList* self /*none*/, const char* attributes /*none,nullable*/);
GI_INLINE_DECL void set_attributes (const gi::cstring_v attributes) noexcept;
GI_INLINE_DECL void set_attributes () noexcept;

// void gtk_bookmark_list_set_io_priority (GtkBookmarkList* self /*none*/, int io_priority);
// void gtk_bookmark_list_set_io_priority (::GtkBookmarkList* self /*none*/, gint io_priority);
GI_INLINE_DECL void set_io_priority (gint io_priority) noexcept;

gi::property_proxy<gi::cstring, base::BookmarkListBase> property_attributes()
{ return gi::property_proxy<gi::cstring, base::BookmarkListBase> (*this, "attributes"); }
const gi::property_proxy<gi::cstring, base::BookmarkListBase> property_attributes() const
{ return gi::property_proxy<gi::cstring, base::BookmarkListBase> (*this, "attributes"); }

gi::property_proxy<gi::cstring, base::BookmarkListBase> property_filename()
{ return gi::property_proxy<gi::cstring, base::BookmarkListBase> (*this, "filename"); }
const gi::property_proxy<gi::cstring, base::BookmarkListBase> property_filename() const
{ return gi::property_proxy<gi::cstring, base::BookmarkListBase> (*this, "filename"); }

gi::property_proxy<gint, base::BookmarkListBase> property_io_priority()
{ return gi::property_proxy<gint, base::BookmarkListBase> (*this, "io-priority"); }
const gi::property_proxy<gint, base::BookmarkListBase> property_io_priority() const
{ return gi::property_proxy<gint, base::BookmarkListBase> (*this, "io-priority"); }

gi::property_proxy<GType, base::BookmarkListBase> property_item_type()
{ return gi::property_proxy<GType, base::BookmarkListBase> (*this, "item-type"); }
const gi::property_proxy<GType, base::BookmarkListBase> property_item_type() const
{ return gi::property_proxy<GType, base::BookmarkListBase> (*this, "item-type"); }

gi::property_proxy<bool, base::BookmarkListBase> property_loading()
{ return gi::property_proxy<bool, base::BookmarkListBase> (*this, "loading"); }
const gi::property_proxy<bool, base::BookmarkListBase> property_loading() const
{ return gi::property_proxy<bool, base::BookmarkListBase> (*this, "loading"); }

gi::property_proxy<guint, base::BookmarkListBase> property_n_items()
{ return gi::property_proxy<guint, base::BookmarkListBase> (*this, "n-items"); }
const gi::property_proxy<guint, base::BookmarkListBase> property_n_items() const
{ return gi::property_proxy<guint, base::BookmarkListBase> (*this, "n-items"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/bookmarklist_extra_def.hpp>)
#include <gtk/bookmarklist_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/bookmarklist_extra.hpp>)
#include <gtk/bookmarklist_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class BookmarkList : public GI_GTK_BOOKMARKLIST_BASE
{ typedef GI_GTK_BOOKMARKLIST_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkBookmarkList>
{ typedef Gtk::BookmarkList type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class BookmarkListClassDef
{
typedef BookmarkListClassDef self;
public:
typedef Gtk::BookmarkList instance_type;
typedef ::GtkBookmarkListClass class_type;


struct TypeInitData;

protected:
GI_INLINE_DECL ~BookmarkListClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );


};

GI_CLASS_IMPL_BEGIN


class BookmarkListClass: public detail::ClassTemplate<Gtk::impl::internal::BookmarkListClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl>
{
friend class internal::BookmarkListClassDef;
typedef BookmarkListClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::BookmarkListClassDef, GObject::impl::internal::ObjectClass, Gio::impl::internal::ListModelInterfaceClassImpl> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types
typedef Gio::impl::internal::ListModelInterfaceClassImpl GListModelInterface_type;



};


struct BookmarkListClassDef::TypeInitData
{

template<typename SubClass>
constexpr static TypeInitData factory()
{
  // using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {

  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using BookmarkListImpl = detail::ObjectImpl<BookmarkList, internal::BookmarkListClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
