module RowsMin: {
  type t;
  let string: string => t;
  let int: int => t;
  let float: float => t;
} = {
  [@unboxed]
  type t =
    | Any('a): t;
  let string = (v: string) => Any(v);
  let int = (v: int) => Any(v);
  let float = (v: float) => Any(v);
};

module InputComponent: {
  type t;
  let string: string => t;
  let inputComponent_func: MaterialUi_Types.any => t;
  let element: React.element => t;
} = {
  [@unboxed]
  type t =
    | Any('a): t;
  let string = (v: string) => Any(v);
  let inputComponent_func = (v: MaterialUi_Types.any) => Any(v);
  let element = (v: React.element) => Any(v);
};

module Rows: {
  type t;
  let string: string => t;
  let int: int => t;
  let float: float => t;
} = {
  [@unboxed]
  type t =
    | Any('a): t;
  let string = (v: string) => Any(v);
  let int = (v: int) => Any(v);
  let float = (v: float) => Any(v);
};

module RowsMax: {
  type t;
  let string: string => t;
  let int: int => t;
  let float: float => t;
} = {
  [@unboxed]
  type t =
    | Any('a): t;
  let string = (v: string) => Any(v);
  let int = (v: int) => Any(v);
  let float = (v: float) => Any(v);
};

module Classes = {
  [@bs.deriving abstract]
  type t = {
    [@bs.optional]
    root: string,
    [@bs.optional]
    select: string,
    [@bs.optional]
    filled: string,
    [@bs.optional]
    outlined: string,
    [@bs.optional]
    selectMenu: string,
    [@bs.optional]
    disabled: string,
    [@bs.optional]
    icon: string,
    [@bs.optional]
    iconOpen: string,
    [@bs.optional]
    iconFilled: string,
    [@bs.optional]
    iconOutlined: string,
  };
  let make = t;
};

module IconComponent: {
  type t;
  let string: string => t;
  let iconComponent_func: MaterialUi_Types.any => t;
  let element: React.element => t;
} = {
  [@unboxed]
  type t =
    | Any('a): t;
  let string = (v: string) => Any(v);
  let iconComponent_func = (v: MaterialUi_Types.any) => Any(v);
  let element = (v: React.element) => Any(v);
};

module Value: {
  type t;
  let string: string => t;
  let int: int => t;
  let float: float => t;
  let arrayOf: array(string) => t;
} = {
  [@unboxed]
  type t =
    | Any('a): t;
  let string = (v: string) => Any(v);
  let int = (v: int) => Any(v);
  let float = (v: float) => Any(v);
  let arrayOf = (v: array(string)) => Any(v);
};

[@react.component] [@bs.module "@material-ui/core"]
external make:
  (
    ~aria_describedby: option(string)=?,
    ~onBlur: option(ReactEvent.Focus.t => unit)=?,
    ~onClick: option(ReactEvent.Mouse.t => unit)=?,
    ~onFocus: option(ReactEvent.Focus.t => unit)=?,
    ~onKeyDown: option(ReactEvent.Keyboard.t => unit)=?,
    ~onKeyUp: option(ReactEvent.Keyboard.t => unit)=?,
    ~renderSuffix: option(MaterialUi_Types.any)=?,
    ~rowsMin: option(RowsMin.t)=?,
    ~autoComplete: option(string)=?,
    ~autoFocus: option(bool)=?,
    ~className: option(string)=?,
    ~color: option(
              [@bs.string] [
                | [@bs.as "primary"] `Primary
                | [@bs.as "secondary"] `Secondary
              ],
            )
              =?,
    ~disabled: option(bool)=?,
    ~disableUnderline: option(bool)=?,
    ~endAdornment: option(React.element)=?,
    ~error: option(bool)=?,
    ~fullWidth: option(bool)=?,
    ~inputComponent: option(InputComponent.t)=?,
    ~margin: option(
               [@bs.string] [
                 | [@bs.as "dense"] `Dense
                 | [@bs.as "none"] `None
               ],
             )
               =?,
    ~multiline: option(bool)=?,
    ~name: option(string)=?,
    ~placeholder: option(string)=?,
    ~readOnly: option(bool)=?,
    ~required: option(bool)=?,
    ~rows: option(Rows.t)=?,
    ~rowsMax: option(RowsMax.t)=?,
    ~startAdornment: option(React.element)=?,
    ~_type: option(string)=?,
    ~autoWidth: option(bool)=?,
    ~children: option('children)=?,
    ~classes: option(Classes.t)=?,
    ~defaultValue: option(MaterialUi_Types.any)=?,
    ~displayEmpty: option(bool)=?,
    ~_IconComponent: option(IconComponent.t)=?,
    ~id: option(string)=?,
    ~input: option(React.element)=?,
    ~inputProps: option(Js.Dict.t(MaterialUi_Types.any))=?,
    ~label: option(React.element)=?,
    ~labelId: option(string)=?,
    ~labelWidth: option(MaterialUi_Types.Number.t)=?,
    ~_MenuProps: option(Js.Dict.t(MaterialUi_Types.any))=?,
    ~multiple: option(bool)=?,
    ~native: option(bool)=?,
    ~onChange: option(
                 (ReactEvent.Form.t, Js.Dict.t(MaterialUi_Types.any)) => unit,
               )
                 =?,
    ~onClose: option(ReactEvent.Synthetic.t => unit)=?,
    ~onOpen: option(ReactEvent.Synthetic.t => unit)=?,
    ~_open: option(bool)=?,
    ~renderValue: option(MaterialUi_Types.any => MaterialUi_Types.any)=?,
    ~_SelectDisplayProps: option(Js.Dict.t(MaterialUi_Types.any))=?,
    ~value: option(Value.t)=?,
    ~variant: option(
                [@bs.string] [
                  | [@bs.as "filled"] `Filled
                  | [@bs.as "outlined"] `Outlined
                  | [@bs.as "standard"] `Standard
                ],
              )
                =?,
    ~key: option(string)=?,
    ~ref: option(ReactDOMRe.domRef)=?
  ) =>
  React.element =
  "Select";
