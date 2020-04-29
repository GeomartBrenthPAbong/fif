# fif
A simple tool for hiding file/text in a file with password protection


## Dependencies
    - libpng
        $ pushd /tmp
        $ rm -r libpng
        $ mkdir libpng && cd libpng
        $ wget -O libpng.tar.xz https://sourceforge.net/projects/libpng/files/latest/download
        $ tar -xvf libpng.tar.xz
        $ cd *
        $ rm -r build
        $ ./configure && mkdir build && cd build && cmake .. && make && sudo make install && cd ..
        $ cd ..
        $ popd