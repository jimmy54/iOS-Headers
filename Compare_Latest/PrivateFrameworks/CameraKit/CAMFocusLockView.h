//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CameraKit/CAMFocusView.h>

@class CAKeyframeAnimation;

@interface CAMFocusLockView : CAMFocusView
{
    CAKeyframeAnimation *_lockBoundsAnimation;
}

- (void).cxx_destruct;
- (void)animateScaleDownWithCompletion:(CDUnknownBlockType)arg1;
- (void)animateLock;
- (id)_createLockBoundsAnimation;
- (void)startAnimatingContents:(BOOL)arg1 bounds:(BOOL)arg2 fadeIn:(BOOL)arg3;
- (double)fadeInDuration;
- (id)_createBoundsAnimation;

@end
