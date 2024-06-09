// AUTO-GENERATED

#ifndef _GI_GTK__FLAGS_HPP_
#define _GI_GTK__FLAGS_HPP_

namespace gi {

namespace repository {

namespace Gtk {

enum class ApplicationInhibitFlags : std::underlying_type<GtkApplicationInhibitFlags>::type {
  LOGOUT_ = GTK_APPLICATION_INHIBIT_LOGOUT,
  SWITCH_ = GTK_APPLICATION_INHIBIT_SWITCH,
  SUSPEND_ = GTK_APPLICATION_INHIBIT_SUSPEND,
  IDLE_ = GTK_APPLICATION_INHIBIT_IDLE,
};

GI_FLAG_OPERATORS(ApplicationInhibitFlags)

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ApplicationInhibitFlags>
{ typedef GtkApplicationInhibitFlags type; }; 
template<> struct declare_cpptype_of<GtkApplicationInhibitFlags>
{ typedef Gtk::ApplicationInhibitFlags type; }; 

template<> struct declare_gtype_of<Gtk::ApplicationInhibitFlags>
{ static GType get_type() { return gtk_application_inhibit_flags_get_type(); } };

template<> struct is_bitfield<Gtk::ApplicationInhibitFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class BuilderClosureFlags : std::underlying_type<GtkBuilderClosureFlags>::type {
  SWAPPED_ = GTK_BUILDER_CLOSURE_SWAPPED,
};

GI_FLAG_OPERATORS(BuilderClosureFlags)

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::BuilderClosureFlags>
{ typedef GtkBuilderClosureFlags type; }; 
template<> struct declare_cpptype_of<GtkBuilderClosureFlags>
{ typedef Gtk::BuilderClosureFlags type; }; 

template<> struct declare_gtype_of<Gtk::BuilderClosureFlags>
{ static GType get_type() { return gtk_builder_closure_flags_get_type(); } };

template<> struct is_bitfield<Gtk::BuilderClosureFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class CellRendererState : std::underlying_type<GtkCellRendererState>::type {
  SELECTED_ = GTK_CELL_RENDERER_SELECTED,
  PRELIT_ = GTK_CELL_RENDERER_PRELIT,
  INSENSITIVE_ = GTK_CELL_RENDERER_INSENSITIVE,
  SORTED_ = GTK_CELL_RENDERER_SORTED,
  FOCUSED_ = GTK_CELL_RENDERER_FOCUSED,
  EXPANDABLE_ = GTK_CELL_RENDERER_EXPANDABLE,
  EXPANDED_ = GTK_CELL_RENDERER_EXPANDED,
};

GI_FLAG_OPERATORS(CellRendererState)

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::CellRendererState>
{ typedef GtkCellRendererState type; }; 
template<> struct declare_cpptype_of<GtkCellRendererState>
{ typedef Gtk::CellRendererState type; }; 

template<> struct declare_gtype_of<Gtk::CellRendererState>
{ static GType get_type() { return gtk_cell_renderer_state_get_type(); } };

template<> struct is_bitfield<Gtk::CellRendererState> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class DebugFlags : std::underlying_type<GtkDebugFlags>::type {
  TEXT_ = GTK_DEBUG_TEXT,
  TREE_ = GTK_DEBUG_TREE,
  KEYBINDINGS_ = GTK_DEBUG_KEYBINDINGS,
  MODULES_ = GTK_DEBUG_MODULES,
  GEOMETRY_ = GTK_DEBUG_GEOMETRY,
  ICONTHEME_ = GTK_DEBUG_ICONTHEME,
  PRINTING_ = GTK_DEBUG_PRINTING,
  BUILDER_ = GTK_DEBUG_BUILDER,
  SIZE_REQUEST_ = GTK_DEBUG_SIZE_REQUEST,
  NO_CSS_CACHE_ = GTK_DEBUG_NO_CSS_CACHE,
  INTERACTIVE_ = GTK_DEBUG_INTERACTIVE,
  ACTIONS_ = GTK_DEBUG_ACTIONS,
  LAYOUT_ = GTK_DEBUG_LAYOUT,
  SNAPSHOT_ = GTK_DEBUG_SNAPSHOT,
  CONSTRAINTS_ = GTK_DEBUG_CONSTRAINTS,
  BUILDER_OBJECTS_ = GTK_DEBUG_BUILDER_OBJECTS,
  A11Y_ = GTK_DEBUG_A11Y,
  ICONFALLBACK_ = GTK_DEBUG_ICONFALLBACK,
  INVERT_TEXT_DIR_ = GTK_DEBUG_INVERT_TEXT_DIR,
};

GI_FLAG_OPERATORS(DebugFlags)

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::DebugFlags>
{ typedef GtkDebugFlags type; }; 
template<> struct declare_cpptype_of<GtkDebugFlags>
{ typedef Gtk::DebugFlags type; }; 

template<> struct declare_gtype_of<Gtk::DebugFlags>
{ static GType get_type() { return gtk_debug_flags_get_type(); } };

template<> struct is_bitfield<Gtk::DebugFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class DialogFlags : std::underlying_type<GtkDialogFlags>::type {
  MODAL_ = GTK_DIALOG_MODAL,
  DESTROY_WITH_PARENT_ = GTK_DIALOG_DESTROY_WITH_PARENT,
  USE_HEADER_BAR_ = GTK_DIALOG_USE_HEADER_BAR,
};

GI_FLAG_OPERATORS(DialogFlags)

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::DialogFlags>
{ typedef GtkDialogFlags type; }; 
template<> struct declare_cpptype_of<GtkDialogFlags>
{ typedef Gtk::DialogFlags type; }; 

template<> struct declare_gtype_of<Gtk::DialogFlags>
{ static GType get_type() { return gtk_dialog_flags_get_type(); } };

template<> struct is_bitfield<Gtk::DialogFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class EventControllerScrollFlags : std::underlying_type<GtkEventControllerScrollFlags>::type {
  NONE_ = GTK_EVENT_CONTROLLER_SCROLL_NONE,
  VERTICAL_ = GTK_EVENT_CONTROLLER_SCROLL_VERTICAL,
  HORIZONTAL_ = GTK_EVENT_CONTROLLER_SCROLL_HORIZONTAL,
  DISCRETE_ = GTK_EVENT_CONTROLLER_SCROLL_DISCRETE,
  KINETIC_ = GTK_EVENT_CONTROLLER_SCROLL_KINETIC,
  BOTH_AXES_ = GTK_EVENT_CONTROLLER_SCROLL_BOTH_AXES,
};

GI_FLAG_OPERATORS(EventControllerScrollFlags)

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::EventControllerScrollFlags>
{ typedef GtkEventControllerScrollFlags type; }; 
template<> struct declare_cpptype_of<GtkEventControllerScrollFlags>
{ typedef Gtk::EventControllerScrollFlags type; }; 

template<> struct declare_gtype_of<Gtk::EventControllerScrollFlags>
{ static GType get_type() { return gtk_event_controller_scroll_flags_get_type(); } };

template<> struct is_bitfield<Gtk::EventControllerScrollFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class FontChooserLevel : std::underlying_type<GtkFontChooserLevel>::type {
  FAMILY_ = GTK_FONT_CHOOSER_LEVEL_FAMILY,
  STYLE_ = GTK_FONT_CHOOSER_LEVEL_STYLE,
  SIZE_ = GTK_FONT_CHOOSER_LEVEL_SIZE,
  VARIATIONS_ = GTK_FONT_CHOOSER_LEVEL_VARIATIONS,
  FEATURES_ = GTK_FONT_CHOOSER_LEVEL_FEATURES,
};

GI_FLAG_OPERATORS(FontChooserLevel)

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::FontChooserLevel>
{ typedef GtkFontChooserLevel type; }; 
template<> struct declare_cpptype_of<GtkFontChooserLevel>
{ typedef Gtk::FontChooserLevel type; }; 

template<> struct declare_gtype_of<Gtk::FontChooserLevel>
{ static GType get_type() { return gtk_font_chooser_level_get_type(); } };

template<> struct is_bitfield<Gtk::FontChooserLevel> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class IconLookupFlags : std::underlying_type<GtkIconLookupFlags>::type {
  FORCE_REGULAR_ = GTK_ICON_LOOKUP_FORCE_REGULAR,
  FORCE_SYMBOLIC_ = GTK_ICON_LOOKUP_FORCE_SYMBOLIC,
  PRELOAD_ = GTK_ICON_LOOKUP_PRELOAD,
};

GI_FLAG_OPERATORS(IconLookupFlags)

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::IconLookupFlags>
{ typedef GtkIconLookupFlags type; }; 
template<> struct declare_cpptype_of<GtkIconLookupFlags>
{ typedef Gtk::IconLookupFlags type; }; 

template<> struct declare_gtype_of<Gtk::IconLookupFlags>
{ static GType get_type() { return gtk_icon_lookup_flags_get_type(); } };

template<> struct is_bitfield<Gtk::IconLookupFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class InputHints : std::underlying_type<GtkInputHints>::type {
  NONE_ = GTK_INPUT_HINT_NONE,
  SPELLCHECK_ = GTK_INPUT_HINT_SPELLCHECK,
  NO_SPELLCHECK_ = GTK_INPUT_HINT_NO_SPELLCHECK,
  WORD_COMPLETION_ = GTK_INPUT_HINT_WORD_COMPLETION,
  LOWERCASE_ = GTK_INPUT_HINT_LOWERCASE,
  UPPERCASE_CHARS_ = GTK_INPUT_HINT_UPPERCASE_CHARS,
  UPPERCASE_WORDS_ = GTK_INPUT_HINT_UPPERCASE_WORDS,
  UPPERCASE_SENTENCES_ = GTK_INPUT_HINT_UPPERCASE_SENTENCES,
  INHIBIT_OSK_ = GTK_INPUT_HINT_INHIBIT_OSK,
  VERTICAL_WRITING_ = GTK_INPUT_HINT_VERTICAL_WRITING,
  EMOJI_ = GTK_INPUT_HINT_EMOJI,
  NO_EMOJI_ = GTK_INPUT_HINT_NO_EMOJI,
  PRIVATE_ = GTK_INPUT_HINT_PRIVATE,
};

GI_FLAG_OPERATORS(InputHints)

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::InputHints>
{ typedef GtkInputHints type; }; 
template<> struct declare_cpptype_of<GtkInputHints>
{ typedef Gtk::InputHints type; }; 

template<> struct declare_gtype_of<Gtk::InputHints>
{ static GType get_type() { return gtk_input_hints_get_type(); } };

template<> struct is_bitfield<Gtk::InputHints> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ListScrollFlags : std::underlying_type<GtkListScrollFlags>::type {
  NONE_ = GTK_LIST_SCROLL_NONE,
  FOCUS_ = GTK_LIST_SCROLL_FOCUS,
  SELECT_ = GTK_LIST_SCROLL_SELECT,
};

GI_FLAG_OPERATORS(ListScrollFlags)

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ListScrollFlags>
{ typedef GtkListScrollFlags type; }; 
template<> struct declare_cpptype_of<GtkListScrollFlags>
{ typedef Gtk::ListScrollFlags type; }; 

template<> struct declare_gtype_of<Gtk::ListScrollFlags>
{ static GType get_type() { return gtk_list_scroll_flags_get_type(); } };

template<> struct is_bitfield<Gtk::ListScrollFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PickFlags : std::underlying_type<GtkPickFlags>::type {
  DEFAULT_ = GTK_PICK_DEFAULT,
  INSENSITIVE_ = GTK_PICK_INSENSITIVE,
  NON_TARGETABLE_ = GTK_PICK_NON_TARGETABLE,
};

GI_FLAG_OPERATORS(PickFlags)

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PickFlags>
{ typedef GtkPickFlags type; }; 
template<> struct declare_cpptype_of<GtkPickFlags>
{ typedef Gtk::PickFlags type; }; 

template<> struct declare_gtype_of<Gtk::PickFlags>
{ static GType get_type() { return gtk_pick_flags_get_type(); } };

template<> struct is_bitfield<Gtk::PickFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PopoverMenuFlags : std::underlying_type<GtkPopoverMenuFlags>::type {
  NESTED_ = GTK_POPOVER_MENU_NESTED,
};

GI_FLAG_OPERATORS(PopoverMenuFlags)

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PopoverMenuFlags>
{ typedef GtkPopoverMenuFlags type; }; 
template<> struct declare_cpptype_of<GtkPopoverMenuFlags>
{ typedef Gtk::PopoverMenuFlags type; }; 

template<> struct declare_gtype_of<Gtk::PopoverMenuFlags>
{ static GType get_type() { return gtk_popover_menu_flags_get_type(); } };

template<> struct is_bitfield<Gtk::PopoverMenuFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PrintCapabilities : std::underlying_type<GtkPrintCapabilities>::type {
  PAGE_SET_ = GTK_PRINT_CAPABILITY_PAGE_SET,
  COPIES_ = GTK_PRINT_CAPABILITY_COPIES,
  COLLATE_ = GTK_PRINT_CAPABILITY_COLLATE,
  REVERSE_ = GTK_PRINT_CAPABILITY_REVERSE,
  SCALE_ = GTK_PRINT_CAPABILITY_SCALE,
  GENERATE_PDF_ = GTK_PRINT_CAPABILITY_GENERATE_PDF,
  GENERATE_PS_ = GTK_PRINT_CAPABILITY_GENERATE_PS,
  PREVIEW_ = GTK_PRINT_CAPABILITY_PREVIEW,
  NUMBER_UP_ = GTK_PRINT_CAPABILITY_NUMBER_UP,
  NUMBER_UP_LAYOUT_ = GTK_PRINT_CAPABILITY_NUMBER_UP_LAYOUT,
};

GI_FLAG_OPERATORS(PrintCapabilities)

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PrintCapabilities>
{ typedef GtkPrintCapabilities type; }; 
template<> struct declare_cpptype_of<GtkPrintCapabilities>
{ typedef Gtk::PrintCapabilities type; }; 

template<> struct declare_gtype_of<Gtk::PrintCapabilities>
{ static GType get_type() { return gtk_print_capabilities_get_type(); } };

template<> struct is_bitfield<Gtk::PrintCapabilities> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ShortcutActionFlags : std::underlying_type<GtkShortcutActionFlags>::type {
  EXCLUSIVE_ = GTK_SHORTCUT_ACTION_EXCLUSIVE,
};

GI_FLAG_OPERATORS(ShortcutActionFlags)

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ShortcutActionFlags>
{ typedef GtkShortcutActionFlags type; }; 
template<> struct declare_cpptype_of<GtkShortcutActionFlags>
{ typedef Gtk::ShortcutActionFlags type; }; 

template<> struct declare_gtype_of<Gtk::ShortcutActionFlags>
{ static GType get_type() { return gtk_shortcut_action_flags_get_type(); } };

template<> struct is_bitfield<Gtk::ShortcutActionFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class StateFlags : std::underlying_type<GtkStateFlags>::type {
  NORMAL_ = GTK_STATE_FLAG_NORMAL,
  ACTIVE_ = GTK_STATE_FLAG_ACTIVE,
  PRELIGHT_ = GTK_STATE_FLAG_PRELIGHT,
  SELECTED_ = GTK_STATE_FLAG_SELECTED,
  INSENSITIVE_ = GTK_STATE_FLAG_INSENSITIVE,
  INCONSISTENT_ = GTK_STATE_FLAG_INCONSISTENT,
  FOCUSED_ = GTK_STATE_FLAG_FOCUSED,
  BACKDROP_ = GTK_STATE_FLAG_BACKDROP,
  DIR_LTR_ = GTK_STATE_FLAG_DIR_LTR,
  DIR_RTL_ = GTK_STATE_FLAG_DIR_RTL,
  LINK_ = GTK_STATE_FLAG_LINK,
  VISITED_ = GTK_STATE_FLAG_VISITED,
  CHECKED_ = GTK_STATE_FLAG_CHECKED,
  DROP_ACTIVE_ = GTK_STATE_FLAG_DROP_ACTIVE,
  FOCUS_VISIBLE_ = GTK_STATE_FLAG_FOCUS_VISIBLE,
  FOCUS_WITHIN_ = GTK_STATE_FLAG_FOCUS_WITHIN,
};

GI_FLAG_OPERATORS(StateFlags)

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::StateFlags>
{ typedef GtkStateFlags type; }; 
template<> struct declare_cpptype_of<GtkStateFlags>
{ typedef Gtk::StateFlags type; }; 

template<> struct declare_gtype_of<Gtk::StateFlags>
{ static GType get_type() { return gtk_state_flags_get_type(); } };

template<> struct is_bitfield<Gtk::StateFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class StyleContextPrintFlags : std::underlying_type<GtkStyleContextPrintFlags>::type {
  NONE_ = GTK_STYLE_CONTEXT_PRINT_NONE,
  RECURSE_ = GTK_STYLE_CONTEXT_PRINT_RECURSE,
  SHOW_STYLE_ = GTK_STYLE_CONTEXT_PRINT_SHOW_STYLE,
  SHOW_CHANGE_ = GTK_STYLE_CONTEXT_PRINT_SHOW_CHANGE,
};

GI_FLAG_OPERATORS(StyleContextPrintFlags)

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::StyleContextPrintFlags>
{ typedef GtkStyleContextPrintFlags type; }; 
template<> struct declare_cpptype_of<GtkStyleContextPrintFlags>
{ typedef Gtk::StyleContextPrintFlags type; }; 

template<> struct declare_gtype_of<Gtk::StyleContextPrintFlags>
{ static GType get_type() { return gtk_style_context_print_flags_get_type(); } };

template<> struct is_bitfield<Gtk::StyleContextPrintFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class TextSearchFlags : std::underlying_type<GtkTextSearchFlags>::type {
  VISIBLE_ONLY_ = GTK_TEXT_SEARCH_VISIBLE_ONLY,
  TEXT_ONLY_ = GTK_TEXT_SEARCH_TEXT_ONLY,
  CASE_INSENSITIVE_ = GTK_TEXT_SEARCH_CASE_INSENSITIVE,
};

GI_FLAG_OPERATORS(TextSearchFlags)

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::TextSearchFlags>
{ typedef GtkTextSearchFlags type; }; 
template<> struct declare_cpptype_of<GtkTextSearchFlags>
{ typedef Gtk::TextSearchFlags type; }; 

template<> struct declare_gtype_of<Gtk::TextSearchFlags>
{ static GType get_type() { return gtk_text_search_flags_get_type(); } };

template<> struct is_bitfield<Gtk::TextSearchFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class TreeModelFlags : std::underlying_type<GtkTreeModelFlags>::type {
  ITERS_PERSIST_ = GTK_TREE_MODEL_ITERS_PERSIST,
  LIST_ONLY_ = GTK_TREE_MODEL_LIST_ONLY,
};

GI_FLAG_OPERATORS(TreeModelFlags)

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::TreeModelFlags>
{ typedef GtkTreeModelFlags type; }; 
template<> struct declare_cpptype_of<GtkTreeModelFlags>
{ typedef Gtk::TreeModelFlags type; }; 

template<> struct declare_gtype_of<Gtk::TreeModelFlags>
{ static GType get_type() { return gtk_tree_model_flags_get_type(); } };

template<> struct is_bitfield<Gtk::TreeModelFlags> : public std::true_type
{};


} // namespace repository

} // namespace gi


#endif
