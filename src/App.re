let component = ReasonReact.statelessComponent("App");

let make = (~message, _children) => {
    ...component,
    render: _self => (
        <div>(ReasonReact.string(message))</div>
    ),
};
