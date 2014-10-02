//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UILabel;

__attribute__((visibility("hidden")))
@interface UIDatePickerWeekMonthDayView : UIView
{
    struct {
        unsigned int weekdayLast:1;
    } _datePickerWeekMonthDayViewFlags;
    BOOL _isModern;
    UILabel *_dateLabel;
    UILabel *_weekdayLabel;
    NSString *_formattedDateString;
    float _weekdayWidth;
}

@property(nonatomic) BOOL isModern; // @synthesize isModern=_isModern;
@property(nonatomic) float weekdayWidth; // @synthesize weekdayWidth=_weekdayWidth;
@property(copy, nonatomic) NSString *formattedDateString; // @synthesize formattedDateString=_formattedDateString;
@property(readonly, nonatomic) UILabel *weekdayLabel; // @synthesize weekdayLabel=_weekdayLabel;
@property(readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(nonatomic) BOOL weekdayLast;
- (void)layoutSubviews;
- (BOOL)_canBeReusedInPickerView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
