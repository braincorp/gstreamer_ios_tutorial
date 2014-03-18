I had some problems getting Gstreamer to display video on iOS. This was
primarily due to a lack of examples. Here, is a modification of the gstreamer tutorials
that worked for me on iOS 7.1 with gstreamer 1.2.3. The original tutorials are available on the [gstreamer website](http://docs.gstreamer.com/display/GstSDK/iOS+tutorial+3%3A+Video)

The main things that I didn't get from the tutorial were:

- `gst_ios_init.h` needs to be edited to include the gstreamer plugins you need. By default almost no plugins are included.

- Gstreamer for iOS provided is out of date. I used the [freedesktop packages](http://gstreamer.freedesktop.org/data/pkg/ios/1.2.3/)

- `x_overlay` has been renamed to `video_overlay`.

- You need a `GLKView` in order to support the video display.
