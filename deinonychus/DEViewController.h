//
//  DEViewController.h
//  deinonychus
//
//  Created by Jonathan Hunt on 3/13/14.
//  Copyright (c) 2014 Jonathan Hunt. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DEViewController : UIViewController

/* From GStreamerBackendDelegate */
-(void) gstreamerInitialized;
-(void) gstreamerSetUIMessage:(NSString *)message;


@end
