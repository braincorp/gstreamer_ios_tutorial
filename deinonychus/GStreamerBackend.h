//
//  GStreamerBackend.h
//  deinonychus
//
//  Created by Jonathan Hunt on 3/13/14.
//  Copyright (c) 2014 Jonathan Hunt. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface GStreamerBackend : NSObject


-(NSString*) getGStreamerVersion;

/* Initialization method. Pass the delegate that will take care of the UI.
 * This delegate must implement the GStreamerBackendDelegate protocol */
-(id) init:(id) uiDelegate videoView:(UIView*)video_view;

/* Set the pipeline to PLAYING */
-(void) play;

/* Set the pipeline to PAUSED */
-(void) pause;


@end
