# Template of C++ project with Meson

## Config

To initialize project with debug mode, run:

```bash
meson setup --buildtype=debug build/ ./
```

Reconfigure run:

```bash
meson setup --buildtype=debug --reconfigure build/ ./
```

## Build

To build project, run:

```bash
meson compile -C build/
```

If you want rebuild project entirely, run:

```bash
meson compile --clean -C build/
meson compile -C build/
```

## Run

To run binary, run:

```bash
./build/app/app
```

## Install

To install library to some place, for example `~/.local/self`, run:

```bash
meson setup --buildtype=release --prefix="~/.local/self" --reconfigure build/ ./
meson install -C build/
```
