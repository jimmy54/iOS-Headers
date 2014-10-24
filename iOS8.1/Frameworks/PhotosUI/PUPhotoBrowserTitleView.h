//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSDate, NSString, PLDateRangeFormatter, UILabel;

@interface PUPhotoBrowserTitleView : UIView
{
    UILabel *_primaryTitleLabel;
    UILabel *_secondaryTitleLabel;
    UILabel *_landscapeTitleLabel;
    NSArray *_mainLabelConstraints;
    NSArray *_landscapeTitleLabelConstraints;
    NSString *_primaryDateString;
    NSString *_secondaryDateString;
    NSString *_geoDateString;
    PLDateRangeFormatter *_labelDateFormatter;
    BOOL _wantsSubtitle;
    NSString *_geoDescription;
    NSDate *_creationDate;
}

@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
@property(retain, nonatomic) NSString *geoDescription; // @synthesize geoDescription=_geoDescription;
@property(nonatomic) BOOL wantsSubtitle; // @synthesize wantsSubtitle=_wantsSubtitle;
- (void).cxx_destruct;
- (void)_updateDateStrings;
- (void)_updateWidth;
- (void)_updateLabels;
- (void)updateConstraints;
- (void)_dateFormatterChanged:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
