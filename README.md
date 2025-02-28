# Waybox
An Openbox clone on Wayland (WIP)

### Goals
The main goal of this project is to provide a similar feel to Openbox but on Wayland

### Contributing

[Details on
contributing.](https://github.com/wizbright/waybox/blob/master/CONTRIBUTING.md)

### Dependencies

* [Meson](https://mesonbuild.com/)
* [Wayland](https://wayland.freedesktop.org/)
* [libevdev](https://www.freedesktop.org/wiki/Software/libevdev/)
* [libinput](http://www.freedesktop.org/wiki/Software/libinput)
* [libxml2](http://xmlsoft.org/)
* [wlroots](https://gitlab.freedesktop.org/wlroots/wlroots/)
* [xkbcommon](https://xkbcommon.org/)

### Build instructions

```
meson setup build
cd build
ninja
```

After that, you should have an executable as waybox/waybox

### Contact
I can be found as wiz on Rizon and wizbright on Libera. 
Join [#waybox](https://libera.chat/guides/connect) for discussion
