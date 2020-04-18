module Classes = {
  [@bs.deriving abstract]
  type t = {
    [@bs.optional]
    root: string,
    [@bs.optional]
    ol: string,
    [@bs.optional]
    li: string,
    [@bs.optional]
    separator: string,
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
    ~expandText: option(string)=?,
    ~itemsAfterCollapse: option(MaterialUi_Types.Number.t)=?,
    ~itemsBeforeCollapse: option(MaterialUi_Types.Number.t)=?,
    ~maxItems: option(MaterialUi_Types.Number.t)=?,
    ~separator: option(React.element)=?,
    ~id: option(string)=?,
    ~key: option(string)=?,
    ~ref: option(ReactDOMRe.domRef)=?
  ) =>
  React.element =
  "Breadcrumbs";
