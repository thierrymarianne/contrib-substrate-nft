SHELL:=/bin/bash

.PHONY: help build

help:
	@grep -E '^[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) | sort | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[36m%-30s\033[0m %s\n", $$1, $$2}'

build: ## Build contract
	cc -g -o substrate-nft main.c nft.c wasm-rt-impl.c && echo '=> Successfully built substrate-nft contract' 


