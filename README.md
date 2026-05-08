# SoftwareLogic Go

A small Lean 4 / Lake project modeling a simplified game of Go. The code
defines boards, stones, moves, groups, liberties, captures, legal move checks,
and proof-carrying move application.

## Build

```powershell
lake build
```

The build checks both the executable and the Lean theorems.

## Run

```powershell
lake exe SoftwareLogic_Go
```

To execute the demo:
```powershell
lake exe SoftwareLogic_Go --demo
```


The executable prints a short demonstration of legal moves, rejected moves,
passes, capture resolution, suicide prevention, and proof-backed invariants.

## Project Layout

- `Go/Basic.lean`: core types for stones, positions, moves, boards, and game
  state.
- `Go/Board.lean`: board indexing, updates, placement, neighbors, turn changes,
  and board rendering.
- `Go/Group.lean`: connected same-color group discovery.
- `Go/Liberty.lean`: empty neighbor and liberty calculations.
- `Go/Capture.lean`: removing captured enemy groups after placement.
- `Go/Move.lean`: basic legality, suicide prevention, and legal move checks.
- `Go/Step.lean`: proof-carrying legal moves and move application.
- `Go/Proofs.lean`: reusable theorems about legality and application.
- `Main.lean`: executable demo and concrete checked examples.

## Currently Verified

- Legal placement implies the target is in bounds and empty.
- Applying a successful placement required a legal move.
- Successful placements preserve board size and switch turns.
- Pass moves switch turns directly.
- Successful move sequences preserve board size.
- Runtime-style move checking agrees with proof-carrying execution.
- Rejected moves are not applied by the checked API.
- Concrete capture and suicide-prevention scenarios are checked by Lean.

## Useful Next Work

- Prove stronger generic capture theorems about groups with zero liberties.
- Add ko-rule state tracking if the model needs full Go legality.
- Prove board-shape invariants, such as every row retaining the declared size.
- Add more edge and corner capture examples.
