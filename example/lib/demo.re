open Ppxlib;

let expand = (~loc, ~path as _, num: int) => {
  let (module Builder) = Ast_builder.make(loc);
  %expr
  [%e Builder.eint(num)] + 5;
};

let name = "demo";

let extension =
  Extension.declare(
    name,
    Extension.Context.expression,
    Ast_pattern.(single_expr_payload(eint(__))),
    expand,
  );

let rule = Context_free.Rule.extension(extension);

let () = Driver.register_transformation(name, ~rules=[rule]);
