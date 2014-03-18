#import <UIKit/UIKit.h>

#import "DEAppDelegate.h"
#include "gst_ios_init.h"

int main(int argc, char *argv[])
{
    @autoreleasepool {
        gst_ios_init();
        return UIApplicationMain(argc, argv, nil, NSStringFromClass([DEAppDelegate class]));
    }
}
