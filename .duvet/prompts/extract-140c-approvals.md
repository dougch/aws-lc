# Extract SP 800-140C approvals into Duvet custom-requirements TOMLs

## Input
- Algorithm family: e.g. "symmetric block ciphers", "hash", "MACs", "DRBGs",
  "digital signatures", "key establishment"
- CSRC source URL for that family in SP 800-140C
- Output file: `.duvet/custom-requirements/sp800-140c-<family>.toml`

## Task
For each approved variant listed on the CSRC page, produce one `[[spec]]`
block. All specs for the family share one `target` at the top of the file.

## Output shape

    target = "<canonical URL for the family section>"

    [[spec]]
    level = "MUST"
    quote = '''
    <verbatim approval text from CSRC, no paraphrasing>
    '''

## Level mapping

Duvet accepts only four levels: `AUTO`, `MUST`, `SHOULD`, `MAY`.
There are no negated forms — restrictions live in the `quote`, not the level.

- Approved (no restriction)                     → MUST
- Approved with restrictions (key size, mode)   → MUST, restrictions in quote
- Deprecated (allowed for now)                  → SHOULD, restriction in quote
- Legacy-use / historical                       → SHOULD, restriction in quote
- Disallowed after a date                       → SHOULD, disallowed operations + date in quote
- Not listed in 140C                            → skip (not a 140C requirement)

## One `[[spec]]` per variant
If the family lists AES-128/192/256 as three approved variants, produce three
blocks. If it lists AES with "all standard key sizes approved", one block with
that phrasing in the quote.

## Include
- Algorithm name and variants (key sizes, modes, curve names)
- Restriction language ("except when...", "≥ 112 bits", etc.)
- Sunset / transition dates as stated

## Skip
- Links to downstream FIPS PUBs / SPs (follow-on scope, not this TOML)
- Purely informational or section-header text
- Cross-references to AWS-LC — those live in code annotations, not the TOML
