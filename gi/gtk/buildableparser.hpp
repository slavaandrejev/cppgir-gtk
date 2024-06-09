// AUTO-GENERATED

#ifndef _GI_GTK_BUILDABLEPARSER_HPP_
#define _GI_GTK_BUILDABLEPARSER_HPP_


namespace gi {

namespace repository {

namespace Gtk {


class BuildableParser;

namespace base {


#define GI_GTK_BUILDABLEPARSER_BASE base::BuildableParserBase
class BuildableParserBase : public gi::detail::CBoxedWrapperBase<BuildableParserBase, ::GtkBuildableParser>
{
typedef gi::detail::CBoxedWrapperBase<BuildableParserBase, ::GtkBuildableParser> super_type;
public:

BuildableParserBase (std::nullptr_t = nullptr) : super_type() {}

}; // class

} // namespace base

} // namespace Gtk

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gtk/buildableparser_extra_def.hpp>)
#include <gtk/buildableparser_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gtk/buildableparser_extra.hpp>)
#include <gtk/buildableparser_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace Gtk {

class BuildableParser_Ref;

class BuildableParser : public gi::detail::CBoxedWrapper<BuildableParser, ::GtkBuildableParser, GI_GTK_BUILDABLEPARSER_BASE, BuildableParser_Ref>
{ typedef gi::detail::CBoxedWrapper<BuildableParser, ::GtkBuildableParser, GI_GTK_BUILDABLEPARSER_BASE, BuildableParser_Ref> super_type; using super_type::super_type; };


class BuildableParser_Ref : public gi::detail::CBoxedRefWrapper<BuildableParser, ::GtkBuildableParser, GI_GTK_BUILDABLEPARSER_BASE>
{ typedef gi::detail::CBoxedRefWrapper<BuildableParser, ::GtkBuildableParser, GI_GTK_BUILDABLEPARSER_BASE> super_type; using super_type::super_type; };

} // namespace Gtk

template<> struct declare_cpptype_of<::GtkBuildableParser>
{ typedef Gtk::BuildableParser type; }; 

} // namespace repository

} // namespace gi

#endif
