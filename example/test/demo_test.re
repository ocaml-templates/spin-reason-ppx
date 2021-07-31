open Alcotest;

let test_simple_addition = () => {
  let result = [%demo 5];
  check(int, "same value", 10, result);
};

let suite = [("5 + 5 should equal 10", `Quick, test_simple_addition)];

let () = Alcotest.run("demo", [("Demo", suite)]);
