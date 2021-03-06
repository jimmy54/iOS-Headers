/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class UILabel;

@interface STTwoPartLabel : UIView
{
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
}

+ (BOOL)shouldFlipLabels;
+ (id)defaultTextForSecondaryLabel;
+ (id)defaultFormatForSecondaryLabel;
+ (id)defaultTextForPrimaryLabel;
@property(readonly, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(readonly, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
- (void)setFrame:(struct CGRect)arg1 primaryFont:(id)arg2 secondaryFont:(id)arg3 inset:(struct CGSize)arg4;

@end

