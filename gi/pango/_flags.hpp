// AUTO-GENERATED

#ifndef _GI_PANGO__FLAGS_HPP_
#define _GI_PANGO__FLAGS_HPP_

namespace gi {

namespace repository {

namespace Pango {

enum class FontMask : std::underlying_type<PangoFontMask>::type {
  FAMILY_ = PANGO_FONT_MASK_FAMILY,
  STYLE_ = PANGO_FONT_MASK_STYLE,
  VARIANT_ = PANGO_FONT_MASK_VARIANT,
  WEIGHT_ = PANGO_FONT_MASK_WEIGHT,
  STRETCH_ = PANGO_FONT_MASK_STRETCH,
  SIZE_ = PANGO_FONT_MASK_SIZE,
  GRAVITY_ = PANGO_FONT_MASK_GRAVITY,
  VARIATIONS_ = PANGO_FONT_MASK_VARIATIONS,
};

GI_FLAG_OPERATORS(FontMask)

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::FontMask>
{ typedef PangoFontMask type; }; 
template<> struct declare_cpptype_of<PangoFontMask>
{ typedef Pango::FontMask type; }; 

template<> struct declare_gtype_of<Pango::FontMask>
{ static GType get_type() { return pango_font_mask_get_type(); } };

template<> struct is_bitfield<Pango::FontMask> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

enum class LayoutDeserializeFlags : std::underlying_type<PangoLayoutDeserializeFlags>::type {
  DEFAULT_ = PANGO_LAYOUT_DESERIALIZE_DEFAULT,
  CONTEXT_ = PANGO_LAYOUT_DESERIALIZE_CONTEXT,
};

GI_FLAG_OPERATORS(LayoutDeserializeFlags)

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::LayoutDeserializeFlags>
{ typedef PangoLayoutDeserializeFlags type; }; 
template<> struct declare_cpptype_of<PangoLayoutDeserializeFlags>
{ typedef Pango::LayoutDeserializeFlags type; }; 

template<> struct declare_gtype_of<Pango::LayoutDeserializeFlags>
{ static GType get_type() { return pango_layout_deserialize_flags_get_type(); } };

template<> struct is_bitfield<Pango::LayoutDeserializeFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

enum class LayoutSerializeFlags : std::underlying_type<PangoLayoutSerializeFlags>::type {
  DEFAULT_ = PANGO_LAYOUT_SERIALIZE_DEFAULT,
  CONTEXT_ = PANGO_LAYOUT_SERIALIZE_CONTEXT,
  OUTPUT_ = PANGO_LAYOUT_SERIALIZE_OUTPUT,
};

GI_FLAG_OPERATORS(LayoutSerializeFlags)

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::LayoutSerializeFlags>
{ typedef PangoLayoutSerializeFlags type; }; 
template<> struct declare_cpptype_of<PangoLayoutSerializeFlags>
{ typedef Pango::LayoutSerializeFlags type; }; 

template<> struct declare_gtype_of<Pango::LayoutSerializeFlags>
{ static GType get_type() { return pango_layout_serialize_flags_get_type(); } };

template<> struct is_bitfield<Pango::LayoutSerializeFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

enum class ShapeFlags : std::underlying_type<PangoShapeFlags>::type {
  NONE_ = PANGO_SHAPE_NONE,
  ROUND_POSITIONS_ = PANGO_SHAPE_ROUND_POSITIONS,
};

GI_FLAG_OPERATORS(ShapeFlags)

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::ShapeFlags>
{ typedef PangoShapeFlags type; }; 
template<> struct declare_cpptype_of<PangoShapeFlags>
{ typedef Pango::ShapeFlags type; }; 

template<> struct declare_gtype_of<Pango::ShapeFlags>
{ static GType get_type() { return pango_shape_flags_get_type(); } };

template<> struct is_bitfield<Pango::ShapeFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Pango {

enum class ShowFlags : std::underlying_type<PangoShowFlags>::type {
  NONE_ = PANGO_SHOW_NONE,
  SPACES_ = PANGO_SHOW_SPACES,
  LINE_BREAKS_ = PANGO_SHOW_LINE_BREAKS,
  IGNORABLES_ = PANGO_SHOW_IGNORABLES,
};

GI_FLAG_OPERATORS(ShowFlags)

} // namespace Pango

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Pango::ShowFlags>
{ typedef PangoShowFlags type; }; 
template<> struct declare_cpptype_of<PangoShowFlags>
{ typedef Pango::ShowFlags type; }; 

template<> struct declare_gtype_of<Pango::ShowFlags>
{ static GType get_type() { return pango_show_flags_get_type(); } };

template<> struct is_bitfield<Pango::ShowFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


#endif
