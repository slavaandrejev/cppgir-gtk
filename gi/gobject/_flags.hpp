// AUTO-GENERATED

#ifndef _GI_GOBJECT__FLAGS_HPP_
#define _GI_GOBJECT__FLAGS_HPP_

namespace gi {

namespace repository {

namespace GObject {

enum class BindingFlags : std::underlying_type<GBindingFlags>::type {
  DEFAULT_ = G_BINDING_DEFAULT,
  BIDIRECTIONAL_ = G_BINDING_BIDIRECTIONAL,
  SYNC_CREATE_ = G_BINDING_SYNC_CREATE,
  INVERT_BOOLEAN_ = G_BINDING_INVERT_BOOLEAN,
};

GI_FLAG_OPERATORS(BindingFlags)

} // namespace GObject

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GObject::BindingFlags>
{ typedef GBindingFlags type; }; 
template<> struct declare_cpptype_of<GBindingFlags>
{ typedef GObject::BindingFlags type; }; 

template<> struct declare_gtype_of<GObject::BindingFlags>
{ static GType get_type() { return g_binding_flags_get_type(); } };

template<> struct is_bitfield<GObject::BindingFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GObject {

enum class ConnectFlags : std::underlying_type<GConnectFlags>::type {
  DEFAULT_ = G_CONNECT_DEFAULT,
  AFTER_ = G_CONNECT_AFTER,
  SWAPPED_ = G_CONNECT_SWAPPED,
};

GI_FLAG_OPERATORS(ConnectFlags)

} // namespace GObject

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GObject::ConnectFlags>
{ typedef GConnectFlags type; }; 
template<> struct declare_cpptype_of<GConnectFlags>
{ typedef GObject::ConnectFlags type; }; 

template<> struct is_bitfield<GObject::ConnectFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GObject {

enum class ParamFlags : std::underlying_type<GParamFlags>::type {
  READABLE_ = G_PARAM_READABLE,
  WRITABLE_ = G_PARAM_WRITABLE,
  READWRITE_ = G_PARAM_READWRITE,
  CONSTRUCT_ = G_PARAM_CONSTRUCT,
  CONSTRUCT_ONLY_ = G_PARAM_CONSTRUCT_ONLY,
  LAX_VALIDATION_ = G_PARAM_LAX_VALIDATION,
  STATIC_NAME_ = G_PARAM_STATIC_NAME,
  PRIVATE_ = G_PARAM_PRIVATE,
  STATIC_NICK_ = G_PARAM_STATIC_NICK,
  STATIC_BLURB_ = G_PARAM_STATIC_BLURB,
  EXPLICIT_NOTIFY_ = G_PARAM_EXPLICIT_NOTIFY,
  DEPRECATED_ = G_PARAM_DEPRECATED,
};

GI_FLAG_OPERATORS(ParamFlags)

} // namespace GObject

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GObject::ParamFlags>
{ typedef GParamFlags type; }; 
template<> struct declare_cpptype_of<GParamFlags>
{ typedef GObject::ParamFlags type; }; 

template<> struct is_bitfield<GObject::ParamFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GObject {

enum class SignalFlags : std::underlying_type<GSignalFlags>::type {
  RUN_FIRST_ = G_SIGNAL_RUN_FIRST,
  RUN_LAST_ = G_SIGNAL_RUN_LAST,
  RUN_CLEANUP_ = G_SIGNAL_RUN_CLEANUP,
  NO_RECURSE_ = G_SIGNAL_NO_RECURSE,
  DETAILED_ = G_SIGNAL_DETAILED,
  ACTION_ = G_SIGNAL_ACTION,
  NO_HOOKS_ = G_SIGNAL_NO_HOOKS,
  MUST_COLLECT_ = G_SIGNAL_MUST_COLLECT,
  DEPRECATED_ = G_SIGNAL_DEPRECATED,
  ACCUMULATOR_FIRST_RUN_ = G_SIGNAL_ACCUMULATOR_FIRST_RUN,
};

GI_FLAG_OPERATORS(SignalFlags)

} // namespace GObject

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GObject::SignalFlags>
{ typedef GSignalFlags type; }; 
template<> struct declare_cpptype_of<GSignalFlags>
{ typedef GObject::SignalFlags type; }; 

template<> struct is_bitfield<GObject::SignalFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GObject {

enum class SignalMatchType : std::underlying_type<GSignalMatchType>::type {
  ID_ = G_SIGNAL_MATCH_ID,
  DETAIL_ = G_SIGNAL_MATCH_DETAIL,
  CLOSURE_ = G_SIGNAL_MATCH_CLOSURE,
  FUNC_ = G_SIGNAL_MATCH_FUNC,
  DATA_ = G_SIGNAL_MATCH_DATA,
  UNBLOCKED_ = G_SIGNAL_MATCH_UNBLOCKED,
};

GI_FLAG_OPERATORS(SignalMatchType)

} // namespace GObject

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GObject::SignalMatchType>
{ typedef GSignalMatchType type; }; 
template<> struct declare_cpptype_of<GSignalMatchType>
{ typedef GObject::SignalMatchType type; }; 

template<> struct is_bitfield<GObject::SignalMatchType> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GObject {

enum class TypeFlags : std::underlying_type<GTypeFlags>::type {
  NONE_ = G_TYPE_FLAG_NONE,
  ABSTRACT_ = G_TYPE_FLAG_ABSTRACT,
  VALUE_ABSTRACT_ = G_TYPE_FLAG_VALUE_ABSTRACT,
  FINAL_ = G_TYPE_FLAG_FINAL,
  DEPRECATED_ = G_TYPE_FLAG_DEPRECATED,
};

GI_FLAG_OPERATORS(TypeFlags)

} // namespace GObject

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GObject::TypeFlags>
{ typedef GTypeFlags type; }; 
template<> struct declare_cpptype_of<GTypeFlags>
{ typedef GObject::TypeFlags type; }; 

template<> struct is_bitfield<GObject::TypeFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace GObject {

enum class TypeFundamentalFlags : std::underlying_type<GTypeFundamentalFlags>::type {
  CLASSED_ = G_TYPE_FLAG_CLASSED,
  INSTANTIATABLE_ = G_TYPE_FLAG_INSTANTIATABLE,
  DERIVABLE_ = G_TYPE_FLAG_DERIVABLE,
  DEEP_DERIVABLE_ = G_TYPE_FLAG_DEEP_DERIVABLE,
};

GI_FLAG_OPERATORS(TypeFundamentalFlags)

} // namespace GObject

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<GObject::TypeFundamentalFlags>
{ typedef GTypeFundamentalFlags type; }; 
template<> struct declare_cpptype_of<GTypeFundamentalFlags>
{ typedef GObject::TypeFundamentalFlags type; }; 

template<> struct is_bitfield<GObject::TypeFundamentalFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


#endif
