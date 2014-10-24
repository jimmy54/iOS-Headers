//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CAMEffectsRenderer;

@protocol PLCameraEffectsRendererDelegate <NSObject>
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 didFinishTransitionToShowGrid:(BOOL)arg2;
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 didStartTransitionToShowGrid:(BOOL)arg2 animated:(BOOL)arg3;
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 willTransitionToShowGrid:(BOOL)arg2;
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 requestsVideoDataOutputEnabled:(BOOL)arg2;
- (void)cameraEffectsRenderer:(CAMEffectsRenderer *)arg1 requestsPreviewLayerEnabled:(BOOL)arg2;
- (void)cameraEffectsRendererDidStartPreview:(CAMEffectsRenderer *)arg1;
@end
