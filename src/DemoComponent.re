[@bs.config {jsx: 3}];

[@react.component]
let make = (~name) => {
  <div>
    <p> {React.string(name)} </p>
    <ChildDemoComponent id="bob"/>        
  </div>
};

module Jsx2 = {
  let component = ReasonReact.statelessComponent("DemoComponent");
  let make = (~name, children) =>
    ReasonReactCompat.wrapReactForReasonReact(
      make,
      makeProps(~name, ()),
      children,
    );
};
