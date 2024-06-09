// AUTO-GENERATED

#ifndef _GI_GTK__ENUMS_HPP_
#define _GI_GTK__ENUMS_HPP_

namespace gi {

namespace repository {

namespace Gtk {

enum class AccessibleAutocomplete : std::underlying_type<GtkAccessibleAutocomplete>::type {
  NONE_ = GTK_ACCESSIBLE_AUTOCOMPLETE_NONE,
  INLINE_ = GTK_ACCESSIBLE_AUTOCOMPLETE_INLINE,
  LIST_ = GTK_ACCESSIBLE_AUTOCOMPLETE_LIST,
  BOTH_ = GTK_ACCESSIBLE_AUTOCOMPLETE_BOTH,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::AccessibleAutocomplete>
{ typedef GtkAccessibleAutocomplete type; }; 
template<> struct declare_cpptype_of<GtkAccessibleAutocomplete>
{ typedef Gtk::AccessibleAutocomplete type; }; 

template<> struct declare_gtype_of<Gtk::AccessibleAutocomplete>
{ static GType get_type() { return gtk_accessible_autocomplete_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class AccessibleInvalidState : std::underlying_type<GtkAccessibleInvalidState>::type {
  FALSE_ = GTK_ACCESSIBLE_INVALID_FALSE,
  TRUE_ = GTK_ACCESSIBLE_INVALID_TRUE,
  GRAMMAR_ = GTK_ACCESSIBLE_INVALID_GRAMMAR,
  SPELLING_ = GTK_ACCESSIBLE_INVALID_SPELLING,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::AccessibleInvalidState>
{ typedef GtkAccessibleInvalidState type; }; 
template<> struct declare_cpptype_of<GtkAccessibleInvalidState>
{ typedef Gtk::AccessibleInvalidState type; }; 

template<> struct declare_gtype_of<Gtk::AccessibleInvalidState>
{ static GType get_type() { return gtk_accessible_invalid_state_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class AccessiblePlatformState : std::underlying_type<GtkAccessiblePlatformState>::type {
  FOCUSABLE_ = GTK_ACCESSIBLE_PLATFORM_STATE_FOCUSABLE,
  FOCUSED_ = GTK_ACCESSIBLE_PLATFORM_STATE_FOCUSED,
  ACTIVE_ = GTK_ACCESSIBLE_PLATFORM_STATE_ACTIVE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::AccessiblePlatformState>
{ typedef GtkAccessiblePlatformState type; }; 
template<> struct declare_cpptype_of<GtkAccessiblePlatformState>
{ typedef Gtk::AccessiblePlatformState type; }; 

template<> struct declare_gtype_of<Gtk::AccessiblePlatformState>
{ static GType get_type() { return gtk_accessible_platform_state_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class AccessibleProperty : std::underlying_type<GtkAccessibleProperty>::type {
  AUTOCOMPLETE_ = GTK_ACCESSIBLE_PROPERTY_AUTOCOMPLETE,
  DESCRIPTION_ = GTK_ACCESSIBLE_PROPERTY_DESCRIPTION,
  HAS_POPUP_ = GTK_ACCESSIBLE_PROPERTY_HAS_POPUP,
  KEY_SHORTCUTS_ = GTK_ACCESSIBLE_PROPERTY_KEY_SHORTCUTS,
  LABEL_ = GTK_ACCESSIBLE_PROPERTY_LABEL,
  LEVEL_ = GTK_ACCESSIBLE_PROPERTY_LEVEL,
  MODAL_ = GTK_ACCESSIBLE_PROPERTY_MODAL,
  MULTI_LINE_ = GTK_ACCESSIBLE_PROPERTY_MULTI_LINE,
  MULTI_SELECTABLE_ = GTK_ACCESSIBLE_PROPERTY_MULTI_SELECTABLE,
  ORIENTATION_ = GTK_ACCESSIBLE_PROPERTY_ORIENTATION,
  PLACEHOLDER_ = GTK_ACCESSIBLE_PROPERTY_PLACEHOLDER,
  READ_ONLY_ = GTK_ACCESSIBLE_PROPERTY_READ_ONLY,
  REQUIRED_ = GTK_ACCESSIBLE_PROPERTY_REQUIRED,
  ROLE_DESCRIPTION_ = GTK_ACCESSIBLE_PROPERTY_ROLE_DESCRIPTION,
  SORT_ = GTK_ACCESSIBLE_PROPERTY_SORT,
  VALUE_MAX_ = GTK_ACCESSIBLE_PROPERTY_VALUE_MAX,
  VALUE_MIN_ = GTK_ACCESSIBLE_PROPERTY_VALUE_MIN,
  VALUE_NOW_ = GTK_ACCESSIBLE_PROPERTY_VALUE_NOW,
  VALUE_TEXT_ = GTK_ACCESSIBLE_PROPERTY_VALUE_TEXT,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::AccessibleProperty>
{ typedef GtkAccessibleProperty type; }; 
template<> struct declare_cpptype_of<GtkAccessibleProperty>
{ typedef Gtk::AccessibleProperty type; }; 

template<> struct declare_gtype_of<Gtk::AccessibleProperty>
{ static GType get_type() { return gtk_accessible_property_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class AccessibleRelation : std::underlying_type<GtkAccessibleRelation>::type {
  ACTIVE_DESCENDANT_ = GTK_ACCESSIBLE_RELATION_ACTIVE_DESCENDANT,
  COL_COUNT_ = GTK_ACCESSIBLE_RELATION_COL_COUNT,
  COL_INDEX_ = GTK_ACCESSIBLE_RELATION_COL_INDEX,
  COL_INDEX_TEXT_ = GTK_ACCESSIBLE_RELATION_COL_INDEX_TEXT,
  COL_SPAN_ = GTK_ACCESSIBLE_RELATION_COL_SPAN,
  CONTROLS_ = GTK_ACCESSIBLE_RELATION_CONTROLS,
  DESCRIBED_BY_ = GTK_ACCESSIBLE_RELATION_DESCRIBED_BY,
  DETAILS_ = GTK_ACCESSIBLE_RELATION_DETAILS,
  ERROR_MESSAGE_ = GTK_ACCESSIBLE_RELATION_ERROR_MESSAGE,
  FLOW_TO_ = GTK_ACCESSIBLE_RELATION_FLOW_TO,
  LABELLED_BY_ = GTK_ACCESSIBLE_RELATION_LABELLED_BY,
  OWNS_ = GTK_ACCESSIBLE_RELATION_OWNS,
  POS_IN_SET_ = GTK_ACCESSIBLE_RELATION_POS_IN_SET,
  ROW_COUNT_ = GTK_ACCESSIBLE_RELATION_ROW_COUNT,
  ROW_INDEX_ = GTK_ACCESSIBLE_RELATION_ROW_INDEX,
  ROW_INDEX_TEXT_ = GTK_ACCESSIBLE_RELATION_ROW_INDEX_TEXT,
  ROW_SPAN_ = GTK_ACCESSIBLE_RELATION_ROW_SPAN,
  SET_SIZE_ = GTK_ACCESSIBLE_RELATION_SET_SIZE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::AccessibleRelation>
{ typedef GtkAccessibleRelation type; }; 
template<> struct declare_cpptype_of<GtkAccessibleRelation>
{ typedef Gtk::AccessibleRelation type; }; 

template<> struct declare_gtype_of<Gtk::AccessibleRelation>
{ static GType get_type() { return gtk_accessible_relation_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class AccessibleRole : std::underlying_type<GtkAccessibleRole>::type {
  ALERT_ = GTK_ACCESSIBLE_ROLE_ALERT,
  ALERT_DIALOG_ = GTK_ACCESSIBLE_ROLE_ALERT_DIALOG,
  BANNER_ = GTK_ACCESSIBLE_ROLE_BANNER,
  BUTTON_ = GTK_ACCESSIBLE_ROLE_BUTTON,
  CAPTION_ = GTK_ACCESSIBLE_ROLE_CAPTION,
  CELL_ = GTK_ACCESSIBLE_ROLE_CELL,
  CHECKBOX_ = GTK_ACCESSIBLE_ROLE_CHECKBOX,
  COLUMN_HEADER_ = GTK_ACCESSIBLE_ROLE_COLUMN_HEADER,
  COMBO_BOX_ = GTK_ACCESSIBLE_ROLE_COMBO_BOX,
  COMMAND_ = GTK_ACCESSIBLE_ROLE_COMMAND,
  COMPOSITE_ = GTK_ACCESSIBLE_ROLE_COMPOSITE,
  DIALOG_ = GTK_ACCESSIBLE_ROLE_DIALOG,
  DOCUMENT_ = GTK_ACCESSIBLE_ROLE_DOCUMENT,
  FEED_ = GTK_ACCESSIBLE_ROLE_FEED,
  FORM_ = GTK_ACCESSIBLE_ROLE_FORM,
  GENERIC_ = GTK_ACCESSIBLE_ROLE_GENERIC,
  GRID_ = GTK_ACCESSIBLE_ROLE_GRID,
  GRID_CELL_ = GTK_ACCESSIBLE_ROLE_GRID_CELL,
  GROUP_ = GTK_ACCESSIBLE_ROLE_GROUP,
  HEADING_ = GTK_ACCESSIBLE_ROLE_HEADING,
  IMG_ = GTK_ACCESSIBLE_ROLE_IMG,
  INPUT_ = GTK_ACCESSIBLE_ROLE_INPUT,
  LABEL_ = GTK_ACCESSIBLE_ROLE_LABEL,
  LANDMARK_ = GTK_ACCESSIBLE_ROLE_LANDMARK,
  LEGEND_ = GTK_ACCESSIBLE_ROLE_LEGEND,
  LINK_ = GTK_ACCESSIBLE_ROLE_LINK,
  LIST_ = GTK_ACCESSIBLE_ROLE_LIST,
  LIST_BOX_ = GTK_ACCESSIBLE_ROLE_LIST_BOX,
  LIST_ITEM_ = GTK_ACCESSIBLE_ROLE_LIST_ITEM,
  LOG_ = GTK_ACCESSIBLE_ROLE_LOG,
  MAIN_ = GTK_ACCESSIBLE_ROLE_MAIN,
  MARQUEE_ = GTK_ACCESSIBLE_ROLE_MARQUEE,
  MATH_ = GTK_ACCESSIBLE_ROLE_MATH,
  METER_ = GTK_ACCESSIBLE_ROLE_METER,
  MENU_ = GTK_ACCESSIBLE_ROLE_MENU,
  MENU_BAR_ = GTK_ACCESSIBLE_ROLE_MENU_BAR,
  MENU_ITEM_ = GTK_ACCESSIBLE_ROLE_MENU_ITEM,
  MENU_ITEM_CHECKBOX_ = GTK_ACCESSIBLE_ROLE_MENU_ITEM_CHECKBOX,
  MENU_ITEM_RADIO_ = GTK_ACCESSIBLE_ROLE_MENU_ITEM_RADIO,
  NAVIGATION_ = GTK_ACCESSIBLE_ROLE_NAVIGATION,
  NONE_ = GTK_ACCESSIBLE_ROLE_NONE,
  NOTE_ = GTK_ACCESSIBLE_ROLE_NOTE,
  OPTION_ = GTK_ACCESSIBLE_ROLE_OPTION,
  PRESENTATION_ = GTK_ACCESSIBLE_ROLE_PRESENTATION,
  PROGRESS_BAR_ = GTK_ACCESSIBLE_ROLE_PROGRESS_BAR,
  RADIO_ = GTK_ACCESSIBLE_ROLE_RADIO,
  RADIO_GROUP_ = GTK_ACCESSIBLE_ROLE_RADIO_GROUP,
  RANGE_ = GTK_ACCESSIBLE_ROLE_RANGE,
  REGION_ = GTK_ACCESSIBLE_ROLE_REGION,
  ROW_ = GTK_ACCESSIBLE_ROLE_ROW,
  ROW_GROUP_ = GTK_ACCESSIBLE_ROLE_ROW_GROUP,
  ROW_HEADER_ = GTK_ACCESSIBLE_ROLE_ROW_HEADER,
  SCROLLBAR_ = GTK_ACCESSIBLE_ROLE_SCROLLBAR,
  SEARCH_ = GTK_ACCESSIBLE_ROLE_SEARCH,
  SEARCH_BOX_ = GTK_ACCESSIBLE_ROLE_SEARCH_BOX,
  SECTION_ = GTK_ACCESSIBLE_ROLE_SECTION,
  SECTION_HEAD_ = GTK_ACCESSIBLE_ROLE_SECTION_HEAD,
  SELECT_ = GTK_ACCESSIBLE_ROLE_SELECT,
  SEPARATOR_ = GTK_ACCESSIBLE_ROLE_SEPARATOR,
  SLIDER_ = GTK_ACCESSIBLE_ROLE_SLIDER,
  SPIN_BUTTON_ = GTK_ACCESSIBLE_ROLE_SPIN_BUTTON,
  STATUS_ = GTK_ACCESSIBLE_ROLE_STATUS,
  STRUCTURE_ = GTK_ACCESSIBLE_ROLE_STRUCTURE,
  SWITCH_ = GTK_ACCESSIBLE_ROLE_SWITCH,
  TAB_ = GTK_ACCESSIBLE_ROLE_TAB,
  TABLE_ = GTK_ACCESSIBLE_ROLE_TABLE,
  TAB_LIST_ = GTK_ACCESSIBLE_ROLE_TAB_LIST,
  TAB_PANEL_ = GTK_ACCESSIBLE_ROLE_TAB_PANEL,
  TEXT_BOX_ = GTK_ACCESSIBLE_ROLE_TEXT_BOX,
  TIME_ = GTK_ACCESSIBLE_ROLE_TIME,
  TIMER_ = GTK_ACCESSIBLE_ROLE_TIMER,
  TOOLBAR_ = GTK_ACCESSIBLE_ROLE_TOOLBAR,
  TOOLTIP_ = GTK_ACCESSIBLE_ROLE_TOOLTIP,
  TREE_ = GTK_ACCESSIBLE_ROLE_TREE,
  TREE_GRID_ = GTK_ACCESSIBLE_ROLE_TREE_GRID,
  TREE_ITEM_ = GTK_ACCESSIBLE_ROLE_TREE_ITEM,
  WIDGET_ = GTK_ACCESSIBLE_ROLE_WIDGET,
  WINDOW_ = GTK_ACCESSIBLE_ROLE_WINDOW,
  TOGGLE_BUTTON_ = GTK_ACCESSIBLE_ROLE_TOGGLE_BUTTON,
  APPLICATION_ = GTK_ACCESSIBLE_ROLE_APPLICATION,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::AccessibleRole>
{ typedef GtkAccessibleRole type; }; 
template<> struct declare_cpptype_of<GtkAccessibleRole>
{ typedef Gtk::AccessibleRole type; }; 

template<> struct declare_gtype_of<Gtk::AccessibleRole>
{ static GType get_type() { return gtk_accessible_role_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class AccessibleSort : std::underlying_type<GtkAccessibleSort>::type {
  NONE_ = GTK_ACCESSIBLE_SORT_NONE,
  ASCENDING_ = GTK_ACCESSIBLE_SORT_ASCENDING,
  DESCENDING_ = GTK_ACCESSIBLE_SORT_DESCENDING,
  OTHER_ = GTK_ACCESSIBLE_SORT_OTHER,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::AccessibleSort>
{ typedef GtkAccessibleSort type; }; 
template<> struct declare_cpptype_of<GtkAccessibleSort>
{ typedef Gtk::AccessibleSort type; }; 

template<> struct declare_gtype_of<Gtk::AccessibleSort>
{ static GType get_type() { return gtk_accessible_sort_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class AccessibleState : std::underlying_type<GtkAccessibleState>::type {
  BUSY_ = GTK_ACCESSIBLE_STATE_BUSY,
  CHECKED_ = GTK_ACCESSIBLE_STATE_CHECKED,
  DISABLED_ = GTK_ACCESSIBLE_STATE_DISABLED,
  EXPANDED_ = GTK_ACCESSIBLE_STATE_EXPANDED,
  HIDDEN_ = GTK_ACCESSIBLE_STATE_HIDDEN,
  INVALID_ = GTK_ACCESSIBLE_STATE_INVALID,
  PRESSED_ = GTK_ACCESSIBLE_STATE_PRESSED,
  SELECTED_ = GTK_ACCESSIBLE_STATE_SELECTED,
  VISITED_ = GTK_ACCESSIBLE_STATE_VISITED,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::AccessibleState>
{ typedef GtkAccessibleState type; }; 
template<> struct declare_cpptype_of<GtkAccessibleState>
{ typedef Gtk::AccessibleState type; }; 

template<> struct declare_gtype_of<Gtk::AccessibleState>
{ static GType get_type() { return gtk_accessible_state_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class AccessibleTristate : std::underlying_type<GtkAccessibleTristate>::type {
  FALSE_ = GTK_ACCESSIBLE_TRISTATE_FALSE,
  TRUE_ = GTK_ACCESSIBLE_TRISTATE_TRUE,
  MIXED_ = GTK_ACCESSIBLE_TRISTATE_MIXED,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::AccessibleTristate>
{ typedef GtkAccessibleTristate type; }; 
template<> struct declare_cpptype_of<GtkAccessibleTristate>
{ typedef Gtk::AccessibleTristate type; }; 

template<> struct declare_gtype_of<Gtk::AccessibleTristate>
{ static GType get_type() { return gtk_accessible_tristate_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class Align : std::underlying_type<GtkAlign>::type {
  FILL_ = GTK_ALIGN_FILL,
  START_ = GTK_ALIGN_START,
  END_ = GTK_ALIGN_END,
  CENTER_ = GTK_ALIGN_CENTER,
  BASELINE_FILL_ = GTK_ALIGN_BASELINE_FILL,
  BASELINE_ = GTK_ALIGN_BASELINE,
  BASELINE_CENTER_ = GTK_ALIGN_BASELINE_CENTER,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::Align>
{ typedef GtkAlign type; }; 
template<> struct declare_cpptype_of<GtkAlign>
{ typedef Gtk::Align type; }; 

template<> struct declare_gtype_of<Gtk::Align>
{ static GType get_type() { return gtk_align_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ArrowType : std::underlying_type<GtkArrowType>::type {
  UP_ = GTK_ARROW_UP,
  DOWN_ = GTK_ARROW_DOWN,
  LEFT_ = GTK_ARROW_LEFT,
  RIGHT_ = GTK_ARROW_RIGHT,
  NONE_ = GTK_ARROW_NONE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ArrowType>
{ typedef GtkArrowType type; }; 
template<> struct declare_cpptype_of<GtkArrowType>
{ typedef Gtk::ArrowType type; }; 

template<> struct declare_gtype_of<Gtk::ArrowType>
{ static GType get_type() { return gtk_arrow_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class AssistantPageType : std::underlying_type<GtkAssistantPageType>::type {
  CONTENT_ = GTK_ASSISTANT_PAGE_CONTENT,
  INTRO_ = GTK_ASSISTANT_PAGE_INTRO,
  CONFIRM_ = GTK_ASSISTANT_PAGE_CONFIRM,
  SUMMARY_ = GTK_ASSISTANT_PAGE_SUMMARY,
  PROGRESS_ = GTK_ASSISTANT_PAGE_PROGRESS,
  CUSTOM_ = GTK_ASSISTANT_PAGE_CUSTOM,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::AssistantPageType>
{ typedef GtkAssistantPageType type; }; 
template<> struct declare_cpptype_of<GtkAssistantPageType>
{ typedef Gtk::AssistantPageType type; }; 

template<> struct declare_gtype_of<Gtk::AssistantPageType>
{ static GType get_type() { return gtk_assistant_page_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class BaselinePosition : std::underlying_type<GtkBaselinePosition>::type {
  TOP_ = GTK_BASELINE_POSITION_TOP,
  CENTER_ = GTK_BASELINE_POSITION_CENTER,
  BOTTOM_ = GTK_BASELINE_POSITION_BOTTOM,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::BaselinePosition>
{ typedef GtkBaselinePosition type; }; 
template<> struct declare_cpptype_of<GtkBaselinePosition>
{ typedef Gtk::BaselinePosition type; }; 

template<> struct declare_gtype_of<Gtk::BaselinePosition>
{ static GType get_type() { return gtk_baseline_position_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class BorderStyle : std::underlying_type<GtkBorderStyle>::type {
  NONE_ = GTK_BORDER_STYLE_NONE,
  HIDDEN_ = GTK_BORDER_STYLE_HIDDEN,
  SOLID_ = GTK_BORDER_STYLE_SOLID,
  INSET_ = GTK_BORDER_STYLE_INSET,
  OUTSET_ = GTK_BORDER_STYLE_OUTSET,
  DOTTED_ = GTK_BORDER_STYLE_DOTTED,
  DASHED_ = GTK_BORDER_STYLE_DASHED,
  DOUBLE_ = GTK_BORDER_STYLE_DOUBLE,
  GROOVE_ = GTK_BORDER_STYLE_GROOVE,
  RIDGE_ = GTK_BORDER_STYLE_RIDGE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::BorderStyle>
{ typedef GtkBorderStyle type; }; 
template<> struct declare_cpptype_of<GtkBorderStyle>
{ typedef Gtk::BorderStyle type; }; 

template<> struct declare_gtype_of<Gtk::BorderStyle>
{ static GType get_type() { return gtk_border_style_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class BuilderError : std::underlying_type<GtkBuilderError>::type {
  INVALID_TYPE_FUNCTION_ = GTK_BUILDER_ERROR_INVALID_TYPE_FUNCTION,
  UNHANDLED_TAG_ = GTK_BUILDER_ERROR_UNHANDLED_TAG,
  MISSING_ATTRIBUTE_ = GTK_BUILDER_ERROR_MISSING_ATTRIBUTE,
  INVALID_ATTRIBUTE_ = GTK_BUILDER_ERROR_INVALID_ATTRIBUTE,
  INVALID_TAG_ = GTK_BUILDER_ERROR_INVALID_TAG,
  MISSING_PROPERTY_VALUE_ = GTK_BUILDER_ERROR_MISSING_PROPERTY_VALUE,
  INVALID_VALUE_ = GTK_BUILDER_ERROR_INVALID_VALUE,
  VERSION_MISMATCH_ = GTK_BUILDER_ERROR_VERSION_MISMATCH,
  DUPLICATE_ID_ = GTK_BUILDER_ERROR_DUPLICATE_ID,
  OBJECT_TYPE_REFUSED_ = GTK_BUILDER_ERROR_OBJECT_TYPE_REFUSED,
  TEMPLATE_MISMATCH_ = GTK_BUILDER_ERROR_TEMPLATE_MISMATCH,
  INVALID_PROPERTY_ = GTK_BUILDER_ERROR_INVALID_PROPERTY,
  INVALID_SIGNAL_ = GTK_BUILDER_ERROR_INVALID_SIGNAL,
  INVALID_ID_ = GTK_BUILDER_ERROR_INVALID_ID,
  INVALID_FUNCTION_ = GTK_BUILDER_ERROR_INVALID_FUNCTION,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::BuilderError>
{ typedef GtkBuilderError type; }; 
template<> struct declare_cpptype_of<GtkBuilderError>
{ typedef Gtk::BuilderError type; }; 

template<> struct declare_gtype_of<Gtk::BuilderError>
{ static GType get_type() { return gtk_builder_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ButtonsType : std::underlying_type<GtkButtonsType>::type {
  NONE_ = GTK_BUTTONS_NONE,
  OK_ = GTK_BUTTONS_OK,
  CLOSE_ = GTK_BUTTONS_CLOSE,
  CANCEL_ = GTK_BUTTONS_CANCEL,
  YES_NO_ = GTK_BUTTONS_YES_NO,
  OK_CANCEL_ = GTK_BUTTONS_OK_CANCEL,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ButtonsType>
{ typedef GtkButtonsType type; }; 
template<> struct declare_cpptype_of<GtkButtonsType>
{ typedef Gtk::ButtonsType type; }; 

template<> struct declare_gtype_of<Gtk::ButtonsType>
{ static GType get_type() { return gtk_buttons_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class CellRendererAccelMode : std::underlying_type<GtkCellRendererAccelMode>::type {
  GTK_ = GTK_CELL_RENDERER_ACCEL_MODE_GTK,
  OTHER_ = GTK_CELL_RENDERER_ACCEL_MODE_OTHER,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::CellRendererAccelMode>
{ typedef GtkCellRendererAccelMode type; }; 
template<> struct declare_cpptype_of<GtkCellRendererAccelMode>
{ typedef Gtk::CellRendererAccelMode type; }; 

template<> struct declare_gtype_of<Gtk::CellRendererAccelMode>
{ static GType get_type() { return gtk_cell_renderer_accel_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class CellRendererMode : std::underlying_type<GtkCellRendererMode>::type {
  INERT_ = GTK_CELL_RENDERER_MODE_INERT,
  ACTIVATABLE_ = GTK_CELL_RENDERER_MODE_ACTIVATABLE,
  EDITABLE_ = GTK_CELL_RENDERER_MODE_EDITABLE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::CellRendererMode>
{ typedef GtkCellRendererMode type; }; 
template<> struct declare_cpptype_of<GtkCellRendererMode>
{ typedef Gtk::CellRendererMode type; }; 

template<> struct declare_gtype_of<Gtk::CellRendererMode>
{ static GType get_type() { return gtk_cell_renderer_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class Collation : std::underlying_type<GtkCollation>::type {
  NONE_ = GTK_COLLATION_NONE,
  UNICODE_ = GTK_COLLATION_UNICODE,
  FILENAME_ = GTK_COLLATION_FILENAME,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::Collation>
{ typedef GtkCollation type; }; 
template<> struct declare_cpptype_of<GtkCollation>
{ typedef Gtk::Collation type; }; 

template<> struct declare_gtype_of<Gtk::Collation>
{ static GType get_type() { return gtk_collation_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ConstraintAttribute : std::underlying_type<GtkConstraintAttribute>::type {
  NONE_ = GTK_CONSTRAINT_ATTRIBUTE_NONE,
  LEFT_ = GTK_CONSTRAINT_ATTRIBUTE_LEFT,
  RIGHT_ = GTK_CONSTRAINT_ATTRIBUTE_RIGHT,
  TOP_ = GTK_CONSTRAINT_ATTRIBUTE_TOP,
  BOTTOM_ = GTK_CONSTRAINT_ATTRIBUTE_BOTTOM,
  START_ = GTK_CONSTRAINT_ATTRIBUTE_START,
  END_ = GTK_CONSTRAINT_ATTRIBUTE_END,
  WIDTH_ = GTK_CONSTRAINT_ATTRIBUTE_WIDTH,
  HEIGHT_ = GTK_CONSTRAINT_ATTRIBUTE_HEIGHT,
  CENTER_X_ = GTK_CONSTRAINT_ATTRIBUTE_CENTER_X,
  CENTER_Y_ = GTK_CONSTRAINT_ATTRIBUTE_CENTER_Y,
  BASELINE_ = GTK_CONSTRAINT_ATTRIBUTE_BASELINE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ConstraintAttribute>
{ typedef GtkConstraintAttribute type; }; 
template<> struct declare_cpptype_of<GtkConstraintAttribute>
{ typedef Gtk::ConstraintAttribute type; }; 

template<> struct declare_gtype_of<Gtk::ConstraintAttribute>
{ static GType get_type() { return gtk_constraint_attribute_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ConstraintRelation : std::underlying_type<GtkConstraintRelation>::type {
  LE_ = GTK_CONSTRAINT_RELATION_LE,
  EQ_ = GTK_CONSTRAINT_RELATION_EQ,
  GE_ = GTK_CONSTRAINT_RELATION_GE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ConstraintRelation>
{ typedef GtkConstraintRelation type; }; 
template<> struct declare_cpptype_of<GtkConstraintRelation>
{ typedef Gtk::ConstraintRelation type; }; 

template<> struct declare_gtype_of<Gtk::ConstraintRelation>
{ static GType get_type() { return gtk_constraint_relation_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ConstraintStrength : std::underlying_type<GtkConstraintStrength>::type {
  REQUIRED_ = GTK_CONSTRAINT_STRENGTH_REQUIRED,
  STRONG_ = GTK_CONSTRAINT_STRENGTH_STRONG,
  MEDIUM_ = GTK_CONSTRAINT_STRENGTH_MEDIUM,
  WEAK_ = GTK_CONSTRAINT_STRENGTH_WEAK,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ConstraintStrength>
{ typedef GtkConstraintStrength type; }; 
template<> struct declare_cpptype_of<GtkConstraintStrength>
{ typedef Gtk::ConstraintStrength type; }; 

template<> struct declare_gtype_of<Gtk::ConstraintStrength>
{ static GType get_type() { return gtk_constraint_strength_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ConstraintVflParserError : std::underlying_type<GtkConstraintVflParserError>::type {
  SYMBOL_ = GTK_CONSTRAINT_VFL_PARSER_ERROR_INVALID_SYMBOL,
  ATTRIBUTE_ = GTK_CONSTRAINT_VFL_PARSER_ERROR_INVALID_ATTRIBUTE,
  VIEW_ = GTK_CONSTRAINT_VFL_PARSER_ERROR_INVALID_VIEW,
  METRIC_ = GTK_CONSTRAINT_VFL_PARSER_ERROR_INVALID_METRIC,
  PRIORITY_ = GTK_CONSTRAINT_VFL_PARSER_ERROR_INVALID_PRIORITY,
  RELATION_ = GTK_CONSTRAINT_VFL_PARSER_ERROR_INVALID_RELATION,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ConstraintVflParserError>
{ typedef GtkConstraintVflParserError type; }; 
template<> struct declare_cpptype_of<GtkConstraintVflParserError>
{ typedef Gtk::ConstraintVflParserError type; }; 

template<> struct declare_gtype_of<Gtk::ConstraintVflParserError>
{ static GType get_type() { return gtk_constraint_vfl_parser_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ContentFit : std::underlying_type<GtkContentFit>::type {
  FILL_ = GTK_CONTENT_FIT_FILL,
  CONTAIN_ = GTK_CONTENT_FIT_CONTAIN,
  COVER_ = GTK_CONTENT_FIT_COVER,
  SCALE_DOWN_ = GTK_CONTENT_FIT_SCALE_DOWN,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ContentFit>
{ typedef GtkContentFit type; }; 
template<> struct declare_cpptype_of<GtkContentFit>
{ typedef Gtk::ContentFit type; }; 

template<> struct declare_gtype_of<Gtk::ContentFit>
{ static GType get_type() { return gtk_content_fit_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class CornerType : std::underlying_type<GtkCornerType>::type {
  TOP_LEFT_ = GTK_CORNER_TOP_LEFT,
  BOTTOM_LEFT_ = GTK_CORNER_BOTTOM_LEFT,
  TOP_RIGHT_ = GTK_CORNER_TOP_RIGHT,
  BOTTOM_RIGHT_ = GTK_CORNER_BOTTOM_RIGHT,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::CornerType>
{ typedef GtkCornerType type; }; 
template<> struct declare_cpptype_of<GtkCornerType>
{ typedef Gtk::CornerType type; }; 

template<> struct declare_gtype_of<Gtk::CornerType>
{ static GType get_type() { return gtk_corner_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class CssParserError : std::underlying_type<GtkCssParserError>::type {
  FAILED_ = GTK_CSS_PARSER_ERROR_FAILED,
  SYNTAX_ = GTK_CSS_PARSER_ERROR_SYNTAX,
  IMPORT_ = GTK_CSS_PARSER_ERROR_IMPORT,
  NAME_ = GTK_CSS_PARSER_ERROR_NAME,
  UNKNOWN_VALUE_ = GTK_CSS_PARSER_ERROR_UNKNOWN_VALUE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::CssParserError>
{ typedef GtkCssParserError type; }; 
template<> struct declare_cpptype_of<GtkCssParserError>
{ typedef Gtk::CssParserError type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class CssParserWarning : std::underlying_type<GtkCssParserWarning>::type {
  DEPRECATED_ = GTK_CSS_PARSER_WARNING_DEPRECATED,
  SYNTAX_ = GTK_CSS_PARSER_WARNING_SYNTAX,
  UNIMPLEMENTED_ = GTK_CSS_PARSER_WARNING_UNIMPLEMENTED,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::CssParserWarning>
{ typedef GtkCssParserWarning type; }; 
template<> struct declare_cpptype_of<GtkCssParserWarning>
{ typedef Gtk::CssParserWarning type; }; 


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class DeleteType : std::underlying_type<GtkDeleteType>::type {
  CHARS_ = GTK_DELETE_CHARS,
  WORD_ENDS_ = GTK_DELETE_WORD_ENDS,
  WORDS_ = GTK_DELETE_WORDS,
  DISPLAY_LINES_ = GTK_DELETE_DISPLAY_LINES,
  DISPLAY_LINE_ENDS_ = GTK_DELETE_DISPLAY_LINE_ENDS,
  PARAGRAPH_ENDS_ = GTK_DELETE_PARAGRAPH_ENDS,
  PARAGRAPHS_ = GTK_DELETE_PARAGRAPHS,
  WHITESPACE_ = GTK_DELETE_WHITESPACE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::DeleteType>
{ typedef GtkDeleteType type; }; 
template<> struct declare_cpptype_of<GtkDeleteType>
{ typedef Gtk::DeleteType type; }; 

template<> struct declare_gtype_of<Gtk::DeleteType>
{ static GType get_type() { return gtk_delete_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class DialogError : std::underlying_type<GtkDialogError>::type {
  FAILED_ = GTK_DIALOG_ERROR_FAILED,
  CANCELLED_ = GTK_DIALOG_ERROR_CANCELLED,
  DISMISSED_ = GTK_DIALOG_ERROR_DISMISSED,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::DialogError>
{ typedef GtkDialogError type; }; 
template<> struct declare_cpptype_of<GtkDialogError>
{ typedef Gtk::DialogError type; }; 

template<> struct declare_gtype_of<Gtk::DialogError>
{ static GType get_type() { return gtk_dialog_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class DirectionType : std::underlying_type<GtkDirectionType>::type {
  TAB_FORWARD_ = GTK_DIR_TAB_FORWARD,
  TAB_BACKWARD_ = GTK_DIR_TAB_BACKWARD,
  UP_ = GTK_DIR_UP,
  DOWN_ = GTK_DIR_DOWN,
  LEFT_ = GTK_DIR_LEFT,
  RIGHT_ = GTK_DIR_RIGHT,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::DirectionType>
{ typedef GtkDirectionType type; }; 
template<> struct declare_cpptype_of<GtkDirectionType>
{ typedef Gtk::DirectionType type; }; 

template<> struct declare_gtype_of<Gtk::DirectionType>
{ static GType get_type() { return gtk_direction_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class EditableProperties : std::underlying_type<GtkEditableProperties>::type {
  PROP_TEXT_ = GTK_EDITABLE_PROP_TEXT,
  PROP_CURSOR_POSITION_ = GTK_EDITABLE_PROP_CURSOR_POSITION,
  PROP_SELECTION_BOUND_ = GTK_EDITABLE_PROP_SELECTION_BOUND,
  PROP_EDITABLE_ = GTK_EDITABLE_PROP_EDITABLE,
  PROP_WIDTH_CHARS_ = GTK_EDITABLE_PROP_WIDTH_CHARS,
  PROP_MAX_WIDTH_CHARS_ = GTK_EDITABLE_PROP_MAX_WIDTH_CHARS,
  PROP_XALIGN_ = GTK_EDITABLE_PROP_XALIGN,
  PROP_ENABLE_UNDO_ = GTK_EDITABLE_PROP_ENABLE_UNDO,
  NUM_PROPERTIES_ = GTK_EDITABLE_NUM_PROPERTIES,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::EditableProperties>
{ typedef GtkEditableProperties type; }; 
template<> struct declare_cpptype_of<GtkEditableProperties>
{ typedef Gtk::EditableProperties type; }; 

template<> struct declare_gtype_of<Gtk::EditableProperties>
{ static GType get_type() { return gtk_editable_properties_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class EntryIconPosition : std::underlying_type<GtkEntryIconPosition>::type {
  PRIMARY_ = GTK_ENTRY_ICON_PRIMARY,
  SECONDARY_ = GTK_ENTRY_ICON_SECONDARY,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::EntryIconPosition>
{ typedef GtkEntryIconPosition type; }; 
template<> struct declare_cpptype_of<GtkEntryIconPosition>
{ typedef Gtk::EntryIconPosition type; }; 

template<> struct declare_gtype_of<Gtk::EntryIconPosition>
{ static GType get_type() { return gtk_entry_icon_position_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class EventSequenceState : std::underlying_type<GtkEventSequenceState>::type {
  NONE_ = GTK_EVENT_SEQUENCE_NONE,
  CLAIMED_ = GTK_EVENT_SEQUENCE_CLAIMED,
  DENIED_ = GTK_EVENT_SEQUENCE_DENIED,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::EventSequenceState>
{ typedef GtkEventSequenceState type; }; 
template<> struct declare_cpptype_of<GtkEventSequenceState>
{ typedef Gtk::EventSequenceState type; }; 

template<> struct declare_gtype_of<Gtk::EventSequenceState>
{ static GType get_type() { return gtk_event_sequence_state_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class FileChooserAction : std::underlying_type<GtkFileChooserAction>::type {
  OPEN_ = GTK_FILE_CHOOSER_ACTION_OPEN,
  SAVE_ = GTK_FILE_CHOOSER_ACTION_SAVE,
  SELECT_FOLDER_ = GTK_FILE_CHOOSER_ACTION_SELECT_FOLDER,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::FileChooserAction>
{ typedef GtkFileChooserAction type; }; 
template<> struct declare_cpptype_of<GtkFileChooserAction>
{ typedef Gtk::FileChooserAction type; }; 

template<> struct declare_gtype_of<Gtk::FileChooserAction>
{ static GType get_type() { return gtk_file_chooser_action_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class FileChooserError : std::underlying_type<GtkFileChooserError>::type {
  NONEXISTENT_ = GTK_FILE_CHOOSER_ERROR_NONEXISTENT,
  BAD_FILENAME_ = GTK_FILE_CHOOSER_ERROR_BAD_FILENAME,
  ALREADY_EXISTS_ = GTK_FILE_CHOOSER_ERROR_ALREADY_EXISTS,
  INCOMPLETE_HOSTNAME_ = GTK_FILE_CHOOSER_ERROR_INCOMPLETE_HOSTNAME,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::FileChooserError>
{ typedef GtkFileChooserError type; }; 
template<> struct declare_cpptype_of<GtkFileChooserError>
{ typedef Gtk::FileChooserError type; }; 

template<> struct declare_gtype_of<Gtk::FileChooserError>
{ static GType get_type() { return gtk_file_chooser_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class FilterChange : std::underlying_type<GtkFilterChange>::type {
  DIFFERENT_ = GTK_FILTER_CHANGE_DIFFERENT,
  LESS_STRICT_ = GTK_FILTER_CHANGE_LESS_STRICT,
  MORE_STRICT_ = GTK_FILTER_CHANGE_MORE_STRICT,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::FilterChange>
{ typedef GtkFilterChange type; }; 
template<> struct declare_cpptype_of<GtkFilterChange>
{ typedef Gtk::FilterChange type; }; 

template<> struct declare_gtype_of<Gtk::FilterChange>
{ static GType get_type() { return gtk_filter_change_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class FilterMatch : std::underlying_type<GtkFilterMatch>::type {
  SOME_ = GTK_FILTER_MATCH_SOME,
  NONE_ = GTK_FILTER_MATCH_NONE,
  ALL_ = GTK_FILTER_MATCH_ALL,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::FilterMatch>
{ typedef GtkFilterMatch type; }; 
template<> struct declare_cpptype_of<GtkFilterMatch>
{ typedef Gtk::FilterMatch type; }; 

template<> struct declare_gtype_of<Gtk::FilterMatch>
{ static GType get_type() { return gtk_filter_match_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class FontLevel : std::underlying_type<GtkFontLevel>::type {
  FAMILY_ = GTK_FONT_LEVEL_FAMILY,
  FACE_ = GTK_FONT_LEVEL_FACE,
  FONT_ = GTK_FONT_LEVEL_FONT,
  FEATURES_ = GTK_FONT_LEVEL_FEATURES,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::FontLevel>
{ typedef GtkFontLevel type; }; 
template<> struct declare_cpptype_of<GtkFontLevel>
{ typedef Gtk::FontLevel type; }; 

template<> struct declare_gtype_of<Gtk::FontLevel>
{ static GType get_type() { return gtk_font_level_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class IconSize : std::underlying_type<GtkIconSize>::type {
  INHERIT_ = GTK_ICON_SIZE_INHERIT,
  NORMAL_ = GTK_ICON_SIZE_NORMAL,
  LARGE_ = GTK_ICON_SIZE_LARGE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::IconSize>
{ typedef GtkIconSize type; }; 
template<> struct declare_cpptype_of<GtkIconSize>
{ typedef Gtk::IconSize type; }; 

template<> struct declare_gtype_of<Gtk::IconSize>
{ static GType get_type() { return gtk_icon_size_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class IconThemeError : std::underlying_type<GtkIconThemeError>::type {
  NOT_FOUND_ = GTK_ICON_THEME_NOT_FOUND,
  FAILED_ = GTK_ICON_THEME_FAILED,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::IconThemeError>
{ typedef GtkIconThemeError type; }; 
template<> struct declare_cpptype_of<GtkIconThemeError>
{ typedef Gtk::IconThemeError type; }; 

template<> struct declare_gtype_of<Gtk::IconThemeError>
{ static GType get_type() { return gtk_icon_theme_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class IconViewDropPosition : std::underlying_type<GtkIconViewDropPosition>::type {
  NO_DROP_ = GTK_ICON_VIEW_NO_DROP,
  DROP_INTO_ = GTK_ICON_VIEW_DROP_INTO,
  DROP_LEFT_ = GTK_ICON_VIEW_DROP_LEFT,
  DROP_RIGHT_ = GTK_ICON_VIEW_DROP_RIGHT,
  DROP_ABOVE_ = GTK_ICON_VIEW_DROP_ABOVE,
  DROP_BELOW_ = GTK_ICON_VIEW_DROP_BELOW,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::IconViewDropPosition>
{ typedef GtkIconViewDropPosition type; }; 
template<> struct declare_cpptype_of<GtkIconViewDropPosition>
{ typedef Gtk::IconViewDropPosition type; }; 

template<> struct declare_gtype_of<Gtk::IconViewDropPosition>
{ static GType get_type() { return gtk_icon_view_drop_position_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ImageType : std::underlying_type<GtkImageType>::type {
  EMPTY_ = GTK_IMAGE_EMPTY,
  ICON_NAME_ = GTK_IMAGE_ICON_NAME,
  GICON_ = GTK_IMAGE_GICON,
  PAINTABLE_ = GTK_IMAGE_PAINTABLE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ImageType>
{ typedef GtkImageType type; }; 
template<> struct declare_cpptype_of<GtkImageType>
{ typedef Gtk::ImageType type; }; 

template<> struct declare_gtype_of<Gtk::ImageType>
{ static GType get_type() { return gtk_image_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class InputPurpose : std::underlying_type<GtkInputPurpose>::type {
  FREE_FORM_ = GTK_INPUT_PURPOSE_FREE_FORM,
  ALPHA_ = GTK_INPUT_PURPOSE_ALPHA,
  DIGITS_ = GTK_INPUT_PURPOSE_DIGITS,
  NUMBER_ = GTK_INPUT_PURPOSE_NUMBER,
  PHONE_ = GTK_INPUT_PURPOSE_PHONE,
  URL_ = GTK_INPUT_PURPOSE_URL,
  EMAIL_ = GTK_INPUT_PURPOSE_EMAIL,
  NAME_ = GTK_INPUT_PURPOSE_NAME,
  PASSWORD_ = GTK_INPUT_PURPOSE_PASSWORD,
  PIN_ = GTK_INPUT_PURPOSE_PIN,
  TERMINAL_ = GTK_INPUT_PURPOSE_TERMINAL,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::InputPurpose>
{ typedef GtkInputPurpose type; }; 
template<> struct declare_cpptype_of<GtkInputPurpose>
{ typedef Gtk::InputPurpose type; }; 

template<> struct declare_gtype_of<Gtk::InputPurpose>
{ static GType get_type() { return gtk_input_purpose_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class InscriptionOverflow : std::underlying_type<GtkInscriptionOverflow>::type {
  CLIP_ = GTK_INSCRIPTION_OVERFLOW_CLIP,
  ELLIPSIZE_START_ = GTK_INSCRIPTION_OVERFLOW_ELLIPSIZE_START,
  ELLIPSIZE_MIDDLE_ = GTK_INSCRIPTION_OVERFLOW_ELLIPSIZE_MIDDLE,
  ELLIPSIZE_END_ = GTK_INSCRIPTION_OVERFLOW_ELLIPSIZE_END,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::InscriptionOverflow>
{ typedef GtkInscriptionOverflow type; }; 
template<> struct declare_cpptype_of<GtkInscriptionOverflow>
{ typedef Gtk::InscriptionOverflow type; }; 

template<> struct declare_gtype_of<Gtk::InscriptionOverflow>
{ static GType get_type() { return gtk_inscription_overflow_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class Justification : std::underlying_type<GtkJustification>::type {
  LEFT_ = GTK_JUSTIFY_LEFT,
  RIGHT_ = GTK_JUSTIFY_RIGHT,
  CENTER_ = GTK_JUSTIFY_CENTER,
  FILL_ = GTK_JUSTIFY_FILL,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::Justification>
{ typedef GtkJustification type; }; 
template<> struct declare_cpptype_of<GtkJustification>
{ typedef Gtk::Justification type; }; 

template<> struct declare_gtype_of<Gtk::Justification>
{ static GType get_type() { return gtk_justification_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class LevelBarMode : std::underlying_type<GtkLevelBarMode>::type {
  CONTINUOUS_ = GTK_LEVEL_BAR_MODE_CONTINUOUS,
  DISCRETE_ = GTK_LEVEL_BAR_MODE_DISCRETE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::LevelBarMode>
{ typedef GtkLevelBarMode type; }; 
template<> struct declare_cpptype_of<GtkLevelBarMode>
{ typedef Gtk::LevelBarMode type; }; 

template<> struct declare_gtype_of<Gtk::LevelBarMode>
{ static GType get_type() { return gtk_level_bar_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class License : std::underlying_type<GtkLicense>::type {
  UNKNOWN_ = GTK_LICENSE_UNKNOWN,
  CUSTOM_ = GTK_LICENSE_CUSTOM,
  GPL_2_0_ = GTK_LICENSE_GPL_2_0,
  GPL_3_0_ = GTK_LICENSE_GPL_3_0,
  LGPL_2_1_ = GTK_LICENSE_LGPL_2_1,
  LGPL_3_0_ = GTK_LICENSE_LGPL_3_0,
  BSD_ = GTK_LICENSE_BSD,
  MIT_X11_ = GTK_LICENSE_MIT_X11,
  ARTISTIC_ = GTK_LICENSE_ARTISTIC,
  GPL_2_0_ONLY_ = GTK_LICENSE_GPL_2_0_ONLY,
  GPL_3_0_ONLY_ = GTK_LICENSE_GPL_3_0_ONLY,
  LGPL_2_1_ONLY_ = GTK_LICENSE_LGPL_2_1_ONLY,
  LGPL_3_0_ONLY_ = GTK_LICENSE_LGPL_3_0_ONLY,
  AGPL_3_0_ = GTK_LICENSE_AGPL_3_0,
  AGPL_3_0_ONLY_ = GTK_LICENSE_AGPL_3_0_ONLY,
  BSD_3_ = GTK_LICENSE_BSD_3,
  APACHE_2_0_ = GTK_LICENSE_APACHE_2_0,
  MPL_2_0_ = GTK_LICENSE_MPL_2_0,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::License>
{ typedef GtkLicense type; }; 
template<> struct declare_cpptype_of<GtkLicense>
{ typedef Gtk::License type; }; 

template<> struct declare_gtype_of<Gtk::License>
{ static GType get_type() { return gtk_license_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ListTabBehavior : std::underlying_type<GtkListTabBehavior>::type {
  ALL_ = GTK_LIST_TAB_ALL,
  ITEM_ = GTK_LIST_TAB_ITEM,
  CELL_ = GTK_LIST_TAB_CELL,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ListTabBehavior>
{ typedef GtkListTabBehavior type; }; 
template<> struct declare_cpptype_of<GtkListTabBehavior>
{ typedef Gtk::ListTabBehavior type; }; 

template<> struct declare_gtype_of<Gtk::ListTabBehavior>
{ static GType get_type() { return gtk_list_tab_behavior_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class MessageType : std::underlying_type<GtkMessageType>::type {
  INFO_ = GTK_MESSAGE_INFO,
  WARNING_ = GTK_MESSAGE_WARNING,
  QUESTION_ = GTK_MESSAGE_QUESTION,
  ERROR_ = GTK_MESSAGE_ERROR,
  OTHER_ = GTK_MESSAGE_OTHER,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::MessageType>
{ typedef GtkMessageType type; }; 
template<> struct declare_cpptype_of<GtkMessageType>
{ typedef Gtk::MessageType type; }; 

template<> struct declare_gtype_of<Gtk::MessageType>
{ static GType get_type() { return gtk_message_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class MovementStep : std::underlying_type<GtkMovementStep>::type {
  LOGICAL_POSITIONS_ = GTK_MOVEMENT_LOGICAL_POSITIONS,
  VISUAL_POSITIONS_ = GTK_MOVEMENT_VISUAL_POSITIONS,
  WORDS_ = GTK_MOVEMENT_WORDS,
  DISPLAY_LINES_ = GTK_MOVEMENT_DISPLAY_LINES,
  DISPLAY_LINE_ENDS_ = GTK_MOVEMENT_DISPLAY_LINE_ENDS,
  PARAGRAPHS_ = GTK_MOVEMENT_PARAGRAPHS,
  PARAGRAPH_ENDS_ = GTK_MOVEMENT_PARAGRAPH_ENDS,
  PAGES_ = GTK_MOVEMENT_PAGES,
  BUFFER_ENDS_ = GTK_MOVEMENT_BUFFER_ENDS,
  HORIZONTAL_PAGES_ = GTK_MOVEMENT_HORIZONTAL_PAGES,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::MovementStep>
{ typedef GtkMovementStep type; }; 
template<> struct declare_cpptype_of<GtkMovementStep>
{ typedef Gtk::MovementStep type; }; 

template<> struct declare_gtype_of<Gtk::MovementStep>
{ static GType get_type() { return gtk_movement_step_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class NaturalWrapMode : std::underlying_type<GtkNaturalWrapMode>::type {
  INHERIT_ = GTK_NATURAL_WRAP_INHERIT,
  NONE_ = GTK_NATURAL_WRAP_NONE,
  WORD_ = GTK_NATURAL_WRAP_WORD,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::NaturalWrapMode>
{ typedef GtkNaturalWrapMode type; }; 
template<> struct declare_cpptype_of<GtkNaturalWrapMode>
{ typedef Gtk::NaturalWrapMode type; }; 

template<> struct declare_gtype_of<Gtk::NaturalWrapMode>
{ static GType get_type() { return gtk_natural_wrap_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class NotebookTab : std::underlying_type<GtkNotebookTab>::type {
  FIRST_ = GTK_NOTEBOOK_TAB_FIRST,
  LAST_ = GTK_NOTEBOOK_TAB_LAST,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::NotebookTab>
{ typedef GtkNotebookTab type; }; 
template<> struct declare_cpptype_of<GtkNotebookTab>
{ typedef Gtk::NotebookTab type; }; 

template<> struct declare_gtype_of<Gtk::NotebookTab>
{ static GType get_type() { return gtk_notebook_tab_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class NumberUpLayout : std::underlying_type<GtkNumberUpLayout>::type {
  LRTB_ = GTK_NUMBER_UP_LAYOUT_LEFT_TO_RIGHT_TOP_TO_BOTTOM,
  LRBT_ = GTK_NUMBER_UP_LAYOUT_LEFT_TO_RIGHT_BOTTOM_TO_TOP,
  RLTB_ = GTK_NUMBER_UP_LAYOUT_RIGHT_TO_LEFT_TOP_TO_BOTTOM,
  RLBT_ = GTK_NUMBER_UP_LAYOUT_RIGHT_TO_LEFT_BOTTOM_TO_TOP,
  TBLR_ = GTK_NUMBER_UP_LAYOUT_TOP_TO_BOTTOM_LEFT_TO_RIGHT,
  TBRL_ = GTK_NUMBER_UP_LAYOUT_TOP_TO_BOTTOM_RIGHT_TO_LEFT,
  BTLR_ = GTK_NUMBER_UP_LAYOUT_BOTTOM_TO_TOP_LEFT_TO_RIGHT,
  BTRL_ = GTK_NUMBER_UP_LAYOUT_BOTTOM_TO_TOP_RIGHT_TO_LEFT,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::NumberUpLayout>
{ typedef GtkNumberUpLayout type; }; 
template<> struct declare_cpptype_of<GtkNumberUpLayout>
{ typedef Gtk::NumberUpLayout type; }; 

template<> struct declare_gtype_of<Gtk::NumberUpLayout>
{ static GType get_type() { return gtk_number_up_layout_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class Ordering : std::underlying_type<GtkOrdering>::type {
  SMALLER_ = GTK_ORDERING_SMALLER,
  EQUAL_ = GTK_ORDERING_EQUAL,
  LARGER_ = GTK_ORDERING_LARGER,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::Ordering>
{ typedef GtkOrdering type; }; 
template<> struct declare_cpptype_of<GtkOrdering>
{ typedef Gtk::Ordering type; }; 

template<> struct declare_gtype_of<Gtk::Ordering>
{ static GType get_type() { return gtk_ordering_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class Orientation : std::underlying_type<GtkOrientation>::type {
  HORIZONTAL_ = GTK_ORIENTATION_HORIZONTAL,
  VERTICAL_ = GTK_ORIENTATION_VERTICAL,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::Orientation>
{ typedef GtkOrientation type; }; 
template<> struct declare_cpptype_of<GtkOrientation>
{ typedef Gtk::Orientation type; }; 

template<> struct declare_gtype_of<Gtk::Orientation>
{ static GType get_type() { return gtk_orientation_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class Overflow : std::underlying_type<GtkOverflow>::type {
  VISIBLE_ = GTK_OVERFLOW_VISIBLE,
  HIDDEN_ = GTK_OVERFLOW_HIDDEN,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::Overflow>
{ typedef GtkOverflow type; }; 
template<> struct declare_cpptype_of<GtkOverflow>
{ typedef Gtk::Overflow type; }; 

template<> struct declare_gtype_of<Gtk::Overflow>
{ static GType get_type() { return gtk_overflow_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PackType : std::underlying_type<GtkPackType>::type {
  START_ = GTK_PACK_START,
  END_ = GTK_PACK_END,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PackType>
{ typedef GtkPackType type; }; 
template<> struct declare_cpptype_of<GtkPackType>
{ typedef Gtk::PackType type; }; 

template<> struct declare_gtype_of<Gtk::PackType>
{ static GType get_type() { return gtk_pack_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PadActionType : std::underlying_type<GtkPadActionType>::type {
  BUTTON_ = GTK_PAD_ACTION_BUTTON,
  RING_ = GTK_PAD_ACTION_RING,
  STRIP_ = GTK_PAD_ACTION_STRIP,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PadActionType>
{ typedef GtkPadActionType type; }; 
template<> struct declare_cpptype_of<GtkPadActionType>
{ typedef Gtk::PadActionType type; }; 

template<> struct declare_gtype_of<Gtk::PadActionType>
{ static GType get_type() { return gtk_pad_action_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PageOrientation : std::underlying_type<GtkPageOrientation>::type {
  PORTRAIT_ = GTK_PAGE_ORIENTATION_PORTRAIT,
  LANDSCAPE_ = GTK_PAGE_ORIENTATION_LANDSCAPE,
  REVERSE_PORTRAIT_ = GTK_PAGE_ORIENTATION_REVERSE_PORTRAIT,
  REVERSE_LANDSCAPE_ = GTK_PAGE_ORIENTATION_REVERSE_LANDSCAPE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PageOrientation>
{ typedef GtkPageOrientation type; }; 
template<> struct declare_cpptype_of<GtkPageOrientation>
{ typedef Gtk::PageOrientation type; }; 

template<> struct declare_gtype_of<Gtk::PageOrientation>
{ static GType get_type() { return gtk_page_orientation_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PageSet : std::underlying_type<GtkPageSet>::type {
  ALL_ = GTK_PAGE_SET_ALL,
  EVEN_ = GTK_PAGE_SET_EVEN,
  ODD_ = GTK_PAGE_SET_ODD,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PageSet>
{ typedef GtkPageSet type; }; 
template<> struct declare_cpptype_of<GtkPageSet>
{ typedef Gtk::PageSet type; }; 

template<> struct declare_gtype_of<Gtk::PageSet>
{ static GType get_type() { return gtk_page_set_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PanDirection : std::underlying_type<GtkPanDirection>::type {
  LEFT_ = GTK_PAN_DIRECTION_LEFT,
  RIGHT_ = GTK_PAN_DIRECTION_RIGHT,
  UP_ = GTK_PAN_DIRECTION_UP,
  DOWN_ = GTK_PAN_DIRECTION_DOWN,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PanDirection>
{ typedef GtkPanDirection type; }; 
template<> struct declare_cpptype_of<GtkPanDirection>
{ typedef Gtk::PanDirection type; }; 

template<> struct declare_gtype_of<Gtk::PanDirection>
{ static GType get_type() { return gtk_pan_direction_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PolicyType : std::underlying_type<GtkPolicyType>::type {
  ALWAYS_ = GTK_POLICY_ALWAYS,
  AUTOMATIC_ = GTK_POLICY_AUTOMATIC,
  NEVER_ = GTK_POLICY_NEVER,
  EXTERNAL_ = GTK_POLICY_EXTERNAL,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PolicyType>
{ typedef GtkPolicyType type; }; 
template<> struct declare_cpptype_of<GtkPolicyType>
{ typedef Gtk::PolicyType type; }; 

template<> struct declare_gtype_of<Gtk::PolicyType>
{ static GType get_type() { return gtk_policy_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PositionType : std::underlying_type<GtkPositionType>::type {
  LEFT_ = GTK_POS_LEFT,
  RIGHT_ = GTK_POS_RIGHT,
  TOP_ = GTK_POS_TOP,
  BOTTOM_ = GTK_POS_BOTTOM,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PositionType>
{ typedef GtkPositionType type; }; 
template<> struct declare_cpptype_of<GtkPositionType>
{ typedef Gtk::PositionType type; }; 

template<> struct declare_gtype_of<Gtk::PositionType>
{ static GType get_type() { return gtk_position_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PrintDuplex : std::underlying_type<GtkPrintDuplex>::type {
  SIMPLEX_ = GTK_PRINT_DUPLEX_SIMPLEX,
  HORIZONTAL_ = GTK_PRINT_DUPLEX_HORIZONTAL,
  VERTICAL_ = GTK_PRINT_DUPLEX_VERTICAL,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PrintDuplex>
{ typedef GtkPrintDuplex type; }; 
template<> struct declare_cpptype_of<GtkPrintDuplex>
{ typedef Gtk::PrintDuplex type; }; 

template<> struct declare_gtype_of<Gtk::PrintDuplex>
{ static GType get_type() { return gtk_print_duplex_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PrintError : std::underlying_type<GtkPrintError>::type {
  GENERAL_ = GTK_PRINT_ERROR_GENERAL,
  INTERNAL_ERROR_ = GTK_PRINT_ERROR_INTERNAL_ERROR,
  NOMEM_ = GTK_PRINT_ERROR_NOMEM,
  INVALID_FILE_ = GTK_PRINT_ERROR_INVALID_FILE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PrintError>
{ typedef GtkPrintError type; }; 
template<> struct declare_cpptype_of<GtkPrintError>
{ typedef Gtk::PrintError type; }; 

template<> struct declare_gtype_of<Gtk::PrintError>
{ static GType get_type() { return gtk_print_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PrintOperationAction : std::underlying_type<GtkPrintOperationAction>::type {
  PRINT_DIALOG_ = GTK_PRINT_OPERATION_ACTION_PRINT_DIALOG,
  PRINT_ = GTK_PRINT_OPERATION_ACTION_PRINT,
  PREVIEW_ = GTK_PRINT_OPERATION_ACTION_PREVIEW,
  EXPORT_ = GTK_PRINT_OPERATION_ACTION_EXPORT,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PrintOperationAction>
{ typedef GtkPrintOperationAction type; }; 
template<> struct declare_cpptype_of<GtkPrintOperationAction>
{ typedef Gtk::PrintOperationAction type; }; 

template<> struct declare_gtype_of<Gtk::PrintOperationAction>
{ static GType get_type() { return gtk_print_operation_action_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PrintOperationResult : std::underlying_type<GtkPrintOperationResult>::type {
  ERROR_ = GTK_PRINT_OPERATION_RESULT_ERROR,
  APPLY_ = GTK_PRINT_OPERATION_RESULT_APPLY,
  CANCEL_ = GTK_PRINT_OPERATION_RESULT_CANCEL,
  IN_PROGRESS_ = GTK_PRINT_OPERATION_RESULT_IN_PROGRESS,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PrintOperationResult>
{ typedef GtkPrintOperationResult type; }; 
template<> struct declare_cpptype_of<GtkPrintOperationResult>
{ typedef Gtk::PrintOperationResult type; }; 

template<> struct declare_gtype_of<Gtk::PrintOperationResult>
{ static GType get_type() { return gtk_print_operation_result_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PrintPages : std::underlying_type<GtkPrintPages>::type {
  ALL_ = GTK_PRINT_PAGES_ALL,
  CURRENT_ = GTK_PRINT_PAGES_CURRENT,
  RANGES_ = GTK_PRINT_PAGES_RANGES,
  SELECTION_ = GTK_PRINT_PAGES_SELECTION,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PrintPages>
{ typedef GtkPrintPages type; }; 
template<> struct declare_cpptype_of<GtkPrintPages>
{ typedef Gtk::PrintPages type; }; 

template<> struct declare_gtype_of<Gtk::PrintPages>
{ static GType get_type() { return gtk_print_pages_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PrintQuality : std::underlying_type<GtkPrintQuality>::type {
  LOW_ = GTK_PRINT_QUALITY_LOW,
  NORMAL_ = GTK_PRINT_QUALITY_NORMAL,
  HIGH_ = GTK_PRINT_QUALITY_HIGH,
  DRAFT_ = GTK_PRINT_QUALITY_DRAFT,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PrintQuality>
{ typedef GtkPrintQuality type; }; 
template<> struct declare_cpptype_of<GtkPrintQuality>
{ typedef Gtk::PrintQuality type; }; 

template<> struct declare_gtype_of<Gtk::PrintQuality>
{ static GType get_type() { return gtk_print_quality_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PrintStatus : std::underlying_type<GtkPrintStatus>::type {
  INITIAL_ = GTK_PRINT_STATUS_INITIAL,
  PREPARING_ = GTK_PRINT_STATUS_PREPARING,
  GENERATING_DATA_ = GTK_PRINT_STATUS_GENERATING_DATA,
  SENDING_DATA_ = GTK_PRINT_STATUS_SENDING_DATA,
  PENDING_ = GTK_PRINT_STATUS_PENDING,
  PENDING_ISSUE_ = GTK_PRINT_STATUS_PENDING_ISSUE,
  PRINTING_ = GTK_PRINT_STATUS_PRINTING,
  FINISHED_ = GTK_PRINT_STATUS_FINISHED,
  FINISHED_ABORTED_ = GTK_PRINT_STATUS_FINISHED_ABORTED,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PrintStatus>
{ typedef GtkPrintStatus type; }; 
template<> struct declare_cpptype_of<GtkPrintStatus>
{ typedef Gtk::PrintStatus type; }; 

template<> struct declare_gtype_of<Gtk::PrintStatus>
{ static GType get_type() { return gtk_print_status_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PropagationLimit : std::underlying_type<GtkPropagationLimit>::type {
  NONE_ = GTK_LIMIT_NONE,
  SAME_NATIVE_ = GTK_LIMIT_SAME_NATIVE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PropagationLimit>
{ typedef GtkPropagationLimit type; }; 
template<> struct declare_cpptype_of<GtkPropagationLimit>
{ typedef Gtk::PropagationLimit type; }; 

template<> struct declare_gtype_of<Gtk::PropagationLimit>
{ static GType get_type() { return gtk_propagation_limit_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class PropagationPhase : std::underlying_type<GtkPropagationPhase>::type {
  NONE_ = GTK_PHASE_NONE,
  CAPTURE_ = GTK_PHASE_CAPTURE,
  BUBBLE_ = GTK_PHASE_BUBBLE,
  TARGET_ = GTK_PHASE_TARGET,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::PropagationPhase>
{ typedef GtkPropagationPhase type; }; 
template<> struct declare_cpptype_of<GtkPropagationPhase>
{ typedef Gtk::PropagationPhase type; }; 

template<> struct declare_gtype_of<Gtk::PropagationPhase>
{ static GType get_type() { return gtk_propagation_phase_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class RecentManagerError : std::underlying_type<GtkRecentManagerError>::type {
  NOT_FOUND_ = GTK_RECENT_MANAGER_ERROR_NOT_FOUND,
  INVALID_URI_ = GTK_RECENT_MANAGER_ERROR_INVALID_URI,
  INVALID_ENCODING_ = GTK_RECENT_MANAGER_ERROR_INVALID_ENCODING,
  NOT_REGISTERED_ = GTK_RECENT_MANAGER_ERROR_NOT_REGISTERED,
  READ_ = GTK_RECENT_MANAGER_ERROR_READ,
  WRITE_ = GTK_RECENT_MANAGER_ERROR_WRITE,
  UNKNOWN_ = GTK_RECENT_MANAGER_ERROR_UNKNOWN,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::RecentManagerError>
{ typedef GtkRecentManagerError type; }; 
template<> struct declare_cpptype_of<GtkRecentManagerError>
{ typedef Gtk::RecentManagerError type; }; 

template<> struct declare_gtype_of<Gtk::RecentManagerError>
{ static GType get_type() { return gtk_recent_manager_error_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ResponseType : std::underlying_type<GtkResponseType>::type {
  NONE_ = GTK_RESPONSE_NONE,
  REJECT_ = GTK_RESPONSE_REJECT,
  ACCEPT_ = GTK_RESPONSE_ACCEPT,
  DELETE_EVENT_ = GTK_RESPONSE_DELETE_EVENT,
  OK_ = GTK_RESPONSE_OK,
  CANCEL_ = GTK_RESPONSE_CANCEL,
  CLOSE_ = GTK_RESPONSE_CLOSE,
  YES_ = GTK_RESPONSE_YES,
  NO_ = GTK_RESPONSE_NO,
  APPLY_ = GTK_RESPONSE_APPLY,
  HELP_ = GTK_RESPONSE_HELP,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ResponseType>
{ typedef GtkResponseType type; }; 
template<> struct declare_cpptype_of<GtkResponseType>
{ typedef Gtk::ResponseType type; }; 

template<> struct declare_gtype_of<Gtk::ResponseType>
{ static GType get_type() { return gtk_response_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class RevealerTransitionType : std::underlying_type<GtkRevealerTransitionType>::type {
  NONE_ = GTK_REVEALER_TRANSITION_TYPE_NONE,
  CROSSFADE_ = GTK_REVEALER_TRANSITION_TYPE_CROSSFADE,
  SLIDE_RIGHT_ = GTK_REVEALER_TRANSITION_TYPE_SLIDE_RIGHT,
  SLIDE_LEFT_ = GTK_REVEALER_TRANSITION_TYPE_SLIDE_LEFT,
  SLIDE_UP_ = GTK_REVEALER_TRANSITION_TYPE_SLIDE_UP,
  SLIDE_DOWN_ = GTK_REVEALER_TRANSITION_TYPE_SLIDE_DOWN,
  SWING_RIGHT_ = GTK_REVEALER_TRANSITION_TYPE_SWING_RIGHT,
  SWING_LEFT_ = GTK_REVEALER_TRANSITION_TYPE_SWING_LEFT,
  SWING_UP_ = GTK_REVEALER_TRANSITION_TYPE_SWING_UP,
  SWING_DOWN_ = GTK_REVEALER_TRANSITION_TYPE_SWING_DOWN,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::RevealerTransitionType>
{ typedef GtkRevealerTransitionType type; }; 
template<> struct declare_cpptype_of<GtkRevealerTransitionType>
{ typedef Gtk::RevealerTransitionType type; }; 

template<> struct declare_gtype_of<Gtk::RevealerTransitionType>
{ static GType get_type() { return gtk_revealer_transition_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ScrollStep : std::underlying_type<GtkScrollStep>::type {
  STEPS_ = GTK_SCROLL_STEPS,
  PAGES_ = GTK_SCROLL_PAGES,
  ENDS_ = GTK_SCROLL_ENDS,
  HORIZONTAL_STEPS_ = GTK_SCROLL_HORIZONTAL_STEPS,
  HORIZONTAL_PAGES_ = GTK_SCROLL_HORIZONTAL_PAGES,
  HORIZONTAL_ENDS_ = GTK_SCROLL_HORIZONTAL_ENDS,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ScrollStep>
{ typedef GtkScrollStep type; }; 
template<> struct declare_cpptype_of<GtkScrollStep>
{ typedef Gtk::ScrollStep type; }; 

template<> struct declare_gtype_of<Gtk::ScrollStep>
{ static GType get_type() { return gtk_scroll_step_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ScrollType : std::underlying_type<GtkScrollType>::type {
  NONE_ = GTK_SCROLL_NONE,
  JUMP_ = GTK_SCROLL_JUMP,
  STEP_BACKWARD_ = GTK_SCROLL_STEP_BACKWARD,
  STEP_FORWARD_ = GTK_SCROLL_STEP_FORWARD,
  PAGE_BACKWARD_ = GTK_SCROLL_PAGE_BACKWARD,
  PAGE_FORWARD_ = GTK_SCROLL_PAGE_FORWARD,
  STEP_UP_ = GTK_SCROLL_STEP_UP,
  STEP_DOWN_ = GTK_SCROLL_STEP_DOWN,
  PAGE_UP_ = GTK_SCROLL_PAGE_UP,
  PAGE_DOWN_ = GTK_SCROLL_PAGE_DOWN,
  STEP_LEFT_ = GTK_SCROLL_STEP_LEFT,
  STEP_RIGHT_ = GTK_SCROLL_STEP_RIGHT,
  PAGE_LEFT_ = GTK_SCROLL_PAGE_LEFT,
  PAGE_RIGHT_ = GTK_SCROLL_PAGE_RIGHT,
  START_ = GTK_SCROLL_START,
  END_ = GTK_SCROLL_END,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ScrollType>
{ typedef GtkScrollType type; }; 
template<> struct declare_cpptype_of<GtkScrollType>
{ typedef Gtk::ScrollType type; }; 

template<> struct declare_gtype_of<Gtk::ScrollType>
{ static GType get_type() { return gtk_scroll_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ScrollablePolicy : std::underlying_type<GtkScrollablePolicy>::type {
  MINIMUM_ = GTK_SCROLL_MINIMUM,
  NATURAL_ = GTK_SCROLL_NATURAL,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ScrollablePolicy>
{ typedef GtkScrollablePolicy type; }; 
template<> struct declare_cpptype_of<GtkScrollablePolicy>
{ typedef Gtk::ScrollablePolicy type; }; 

template<> struct declare_gtype_of<Gtk::ScrollablePolicy>
{ static GType get_type() { return gtk_scrollable_policy_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class SelectionMode : std::underlying_type<GtkSelectionMode>::type {
  NONE_ = GTK_SELECTION_NONE,
  SINGLE_ = GTK_SELECTION_SINGLE,
  BROWSE_ = GTK_SELECTION_BROWSE,
  MULTIPLE_ = GTK_SELECTION_MULTIPLE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::SelectionMode>
{ typedef GtkSelectionMode type; }; 
template<> struct declare_cpptype_of<GtkSelectionMode>
{ typedef Gtk::SelectionMode type; }; 

template<> struct declare_gtype_of<Gtk::SelectionMode>
{ static GType get_type() { return gtk_selection_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class SensitivityType : std::underlying_type<GtkSensitivityType>::type {
  AUTO_ = GTK_SENSITIVITY_AUTO,
  ON_ = GTK_SENSITIVITY_ON,
  OFF_ = GTK_SENSITIVITY_OFF,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::SensitivityType>
{ typedef GtkSensitivityType type; }; 
template<> struct declare_cpptype_of<GtkSensitivityType>
{ typedef Gtk::SensitivityType type; }; 

template<> struct declare_gtype_of<Gtk::SensitivityType>
{ static GType get_type() { return gtk_sensitivity_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ShortcutScope : std::underlying_type<GtkShortcutScope>::type {
  LOCAL_ = GTK_SHORTCUT_SCOPE_LOCAL,
  MANAGED_ = GTK_SHORTCUT_SCOPE_MANAGED,
  GLOBAL_ = GTK_SHORTCUT_SCOPE_GLOBAL,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ShortcutScope>
{ typedef GtkShortcutScope type; }; 
template<> struct declare_cpptype_of<GtkShortcutScope>
{ typedef Gtk::ShortcutScope type; }; 

template<> struct declare_gtype_of<Gtk::ShortcutScope>
{ static GType get_type() { return gtk_shortcut_scope_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class ShortcutType : std::underlying_type<GtkShortcutType>::type {
  ACCELERATOR_ = GTK_SHORTCUT_ACCELERATOR,
  GESTURE_PINCH_ = GTK_SHORTCUT_GESTURE_PINCH,
  GESTURE_STRETCH_ = GTK_SHORTCUT_GESTURE_STRETCH,
  GESTURE_ROTATE_CLOCKWISE_ = GTK_SHORTCUT_GESTURE_ROTATE_CLOCKWISE,
  GESTURE_ROTATE_COUNTERCLOCKWISE_ = GTK_SHORTCUT_GESTURE_ROTATE_COUNTERCLOCKWISE,
  GESTURE_TWO_FINGER_SWIPE_LEFT_ = GTK_SHORTCUT_GESTURE_TWO_FINGER_SWIPE_LEFT,
  GESTURE_TWO_FINGER_SWIPE_RIGHT_ = GTK_SHORTCUT_GESTURE_TWO_FINGER_SWIPE_RIGHT,
  GESTURE_ = GTK_SHORTCUT_GESTURE,
  GESTURE_SWIPE_LEFT_ = GTK_SHORTCUT_GESTURE_SWIPE_LEFT,
  GESTURE_SWIPE_RIGHT_ = GTK_SHORTCUT_GESTURE_SWIPE_RIGHT,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::ShortcutType>
{ typedef GtkShortcutType type; }; 
template<> struct declare_cpptype_of<GtkShortcutType>
{ typedef Gtk::ShortcutType type; }; 

template<> struct declare_gtype_of<Gtk::ShortcutType>
{ static GType get_type() { return gtk_shortcut_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class SizeGroupMode : std::underlying_type<GtkSizeGroupMode>::type {
  NONE_ = GTK_SIZE_GROUP_NONE,
  HORIZONTAL_ = GTK_SIZE_GROUP_HORIZONTAL,
  VERTICAL_ = GTK_SIZE_GROUP_VERTICAL,
  BOTH_ = GTK_SIZE_GROUP_BOTH,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::SizeGroupMode>
{ typedef GtkSizeGroupMode type; }; 
template<> struct declare_cpptype_of<GtkSizeGroupMode>
{ typedef Gtk::SizeGroupMode type; }; 

template<> struct declare_gtype_of<Gtk::SizeGroupMode>
{ static GType get_type() { return gtk_size_group_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class SizeRequestMode : std::underlying_type<GtkSizeRequestMode>::type {
  HEIGHT_FOR_WIDTH_ = GTK_SIZE_REQUEST_HEIGHT_FOR_WIDTH,
  WIDTH_FOR_HEIGHT_ = GTK_SIZE_REQUEST_WIDTH_FOR_HEIGHT,
  CONSTANT_SIZE_ = GTK_SIZE_REQUEST_CONSTANT_SIZE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::SizeRequestMode>
{ typedef GtkSizeRequestMode type; }; 
template<> struct declare_cpptype_of<GtkSizeRequestMode>
{ typedef Gtk::SizeRequestMode type; }; 

template<> struct declare_gtype_of<Gtk::SizeRequestMode>
{ static GType get_type() { return gtk_size_request_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class SortType : std::underlying_type<GtkSortType>::type {
  ASCENDING_ = GTK_SORT_ASCENDING,
  DESCENDING_ = GTK_SORT_DESCENDING,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::SortType>
{ typedef GtkSortType type; }; 
template<> struct declare_cpptype_of<GtkSortType>
{ typedef Gtk::SortType type; }; 

template<> struct declare_gtype_of<Gtk::SortType>
{ static GType get_type() { return gtk_sort_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class SorterChange : std::underlying_type<GtkSorterChange>::type {
  DIFFERENT_ = GTK_SORTER_CHANGE_DIFFERENT,
  INVERTED_ = GTK_SORTER_CHANGE_INVERTED,
  LESS_STRICT_ = GTK_SORTER_CHANGE_LESS_STRICT,
  MORE_STRICT_ = GTK_SORTER_CHANGE_MORE_STRICT,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::SorterChange>
{ typedef GtkSorterChange type; }; 
template<> struct declare_cpptype_of<GtkSorterChange>
{ typedef Gtk::SorterChange type; }; 

template<> struct declare_gtype_of<Gtk::SorterChange>
{ static GType get_type() { return gtk_sorter_change_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class SorterOrder : std::underlying_type<GtkSorterOrder>::type {
  PARTIAL_ = GTK_SORTER_ORDER_PARTIAL,
  NONE_ = GTK_SORTER_ORDER_NONE,
  TOTAL_ = GTK_SORTER_ORDER_TOTAL,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::SorterOrder>
{ typedef GtkSorterOrder type; }; 
template<> struct declare_cpptype_of<GtkSorterOrder>
{ typedef Gtk::SorterOrder type; }; 

template<> struct declare_gtype_of<Gtk::SorterOrder>
{ static GType get_type() { return gtk_sorter_order_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class SpinButtonUpdatePolicy : std::underlying_type<GtkSpinButtonUpdatePolicy>::type {
  ALWAYS_ = GTK_UPDATE_ALWAYS,
  IF_VALID_ = GTK_UPDATE_IF_VALID,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::SpinButtonUpdatePolicy>
{ typedef GtkSpinButtonUpdatePolicy type; }; 
template<> struct declare_cpptype_of<GtkSpinButtonUpdatePolicy>
{ typedef Gtk::SpinButtonUpdatePolicy type; }; 

template<> struct declare_gtype_of<Gtk::SpinButtonUpdatePolicy>
{ static GType get_type() { return gtk_spin_button_update_policy_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class SpinType : std::underlying_type<GtkSpinType>::type {
  STEP_FORWARD_ = GTK_SPIN_STEP_FORWARD,
  STEP_BACKWARD_ = GTK_SPIN_STEP_BACKWARD,
  PAGE_FORWARD_ = GTK_SPIN_PAGE_FORWARD,
  PAGE_BACKWARD_ = GTK_SPIN_PAGE_BACKWARD,
  HOME_ = GTK_SPIN_HOME,
  END_ = GTK_SPIN_END,
  USER_DEFINED_ = GTK_SPIN_USER_DEFINED,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::SpinType>
{ typedef GtkSpinType type; }; 
template<> struct declare_cpptype_of<GtkSpinType>
{ typedef Gtk::SpinType type; }; 

template<> struct declare_gtype_of<Gtk::SpinType>
{ static GType get_type() { return gtk_spin_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class StackTransitionType : std::underlying_type<GtkStackTransitionType>::type {
  NONE_ = GTK_STACK_TRANSITION_TYPE_NONE,
  CROSSFADE_ = GTK_STACK_TRANSITION_TYPE_CROSSFADE,
  SLIDE_RIGHT_ = GTK_STACK_TRANSITION_TYPE_SLIDE_RIGHT,
  SLIDE_LEFT_ = GTK_STACK_TRANSITION_TYPE_SLIDE_LEFT,
  SLIDE_UP_ = GTK_STACK_TRANSITION_TYPE_SLIDE_UP,
  SLIDE_DOWN_ = GTK_STACK_TRANSITION_TYPE_SLIDE_DOWN,
  SLIDE_LEFT_RIGHT_ = GTK_STACK_TRANSITION_TYPE_SLIDE_LEFT_RIGHT,
  SLIDE_UP_DOWN_ = GTK_STACK_TRANSITION_TYPE_SLIDE_UP_DOWN,
  OVER_UP_ = GTK_STACK_TRANSITION_TYPE_OVER_UP,
  OVER_DOWN_ = GTK_STACK_TRANSITION_TYPE_OVER_DOWN,
  OVER_LEFT_ = GTK_STACK_TRANSITION_TYPE_OVER_LEFT,
  OVER_RIGHT_ = GTK_STACK_TRANSITION_TYPE_OVER_RIGHT,
  UNDER_UP_ = GTK_STACK_TRANSITION_TYPE_UNDER_UP,
  UNDER_DOWN_ = GTK_STACK_TRANSITION_TYPE_UNDER_DOWN,
  UNDER_LEFT_ = GTK_STACK_TRANSITION_TYPE_UNDER_LEFT,
  UNDER_RIGHT_ = GTK_STACK_TRANSITION_TYPE_UNDER_RIGHT,
  OVER_UP_DOWN_ = GTK_STACK_TRANSITION_TYPE_OVER_UP_DOWN,
  OVER_DOWN_UP_ = GTK_STACK_TRANSITION_TYPE_OVER_DOWN_UP,
  OVER_LEFT_RIGHT_ = GTK_STACK_TRANSITION_TYPE_OVER_LEFT_RIGHT,
  OVER_RIGHT_LEFT_ = GTK_STACK_TRANSITION_TYPE_OVER_RIGHT_LEFT,
  ROTATE_LEFT_ = GTK_STACK_TRANSITION_TYPE_ROTATE_LEFT,
  ROTATE_RIGHT_ = GTK_STACK_TRANSITION_TYPE_ROTATE_RIGHT,
  ROTATE_LEFT_RIGHT_ = GTK_STACK_TRANSITION_TYPE_ROTATE_LEFT_RIGHT,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::StackTransitionType>
{ typedef GtkStackTransitionType type; }; 
template<> struct declare_cpptype_of<GtkStackTransitionType>
{ typedef Gtk::StackTransitionType type; }; 

template<> struct declare_gtype_of<Gtk::StackTransitionType>
{ static GType get_type() { return gtk_stack_transition_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class StringFilterMatchMode : std::underlying_type<GtkStringFilterMatchMode>::type {
  EXACT_ = GTK_STRING_FILTER_MATCH_MODE_EXACT,
  SUBSTRING_ = GTK_STRING_FILTER_MATCH_MODE_SUBSTRING,
  PREFIX_ = GTK_STRING_FILTER_MATCH_MODE_PREFIX,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::StringFilterMatchMode>
{ typedef GtkStringFilterMatchMode type; }; 
template<> struct declare_cpptype_of<GtkStringFilterMatchMode>
{ typedef Gtk::StringFilterMatchMode type; }; 

template<> struct declare_gtype_of<Gtk::StringFilterMatchMode>
{ static GType get_type() { return gtk_string_filter_match_mode_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class SymbolicColor : std::underlying_type<GtkSymbolicColor>::type {
  FOREGROUND_ = GTK_SYMBOLIC_COLOR_FOREGROUND,
  ERROR_ = GTK_SYMBOLIC_COLOR_ERROR,
  WARNING_ = GTK_SYMBOLIC_COLOR_WARNING,
  SUCCESS_ = GTK_SYMBOLIC_COLOR_SUCCESS,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::SymbolicColor>
{ typedef GtkSymbolicColor type; }; 
template<> struct declare_cpptype_of<GtkSymbolicColor>
{ typedef Gtk::SymbolicColor type; }; 

template<> struct declare_gtype_of<Gtk::SymbolicColor>
{ static GType get_type() { return gtk_symbolic_color_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class SystemSetting : std::underlying_type<GtkSystemSetting>::type {
  DPI_ = GTK_SYSTEM_SETTING_DPI,
  FONT_NAME_ = GTK_SYSTEM_SETTING_FONT_NAME,
  FONT_CONFIG_ = GTK_SYSTEM_SETTING_FONT_CONFIG,
  DISPLAY_ = GTK_SYSTEM_SETTING_DISPLAY,
  ICON_THEME_ = GTK_SYSTEM_SETTING_ICON_THEME,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::SystemSetting>
{ typedef GtkSystemSetting type; }; 
template<> struct declare_cpptype_of<GtkSystemSetting>
{ typedef Gtk::SystemSetting type; }; 

template<> struct declare_gtype_of<Gtk::SystemSetting>
{ static GType get_type() { return gtk_system_setting_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class TextDirection : std::underlying_type<GtkTextDirection>::type {
  NONE_ = GTK_TEXT_DIR_NONE,
  LTR_ = GTK_TEXT_DIR_LTR,
  RTL_ = GTK_TEXT_DIR_RTL,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::TextDirection>
{ typedef GtkTextDirection type; }; 
template<> struct declare_cpptype_of<GtkTextDirection>
{ typedef Gtk::TextDirection type; }; 

template<> struct declare_gtype_of<Gtk::TextDirection>
{ static GType get_type() { return gtk_text_direction_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class TextExtendSelection : std::underlying_type<GtkTextExtendSelection>::type {
  WORD_ = GTK_TEXT_EXTEND_SELECTION_WORD,
  LINE_ = GTK_TEXT_EXTEND_SELECTION_LINE,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::TextExtendSelection>
{ typedef GtkTextExtendSelection type; }; 
template<> struct declare_cpptype_of<GtkTextExtendSelection>
{ typedef Gtk::TextExtendSelection type; }; 

template<> struct declare_gtype_of<Gtk::TextExtendSelection>
{ static GType get_type() { return gtk_text_extend_selection_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class TextViewLayer : std::underlying_type<GtkTextViewLayer>::type {
  BELOW_TEXT_ = GTK_TEXT_VIEW_LAYER_BELOW_TEXT,
  ABOVE_TEXT_ = GTK_TEXT_VIEW_LAYER_ABOVE_TEXT,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::TextViewLayer>
{ typedef GtkTextViewLayer type; }; 
template<> struct declare_cpptype_of<GtkTextViewLayer>
{ typedef Gtk::TextViewLayer type; }; 

template<> struct declare_gtype_of<Gtk::TextViewLayer>
{ static GType get_type() { return gtk_text_view_layer_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class TextWindowType : std::underlying_type<GtkTextWindowType>::type {
  WIDGET_ = GTK_TEXT_WINDOW_WIDGET,
  TEXT_ = GTK_TEXT_WINDOW_TEXT,
  LEFT_ = GTK_TEXT_WINDOW_LEFT,
  RIGHT_ = GTK_TEXT_WINDOW_RIGHT,
  TOP_ = GTK_TEXT_WINDOW_TOP,
  BOTTOM_ = GTK_TEXT_WINDOW_BOTTOM,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::TextWindowType>
{ typedef GtkTextWindowType type; }; 
template<> struct declare_cpptype_of<GtkTextWindowType>
{ typedef Gtk::TextWindowType type; }; 

template<> struct declare_gtype_of<Gtk::TextWindowType>
{ static GType get_type() { return gtk_text_window_type_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class TreeViewColumnSizing : std::underlying_type<GtkTreeViewColumnSizing>::type {
  GROW_ONLY_ = GTK_TREE_VIEW_COLUMN_GROW_ONLY,
  AUTOSIZE_ = GTK_TREE_VIEW_COLUMN_AUTOSIZE,
  FIXED_ = GTK_TREE_VIEW_COLUMN_FIXED,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::TreeViewColumnSizing>
{ typedef GtkTreeViewColumnSizing type; }; 
template<> struct declare_cpptype_of<GtkTreeViewColumnSizing>
{ typedef Gtk::TreeViewColumnSizing type; }; 

template<> struct declare_gtype_of<Gtk::TreeViewColumnSizing>
{ static GType get_type() { return gtk_tree_view_column_sizing_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class TreeViewDropPosition : std::underlying_type<GtkTreeViewDropPosition>::type {
  BEFORE_ = GTK_TREE_VIEW_DROP_BEFORE,
  AFTER_ = GTK_TREE_VIEW_DROP_AFTER,
  INTO_OR_BEFORE_ = GTK_TREE_VIEW_DROP_INTO_OR_BEFORE,
  INTO_OR_AFTER_ = GTK_TREE_VIEW_DROP_INTO_OR_AFTER,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::TreeViewDropPosition>
{ typedef GtkTreeViewDropPosition type; }; 
template<> struct declare_cpptype_of<GtkTreeViewDropPosition>
{ typedef Gtk::TreeViewDropPosition type; }; 

template<> struct declare_gtype_of<Gtk::TreeViewDropPosition>
{ static GType get_type() { return gtk_tree_view_drop_position_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class TreeViewGridLines : std::underlying_type<GtkTreeViewGridLines>::type {
  NONE_ = GTK_TREE_VIEW_GRID_LINES_NONE,
  HORIZONTAL_ = GTK_TREE_VIEW_GRID_LINES_HORIZONTAL,
  VERTICAL_ = GTK_TREE_VIEW_GRID_LINES_VERTICAL,
  BOTH_ = GTK_TREE_VIEW_GRID_LINES_BOTH,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::TreeViewGridLines>
{ typedef GtkTreeViewGridLines type; }; 
template<> struct declare_cpptype_of<GtkTreeViewGridLines>
{ typedef Gtk::TreeViewGridLines type; }; 

template<> struct declare_gtype_of<Gtk::TreeViewGridLines>
{ static GType get_type() { return gtk_tree_view_grid_lines_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class Unit : std::underlying_type<GtkUnit>::type {
  NONE_ = GTK_UNIT_NONE,
  POINTS_ = GTK_UNIT_POINTS,
  INCH_ = GTK_UNIT_INCH,
  MM_ = GTK_UNIT_MM,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::Unit>
{ typedef GtkUnit type; }; 
template<> struct declare_cpptype_of<GtkUnit>
{ typedef Gtk::Unit type; }; 

template<> struct declare_gtype_of<Gtk::Unit>
{ static GType get_type() { return gtk_unit_get_type(); } };


} // namespace repository

} // namespace gi


namespace gi {

namespace repository {

namespace Gtk {

enum class WrapMode : std::underlying_type<GtkWrapMode>::type {
  NONE_ = GTK_WRAP_NONE,
  CHAR_ = GTK_WRAP_CHAR,
  WORD_ = GTK_WRAP_WORD,
  WORD_CHAR_ = GTK_WRAP_WORD_CHAR,
};

} // namespace Gtk

} // namespace repository

} // namespace gi

namespace gi {

namespace repository {

template<> struct declare_ctype_of<Gtk::WrapMode>
{ typedef GtkWrapMode type; }; 
template<> struct declare_cpptype_of<GtkWrapMode>
{ typedef Gtk::WrapMode type; }; 

template<> struct declare_gtype_of<Gtk::WrapMode>
{ static GType get_type() { return gtk_wrap_mode_get_type(); } };


} // namespace repository

} // namespace gi


#endif
