# Webassembly with emsdk & rust

## build

```bash
make build
```

## test

```bash
make test
```
详细见 `makefile`


## 安装emscripten

```bash
git clone https://github.com/emscripten-core/emsdk.git
# Enter that directory
cd emsdk
git pull
# Download and install the latest SDK tools.
./emsdk install latest
# Make the "latest" SDK "active" for the current user. (writes .emscripten file)
./emsdk activate latest
# Activate PATH and other environment variables in the current terminal
source ./emsdk_env.sh

```


## 参考
1. [wasm-pack](https://rustwasm.github.io/wasm-pack/book/)
2. [emscripten](https://emscripten.org/docs/getting_started/downloads.html)