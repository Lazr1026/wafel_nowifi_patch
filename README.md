# Stroopwafel plugin to remove the WiFi module

This plugin for [stroopwafel](https://github.com/shinyquagsire23/stroopwafel) is a IOSU patch to remove the need for the WiFi module.

A stock IOSU would crash after some time without the WiFi module, making playing games impossible. Portablizers will find the most use with this patch.

How it works: https://gist.github.com/GaryOderNichts/357df4dcf4ba69962b10c91c6f1d7240

## How to use

Put the `8wifi.ipx` together with `00core.ipx` from stroopwafel in `sd:/wiiu/ios_plugins` or `slc:/sys/hax/ios_plugins`.

## Building

```bash
export STROOPWAFEL_ROOT=/path/to/stroopwafel-repo
make
```

## Thanks

- [**GaryOderNichts**](https://github.com/GaryOderNichts) for the WiFi patch

- [**shinyquagsire23**](https://github.com/shinyquagsire23) and [**jan-hofmeier**](https://github.com/jan-hofmeier) for stroopwafel
