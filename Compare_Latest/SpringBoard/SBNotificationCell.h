/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UITableViewCell.h"

#import "SBDateLabelDelegate-Protocol.h"

@class NSString, UIColor, UIImage, UIImageView, UILabel, UILabel<SBBulletinDateLabel>, UIView;

@interface SBNotificationCell : UITableViewCell <SBDateLabelDelegate>
{
    UIView *_realContentView;
    UIImageView *_iconImageView;
    UILabel *_primaryLabel;
    UILabel *_secondaryLabel;
    UILabel<SBBulletinDateLabel> *_relevanceDateLabel;
    UILabel<SBBulletinDateLabel> *_eventDateLabel;
    UIImageView *_attachmentView;
    struct CGSize _attachmentSize;
    BOOL _secondaryTextNumberOfLinesIsUpperBound;
    unsigned int _secondaryTextNumberOfLines;
    UIImage *_icon;
}

+ (float)paddingBetweenTitleAndRelevanceDate;
+ (float)xInsetForOrientation:(int)arg1;
+ (float)contentWidthWithRowWidth:(float)arg1 andAttachmentSize:(struct CGSize)arg2;
+ (void)setupEventDateLabel:(id)arg1;
+ (void)setupRelevanceDateLabel:(id)arg1;
+ (id)defaultColorForEventDate;
+ (id)defaultColorForRelevanceDate;
+ (id)defaultColorForSecondaryText;
+ (id)defaultColorForPrimaryText;
+ (id)defaultFontForEventDate;
+ (id)defaultFontForRelevanceDate;
+ (id)defaultFontForSecondaryText;
+ (id)defaultFontForPrimaryText;
+ (float)iconPaddingLeft;
+ (float)primaryPaddingRight;
+ (float)primaryPaddingLeft;
@property(retain, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property(readonly, nonatomic) UIView *attachmentView; // @synthesize attachmentView=_attachmentView;
@property(readonly, nonatomic) UIView *iconView; // @synthesize iconView=_iconImageView;
@property(readonly, nonatomic) UILabel *secondaryLabel; // @synthesize secondaryLabel=_secondaryLabel;
@property(readonly, nonatomic) UILabel *primaryLabel; // @synthesize primaryLabel=_primaryLabel;
@property(readonly, nonatomic) UIView *realContentView; // @synthesize realContentView=_realContentView;
@property(readonly, nonatomic) BOOL secondaryTextNumberOfLinesIsUpperBound; // @synthesize secondaryTextNumberOfLinesIsUpperBound=_secondaryTextNumberOfLinesIsUpperBound;
@property(readonly, nonatomic) unsigned int secondaryTextNumberOfLines; // @synthesize secondaryTextNumberOfLines=_secondaryTextNumberOfLines;
- (void)layoutSubviews;
@property(nonatomic) float attachmentAlpha;
@property(nonatomic) float iconAlpha;
@property(nonatomic) float eventDateAlpha;
@property(nonatomic) float relevanceDateAlpha;
@property(nonatomic) float secondaryTextAlpha;
@property(nonatomic) float primaryTextAlpha;
- (void)setAttachmentImage:(id)arg1;
- (void)dateLabelDidChange:(id)arg1;
@property(retain, nonatomic) UIColor *eventDateColor;
@property(retain, nonatomic) UIColor *relevanceDateColor;
- (void)setSecondaryTextNumberOfLines:(unsigned int)arg1 treatAsUpperBound:(BOOL)arg2;
@property(retain, nonatomic) UIColor *secondaryTextColor;
@property(retain, nonatomic) UIColor *primaryTextColor;
@property(retain, nonatomic) UILabel<SBBulletinDateLabel> *eventDateLabel;
@property(retain, nonatomic) UILabel<SBBulletinDateLabel> *relevanceDateLabel;
@property(copy, nonatomic) NSString *secondaryText;
@property(copy, nonatomic) NSString *primaryText;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 reuseIdentifier:(id)arg2;
@property(readonly, nonatomic) struct CGRect contentBounds;

@end
