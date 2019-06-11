[@bs.config {jsx: 3}];

[@react.component]
let make = (~id) => {
    <div>{ReasonReact.string(id)}</div>
};
