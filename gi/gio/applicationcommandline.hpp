// AUTO-GENERATED

#ifndef _GI_GIO_APPLICATIONCOMMANDLINE_HPP_
#define _GI_GIO_APPLICATIONCOMMANDLINE_HPP_


namespace gi {

namespace repository {

namespace Gio {

class File;
class InputStream;

class ApplicationCommandLine;

namespace base {


#define GI_GIO_APPLICATIONCOMMANDLINE_BASE base::ApplicationCommandLineBase
class ApplicationCommandLineBase : public GObject::Object
{
typedef GObject::Object super_type;
public:
typedef ::GApplicationCommandLine BaseObjectType;

ApplicationCommandLineBase (std::nullptr_t = nullptr) : super_type() {}

BaseObjectType *gobj_() { return (BaseObjectType*) super_type::gobj_(); }
const BaseObjectType *gobj_() const { return (const BaseObjectType*) super_type::gobj_(); }
BaseObjectType *gobj_copy_() const { return (BaseObjectType*) super_type::gobj_copy_(); }

static GType get_type_ () G_GNUC_CONST { return g_application_command_line_get_type(); } 

// GFile* /*full*/ g_application_command_line_create_file_for_arg (GApplicationCommandLine* cmdline /*none*/, const gchar* arg /*none*/);
// ::GFile* /*full*/ g_application_command_line_create_file_for_arg (::GApplicationCommandLine* cmdline /*none*/, const char* arg /*none*/);
GI_INLINE_DECL Gio::File create_file_for_arg (const gi::cstring_v arg) noexcept;

// void g_application_command_line_done (GApplicationCommandLine* cmdline /*none*/);
// void g_application_command_line_done (::GApplicationCommandLine* cmdline /*none*/);
GI_INLINE_DECL void done () noexcept;

// gchar** /*full*/ g_application_command_line_get_arguments (GApplicationCommandLine* cmdline /*none*/, int* argc);
// char** /*full*/ g_application_command_line_get_arguments (::GApplicationCommandLine* cmdline /*none*/, gint* argc);
GI_INLINE_DECL gi::Collection<gi::DSpan, char*, gi::transfer_full_t> get_arguments () noexcept;

// const gchar* /*none,nullable*/ g_application_command_line_get_cwd (GApplicationCommandLine* cmdline /*none*/);
// const char* /*none,nullable*/ g_application_command_line_get_cwd (::GApplicationCommandLine* cmdline /*none*/);
GI_INLINE_DECL gi::cstring_v get_cwd () noexcept;

// const gchar* const* /*none*/ g_application_command_line_get_environ (GApplicationCommandLine* cmdline /*none*/);
// const char** /*none*/ g_application_command_line_get_environ (::GApplicationCommandLine* cmdline /*none*/);
GI_INLINE_DECL gi::Collection<gi::ZTSpan, char*, gi::transfer_none_t> get_environ () noexcept;

// int g_application_command_line_get_exit_status (GApplicationCommandLine* cmdline /*none*/);
// gint g_application_command_line_get_exit_status (::GApplicationCommandLine* cmdline /*none*/);
GI_INLINE_DECL gint get_exit_status () noexcept;

// gboolean g_application_command_line_get_is_remote (GApplicationCommandLine* cmdline /*none*/);
// gboolean g_application_command_line_get_is_remote (::GApplicationCommandLine* cmdline /*none*/);
GI_INLINE_DECL bool get_is_remote () noexcept;

// GVariantDict* /*none*/ g_application_command_line_get_options_dict (GApplicationCommandLine* cmdline /*none*/);
// ::GVariantDict* /*none*/ g_application_command_line_get_options_dict (::GApplicationCommandLine* cmdline /*none*/);
GI_INLINE_DECL GLib::VariantDict_Ref get_options_dict () noexcept;

// GVariant* /*full,nullable*/ g_application_command_line_get_platform_data (GApplicationCommandLine* cmdline /*none*/);
// ::GVariant* /*full,nullable*/ g_application_command_line_get_platform_data (::GApplicationCommandLine* cmdline /*none*/);
GI_INLINE_DECL GLib::Variant get_platform_data () noexcept;

// GInputStream* /*full,nullable*/ g_application_command_line_get_stdin (GApplicationCommandLine* cmdline /*none*/);
// ::GInputStream* /*full,nullable*/ g_application_command_line_get_stdin (::GApplicationCommandLine* cmdline /*none*/);
GI_INLINE_DECL Gio::InputStream get_stdin () noexcept;

// const gchar* /*none,nullable*/ g_application_command_line_getenv (GApplicationCommandLine* cmdline /*none*/, const gchar* name /*none*/);
// const char* /*none,nullable*/ g_application_command_line_getenv (::GApplicationCommandLine* cmdline /*none*/, const char* name /*none*/);
GI_INLINE_DECL gi::cstring_v getenv (const gi::cstring_v name) noexcept;

// void g_application_command_line_print (GApplicationCommandLine* cmdline /*none*/, const gchar* format /*none*/,  ..._ /*none*/);
// void g_application_command_line_print (::GApplicationCommandLine* cmdline /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_application_command_line_print_literal (GApplicationCommandLine* cmdline /*none*/, const gchar* message /*none*/);
// void g_application_command_line_print_literal (::GApplicationCommandLine* cmdline /*none*/, const char* message /*none*/);
GI_INLINE_DECL void print_literal (const gi::cstring_v message) noexcept;

// void g_application_command_line_printerr (GApplicationCommandLine* cmdline /*none*/, const gchar* format /*none*/,  ..._ /*none*/);
// void g_application_command_line_printerr (::GApplicationCommandLine* cmdline /*none*/, const char* format /*none*/,  ..._ /*none*/);
// IGNORE; not introspectable, varargs not supported

// void g_application_command_line_printerr_literal (GApplicationCommandLine* cmdline /*none*/, const gchar* message /*none*/);
// void g_application_command_line_printerr_literal (::GApplicationCommandLine* cmdline /*none*/, const char* message /*none*/);
GI_INLINE_DECL void printerr_literal (const gi::cstring_v message) noexcept;

// void g_application_command_line_set_exit_status (GApplicationCommandLine* cmdline /*none*/, int exit_status);
// void g_application_command_line_set_exit_status (::GApplicationCommandLine* cmdline /*none*/, gint exit_status);
GI_INLINE_DECL void set_exit_status (gint exit_status) noexcept;

gi::property_proxy_write<GLib::Variant, base::ApplicationCommandLineBase> property_arguments()
{ return gi::property_proxy_write<GLib::Variant, base::ApplicationCommandLineBase> (*this, "arguments"); }

gi::property_proxy<bool, base::ApplicationCommandLineBase> property_is_remote()
{ return gi::property_proxy<bool, base::ApplicationCommandLineBase> (*this, "is-remote"); }
const gi::property_proxy<bool, base::ApplicationCommandLineBase> property_is_remote() const
{ return gi::property_proxy<bool, base::ApplicationCommandLineBase> (*this, "is-remote"); }

gi::property_proxy_write<GLib::Variant, base::ApplicationCommandLineBase> property_options()
{ return gi::property_proxy_write<GLib::Variant, base::ApplicationCommandLineBase> (*this, "options"); }

gi::property_proxy_write<GLib::Variant, base::ApplicationCommandLineBase> property_platform_data()
{ return gi::property_proxy_write<GLib::Variant, base::ApplicationCommandLineBase> (*this, "platform-data"); }

}; // class

} // namespace base

} // namespace Gio

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gio/applicationcommandline_extra_def.hpp>)
#include <gio/applicationcommandline_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gio/applicationcommandline_extra.hpp>)
#include <gio/applicationcommandline_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gio {

class ApplicationCommandLine : public GI_GIO_APPLICATIONCOMMANDLINE_BASE
{ typedef GI_GIO_APPLICATIONCOMMANDLINE_BASE super_type; using super_type::super_type; };

} // namespace Gio

