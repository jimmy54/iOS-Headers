//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBUIActiveOrientationObserver.h"

@class NSMutableSet, NSString, SBAppSwitcherWindow, SBWindow, UIViewController;

@interface SBAppSwitcherWindowController : NSObject <SBUIActiveOrientationObserver>
{
    SBAppSwitcherWindow *_window;
    UIViewController *_rootViewController;
    long long _trueWindowOrientation;
    long long _overrideWindowOrientation;
    NSMutableSet *_rotationPreventionReasons;
}

- (void)activeInterfaceOrientationDidChangeToOrientation:(long long)arg1 willAnimateWithDuration:(double)arg2 fromOrientation:(long long)arg3;
- (void)activeInterfaceOrientationWillChangeToOrientation:(long long)arg1;
- (void)_rotateIfNecessaryTo:(long long)arg1 withDuration:(double)arg2 forOverride:(_Bool)arg3;
- (void)_setTrueWindowOrientation:(long long)arg1;
- (void)_setOverrideWindowOrientation:(long long)arg1;
- (_Bool)_shouldAllowRotation:(_Bool)arg1;
- (_Bool)_hasOrientationOverride;
- (void)setAllowRotation:(_Bool)arg1 forReason:(id)arg2;
- (void)clearOverrideWindowOrientation;
- (void)overrideWindowOrientation:(long long)arg1;
- (long long)windowOrientationWithoutOverrides;
- (long long)windowOrientation;
- (void)_windowDidBecomeVisible:(id)arg1;
@property(readonly, nonatomic) SBWindow *window;
@property(retain, nonatomic) UIViewController *rootViewController;
- (void)dealloc;
- (id)initWithRootViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

