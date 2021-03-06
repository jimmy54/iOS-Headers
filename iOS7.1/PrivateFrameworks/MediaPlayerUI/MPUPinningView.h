//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class CAMatchMoveAnimation;

@interface MPUPinningView : UIView
{
    UIView *_containerView;
    CAMatchMoveAnimation *_matchMoveAnimation;
    UIView *_contentView;
}

@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)_configureMatchMoveAnimation;
- (void)_configureContentViewForCurrentWindowOrientation;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)willMoveToWindow:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

