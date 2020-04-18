module Classes = {
  [@bs.deriving abstract]
  type t = {
    [@bs.optional]
    root: string,
    [@bs.optional]
    error: string,
    [@bs.optional]
    disabled: string,
    [@bs.optional]
    marginDense: string,
    [@bs.optional]
    contained: string,
    [@bs.optional]
    focused: string,
    [@bs.optional]
    filled: string,
    [@bs.optional]
    required: string,
  };
  let make = t;
};

module Component: {
  type t;
  let string: string => t;
  let callback: (unit => React.element) => t;
  let element: React.element => t;
} = {
  [@unboxed]
  type t =
    | Any('a): t;
  let string = (v: string) => Any(v);
  let callback = (v: unit => React.element) => Any(v);
  let element = (v: React.element) => Any(v);
};

[@react.component] [@bs.module "@material-ui/core"]
external make:
  (
    ~children: option('children)=?,
    ~classes: option(Classes.t)=?,
    ~className: option(string)=?,
    ~component: option(Component.t)=?,
    ~disabled: option(bool)=?,
    ~error: option(bool)=?,
    ~filled: option(bool)=?,
    ~focused: option(bool)=?,
    ~margin: option([@bs.string] [ | [@bs.as "dense"] `Dense])=?,
    ~required: option(bool)=?,
    ~variant: option(
                [@bs.string] [
                  | [@bs.as "standard"] `Standard
                  | [@bs.as "outlined"] `Outlined
                  | [@bs.as "filled"] `Filled
                ],
              )
                =?,
    ~id: option(string)=?,
    ~key: option(string)=?,
    ~ref: option(ReactDOMRe.domRef)=?
  ) =>
  React.element =
  "FormHelperText";
