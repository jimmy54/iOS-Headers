//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GKAchievementInternal, GKAuthenticateResponse, GKChallengeInternal, GKGameInternal, GKLocalPlayerInternal, GKScoreInternal, NSDictionary, NSError;

@protocol GKClientProtocol <NSObject>
- (oneway void)setLogBits:(int)arg1;
- (oneway void)refreshContentsForDataType:(unsigned int)arg1 userInfo:(NSDictionary *)arg2;
- (oneway void)setBadgeCount:(unsigned int)arg1 forType:(unsigned int)arg2;
- (oneway void)achievementSelected:(GKAchievementInternal *)arg1;
- (oneway void)scoreSelected:(GKScoreInternal *)arg1;
- (oneway void)challengeCompleted:(GKChallengeInternal *)arg1;
- (oneway void)challengeReceived:(GKChallengeInternal *)arg1;
- (oneway void)completedChallengeSelected:(GKChallengeInternal *)arg1;
- (oneway void)receivedChallengeSelected:(GKChallengeInternal *)arg1;
- (oneway void)respondedToNearbyInvite:(NSDictionary *)arg1;
- (oneway void)completedOptimisticAuthenticationWithResponse:(GKAuthenticateResponse *)arg1 error:(NSError *)arg2;
- (oneway void)setLocalPlayer:(GKLocalPlayerInternal *)arg1 authenticated:(BOOL)arg2 reply:(void (^)(void))arg3;
- (oneway void)setCurrentGame:(GKGameInternal *)arg1 serverEnvironment:(int)arg2 reply:(void (^)(void))arg3;
- (oneway void)setPreferencesValues:(NSDictionary *)arg1;
- (oneway void)resetNetworkActivity;
- (oneway void)endNetworkActivity;
- (oneway void)beginNetworkActivity;
@end

