//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreData/PFUbiquityBaselineOperation.h>

@class NSObject<PFUbiquityBaselineRollOperationDelegate>, PFUbiquityBaselineHeuristics;

__attribute__((visibility("hidden")))
@interface PFUbiquityBaselineRollOperation : PFUbiquityBaselineOperation
{
    PFUbiquityBaselineHeuristics *_heuristics;
}

- (void)main;
- (BOOL)rollBaselineWithError:(id *)arg1;
- (BOOL)haveConsistentStateForBaselineRoll;
- (BOOL)isEqual:(id)arg1;
- (id)retainedDelegate;
@property NSObject<PFUbiquityBaselineRollOperationDelegate> *delegate;
- (void)dealloc;
- (id)init;

@end
