//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class TSCH3DChartElementSceneObject, TSCH3DSceneRenderPipeline;

@protocol TSCH3DChartElementSceneObjectMainDelegate
- (struct ElementRenderPass)renderPassForSceneObject:(TSCH3DChartElementSceneObject *)arg1;
- (BOOL)renderPassDelayDisallowedForSceneObject:(TSCH3DChartElementSceneObject *)arg1 pipeline:(TSCH3DSceneRenderPipeline *)arg2;
- (void)didEndProcessingSceneObject:(TSCH3DChartElementSceneObject *)arg1;
- (BOOL)willBeginProcessingSceneObject:(TSCH3DChartElementSceneObject *)arg1;
@end

