//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <EventKitUI/EKEditItemViewController.h>

@class EKEvent, EKUIEventInviteesViewController, NSDate;

__attribute__((visibility("hidden")))
@interface EKUIEventInviteesEditViewController : EKEditItemViewController
{
    EKEvent *_event;
    EKUIEventInviteesViewController *_controller;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *selectedEndDate;
@property(readonly, nonatomic) NSDate *selectedStartDate;
- (void)loadView;
- (id)initWithEvent:(id)arg1;

@end

