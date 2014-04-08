//
//  EaglUIVIew.m
//  deinonychus
//
//  Created by Jonathan Hunt on 4/7/14.
//  Copyright (c) 2014 Jonathan Hunt. All rights reserved.
//

#import "EaglUIView.h"

#import <QuartzCore/QuartzCore.h>

@implementation EaglUIView


+ (Class) layerClass
{
    return [CAEAGLLayer class];
}

@end
