let component = ReasonReact.statelessComponent("App");

module Styles = {
    open Css;

    let title = style([
        color(white),
        backgroundColor(cornflowerblue),
    ]);
}

let make = (~message, _children) => {
    ...component,
    render: _self => (
        <>
            <h1 className={Styles.title}>(ReasonReact.string("Reason Reader"))</h1>
        </>
    ),
};
