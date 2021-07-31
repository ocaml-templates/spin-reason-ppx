# Demo

[![Actions Status](https://github.com/tmattio/demo/workflows/CI/badge.svg)](https://github.com/tmattio/demo/actions)

A short, but powerful statement about your project

## Installation

### With `opam` on native projects

```bash
opam install demo
```

### With `esy` on native projects

```bash
esy add @opam/demo
```

## Usage

`demo` implements a ppx that transforms the `[%demo]` extension into an expression that adds 5 to the integer passed in parameter.

The code:

```ocaml
[%demo 5]
```

Will transform to something like:

```ocaml
5 + 5
```

## Contributing

Take a look at our [Contributing Guide](CONTRIBUTING.md).
