# Tinq Open Source Project #

Welcome to the Tinq Open Source Project.
Tinq is completely based on the Qeo publish/subcribe framework produced by Technicolor as explained in the license section.

## About Tinq ##

Tinq is a software framework that allows devices to easily exchange data with other devices on the same network based on a publish-subscribe paradigm.

- Break the silos. Tinq defines a set of standard datamodels that allows your application to interact with a wide range of devices, regardless of their manufacturer.
- Secure. All communication between different devices is encrypted.
- Access control. The end-user has full control over what data can be accessed by which other user/device/application.
- Beyond the local network. Devices that are not in the local network can still exchange data with that network by connecting to a forwarder.

## Supported Platforms ##
Before building the source, make sure your system meets the following requirements:

- A 32-bit or 64-bit Linux system.
- 300MB of free disk space.
- Gradle version 2.1 or higher

## Ubuntu ##

Ubuntu packages can be found at this ppa: https://code.launchpad.net/~mouse256/+archive/ubuntu/ppa (use "apt-add-repository ppa:mouse256/ppa" to activate)

## Building ##

You can build the open source version using various build scripts. This script takes one argument to specify the directory to which the resulting artifacts will be copied.

Building qeo-c using make:

    $ ./build_c_make.sh install

Building qeo-c using gradle/make:

    $ ./build_c.sh install

Building qeo-android:

    $ ./build_android.sh install

Building samples: It's required the execute the "build_c.sh" and "build_android.sh" script first.

    $ ./build_samples.sh install

## Documentation ##
The Tinq Open Source project Documentation depends heavily on the Qeo Open Source Project Documentation which is made available under the [GNU Free Documentation License V1.3](http://www.gnu.org/licenses/fdl-1.3.en.html).

## License ##
Tinq is made available under the Clear BSD license as defined by the Qeo Open Source Project.
Project components are therefore licensed under [Clear BSD License](http://directory.fsf.org/wiki/License:ClearBSD).

Since it depends on the Qeo Open Source Project it also includes third party open source software components. See the Qeo LICENSE file for more details.

## Trademarks ##
Qeo is a Registered Trademark. For more information and terms of use, contact <opensource@qeo.org>.
