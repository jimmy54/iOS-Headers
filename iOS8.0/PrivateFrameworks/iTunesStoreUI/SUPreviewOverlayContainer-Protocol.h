//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SUPreviewOverlayViewController;

@protocol SUPreviewOverlayContainer <NSObject>

@optional
- (BOOL)showPreviewOverlay:(SUPreviewOverlayViewController *)arg1 animated:(BOOL)arg2 completionBlock:(void (^)(void))arg3;
- (void)hidePreviewOverlay:(SUPreviewOverlayViewController *)arg1 animated:(BOOL)arg2 completionBlock:(void (^)(void))arg3;
- (BOOL)isShowingPreviewOverlay;
@end

