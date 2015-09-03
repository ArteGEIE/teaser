General-purpose teaser feature that manages

- display mode per node (via DS)
- disable full node page
- other useful teaser options

# TODOs

There are some features_exclude for ASF dependencies so that we don't have to clean up files after each features-update. Those dependencies should not be there in the first place, but I don't know how they got in. Ideally, we don't need there features_exclude on ASF (but we need for e.g. title_field etc.).