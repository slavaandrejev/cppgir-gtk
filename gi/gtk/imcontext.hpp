// AUTO-GENERATED

#ifndef _GI_GTK_IMCONTEXT_HPP_
#define _GI_GTK_IMCONTEXT_HPP_


namespace gi {

namespace repository {

namespace Gtk {

class Widget;

class IMContext;

namespace base {


#define GI_GTK_IMCONTEXT_BASE base::IMContextBase
class IMContextBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GtkIMContext BaseObjectType;

IMContextBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return gtk_im_context_get_type(); } 

// gboolean gtk_im_context_delete_surrounding (GtkIMContext* context /*none*/, int offset, int n_chars);
// gboolean gtk_im_context_delete_surrounding (::GtkIMContext* context /*none*/, gint offset, gint n_chars);
GI_INLINE_DECL bool delete_surrounding (gint offset, gint n_chars) noexcept;

// gboolean gtk_im_context_filter_key (GtkIMContext* context /*none*/, gboolean press, GdkSurface* surface /*none*/, GdkDevice* device /*none*/, guint32 time, guint keycode, GdkModifierType state, int group);
// gboolean gtk_im_context_filter_key (::GtkIMContext* context /*none*/, gboolean press, ::GdkSurface* surface /*none*/, ::GdkDevice* device /*none*/, guint32 time, guint keycode, ::GdkModifierType state, gint group);
GI_INLINE_DECL bool filter_key (gboolean press, Gdk::Surface surface, Gdk::Device device, guint32 time, guint keycode, Gdk::ModifierType state, gint group) noexcept;

// gboolean gtk_im_context_filter_keypress (GtkIMContext* context /*none*/, GdkEvent* event /*none*/);
// gboolean gtk_im_context_filter_keypress (::GtkIMContext* context /*none*/,  event /*none*/);
// SKIP; event type  not supported

// void gtk_im_context_focus_in (GtkIMContext* context /*none*/);
// void gtk_im_context_focus_in (::GtkIMContext* context /*none*/);
GI_INLINE_DECL void focus_in () noexcept;

// void gtk_im_context_focus_out (GtkIMContext* context /*none*/);
// void gtk_im_context_focus_out (::GtkIMContext* context /*none*/);
GI_INLINE_DECL void focus_out () noexcept;

// void gtk_im_context_get_preedit_string (GtkIMContext* context /*none*/, char** str /*full,out*/, PangoAttrList** attrs /*full,out*/, int* cursor_pos);
// void gtk_im_context_get_preedit_string (::GtkIMContext* context /*none*/, char** str /*full,out*/, ::PangoAttrList** attrs /*full,out*/, gint* cursor_pos);
GI_INLINE_DECL void get_preedit_string (gi::cstring & str, Pango::AttrList & attrs, gint & cursor_pos) noexcept;
GI_INLINE_DECL std::tuple<gi::cstring, Pango::AttrList, gint> get_preedit_string () noexcept;

// gboolean gtk_im_context_get_surrounding (GtkIMContext* context /*none*/, char** text /*full,out*/, int* cursor_index);
// gboolean gtk_im_context_get_surrounding (::GtkIMContext* context /*none*/, char** text /*full,out*/, gint* cursor_index);
GI_INLINE_DECL bool get_surrounding (gi::cstring & text, gint & cursor_index) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring, gint> get_surrounding () noexcept;

// gboolean gtk_im_context_get_surrounding_with_selection (GtkIMContext* context /*none*/, char** text /*full,out*/, int* cursor_index, int* anchor_index);
// gboolean gtk_im_context_get_surrounding_with_selection (::GtkIMContext* context /*none*/, char** text /*full,out*/, gint* cursor_index, gint* anchor_index);
GI_INLINE_DECL bool get_surrounding_with_selection (gi::cstring & text, gint & cursor_index, gint & anchor_index) noexcept;
GI_INLINE_DECL std::tuple<bool, gi::cstring, gint, gint> get_surrounding_with_selection () noexcept;

// void gtk_im_context_reset (GtkIMContext* context /*none*/);
// void gtk_im_context_reset (::GtkIMContext* context /*none*/);
GI_INLINE_DECL void reset () noexcept;

// void gtk_im_context_set_client_widget (GtkIMContext* context /*none*/, GtkWidget* widget /*none,nullable*/);
// void gtk_im_context_set_client_widget (::GtkIMContext* context /*none*/, ::GtkWidget* widget /*none,nullable*/);
GI_INLINE_DECL void set_client_widget (Gtk::Widget widget) noexcept;
GI_INLINE_DECL void set_client_widget () noexcept;

// void gtk_im_context_set_cursor_location (GtkIMContext* context /*none*/, const GdkRectangle* area /*none*/);
// void gtk_im_context_set_cursor_location (::GtkIMContext* context /*none*/, const ::GdkRectangle* area /*none*/);
GI_INLINE_DECL void set_cursor_location (const Gdk::Rectangle_Ref area) noexcept;

// void gtk_im_context_set_surrounding (GtkIMContext* context /*none*/, const char* text /*none*/, int len, int cursor_index);
// void gtk_im_context_set_surrounding (::GtkIMContext* context /*none*/, const char* text /*none*/, gint len, gint cursor_index);
GI_INLINE_DECL void set_surrounding (const gi::cstring_v text, gint len, gint cursor_index) noexcept;

// void gtk_im_context_set_surrounding_with_selection (GtkIMContext* context /*none*/, const char* text /*none*/, int len, int cursor_index, int anchor_index);
// void gtk_im_context_set_surrounding_with_selection (::GtkIMContext* context /*none*/, const char* text /*none*/, gint len, gint cursor_index, gint anchor_index);
GI_INLINE_DECL void set_surrounding_with_selection (const gi::cstring_v text, gint len, gint cursor_index, gint anchor_index) noexcept;

// void gtk_im_context_set_use_preedit (GtkIMContext* context /*none*/, gboolean use_preedit);
// void gtk_im_context_set_use_preedit (::GtkIMContext* context /*none*/, gboolean use_preedit);
GI_INLINE_DECL void set_use_preedit (gboolean use_preedit) noexcept;

gi::property_proxy<Gtk::InputHints, base::IMContextBase> property_input_hints()
{ return gi::property_proxy<Gtk::InputHints, base::IMContextBase> (*this, "input-hints"); }
const gi::property_proxy<Gtk::InputHints, base::IMContextBase> property_input_hints() const
{ return gi::property_proxy<Gtk::InputHints, base::IMContextBase> (*this, "input-hints"); }

gi::property_proxy<Gtk::InputPurpose, base::IMContextBase> property_input_purpose()
{ return gi::property_proxy<Gtk::InputPurpose, base::IMContextBase> (*this, "input-purpose"); }
const gi::property_proxy<Gtk::InputPurpose, base::IMContextBase> property_input_purpose() const
{ return gi::property_proxy<Gtk::InputPurpose, base::IMContextBase> (*this, "input-purpose"); }

// (signal) void commit (gchar* str /*none*/);
// (signal) void commit (char* str /*none*/);
gi::signal_proxy<void(Gtk::IMContext, gi::cstring_v str)> signal_commit()
{ return gi::signal_proxy<void(Gtk::IMContext, gi::cstring_v str)> (*this, "commit"); }

// (signal) gboolean delete-surrounding (gint offset, gint n_chars);
// (signal) gboolean delete-surrounding (gint offset, gint n_chars);
gi::signal_proxy<bool(Gtk::IMContext, gint offset, gint n_chars)> signal_delete_surrounding()
{ return gi::signal_proxy<bool(Gtk::IMContext, gint offset, gint n_chars)> (*this, "delete-surrounding"); }

// (signal) void preedit-changed ();
// (signal) void preedit-changed ();
gi::signal_proxy<void(Gtk::IMContext)> signal_preedit_changed()
{ return gi::signal_proxy<void(Gtk::IMContext)> (*this, "preedit-changed"); }

// (signal) void preedit-end ();
// (signal) void preedit-end ();
gi::signal_proxy<void(Gtk::IMContext)> signal_preedit_end()
{ return gi::signal_proxy<void(Gtk::IMContext)> (*this, "preedit-end"); }

// (signal) void preedit-start ();
// (signal) void preedit-start ();
gi::signal_proxy<void(Gtk::IMContext)> signal_preedit_start()
{ return gi::signal_proxy<void(Gtk::IMContext)> (*this, "preedit-start"); }

// (signal) gboolean retrieve-surrounding ();
// (signal) gboolean retrieve-surrounding ();
gi::signal_proxy<bool(Gtk::IMContext)> signal_retrieve_surrounding()
{ return gi::signal_proxy<bool(Gtk::IMContext)> (*this, "retrieve-surrounding"); }

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/imcontext_extra_def.hpp>)
#include <gtk/imcontext_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/imcontext_extra.hpp>)
#include <gtk/imcontext_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class IMContext : public GI_GTK_IMCONTEXT_BASE
{ typedef GI_GTK_IMCONTEXT_BASE super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkIMContext>
{ typedef Gtk::IMContext type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

namespace impl {

namespace internal {


class IMContextClassDef
{
typedef IMContextClassDef self;
public:
typedef Gtk::IMContext instance_type;
typedef ::GtkIMContextClass class_type;

using GI_MEMBER_CHECK_CONFLICT(activate_osk) = self;
using GI_MEMBER_CHECK_CONFLICT(commit) = self;
using GI_MEMBER_CHECK_CONFLICT(delete_surrounding) = self;
using GI_MEMBER_CHECK_CONFLICT(focus_in) = self;
using GI_MEMBER_CHECK_CONFLICT(focus_out) = self;
using GI_MEMBER_CHECK_CONFLICT(get_preedit_string) = self;
using GI_MEMBER_CHECK_CONFLICT(get_surrounding) = self;
using GI_MEMBER_CHECK_CONFLICT(get_surrounding_with_selection) = self;
using GI_MEMBER_CHECK_CONFLICT(preedit_changed) = self;
using GI_MEMBER_CHECK_CONFLICT(preedit_end) = self;
using GI_MEMBER_CHECK_CONFLICT(preedit_start) = self;
using GI_MEMBER_CHECK_CONFLICT(reset) = self;
using GI_MEMBER_CHECK_CONFLICT(retrieve_surrounding) = self;
using GI_MEMBER_CHECK_CONFLICT(set_client_widget) = self;
using GI_MEMBER_CHECK_CONFLICT(set_cursor_location) = self;
using GI_MEMBER_CHECK_CONFLICT(set_surrounding) = self;
using GI_MEMBER_CHECK_CONFLICT(set_surrounding_with_selection) = self;
using GI_MEMBER_CHECK_CONFLICT(set_use_preedit) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~IMContextClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void IMContext::activate_osk (GtkIMContext* context /*none*/);
// void IMContext::activate_osk (::GtkIMContext* context /*none*/);
virtual void activate_osk_ () noexcept = 0;

// void IMContext::commit (GtkIMContext* context /*none*/, const char* str /*none*/);
// void IMContext::commit (::GtkIMContext* context /*none*/, const char* str /*none*/);
virtual void commit_ (const gi::cstring_v str) noexcept = 0;

// gboolean IMContext::delete_surrounding (GtkIMContext* context /*none*/, int offset, int n_chars);
// gboolean IMContext::delete_surrounding (::GtkIMContext* context /*none*/, gint offset, gint n_chars);
virtual bool delete_surrounding_ (gint offset, gint n_chars) noexcept = 0;

// gboolean IMContext::filter_keypress (GtkIMContext* context /*none*/, GdkEvent* event /*none*/);
// gboolean IMContext::filter_keypress (::GtkIMContext* context /*none*/,  event /*none*/);
// SKIP; event type  not supported

// void IMContext::focus_in (GtkIMContext* context /*none*/);
// void IMContext::focus_in (::GtkIMContext* context /*none*/);
virtual void focus_in_ () noexcept = 0;

// void IMContext::focus_out (GtkIMContext* context /*none*/);
// void IMContext::focus_out (::GtkIMContext* context /*none*/);
virtual void focus_out_ () noexcept = 0;

// void IMContext::get_preedit_string (GtkIMContext* context /*none*/, char** str /*full,out*/, PangoAttrList** attrs /*full,out*/, int* cursor_pos);
// void IMContext::get_preedit_string (::GtkIMContext* context /*none*/, char** str /*full,out*/, ::PangoAttrList** attrs /*full,out*/, gint* cursor_pos);
virtual void get_preedit_string_ (gi::cstring & str, Pango::AttrList & attrs, gint & cursor_pos) noexcept = 0;

// gboolean IMContext::get_surrounding (GtkIMContext* context /*none*/, char** text /*full,out*/, int* cursor_index);
// gboolean IMContext::get_surrounding (::GtkIMContext* context /*none*/, char** text /*full,out*/, gint* cursor_index);
virtual bool get_surrounding_ (gi::cstring & text, gint & cursor_index) noexcept = 0;

// gboolean IMContext::get_surrounding_with_selection (GtkIMContext* context /*none*/, char** text /*full,out*/, int* cursor_index, int* anchor_index);
// gboolean IMContext::get_surrounding_with_selection (::GtkIMContext* context /*none*/, char** text /*full,out*/, gint* cursor_index, gint* anchor_index);
virtual bool get_surrounding_with_selection_ (gi::cstring & text, gint & cursor_index, gint & anchor_index) noexcept = 0;

// void IMContext::preedit_changed (GtkIMContext* context /*none*/);
// void IMContext::preedit_changed (::GtkIMContext* context /*none*/);
virtual void preedit_changed_ () noexcept = 0;

// void IMContext::preedit_end (GtkIMContext* context /*none*/);
// void IMContext::preedit_end (::GtkIMContext* context /*none*/);
virtual void preedit_end_ () noexcept = 0;

// void IMContext::preedit_start (GtkIMContext* context /*none*/);
// void IMContext::preedit_start (::GtkIMContext* context /*none*/);
virtual void preedit_start_ () noexcept = 0;

// void IMContext::reset (GtkIMContext* context /*none*/);
// void IMContext::reset (::GtkIMContext* context /*none*/);
virtual void reset_ () noexcept = 0;

// gboolean IMContext::retrieve_surrounding (GtkIMContext* context /*none*/);
// gboolean IMContext::retrieve_surrounding (::GtkIMContext* context /*none*/);
virtual bool retrieve_surrounding_ () noexcept = 0;

// void IMContext::set_client_widget (GtkIMContext* context /*none*/, GtkWidget* widget /*none,nullable*/);
// void IMContext::set_client_widget (::GtkIMContext* context /*none*/, ::GtkWidget* widget /*none,nullable*/);
virtual void set_client_widget_ (Gtk::Widget widget) noexcept = 0;

// void IMContext::set_cursor_location (GtkIMContext* context /*none*/, GdkRectangle* area /*none*/);
// void IMContext::set_cursor_location (::GtkIMContext* context /*none*/, ::GdkRectangle* area /*none*/);
virtual void set_cursor_location_ (Gdk::Rectangle_Ref area) noexcept = 0;

// void IMContext::set_surrounding (GtkIMContext* context /*none*/, const char* text /*none*/, int len, int cursor_index);
// void IMContext::set_surrounding (::GtkIMContext* context /*none*/, const char* text /*none*/, gint len, gint cursor_index);
virtual void set_surrounding_ (const gi::cstring_v text, gint len, gint cursor_index) noexcept = 0;

// void IMContext::set_surrounding_with_selection (GtkIMContext* context /*none*/, const char* text /*none*/, int len, int cursor_index, int anchor_index);
// void IMContext::set_surrounding_with_selection (::GtkIMContext* context /*none*/, const char* text /*none*/, gint len, gint cursor_index, gint anchor_index);
virtual void set_surrounding_with_selection_ (const gi::cstring_v text, gint len, gint cursor_index, gint anchor_index) noexcept = 0;

// void IMContext::set_use_preedit (GtkIMContext* context /*none*/, gboolean use_preedit);
// void IMContext::set_use_preedit (::GtkIMContext* context /*none*/, gboolean use_preedit);
virtual void set_use_preedit_ (gboolean use_preedit) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class IMContextClass: public detail::ClassTemplate<Gtk::impl::internal::IMContextClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::IMContextClassDef;
typedef IMContextClass self;
typedef detail::ClassTemplate<Gtk::impl::internal::IMContextClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void IMContext::activate_osk (GtkIMContext* context /*none*/);
// void IMContext::activate_osk (::GtkIMContext* context /*none*/);
GI_INLINE_DECL void activate_osk_ () noexcept override;

// void IMContext::commit (GtkIMContext* context /*none*/, const char* str /*none*/);
// void IMContext::commit (::GtkIMContext* context /*none*/, const char* str /*none*/);
GI_INLINE_DECL void commit_ (const gi::cstring_v str) noexcept override;

// gboolean IMContext::delete_surrounding (GtkIMContext* context /*none*/, int offset, int n_chars);
// gboolean IMContext::delete_surrounding (::GtkIMContext* context /*none*/, gint offset, gint n_chars);
GI_INLINE_DECL bool delete_surrounding_ (gint offset, gint n_chars) noexcept override;

// gboolean IMContext::filter_keypress (GtkIMContext* context /*none*/, GdkEvent* event /*none*/);
// gboolean IMContext::filter_keypress (::GtkIMContext* context /*none*/,  event /*none*/);
// SKIP; event type  not supported

// void IMContext::focus_in (GtkIMContext* context /*none*/);
// void IMContext::focus_in (::GtkIMContext* context /*none*/);
GI_INLINE_DECL void focus_in_ () noexcept override;

// void IMContext::focus_out (GtkIMContext* context /*none*/);
// void IMContext::focus_out (::GtkIMContext* context /*none*/);
GI_INLINE_DECL void focus_out_ () noexcept override;

// void IMContext::get_preedit_string (GtkIMContext* context /*none*/, char** str /*full,out*/, PangoAttrList** attrs /*full,out*/, int* cursor_pos);
// void IMContext::get_preedit_string (::GtkIMContext* context /*none*/, char** str /*full,out*/, ::PangoAttrList** attrs /*full,out*/, gint* cursor_pos);
GI_INLINE_DECL void get_preedit_string_ (gi::cstring & str, Pango::AttrList & attrs, gint & cursor_pos) noexcept override;

// gboolean IMContext::get_surrounding (GtkIMContext* context /*none*/, char** text /*full,out*/, int* cursor_index);
// gboolean IMContext::get_surrounding (::GtkIMContext* context /*none*/, char** text /*full,out*/, gint* cursor_index);
GI_INLINE_DECL bool get_surrounding_ (gi::cstring & text, gint & cursor_index) noexcept override;

// gboolean IMContext::get_surrounding_with_selection (GtkIMContext* context /*none*/, char** text /*full,out*/, int* cursor_index, int* anchor_index);
// gboolean IMContext::get_surrounding_with_selection (::GtkIMContext* context /*none*/, char** text /*full,out*/, gint* cursor_index, gint* anchor_index);
GI_INLINE_DECL bool get_surrounding_with_selection_ (gi::cstring & text, gint & cursor_index, gint & anchor_index) noexcept override;

// void IMContext::preedit_changed (GtkIMContext* context /*none*/);
// void IMContext::preedit_changed (::GtkIMContext* context /*none*/);
GI_INLINE_DECL void preedit_changed_ () noexcept override;

// void IMContext::preedit_end (GtkIMContext* context /*none*/);
// void IMContext::preedit_end (::GtkIMContext* context /*none*/);
GI_INLINE_DECL void preedit_end_ () noexcept override;

// void IMContext::preedit_start (GtkIMContext* context /*none*/);
// void IMContext::preedit_start (::GtkIMContext* context /*none*/);
GI_INLINE_DECL void preedit_start_ () noexcept override;

// void IMContext::reset (GtkIMContext* context /*none*/);
// void IMContext::reset (::GtkIMContext* context /*none*/);
GI_INLINE_DECL void reset_ () noexcept override;

// gboolean IMContext::retrieve_surrounding (GtkIMContext* context /*none*/);
// gboolean IMContext::retrieve_surrounding (::GtkIMContext* context /*none*/);
GI_INLINE_DECL bool retrieve_surrounding_ () noexcept override;

// void IMContext::set_client_widget (GtkIMContext* context /*none*/, GtkWidget* widget /*none,nullable*/);
// void IMContext::set_client_widget (::GtkIMContext* context /*none*/, ::GtkWidget* widget /*none,nullable*/);
GI_INLINE_DECL void set_client_widget_ (Gtk::Widget widget) noexcept override;

// void IMContext::set_cursor_location (GtkIMContext* context /*none*/, GdkRectangle* area /*none*/);
// void IMContext::set_cursor_location (::GtkIMContext* context /*none*/, ::GdkRectangle* area /*none*/);
GI_INLINE_DECL void set_cursor_location_ (Gdk::Rectangle_Ref area) noexcept override;

// void IMContext::set_surrounding (GtkIMContext* context /*none*/, const char* text /*none*/, int len, int cursor_index);
// void IMContext::set_surrounding (::GtkIMContext* context /*none*/, const char* text /*none*/, gint len, gint cursor_index);
GI_INLINE_DECL void set_surrounding_ (const gi::cstring_v text, gint len, gint cursor_index) noexcept override;

// void IMContext::set_surrounding_with_selection (GtkIMContext* context /*none*/, const char* text /*none*/, int len, int cursor_index, int anchor_index);
// void IMContext::set_surrounding_with_selection (::GtkIMContext* context /*none*/, const char* text /*none*/, gint len, gint cursor_index, gint anchor_index);
GI_INLINE_DECL void set_surrounding_with_selection_ (const gi::cstring_v text, gint len, gint cursor_index, gint anchor_index) noexcept override;

// void IMContext::set_use_preedit (GtkIMContext* context /*none*/, gboolean use_preedit);
// void IMContext::set_use_preedit (::GtkIMContext* context /*none*/, gboolean use_preedit);
GI_INLINE_DECL void set_use_preedit_ (gboolean use_preedit) noexcept override;


};


struct IMContextClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(IMContextClass, activate_osk)
  GI_MEMBER_DEFINE(IMContextClass, commit)
  GI_MEMBER_DEFINE(IMContextClass, delete_surrounding)
  GI_MEMBER_DEFINE(IMContextClass, focus_in)
  GI_MEMBER_DEFINE(IMContextClass, focus_out)
  GI_MEMBER_DEFINE(IMContextClass, get_preedit_string)
  GI_MEMBER_DEFINE(IMContextClass, get_surrounding)
  GI_MEMBER_DEFINE(IMContextClass, get_surrounding_with_selection)
  GI_MEMBER_DEFINE(IMContextClass, preedit_changed)
  GI_MEMBER_DEFINE(IMContextClass, preedit_end)
  GI_MEMBER_DEFINE(IMContextClass, preedit_start)
  GI_MEMBER_DEFINE(IMContextClass, reset)
  GI_MEMBER_DEFINE(IMContextClass, retrieve_surrounding)
  GI_MEMBER_DEFINE(IMContextClass, set_client_widget)
  GI_MEMBER_DEFINE(IMContextClass, set_cursor_location)
  GI_MEMBER_DEFINE(IMContextClass, set_surrounding)
  GI_MEMBER_DEFINE(IMContextClass, set_surrounding_with_selection)
  GI_MEMBER_DEFINE(IMContextClass, set_use_preedit)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, activate_osk),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, commit),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, delete_surrounding),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, focus_in),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, focus_out),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_preedit_string),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_surrounding),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_surrounding_with_selection),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, preedit_changed),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, preedit_end),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, preedit_start),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, reset),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, retrieve_surrounding),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_client_widget),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_cursor_location),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_surrounding),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_surrounding_with_selection),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, set_use_preedit)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using IMContextImpl = detail::ObjectImpl<IMContext, internal::IMContextClass>;

} // namespace impl

} // namespace Gtk

} // namespace repository

} // namespace gi

#endif
