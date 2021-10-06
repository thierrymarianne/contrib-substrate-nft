SHELL:=/bin/bash

.PHONY: help build emit-llvm link-bitcode run-klee

help:
	@grep -E '^[a-zA-Z_-]+:.*?## .*$$' $(MAKEFILE_LIST) | sort | awk 'BEGIN {FS = ":.*?## "}; {printf "\033[36m%-30s\033[0m %s\n", $$1, $$2}'

build: ## Build contract
	cc -DGENERATED=1 -g -o nft.o -c nft.c
	cc -g -o substrate-nft main.c wasm-rt-impl.c nft.o && echo '=> Successfully built substrate-nft contract'

emit-llvm: ## Emit LLVM bitcode
	clang-12 -I ../../klee/include -DGENERATED=1 -emit-llvm -c -g -O0 -Xclang -disable-O0-optnone main.c wasm-rt-impl.c nft.c

link-bitcode: ## Link all bitcode files
	llvm-link-12 main.bc nft.bc wasm-rt-impl.bc -o all.bc

run-klee: ## Run Klee
	/klee_deps/klee_build120stp_z3/bin/klee --libc=uclibc --posix-runtime ./main.bc

