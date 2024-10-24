FROM mcr.microsoft.com/devcontainers/cpp:1-ubuntu-24.04


RUN apt-get update && export DEBIAN_FRONTEND=noninteractive \
     && apt-get -y install --no-install-recommends clang-format

# Obtain vcpkg repository and set VCPKG_ROOT
RUN git clone --depth 1 https://github.com/microsoft/vcpkg /vcpkg
RUN cd /vcpkg && ./bootstrap-vcpkg.sh
ENV VCPKG_ROOT="/vcpkg"