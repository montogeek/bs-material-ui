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

module Classes = {
  [@bs.deriving abstract]
  type t = {
    [@bs.optional]
    root: string,
  };
  let make = t;
};

[@react.component] [@bs.module "@material-ui/core"]
external make:
  (
    ~component: option(Component.t)=?,
    ~elevation: option(MaterialUi_Types.Number.t)=?,
    ~square: option(bool)=?,
    ~variant: option(
                [@bs.string] [
                  | [@bs.as "elevation"] `Elevation
                  | [@bs.as "outlined"] `Outlined
                ],
              )
                =?,
    ~children: option('children)=?,
    ~classes: option(Classes.t)=?,
    ~className: option(string)=?,
    ~raised: option(bool)=?,
    ~id: option(string)=?,
    ~key: option(string)=?,
    ~ref: option(ReactDOMRe.domRef)=?
  ) =>
  React.element =
  "Card";
