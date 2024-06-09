// AUTO-GENERATED

#ifndef _GI_GOBJECT_TYPEVALUETABLE_HPP_
#define _GI_GOBJECT_TYPEVALUETABLE_HPP_


namespace gi {

namespace repository {

namespace GObject {

class TypeValueTable_Ref;

class TypeValueTable;

namespace base {


#define GI_GOBJECT_TYPEVALUETABLE_BASE base::TypeValueTableBase
class TypeValueTableBase : public gi::detail::CBoxedWrapperBase<TypeValueTableBase, ::GTypeValueTable>
{
typedef gi::detail::CBoxedWrapperBase<TypeValueTableBase, ::GTypeValueTable> super_type;
public:

TypeValueTableBase (std::nullptr_t = nullptr) : super_type() {}

// const char* /*none*/ TypeValueTable::collect_format (const ::GTypeValueTable* obj /*none*/);
// const char* /*none*/ TypeValueTable::collect_format (const ::GTypeValueTable* obj /*none*/);
GI_INLINE_DECL gi::cstring_v collect_format_ () const noexcept;

// const char* /*none*/ TypeValueTable::lcopy_format (const ::GTypeValueTable* obj /*none*/);
// const char* /*none*/ TypeValueTable::lcopy_format (const ::GTypeValueTable* obj /*none*/);
GI_INLINE_DECL gi::cstring_v lcopy_format_ () const noexcept;

// FAILURE on g_type_value_table_peek; No such node (<xmlattr>.transfer-ownership)
}; // class

} // namespace base

} // namespace GObject

} // namespace repository

} // namespace gi


#if defined(__has_include)
#if __has_include(<gobject/typevaluetable_extra_def.hpp>)
#include <gobject/typevaluetable_extra_def.hpp>
#endif
#endif


#if defined(__has_include)
#if __has_include(<gobject/typevaluetable_extra.hpp>)
#include <gobject/typevaluetable_extra.hpp>
#endif
#endif

namespace gi {

namespace repository {

namespace GObject {

class TypeValueTable_Ref;

class TypeValueTable : public gi::detail::CBoxedWrapper<TypeValueTable, ::GTypeValueTable, GI_GOBJECT_TYPEVALUETABLE_BASE, TypeValueTable_Ref>
{ typedef gi::detail::CBoxedWrapper<TypeValueTable, ::GTypeValueTable, GI_GOBJECT_TYPEVALUETABLE_BASE, TypeValueTable_Ref> super_type; using super_type::super_type; };


class TypeValueTable_Ref : public gi::detail::CBoxedRefWrapper<TypeValueTable, ::GTypeValueTable, GI_GOBJECT_TYPEVALUETABLE_BASE>
{ typedef gi::detail::CBoxedRefWrapper<TypeValueTable, ::GTypeValueTable, GI_GOBJECT_TYPEVALUETABLE_BASE> super_type; using super_type::super_type; };

} // namespace GObject

template<> struct declare_cpptype_of<::GTypeValueTable>
{ typedef GObject::TypeValueTable type; }; 

} // namespace repository

} // namespace gi

#endif
