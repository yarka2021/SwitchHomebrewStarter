# Switch Homebrew Starter

A tiny, neutral Nintendo Switch homebrew starter project. It displays text and exits when PLUS is pressed.

## Build from GitHub on an Android phone

1. Create a new GitHub repository.
2. Upload the contents of this ZIP to the repository root (keep the `.github/workflows` folder).
3. Open the repository's **Actions** tab.
4. Run **Build Switch homebrew starter** with **Run workflow**, or push a commit.
5. When the workflow finishes, open its run and download the `SwitchHomebrewStarter` artifact. It contains the `.nro` output if the build succeeds.

## Local build

Use a supported devkitPro Switch development environment with `devkitA64`, `libnx`, and `switch_rules` installed, then run:

```sh
make
```

The output is `SwitchHomebrewStarter.nro`.

## Project layout

```text
SwitchHomebrewStarter/
├── .github/
│   └── workflows/
│       └── build.yml
├── source/
│   └── main.c
├── Makefile
└── README.md
```

This is an independent blank starter, not a game port and not a compatibility layer.
