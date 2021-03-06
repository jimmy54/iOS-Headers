/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <MediaPlayer/MPAbstractFullScreenVideoViewController.h>

#import "MPVideoOverlayDelegate-Protocol.h"

@class MPFullScreenVideoOverlay;

@interface MPFullScreenVideoViewController : MPAbstractFullScreenVideoViewController <MPVideoOverlayDelegate>
{
    MPFullScreenVideoOverlay *_overlayView;
    int _autorotationState;
    BOOL _inhibitOverlay;
}

@property(nonatomic) int autorotationState; // @synthesize autorotationState=_autorotationState;
- (void)setInhibitOverlay:(BOOL)arg1;
- (BOOL)inhibitOverlay;
- (void)_reallyRemoveOverlay;
- (void)_rotationAnimationFinished:(id)arg1;
- (void)_hideOverlayAnimationFinished:(id)arg1;
- (id)swipableView:(id)arg1 overrideHitTest:(struct CGPoint)arg2 withEvent:(id)arg3;
- (void)overlayTappedScaleModeButton:(id)arg1;
- (void)overlayTappedBackButton:(id)arg1;
- (BOOL)transportControls:(id)arg1 tappedButtonPart:(unsigned int)arg2;
- (void)videoView_itemTypeAvailableNotification:(id)arg1;
- (void)playbackStateDidChangeNotification:(id)arg1;
- (void)hideOverlayAnimated:(BOOL)arg1;
- (void)showOverlayAnimated:(BOOL)arg1;
- (id)videoOverlayViewIfLoaded;
- (id)videoOverlayView;
@property(readonly, nonatomic) MPFullScreenVideoOverlay *overlayView;
- (void)transformVideoForInterfaceOrientation:(int)arg1 animate:(BOOL)arg2;
- (void)setAllowsDetailScrubbing:(BOOL)arg1;
- (BOOL)allowsDetailScrubbing;
- (BOOL)controlsOverlayVisible;
- (void)showChaptersController;
- (id)createChapterFlipTransition;
- (void)setTVOutEnabled:(BOOL)arg1;
- (void)setDisabledParts:(unsigned int)arg1;
- (void)setVisibleParts:(unsigned int)arg1 animate:(BOOL)arg2;
- (void)setDesiredParts:(unsigned int)arg1 animate:(BOOL)arg2;
- (void)setItem:(id)arg1;
- (void)removeChildViewController:(id)arg1;
- (void)noteIgnoredChangeTypes:(unsigned int)arg1;
- (void)stopTicking;
- (void)startTicking;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)dealloc;
- (id)init;

@end

