// AUTO-GENERATED

#ifndef _GI_GIO_FILENAMECOMPLETER_HPP_
#define _GI_GIO_FILENAMECOMPLETER_HPP_


namespace gi {

namespace repository {

namespace Gio {


class FilenameCompleter;

namespace base {


#define GI_GIO_FILENAMECOMPLETER_BASE base::FilenameCompleterBase
class FilenameCompleterBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GFilenameCompleter BaseObjectType;

FilenameCompleterBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_filename_completer_get_type(); } 

// GFilenameCompleter* /*full*/ g_filename_completer_new ();
// ::GFilenameCompleter* /*full*/ g_filename_completer_new ();
static GI_INLINE_DECL Gio::FilenameCompleter new_ () noexcept;

// char* /*full,nullable*/ g_filename_completer_get_completion_suffix (GFilenameCompleter* completer /*none*/, const char* initial_text /*none*/);
// char* /*full,nullable*/ g_filename_completer_get_completion_suffix (::GFilenameCompleter* completer /*none*/, const char* initial_text /*none*/);
GI_INLINE_DECL gi::cstring get_completion_suffix (const gi::cstring_v initial_text) noexcept;

// char** /*full*/ g_filename_completer_get_completions (GFilenameCompleter* completer /*none*/, const char* initial_text /*none*/);
// char** /*full*/ g_filename_completer_get_completions (::GFilenameCompleter* completer /*none*/, const char* initial_text /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_full_t> get_completions (const gi::cstring_v initial_text) noexcept;

// void g_filename_completer_set_dirs_only (GFilenameCompleter* completer /*none*/, gboolean dirs_only);
// void g_filename_completer_set_dirs_only (::GFilenameCompleter* completer /*none*/, gboolean dirs_only);
GI_INLINE_DECL void set_dirs_only (gboolean dirs_only) noexcept;

// (signal) void got-completion-data ();
// (signal) void got-completion-data ();
gi::signal_proxy<void(Gio::FilenameCompleter)> signal_got_completion_data()
{ return gi::signal_proxy<void(Gio::FilenameCompleter)> (*this, "got-completion-data"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/filenamecompleter_extra_def.hpp>)
#include <gio/filenamecompleter_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/filenamecompleter_extra.hpp>)
#include <gio/filenamecompleter_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class FilenameCompleter : public GI_GIO_FILENAMECOMPLETER_BASE
{ typedef GI_GIO_FILENAMECOMPLETER_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GFilenameCompleter>
{ typedef Gio::FilenameCompleter type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class FilenameCompleterClassDef
{
typedef FilenameCompleterClassDef self;
public:
typedef Gio::FilenameCompleter instance_type;
typedef ::GFilenameCompleterClass class_type;

using GI_MEMBER_CHECK_CONFLICT(got_completion_data) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~FilenameCompleterClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void FilenameCompleter::got_completion_data (GFilenameCompleter* filename_completer /*none*/);
// void FilenameCompleter::got_completion_data (::GFilenameCompleter* filename_completer /*none*/);
virtual void got_completion_data_ () noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class FilenameCompleterClass: public detail::ClassTemplate<Gio::impl::internal::FilenameCompleterClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::FilenameCompleterClassDef;
typedef FilenameCompleterClass self;
typedef detail::ClassTemplate<Gio::impl::internal::FilenameCompleterClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void FilenameCompleter::got_completion_data (GFilenameCompleter* filename_completer /*none*/);
// void FilenameCompleter::got_completion_data (::GFilenameCompleter* filename_completer /*none*/);
GI_INLINE_DECL void got_completion_data_ () noexcept override;


};


struct FilenameCompleterClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(FilenameCompleterClass, got_completion_data)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, got_completion_data)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using FilenameCompleterImpl = detail::ObjectImpl<FilenameCompleter, internal::FilenameCompleterClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