template<> struct declare_cpptype_of<::GApplicationCommandLine>
{ typedef Gio::ApplicationCommandLine type; }; 

} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gio {

namespace impl {

namespace internal {


class ApplicationCommandLineClassDef
{
typedef ApplicationCommandLineClassDef self;
public:
typedef Gio::ApplicationCommandLine instance_type;
typedef ::GApplicationCommandLineClass class_type;

using GI_MEMBER_CHECK_CONFLICT(done) = self;
using GI_MEMBER_CHECK_CONFLICT(get_stdin) = self;
using GI_MEMBER_CHECK_CONFLICT(print_literal) = self;
using GI_MEMBER_CHECK_CONFLICT(printerr_literal) = self;

struct TypeInitData;

protected:
GI_INLINE_DECL ~ApplicationCommandLineClassDef() = default;
static GI_INLINE_DECL void class_init (gpointer class_struct, gpointer );

// void ApplicationCommandLine::done (GApplicationCommandLine* cmdline /*none*/);
// void ApplicationCommandLine::done (::GApplicationCommandLine* cmdline /*none*/);
virtual void done_ () noexcept = 0;

// GInputStream* /*full,nullable*/ ApplicationCommandLine::get_stdin (GApplicationCommandLine* cmdline /*none*/);
// ::GInputStream* /*full,nullable*/ ApplicationCommandLine::get_stdin (::GApplicationCommandLine* cmdline /*none*/);
virtual Gio::InputStream get_stdin_ () noexcept = 0;

// void ApplicationCommandLine::print_literal (GApplicationCommandLine* cmdline /*none*/, const gchar* message /*none*/);
// void ApplicationCommandLine::print_literal (::GApplicationCommandLine* cmdline /*none*/, const char* message /*none*/);
virtual void print_literal_ (const gi::cstring_v message) noexcept = 0;

// void ApplicationCommandLine::printerr_literal (GApplicationCommandLine* cmdline /*none*/, const gchar* message /*none*/);
// void ApplicationCommandLine::printerr_literal (::GApplicationCommandLine* cmdline /*none*/, const char* message /*none*/);
virtual void printerr_literal_ (const gi::cstring_v message) noexcept = 0;


};

GI_CLASS_IMPL_BEGIN


class ApplicationCommandLineClass: public detail::ClassTemplate<Gio::impl::internal::ApplicationCommandLineClassDef, GObject::impl::internal::ObjectClass>
{
friend class internal::ApplicationCommandLineClassDef;
typedef ApplicationCommandLineClass self;
typedef detail::ClassTemplate<Gio::impl::internal::ApplicationCommandLineClassDef, GObject::impl::internal::ObjectClass> super;

protected:
using super::super;

private:
// make local helpers private
using super::get_struct_;
using super::gobj_;

protected:
// disambiguation helper types


// void ApplicationCommandLine::done (GApplicationCommandLine* cmdline /*none*/);
// void ApplicationCommandLine::done (::GApplicationCommandLine* cmdline /*none*/);
GI_INLINE_DECL void done_ () noexcept override;

// GInputStream* /*full,nullable*/ ApplicationCommandLine::get_stdin (GApplicationCommandLine* cmdline /*none*/);
// ::GInputStream* /*full,nullable*/ ApplicationCommandLine::get_stdin (::GApplicationCommandLine* cmdline /*none*/);
GI_INLINE_DECL Gio::InputStream get_stdin_ () noexcept override;

// void ApplicationCommandLine::print_literal (GApplicationCommandLine* cmdline /*none*/, const gchar* message /*none*/);
// void ApplicationCommandLine::print_literal (::GApplicationCommandLine* cmdline /*none*/, const char* message /*none*/);
GI_INLINE_DECL void print_literal_ (const gi::cstring_v message) noexcept override;

// void ApplicationCommandLine::printerr_literal (GApplicationCommandLine* cmdline /*none*/, const gchar* message /*none*/);
// void ApplicationCommandLine::printerr_literal (::GApplicationCommandLine* cmdline /*none*/, const char* message /*none*/);
GI_INLINE_DECL void printerr_literal_ (const gi::cstring_v message) noexcept override;


};


struct ApplicationCommandLineClassDef::TypeInitData
{
  GI_MEMBER_DEFINE(ApplicationCommandLineClass, done)
  GI_MEMBER_DEFINE(ApplicationCommandLineClass, get_stdin)
  GI_MEMBER_DEFINE(ApplicationCommandLineClass, print_literal)
  GI_MEMBER_DEFINE(ApplicationCommandLineClass, printerr_literal)

template<typename SubClass>
constexpr static TypeInitData factory()
{
  using DefData = detail::DefinitionData<SubClass, TypeInitData>;
  return {
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, done),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, get_stdin),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, print_literal),
    GI_MEMBER_HAS_DEFINITION(SubClass, DefData, printerr_literal)
  };
}
};
} // namespace internal

GI_CLASS_IMPL_END

using ApplicationCommandLineImpl = detail::ObjectImpl<ApplicationCommandLine, internal::ApplicationCommandLineClass>;

} // namespace impl

} // namespace Gio

} // namespace repository

} // namespace gi

#endif
